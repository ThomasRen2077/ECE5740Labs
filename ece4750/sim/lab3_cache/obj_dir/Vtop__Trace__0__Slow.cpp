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
    tracep->declBit(c+37,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+39,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"in0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,"in1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,"in2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,"in3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,"in4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,"in5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,"in6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,"in7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,"in8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,"in9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,"in10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,"in11",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,"in12",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,"in13",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,"in14",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,"in15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,"sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,"out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__output_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__output_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+41,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+19,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+21,"in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"in3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+23,"in4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+24,"in5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"in6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"in7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"in8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"in9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"in10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+30,"in11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"in12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+32,"in13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"in14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+34,"in15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+36,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("top ");
    Vtop___024root__trace_init_sub__TOP__top__0(vlSelf, tracep);
    tracep->pushNamePrefix("output_mux ");
    Vtop___024root__trace_init_sub__TOP__top__output_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
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
    bufp->fullIData(oldp+1,(vlSymsp->TOP__top.__PVT__in0),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__top.__PVT__in1),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__top.__PVT__in2),32);
    bufp->fullIData(oldp+4,(vlSymsp->TOP__top.__PVT__in3),32);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__top.__PVT__in4),32);
    bufp->fullIData(oldp+6,(vlSymsp->TOP__top.__PVT__in5),32);
    bufp->fullIData(oldp+7,(vlSymsp->TOP__top.__PVT__in6),32);
    bufp->fullIData(oldp+8,(vlSymsp->TOP__top.__PVT__in7),32);
    bufp->fullIData(oldp+9,(vlSymsp->TOP__top.__PVT__in8),32);
    bufp->fullIData(oldp+10,(vlSymsp->TOP__top.__PVT__in9),32);
    bufp->fullIData(oldp+11,(vlSymsp->TOP__top.__PVT__in10),32);
    bufp->fullIData(oldp+12,(vlSymsp->TOP__top.__PVT__in11),32);
    bufp->fullIData(oldp+13,(vlSymsp->TOP__top.__PVT__in12),32);
    bufp->fullIData(oldp+14,(vlSymsp->TOP__top.__PVT__in13),32);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__top.__PVT__in14),32);
    bufp->fullIData(oldp+16,(vlSymsp->TOP__top.__PVT__in15),32);
    bufp->fullCData(oldp+17,(vlSymsp->TOP__top.__PVT__sel),4);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__top.__PVT__out),32);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__top__output_mux.__PVT__in0),32);
    bufp->fullIData(oldp+20,(vlSymsp->TOP__top__output_mux.__PVT__in1),32);
    bufp->fullIData(oldp+21,(vlSymsp->TOP__top__output_mux.__PVT__in2),32);
    bufp->fullIData(oldp+22,(vlSymsp->TOP__top__output_mux.__PVT__in3),32);
    bufp->fullIData(oldp+23,(vlSymsp->TOP__top__output_mux.__PVT__in4),32);
    bufp->fullIData(oldp+24,(vlSymsp->TOP__top__output_mux.__PVT__in5),32);
    bufp->fullIData(oldp+25,(vlSymsp->TOP__top__output_mux.__PVT__in6),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__top__output_mux.__PVT__in7),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__top__output_mux.__PVT__in8),32);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__top__output_mux.__PVT__in9),32);
    bufp->fullIData(oldp+29,(vlSymsp->TOP__top__output_mux.__PVT__in10),32);
    bufp->fullIData(oldp+30,(vlSymsp->TOP__top__output_mux.__PVT__in11),32);
    bufp->fullIData(oldp+31,(vlSymsp->TOP__top__output_mux.__PVT__in12),32);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__top__output_mux.__PVT__in13),32);
    bufp->fullIData(oldp+33,(vlSymsp->TOP__top__output_mux.__PVT__in14),32);
    bufp->fullIData(oldp+34,(vlSymsp->TOP__top__output_mux.__PVT__in15),32);
    bufp->fullCData(oldp+35,(vlSymsp->TOP__top__output_mux.__PVT__sel),4);
    bufp->fullIData(oldp+36,(vlSymsp->TOP__top__output_mux.__PVT__out),32);
    bufp->fullBit(oldp+37,(vlSelf->clk));
    bufp->fullBit(oldp+38,(vlSelf->linetrace));
    bufp->fullBit(oldp+39,(vlSymsp->TOP__top.clk));
    bufp->fullBit(oldp+40,(vlSymsp->TOP__top.linetrace));
    bufp->fullIData(oldp+41,(0x20U),32);
}
