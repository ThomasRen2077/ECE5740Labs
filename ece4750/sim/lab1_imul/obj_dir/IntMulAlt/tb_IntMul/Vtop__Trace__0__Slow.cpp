// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+288,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+288,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+265,"istream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+280,"istream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+290,"istream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+266,"ostream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+281,"ostream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+282,"ostream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,"istream_msg_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,"istream_msg_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+270,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("imul ");
    tracep->declBit(c+288,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"istream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"istream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+290,"istream_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+281,"ostream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"ostream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+282,"ostream_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"IDLE", "CALC", "DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(1, "lab1_imul_IntMulAlt.statetype", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+283,"state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+292,"nextstate",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+284,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,"next_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,"next_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+274,"next_ostream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+275,"next_ostream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+293,"add_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+286,"finish",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+276,"next_finish",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+277,"checkone",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+278,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+279,"shifts",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declArray(c+1,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+129,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+130,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("Add ");
    tracep->declBus(c+296,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+282,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+294,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+293,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vc_trace ");
    tracep->declBit(c+288,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+131,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+132,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+133,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+134,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+297,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+298,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+135,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+263,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+287,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+295,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+271,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullWData(oldp+1,(vlSelf->top__DOT__imul__DOT__str),4096);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__imul__DOT__idx0),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__imul__DOT__idx1),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1),32);
    bufp->fullWData(oldp+135,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage),4096);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next),32);
    bufp->fullBit(oldp+264,(vlSelf->top__DOT__reset));
    bufp->fullBit(oldp+265,(vlSelf->top__DOT__istream_val));
    bufp->fullBit(oldp+266,(vlSelf->top__DOT__ostream_rdy));
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__istream_msg_a),32);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__istream_msg_b),32);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__a),32);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__b),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__unnamedblk1__DOT__x),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__imul__DOT__next_a),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__imul__DOT__next_b),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__imul__DOT__next_ostream_msg),32);
    bufp->fullBit(oldp+275,(vlSelf->top__DOT__imul__DOT__next_ostream_val));
    bufp->fullBit(oldp+276,(vlSelf->top__DOT__imul__DOT__next_finish));
    bufp->fullBit(oldp+277,(vlSelf->top__DOT__imul__DOT__checkone));
    bufp->fullCData(oldp+278,(vlSelf->top__DOT__imul__DOT__i),5);
    bufp->fullCData(oldp+279,(vlSelf->top__DOT__imul__DOT__shifts),5);
    bufp->fullBit(oldp+280,(vlSelf->top__DOT__istream_rdy));
    bufp->fullBit(oldp+281,(vlSelf->top__DOT__ostream_val));
    bufp->fullIData(oldp+282,(vlSelf->top__DOT__ostream_msg),32);
    bufp->fullCData(oldp+283,(vlSelf->top__DOT__imul__DOT__state),2);
    bufp->fullIData(oldp+284,(vlSelf->top__DOT__imul__DOT__a),32);
    bufp->fullIData(oldp+285,(vlSelf->top__DOT__imul__DOT__b),32);
    bufp->fullBit(oldp+286,(vlSelf->top__DOT__imul__DOT__finish));
    bufp->fullIData(oldp+287,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles),32);
    bufp->fullBit(oldp+288,(vlSelf->clk));
    bufp->fullBit(oldp+289,(vlSelf->linetrace));
    bufp->fullQData(oldp+290,(vlSelf->top__DOT__istream_msg),64);
    bufp->fullCData(oldp+292,(vlSelf->top__DOT__imul__DOT__nextstate),2);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__imul__DOT__add_result),32);
    bufp->fullIData(oldp+294,(vlSelf->top__DOT__imul__DOT____Vcellinp__Add____pinNumber2),32);
    bufp->fullCData(oldp+295,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level),4);
    bufp->fullIData(oldp+296,(0x20U),32);
    bufp->fullIData(oldp+297,(0x200U),32);
    bufp->fullIData(oldp+298,(0x1000U),32);
}
