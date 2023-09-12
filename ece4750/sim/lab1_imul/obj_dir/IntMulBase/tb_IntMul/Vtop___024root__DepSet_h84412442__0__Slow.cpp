// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__istream_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_val = vlSelf->top__DOT__istream_val;
    }
    if (((IData)(vlSelf->top__DOT__istream_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_rdy))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_rdy = vlSelf->top__DOT__istream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__ostream_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_rdy))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_rdy = vlSelf->top__DOT__ostream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__ostream_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_val))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_val = vlSelf->top__DOT__ostream_val;
    }
    if (((IData)(vlSelf->top__DOT__istream_val_f) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_val_f))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_val_f 
            = vlSelf->top__DOT__istream_val_f;
    }
    if (((IData)(vlSelf->top__DOT__ostream_rdy_f) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_rdy_f))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_rdy_f 
            = vlSelf->top__DOT__ostream_rdy_f;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__state 
            = ((2U & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__state 
            = ((1U & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__state)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    vlSelf->top__DOT__imul__DOT__next_ostream_val = 
        ((~ ((IData)(vlSelf->top__DOT__istream_val) 
             & (IData)(vlSelf->top__DOT__istream_rdy))) 
         & ((0x21U == (IData)(vlSelf->top__DOT__imul__DOT__counter)) 
            & (~ ((IData)(vlSelf->top__DOT__ostream_val) 
                  & (IData)(vlSelf->top__DOT__ostream_rdy)))));
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__counter 
            = ((0xfeU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__counter)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__counter 
            = ((0xfdU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__counter)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imul__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__counter 
            = ((0xfbU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)) 
               | (4U & (IData)(vlSelf->top__DOT__imul__DOT__counter)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__imul__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__counter 
            = ((0xf7U & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)) 
               | (8U & (IData)(vlSelf->top__DOT__imul__DOT__counter)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__imul__DOT__counter) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__counter 
            = ((0xefU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)) 
               | (0x10U & (IData)(vlSelf->top__DOT__imul__DOT__counter)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__imul__DOT__counter) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__counter 
            = ((0xdfU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)) 
               | (0x20U & (IData)(vlSelf->top__DOT__imul__DOT__counter)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__imul__DOT__counter) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__counter 
            = ((0xbfU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)) 
               | (0x40U & (IData)(vlSelf->top__DOT__imul__DOT__counter)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__imul__DOT__counter) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__counter 
            = ((0x7fU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)) 
               | (0x80U & (IData)(vlSelf->top__DOT__imul__DOT__counter)));
    }
    vlSelf->top__DOT__imul__DOT__nextstate = ((0U == (IData)(vlSelf->top__DOT__imul__DOT__state))
                                               ? ((IData)(vlSelf->top__DOT__istream_val)
                                                   ? 1U
                                                   : 0U)
                                               : ((1U 
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
                                                    : 0U)));
    if ((1U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (1U & vlSelf->top__DOT__ostream_msg));
    }
    if ((2U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (2U & vlSelf->top__DOT__ostream_msg));
    }
    if ((4U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (4U & vlSelf->top__DOT__ostream_msg));
    }
    if ((8U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (8U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffffefU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x10U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x20U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x40U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x80U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x100U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x200U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x400U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x800U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffefffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x1000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x2000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x4000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x8000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__ostream_msg 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x10000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__ostream_msg 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x20000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__ostream_msg 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x40000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__ostream_msg 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x80000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__ostream_msg 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffefffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x100000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__ostream_msg 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x200000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__ostream_msg 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x400000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__ostream_msg 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x800000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__ostream_msg 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x1000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__ostream_msg 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x2000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__ostream_msg 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x4000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__ostream_msg 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x8000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__ostream_msg 
                        ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xefffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x10000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__ostream_msg 
                        ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x20000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__ostream_msg 
                        ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x40000000U & vlSelf->top__DOT__ostream_msg));
    }
    if (((vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x80000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((1U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (1U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((2U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (2U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((4U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (4U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((8U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (8U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x80U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x100U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x100U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x200U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x200U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x400U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x400U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x800U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x800U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x1000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x1000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x2000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x2000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x4000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x4000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x8000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x8000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x80000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x100000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x100000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x200000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x200000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x400000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x400000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x800000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x800000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x1000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x1000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x2000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x2000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x4000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x4000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x8000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x8000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if (((vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((1U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (1U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((2U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (2U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((4U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (4U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((8U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (8U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x80U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x100U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x100U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x200U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x200U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x400U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x400U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x800U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x800U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x1000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x1000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x2000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x2000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x4000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x4000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x8000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x8000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x80000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x100000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x100000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x200000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x200000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x400000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x400000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x800000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x800000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x1000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x1000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x2000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x2000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x4000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x4000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x8000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x8000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if (((vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((1U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffeU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (1U & vlSelf->top__DOT__a));
    }
    if ((2U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffdU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (2U & vlSelf->top__DOT__a));
    }
    if ((4U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffbU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (4U & vlSelf->top__DOT__a));
    }
    if ((8U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffff7U 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (8U & vlSelf->top__DOT__a));
    }
    if ((0x10U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffefU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x10U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x20U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffdfU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x20U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x40U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffbfU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x40U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x80U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffff7fU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x80U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x100U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffeffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x100U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x200U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffdffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x200U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x400U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffbffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x400U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x800U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffff7ffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x800U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x1000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffefffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x1000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x2000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffdfffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x2000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x4000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffbfffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x4000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x8000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xffff7fffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x8000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x10000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffeffffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x10000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x20000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffdffffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x20000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x40000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffbffffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x40000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x80000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfff7ffffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x80000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x100000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xffefffffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x100000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x200000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xffdfffffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x200000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x400000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xffbfffffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x400000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x800000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xff7fffffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x800000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x1000000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfeffffffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x1000000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x2000000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfdffffffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x2000000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x4000000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xfbffffffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x4000000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x8000000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xf7ffffffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x8000000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x10000000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xefffffffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x10000000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x20000000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xdfffffffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x20000000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((0x40000000U & (vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0xbfffffffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x40000000U 
                                             & vlSelf->top__DOT__a));
    }
    if (((vlSelf->top__DOT__a ^ vlSelf->top__DOT____Vtogcov__a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__a = ((0x7fffffffU 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (0x80000000U 
                                             & vlSelf->top__DOT__a));
    }
    if ((1U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xfffffffeU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (1U & vlSelf->top__DOT__b));
    }
    if ((2U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xfffffffdU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (2U & vlSelf->top__DOT__b));
    }
    if ((4U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xfffffffbU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (4U & vlSelf->top__DOT__b));
    }
    if ((8U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xfffffff7U 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (8U & vlSelf->top__DOT__b));
    }
    if ((0x10U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xffffffefU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x10U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x20U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xffffffdfU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x20U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x40U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xffffffbfU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x40U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x80U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xffffff7fU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x80U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x100U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xfffffeffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x100U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x200U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xfffffdffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x200U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x400U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xfffffbffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x400U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x800U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xfffff7ffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x800U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x1000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xffffefffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x1000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x2000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xffffdfffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x2000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x4000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xffffbfffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x4000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x8000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xffff7fffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x8000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x10000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xfffeffffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x10000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x20000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xfffdffffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x20000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x40000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xfffbffffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x40000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x80000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xfff7ffffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x80000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x100000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xffefffffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x100000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x200000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xffdfffffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x200000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x400000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xffbfffffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x400000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x800000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xff7fffffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x800000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x1000000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xfeffffffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x1000000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x2000000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xfdffffffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x2000000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x4000000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xfbffffffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x4000000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x8000000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xf7ffffffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x8000000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x10000000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xefffffffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x10000000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x20000000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xdfffffffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x20000000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((0x40000000U & (vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0xbfffffffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x40000000U 
                                             & vlSelf->top__DOT__b));
    }
    if (((vlSelf->top__DOT__b ^ vlSelf->top__DOT____Vtogcov__b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__b = ((0x7fffffffU 
                                           & vlSelf->top__DOT____Vtogcov__b) 
                                          | (0x80000000U 
                                             & vlSelf->top__DOT__b));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (1U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (2U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (4U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (8U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x10U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x20U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x40U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x80U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x100U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x200U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x400U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x800U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x1000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x2000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x4000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x8000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x10000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x20000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x40000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x80000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x100000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x200000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x400000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x800000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x1000000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x2000000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x4000000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x8000000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__a 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x10000000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__a 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x20000000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__a 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x40000000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if (((vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x80000000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (1U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (2U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (4U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (8U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x10U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x20U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x40U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x80U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x100U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x200U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x400U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x800U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x1000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x2000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x4000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x8000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x10000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x20000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x40000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x80000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x100000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x200000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x400000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x800000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x1000000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x2000000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x4000000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x8000000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__b 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x10000000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__b 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x20000000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__b 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x40000000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if (((vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x80000000U & vlSelf->top__DOT__imul__DOT__b));
    }
    vlSelf->top__DOT__imul__DOT__add_result = (vlSelf->top__DOT__imul__DOT__a 
                                               + vlSelf->top__DOT__ostream_msg);
    vlSelf->top__DOT__istream_msg = (((QData)((IData)(vlSelf->top__DOT__istream_msg_a)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__istream_msg_b)));
    if (((IData)(vlSelf->top__DOT__imul__DOT__next_ostream_val) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_val))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_val 
            = vlSelf->top__DOT__imul__DOT__next_ostream_val;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__nextstate) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate)))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate 
            = ((2U & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__nextstate)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__nextstate) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate)))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate 
            = ((1U & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__nextstate)));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__add_result 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (1U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__add_result 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (2U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__add_result 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (4U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__add_result 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (8U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__add_result 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__add_result 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__add_result 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__add_result 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__add_result 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__add_result 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__add_result 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__add_result 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__add_result 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__add_result 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__add_result 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__add_result 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__add_result 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__add_result 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__add_result 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__add_result 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__add_result 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__add_result 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__add_result 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__add_result 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__add_result 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__add_result 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__add_result 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__add_result 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__add_result 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__add_result 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__add_result 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if (((vlSelf->top__DOT__imul__DOT__add_result ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    vlSelf->top__DOT__imul__DOT__next_ostream_msg = vlSelf->top__DOT__ostream_msg;
    if ((1U & ((IData)(vlSelf->top__DOT__istream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_msg)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__istream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__istream_msg ^ vlSelf->top__DOT____Vtogcov__istream_msg) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    vlSelf->top__DOT__imul__DOT__next_a = vlSelf->top__DOT__imul__DOT__a;
    vlSelf->top__DOT__imul__DOT__next_b = vlSelf->top__DOT__imul__DOT__b;
    if (((IData)(vlSelf->top__DOT__istream_val) & (IData)(vlSelf->top__DOT__istream_rdy))) {
        vlSelf->top__DOT__imul__DOT__next_ostream_msg = 0U;
        vlSelf->top__DOT__imul__DOT__next_a = (IData)(
                                                      (vlSelf->top__DOT__istream_msg 
                                                       >> 0x20U));
        vlSelf->top__DOT__imul__DOT__next_b = (IData)(vlSelf->top__DOT__istream_msg);
    } else if ((0x21U != (IData)(vlSelf->top__DOT__imul__DOT__counter))) {
        vlSelf->top__DOT__imul__DOT__next_ostream_msg 
            = ((1U & vlSelf->top__DOT__imul__DOT__b)
                ? vlSelf->top__DOT__imul__DOT__add_result
                : vlSelf->top__DOT__ostream_msg);
        vlSelf->top__DOT__imul__DOT__next_a = (vlSelf->top__DOT__imul__DOT__a 
                                               << 1U);
        vlSelf->top__DOT__imul__DOT__next_b = (vlSelf->top__DOT__imul__DOT__b 
                                               >> 1U);
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (1U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (2U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (4U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (8U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if (((vlSelf->top__DOT__imul__DOT__next_ostream_msg 
          ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__next_a 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (1U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__next_a 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (2U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__next_a 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (4U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__next_a 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (8U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__next_a 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__next_a 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__next_a 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__next_a 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__next_a 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__next_a 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__next_a 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__next_a 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__next_a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__next_a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__next_a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__next_a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__next_a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__next_a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__next_a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__next_a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__next_a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__next_a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__next_a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__next_a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if (((vlSelf->top__DOT__imul__DOT__next_a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__next_b 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (1U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__next_b 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (2U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__next_b 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (4U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__next_b 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (8U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__next_b 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__next_b 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__next_b 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__next_b 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__next_b 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__next_b 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__next_b 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__next_b 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__next_b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__next_b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__next_b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__next_b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__next_b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__next_b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__next_b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__next_b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__next_b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__next_b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__next_b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__next_b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if (((vlSelf->top__DOT__imul__DOT__next_b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "tb_IntMul.v", 20, 26, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "tb_IntMul.v", 20, 43, ".top", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "tb_IntMul.v", 23, 16, ".top", "v_toggle/top", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "tb_IntMul.v", 25, 16, ".top", "v_toggle/top", "istream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "tb_IntMul.v", 26, 16, ".top", "v_toggle/top", "istream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "tb_IntMul.v", 29, 16, ".top", "v_toggle/top", "ostream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "tb_IntMul.v", 30, 16, ".top", "v_toggle/top", "ostream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "tb_IntMul.v", 31, 23, ".top", "v_toggle/top", "ostream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "tb_IntMul.v", 34, 16, ".top", "v_toggle/top", "istream_val_f", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "tb_IntMul.v", 35, 16, ".top", "v_toggle/top", "ostream_rdy_f", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "tb_IntMul.v", 37, 23, ".top", "v_toggle/top", "istream_msg_a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "tb_IntMul.v", 38, 23, ".top", "v_toggle/top", "istream_msg_b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "tb_IntMul.v", 40, 23, ".top", "v_toggle/top", "a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "tb_IntMul.v", 41, 23, ".top", "v_toggle/top", "b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "IntMulBase.v", 23, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "IntMulBase.v", 24, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "IntMulBase.v", 26, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "IntMulBase.v", 27, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "IntMulBase.v", 28, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "IntMulBase.v", 30, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "IntMulBase.v", 31, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "IntMulBase.v", 32, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "IntMulBase.v", 39, 13, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "state[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "IntMulBase.v", 39, 13, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "state[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "IntMulBase.v", 39, 20, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "nextstate[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "IntMulBase.v", 39, 20, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "nextstate[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "IntMulBase.v", 41, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "IntMulBase.v", 42, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "IntMulBase.v", 43, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "counter[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "IntMulBase.v", 43, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "counter[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "IntMulBase.v", 43, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "counter[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "IntMulBase.v", 43, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "counter[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "IntMulBase.v", 43, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "counter[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "IntMulBase.v", 43, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "counter[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "IntMulBase.v", 43, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "counter[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "IntMulBase.v", 43, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "counter[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "IntMulBase.v", 44, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "IntMulBase.v", 45, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "IntMulBase.v", 46, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "IntMulBase.v", 47, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "IntMulBase.v", 49, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../vc/trace.v", 20, 15, ".top.imul.vc_trace", "v_toggle/vc_Trace", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "../vc/trace.v", 21, 15, ".top.imul.vc_trace", "v_toggle/vc_Trace", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "../vc/trace.v", 49, 15, ".top.imul.vc_trace", "v_toggle/vc_Trace", "level[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "../vc/trace.v", 49, 15, ".top.imul.vc_trace", "v_toggle/vc_Trace", "level[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "../vc/trace.v", 49, 15, ".top.imul.vc_trace", "v_toggle/vc_Trace", "level[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "../vc/trace.v", 49, 15, ".top.imul.vc_trace", "v_toggle/vc_Trace", "level[3]", "");
}
