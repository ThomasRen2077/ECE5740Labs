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
    tracep->declBit(c+303,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+304,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+272,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+265,"istream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+289,"istream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+276,"istream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+266,"ostream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+290,"ostream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+291,"ostream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,"istream_msg_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,"istream_msg_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+270,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+271,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__imul__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__imul__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+274,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"istream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"istream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+280,"istream_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+293,"ostream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"ostream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+294,"ostream_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"IDLE", "CALC", "DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(1, "lab1_imul_IntMulBase.statetype", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+295,"state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+284,"nextstate",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+296,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+285,"next_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,"next_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,"next_ostream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+288,"next_ostream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+299,"add_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declArray(c+1,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+129,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+130,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__imul__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__imul__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+275,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+283,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+131,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+132,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+133,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+134,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+307,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+308,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+135,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+263,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+305,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+306,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__imul__Add__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__imul__Add__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+309,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+300,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+301,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+302,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("top ");
    Vtop___024root__trace_init_sub__TOP__top__0(vlSelf, tracep);
    tracep->pushNamePrefix("imul ");
    Vtop___024root__trace_init_sub__TOP__top__imul__0(vlSelf, tracep);
    tracep->pushNamePrefix("Add ");
    Vtop___024root__trace_init_sub__TOP__top__imul__Add__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__imul__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
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
    bufp->fullWData(oldp+1,(vlSymsp->TOP__top__imul.__PVT__str),4096);
    bufp->fullIData(oldp+129,(vlSymsp->TOP__top__imul.__PVT__idx0),32);
    bufp->fullIData(oldp+130,(vlSymsp->TOP__top__imul.__PVT__idx1),32);
    bufp->fullIData(oldp+131,(vlSymsp->TOP__top__imul__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+132,(vlSymsp->TOP__top__imul__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+133,(vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+134,(vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1),32);
    bufp->fullWData(oldp+135,(vlSymsp->TOP__top__imul__vc_trace.__PVT__storage),4096);
    bufp->fullIData(oldp+263,(vlSymsp->TOP__top__imul__vc_trace.__PVT__cycles_next),32);
    bufp->fullBit(oldp+264,(vlSymsp->TOP__top.__PVT__reset));
    bufp->fullBit(oldp+265,(vlSymsp->TOP__top.__PVT__istream_val));
    bufp->fullBit(oldp+266,(vlSymsp->TOP__top.__PVT__ostream_rdy));
    bufp->fullIData(oldp+267,(vlSymsp->TOP__top.__PVT__istream_msg_a),32);
    bufp->fullIData(oldp+268,(vlSymsp->TOP__top.__PVT__istream_msg_b),32);
    bufp->fullIData(oldp+269,(vlSymsp->TOP__top.__PVT__a),32);
    bufp->fullIData(oldp+270,(vlSymsp->TOP__top.__PVT__b),32);
    bufp->fullIData(oldp+271,(vlSymsp->TOP__top.__PVT__unnamedblk1__DOT__x),32);
    bufp->fullBit(oldp+272,(vlSymsp->TOP__top.clk));
    bufp->fullBit(oldp+273,(vlSymsp->TOP__top.linetrace));
    bufp->fullBit(oldp+274,(vlSymsp->TOP__top__imul.__PVT__clk));
    bufp->fullBit(oldp+275,(vlSymsp->TOP__top__imul__vc_trace.__PVT__clk));
    bufp->fullQData(oldp+276,(vlSymsp->TOP__top.__PVT__istream_msg),64);
    bufp->fullBit(oldp+278,(vlSymsp->TOP__top__imul.__PVT__reset));
    bufp->fullBit(oldp+279,(vlSymsp->TOP__top__imul.__PVT__istream_val));
    bufp->fullQData(oldp+280,(vlSymsp->TOP__top__imul.__PVT__istream_msg),64);
    bufp->fullBit(oldp+282,(vlSymsp->TOP__top__imul.__PVT__ostream_rdy));
    bufp->fullBit(oldp+283,(vlSymsp->TOP__top__imul__vc_trace.__PVT__reset));
    bufp->fullCData(oldp+284,(vlSymsp->TOP__top__imul.__PVT__nextstate),2);
    bufp->fullIData(oldp+285,(vlSymsp->TOP__top__imul.__PVT__next_a),32);
    bufp->fullIData(oldp+286,(vlSymsp->TOP__top__imul.__PVT__next_b),32);
    bufp->fullIData(oldp+287,(vlSymsp->TOP__top__imul.__PVT__next_ostream_msg),32);
    bufp->fullBit(oldp+288,(vlSymsp->TOP__top__imul.__PVT__next_ostream_val));
    bufp->fullBit(oldp+289,(vlSymsp->TOP__top.__PVT__istream_rdy));
    bufp->fullBit(oldp+290,(vlSymsp->TOP__top.__PVT__ostream_val));
    bufp->fullIData(oldp+291,(vlSymsp->TOP__top.__PVT__ostream_msg),32);
    bufp->fullBit(oldp+292,(vlSymsp->TOP__top__imul.__PVT__istream_rdy));
    bufp->fullBit(oldp+293,(vlSymsp->TOP__top__imul.__PVT__ostream_val));
    bufp->fullIData(oldp+294,(vlSymsp->TOP__top__imul.__PVT__ostream_msg),32);
    bufp->fullCData(oldp+295,(vlSymsp->TOP__top__imul.__PVT__state),2);
    bufp->fullIData(oldp+296,(vlSymsp->TOP__top__imul.__PVT__a),32);
    bufp->fullIData(oldp+297,(vlSymsp->TOP__top__imul.__PVT__b),32);
    bufp->fullCData(oldp+298,(vlSymsp->TOP__top__imul.__PVT__counter),8);
    bufp->fullIData(oldp+299,(vlSymsp->TOP__top__imul.__PVT__add_result),32);
    bufp->fullIData(oldp+300,(vlSymsp->TOP__top__imul__Add.__PVT__in0),32);
    bufp->fullIData(oldp+301,(vlSymsp->TOP__top__imul__Add.__PVT__in1),32);
    bufp->fullIData(oldp+302,(vlSymsp->TOP__top__imul__Add.__PVT__out),32);
    bufp->fullBit(oldp+303,(vlSelf->clk));
    bufp->fullBit(oldp+304,(vlSelf->linetrace));
    bufp->fullIData(oldp+305,(vlSymsp->TOP__top__imul__vc_trace.__PVT__cycles),32);
    bufp->fullCData(oldp+306,(vlSymsp->TOP__top__imul__vc_trace.__PVT__level),4);
    bufp->fullIData(oldp+307,(0x200U),32);
    bufp->fullIData(oldp+308,(0x1000U),32);
    bufp->fullIData(oldp+309,(0x20U),32);
}
