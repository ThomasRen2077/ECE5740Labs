// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__idx = 0U;
    vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[2892].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[2893].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[2935].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[2936].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[2978].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[2979].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3036].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3037].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3094].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3095].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared = 0U;
    vlSymsp->__Vcoverage[4093].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[4478].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[4479].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[4598].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[4599].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[4641].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[4642].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[4684].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[4685].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[4711].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[4712].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5040].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5041].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5083].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5084].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5126].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5169].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5170].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5196].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5197].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    if ((1U & vlSelf->top__DOT__src__DOT____Vtogcov__max_delay)) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__max_delay 
            = (0xfffffffeU & vlSelf->top__DOT__src__DOT____Vtogcov__max_delay);
    }
    if ((1U & (~ (vlSelf->top__DOT__src__DOT____Vtogcov__max_delay 
                  >> 2U)))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__max_delay 
            = (4U | vlSelf->top__DOT__src__DOT____Vtogcov__max_delay);
    }
    vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1497].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1507].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1510].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1604].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1650].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1677].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1792].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2437].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2486].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2558].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2563].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2589].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2596].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3491].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3495].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4119].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4324].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4384].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4850].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4854].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4993].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4997].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[2898].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[2941].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[2984].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3042].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3100].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[4484].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[4604].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[4647].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[4690].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[4717].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5046].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5089].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5132].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5175].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5202].fetch_add(1, std::memory_order_relaxed);
}

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VL_ATTR_COLD void Vtop___024root___eval_final__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final__TOP\n"); );
    // Body
    if (vlSelf->top__DOT__src_done) {
        Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        VL_WRITEF("     [ passed ] Finished gracefully\n");
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
    } else {
        Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
        VL_WRITEF("     [ failed ] Simulation did not naturally stop\n");
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__sink__DOT__sink__DOT__t = vlSelf->top__DOT__sink__DOT__sink__DOT__index;
    while ((vlSelf->top__DOT__sink__DOT__sink__DOT__t 
            < (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max))) {
        Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
        VL_WRITEF("     [ FAILED ] expected = %x, actual = None\n",
                  32,((9U >= (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))
                       ? vlSelf->top__DOT__sink__DOT__sink__DOT__m
                      [vlSelf->top__DOT__sink__DOT__sink__DOT__index]
                       : 0U));
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT__t = 
            ((IData)(1U) + vlSelf->top__DOT__sink__DOT__sink__DOT__t);
    }
    vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
}

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
    if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
            vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
            vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
            vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) {
        vlSymsp->__Vcoverage[1506].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1509].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state)))) {
        vlSymsp->__Vcoverage[1505].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1508].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[1602].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[1603].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[1601].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[1648].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[1649].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[1647].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                        | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
        if ((0x6033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            if ((0x4033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                if ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[1713].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0x2033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x3033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x40005033U != (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x5033U != (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x1033U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x1033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1717].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x5033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1716].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x40005033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1714].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSymsp->__Vcoverage[1712].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSymsp->__Vcoverage[1711].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[2579].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[2576].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[2581].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[2580].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[2583].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[2582].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[2585].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[2584].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[2586].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[2587].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[2577].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[2588].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                vlSymsp->__Vcoverage[2588].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[2588].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[2578].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__wb_result_sel_M) {
        if (vlSelf->top__DOT__DUT__DOT__wb_result_sel_M) {
            vlSymsp->__Vcoverage[2594].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)))) {
            vlSymsp->__Vcoverage[2595].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)))) {
        vlSymsp->__Vcoverage[2593].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
        vlSymsp->__Vcoverage[3487].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3492].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
            vlSymsp->__Vcoverage[3490].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[3493].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
            vlSymsp->__Vcoverage[3494].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
        vlSymsp->__Vcoverage[3630].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
            vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
            vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__mem_clear) {
        vlSymsp->__Vcoverage[4118].fetch_add(1, std::memory_order_relaxed);
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) {
            vlSymsp->__Vcoverage[4096].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSymsp->__Vcoverage[4095].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[4322].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[4323].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[4321].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[4382].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[4383].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[4381].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
        vlSymsp->__Vcoverage[4846].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4851].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
            vlSymsp->__Vcoverage[4849].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[4852].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
            vlSymsp->__Vcoverage[4853].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)))) {
        vlSymsp->__Vcoverage[4989].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4994].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
            vlSymsp->__Vcoverage[4992].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[4995].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)))) {
            vlSymsp->__Vcoverage[4996].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
         & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
        vlSymsp->__Vcoverage[1790].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                  & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
        vlSymsp->__Vcoverage[1791].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem_clear)))) {
        if (vlSelf->top__DOT__reset) {
            vlSymsp->__Vcoverage[4117].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
            if (vlSelf->top__DOT__reset) {
                vlSymsp->__Vcoverage[4116].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
                vlSymsp->__Vcoverage[4115].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
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
    if (((0U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__stats_en))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__stats_en = (0U 
                                                 != vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W);
    }
    if (((IData)(vlSelf->top__DOT__src_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__src_done))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__src_done = vlSelf->top__DOT__src_done;
    }
    if (((IData)(vlSelf->top__DOT__mem_clear) ^ (IData)(vlSelf->top__DOT____Vtogcov__mem_clear))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mem_clear = vlSelf->top__DOT__mem_clear;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__reset_reg))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__reset_reg 
            = vlSelf->top__DOT__src__DOT__src__DOT__reset_reg;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__reset_reg))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__reset_reg 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__done_next) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__done_next 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__done_next;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__failed) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__failed))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__failed 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__failed;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_rdy)))) {
        vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_rdy 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_queue_num_free_entries)))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_queue_num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_queue_num_free_entries)))) {
        vlSymsp->__Vcoverage[1148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_queue_num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_M))) {
        vlSymsp->__Vcoverage[1198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_M 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_addr))) {
        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_addr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__read_addr))) {
        vlSymsp->__Vcoverage[1242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__read_addr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr))) {
        vlSymsp->__Vcoverage[1244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr))) {
        vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_plus1)))) {
        vlSymsp->__Vcoverage[1253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_plus1 
            = (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_plus1)))) {
        vlSymsp->__Vcoverage[1254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_plus1 
            = (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[1498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__state 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[1515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[1606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_F))) {
        vlSymsp->__Vcoverage[1651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_D))) {
        vlSymsp->__Vcoverage[1652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_X))) {
        vlSymsp->__Vcoverage[1653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_M))) {
        vlSymsp->__Vcoverage[1654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_W))) {
        vlSymsp->__Vcoverage[1655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_X))) {
        vlSymsp->__Vcoverage[1774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X;
    }
    if (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
               | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
        if ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D)) {
            if ((0x33U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                if ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[1705].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0x2003U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x1073U != (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x40000033U != 
                                     (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1710].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x40000033U == 
                                     (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1709].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x1073U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1708].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1707].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1706].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSymsp->__Vcoverage[1704].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D)) {
            vlSymsp->__Vcoverage[1703].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
        } else if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
        } else if ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 1U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
        } else {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            if ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
            } else {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                        ? 0xcU : ((0x1073U == (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))
                                   ? 0xbU : ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))
                                              ? 1U : 2U)));
            }
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D 
            = ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
               & ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  | ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     | ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        & ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x1073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))));
    } else {
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D 
            = ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
               | ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  | ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     | ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        | ((0x40005033U == (0xfe00707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | ((0x5033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                              | (0x1033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))))))));
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D 
            = ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                ? 3U : ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                         ? 4U : ((0x2033U == (0xfe00707fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D))
                                  ? 5U : ((0x3033U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))
                                           ? 6U : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__DUT__DOT__inst_D))
                                                    ? 7U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__DUT__DOT__inst_D))
                                                     ? 8U
                                                     : 
                                                    ((0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__DUT__DOT__inst_D))
                                                      ? 9U
                                                      : 0U)))))));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_X))) {
        vlSymsp->__Vcoverage[1775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_X))) {
        vlSymsp->__Vcoverage[1781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_X))) {
        vlSymsp->__Vcoverage[1782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_M))) {
        vlSymsp->__Vcoverage[1828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_M))) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_M))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_W))) {
        vlSymsp->__Vcoverage[1873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_pending_W))) {
        vlSymsp->__Vcoverage[1874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_pending_W))) {
        vlSymsp->__Vcoverage[1875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[3481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[3624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_val_M))) {
        vlSymsp->__Vcoverage[3665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_val_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_rdy_M)))) {
        vlSymsp->__Vcoverage[3666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_rdy_M 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_val_M))) {
        vlSymsp->__Vcoverage[3744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_val_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_rdy_M)))) {
        vlSymsp->__Vcoverage[3745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_rdy_M 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memory_cleared))) {
        vlSymsp->__Vcoverage[4092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memory_cleared 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT____Vtogcov__num_free_entries)))) {
        vlSymsp->__Vcoverage[4247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT____Vtogcov__num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT____Vtogcov__num_free_entries)))) {
        vlSymsp->__Vcoverage[4256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT____Vtogcov__num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[4266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[4326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[4840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[4983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state;
    }
    vlSelf->top__DOT__src__DOT__src__DOT__index_next 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    vlSelf->top__DOT__sink__DOT__sink__DOT__index_next 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[1772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[1773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[1826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[1827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    }
    if ((VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X, vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu__DOT____Vtogcov__ops_lt))) {
        vlSymsp->__Vcoverage[2574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu__DOT____Vtogcov__ops_lt 
            = VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X, vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X);
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
          < vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu__DOT____Vtogcov__ops_ltu))) {
        vlSymsp->__Vcoverage[2575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu__DOT____Vtogcov__ops_ltu 
            = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               < vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[3945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[3946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[1783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[1784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[1785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)));
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((0xeU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((7U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
                      >> 1U)) ^ ((IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next) 
                                 >> 1U)))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((0xdU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((3U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
                      >> 2U)) ^ ((IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next) 
                                 >> 2U)))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((0xbU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (4U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
                      >> 3U)) ^ ((IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next) 
                                 >> 3U)))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((7U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (8U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((0xeU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (1U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((0xdU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (2U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((0xbU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (4U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((7U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (8U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
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
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((0xeU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((7U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
                      >> 1U)) ^ ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next) 
                                 >> 1U)))) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((0xdU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((3U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
                      >> 2U)) ^ ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next) 
                                 >> 2U)))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((0xbU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (4U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
                      >> 3U)) ^ ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next) 
                                 >> 3U)))) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((7U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (8U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((0xeU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((0xdU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((0xbU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (4U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((7U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (8U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
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
    if ((1U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)))) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose 
            = ((0xeU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)) 
               | (1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose 
            = ((0xdU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)) 
               | (2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)))) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose 
            = ((0xbU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)) 
               | (4U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose 
            = ((7U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)) 
               | (8U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D 
        = (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                  | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           & ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
              & ((0x33U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                 & (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D 
        = (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                  | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
              | ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                 | ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                    | ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                       | ((0x40005033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                          | ((0x5033U == (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                             | (0x1033U == (0xfe00707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D)))))))));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[2894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[2895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[2896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[2897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[2937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[2938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[2939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[2940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[2980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[2981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[2982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[2983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[2769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[2770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[2771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[2772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[2773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[2774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[2775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[2776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[2777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[2778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[2779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[2780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[2781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[2782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[2783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    vlSelf->top__DOT__src__DOT__src__DOT__done_next 
        = ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
           == (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max));
    vlSelf->top__DOT__DUT__DOT__stats_en_wen_W = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7eU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7dU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7bU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x77U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x6fU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x5fU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x3fU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7eU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7dU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7bU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x77U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x6fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x5fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x3fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[2796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x7eU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[2797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x7dU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[2798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x7bU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[2799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x77U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[2800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x6fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[2801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x5fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[2802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x3fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[2784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xffeU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[2785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xffdU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[2786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xffbU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[2787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xff7U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[2788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xfefU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[2789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[2790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[2791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[2792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xeffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[2793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xdffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[2794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xbffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[2795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[3931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3ffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[3932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3ffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[3933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3ffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[3934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3ff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[3935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3fefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[3936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3fdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[3937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3fbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[3938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3f7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[3939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3effU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[3940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3dffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[3941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3bffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[3942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x37ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[3943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x2fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[3944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x1fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[2753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[2754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[2755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[2756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[2757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[2758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[2759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[2760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[2761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[2762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[2763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[2764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[2765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[2766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[2767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[2768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[2977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffffeU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (1U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffffdU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (2U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffffbU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (4U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffff7U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (8U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffffefU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffffdfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffffbfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffff7fU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffeffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffdffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffbffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfff7ffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffefffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffdfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffbfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xff7fffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfeffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfdffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfbffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xf7ffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xefffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xdfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xbfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[2632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0x7fffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffffeU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (1U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffffdU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (2U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffffbU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (4U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffff7U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (8U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffffefU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffffdfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffffbfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffff7fU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffeffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffdffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffbffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfff7ffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffefffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffdfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffbfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xff7fffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfeffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfdffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfbffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xf7ffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xefffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xdfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xbfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[2656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0x7fffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffffeU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (1U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffffdU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (2U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffffbU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (4U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffff7U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (8U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffffefU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffffdfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffffbfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffff7fU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffeffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffdffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffbffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfff7ffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffefffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffdfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffbfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xff7fffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfeffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfdffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfbffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xf7ffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xefffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xdfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xbfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[2680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0x7fffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D = 
        (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         & ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
            & ((0x33U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
               & ((0x2003U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  & ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     & ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        & (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))))))));
    if ((2U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (2U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((4U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (4U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((8U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (8U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x10U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x20U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x40U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x80U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x100U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x200U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x400U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x800U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x1000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x2000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x4000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x8000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x10000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x20000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x40000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x80000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x100000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x200000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x400000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x800000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x1000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x2000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x4000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x8000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x10000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x20000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x40000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if (((((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x80000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((1U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffeU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (1U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((2U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffdU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (2U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((4U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffbU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (4U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((8U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffff7U 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (8U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffefU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffdfU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffbfU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x80U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffff7fU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x100U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffeffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x100U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x200U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffdffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x200U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x400U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffbffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x400U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x800U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffff7ffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x800U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x1000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffefffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x1000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x2000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffdfffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x2000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x4000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffbfffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x4000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x8000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffff7fffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x8000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffeffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffdffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffbffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x80000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfff7ffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x100000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffefffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x100000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x200000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffdfffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x200000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x400000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffbfffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x400000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x800000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xff7fffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x800000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x1000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfeffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x1000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x2000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfdffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x2000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x4000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfbffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x4000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x8000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xf7ffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x8000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xefffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xdfffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xbfffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if (((vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0x7fffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
               ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
               ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
               ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
               ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                  ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                  ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                  ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                  ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                   ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                   ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                   ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                   ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                    ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                    ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                    ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                    ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                     ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                     ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                     ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                     ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                      ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                      ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                      ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                      ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                       ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                       ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                       ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                       ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                        ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                        ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                        ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if (((vlSelf->top__DOT__src__DOT__src__DOT__data_data 
          ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
          ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
          ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
          ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
          ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if (((vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
          ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (1U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (2U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (4U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (8U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if (((vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
          ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
          ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
          ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
          ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[1999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul_result_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
          ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
          ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[3552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
          ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
          ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[3885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[3917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
          ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
          ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
          ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
          ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((1U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                            >> 0xaU))) | (2U == (7U 
                                                 & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                                    >> 0xaU)))));
    vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((1U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                            >> 0xaU))) | (2U == (7U 
                                                 & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                                    >> 0xaU)))));
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M 
        = ((0U == (3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]))
            ? 4U : (3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M 
        = ((0U == (3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]))
            ? 4U : (3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore)))) {
        vlSymsp->__Vcoverage[4271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[4272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[4273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[4274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[4275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[4276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[4277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[4278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[4279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[4280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[4281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[4282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[4283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[4284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[4285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[4286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[4287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[4288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[4289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[4290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[4291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[4292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[4293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[4294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[4295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[4296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[4297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[4298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[4299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[4300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[4301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[4302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[4303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[4304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[4305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[4306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[4307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[4308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[4309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[4310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[4311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[4312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[4313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[4314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[4315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[4316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[4317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore)))) {
        vlSymsp->__Vcoverage[4331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[4332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[4333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[4334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[4335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[4336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[4337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[4338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[4339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[4340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[4341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[4342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[4343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[4344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[4345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[4346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[4347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[4348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[4349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[4350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[4351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[4352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[4353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[4354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[4355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[4356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[4357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[4358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
}
