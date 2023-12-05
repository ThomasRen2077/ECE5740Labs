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
    tracep->declBit(c+170,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+171,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+159,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+160,"update_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+161,"update_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+162,"PC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+172,"prediction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+176,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+177,"correct_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+163,"my_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+164,"my_update_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+165,"my_update_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+140,"shift_factor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+141,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk10 ");
    tracep->declBus(c+142,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk11 ");
    tracep->declBus(c+143,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk12 ");
    tracep->declBus(c+144,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk13 ");
    tracep->declBus(c+145,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk14 ");
    tracep->declBus(c+146,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk15 ");
    tracep->declBus(c+147,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk16 ");
    tracep->declBus(c+148,"y",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk17 ");
    tracep->declBus(c+149,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk18 ");
    tracep->declBus(c+150,"y",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk19 ");
    tracep->declBus(c+167,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk20 ");
    tracep->declBus(c+166,"y",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+151,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk21 ");
    tracep->declBus(c+168,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk22 ");
    tracep->declBus(c+169,"y",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+152,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+153,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+154,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+155,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+156,"y",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+157,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk9 ");
    tracep->declBus(c+158,"y",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"PHT_size",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+3,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"update_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"update_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+7,"PC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+173,"prediction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+179,"PHT_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+10,"PHT",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declQuad(c+138,"BH",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 43,0);
    tracep->declBus(c+174,"current_PHT",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+8,"PHT_index_update_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+9,"BH_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+175,"PHT_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("top ");
    Vtop___024root__trace_init_sub__TOP__top__0(vlSelf, tracep);
    tracep->pushNamePrefix("DUT ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__0(vlSelf, tracep);
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
    bufp->fullBit(oldp+1,(vlSymsp->TOP__top.clk));
    bufp->fullBit(oldp+2,(vlSymsp->TOP__top.linetrace));
    bufp->fullBit(oldp+3,(vlSymsp->TOP__top__DUT.__PVT__clk));
    bufp->fullBit(oldp+4,(vlSymsp->TOP__top__DUT.__PVT__reset));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__top__DUT.__PVT__update_en));
    bufp->fullBit(oldp+6,(vlSymsp->TOP__top__DUT.__PVT__update_val));
    bufp->fullIData(oldp+7,(vlSymsp->TOP__top__DUT.__PVT__PC),32);
    bufp->fullBit(oldp+8,(vlSymsp->TOP__top__DUT.__PVT__PHT_index_update_value));
    bufp->fullCData(oldp+9,(vlSymsp->TOP__top__DUT.__PVT__BH_index),2);
    bufp->fullWData(oldp+10,(vlSymsp->TOP__top__DUT.__PVT__PHT),4096);
    bufp->fullQData(oldp+138,(vlSymsp->TOP__top__DUT.__PVT__BH),44);
    bufp->fullIData(oldp+140,(vlSymsp->TOP__top.__PVT__shift_factor),32);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__top.__PVT__unnamedblk1__DOT__x),32);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__top.__PVT__unnamedblk10__DOT__x),32);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__top.__PVT__unnamedblk11__DOT__x),32);
    bufp->fullIData(oldp+144,(vlSymsp->TOP__top.__PVT__unnamedblk12__DOT__x),32);
    bufp->fullIData(oldp+145,(vlSymsp->TOP__top.__PVT__unnamedblk13__DOT__x),32);
    bufp->fullIData(oldp+146,(vlSymsp->TOP__top.__PVT__unnamedblk14__DOT__x),32);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__top.__PVT__unnamedblk15__DOT__x),32);
    bufp->fullIData(oldp+148,(vlSymsp->TOP__top.__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y),32);
    bufp->fullIData(oldp+149,(vlSymsp->TOP__top.__PVT__unnamedblk17__DOT__x),32);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__top.__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y),32);
    bufp->fullIData(oldp+151,(vlSymsp->TOP__top.__PVT__unnamedblk2__DOT__x),32);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__top.__PVT__unnamedblk3__DOT__x),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__top.__PVT__unnamedblk4__DOT__x),32);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__top.__PVT__unnamedblk5__DOT__x),32);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__top.__PVT__unnamedblk6__DOT__x),32);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__top.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y),32);
    bufp->fullIData(oldp+157,(vlSymsp->TOP__top.__PVT__unnamedblk8__DOT__x),32);
    bufp->fullIData(oldp+158,(vlSymsp->TOP__top.__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y),32);
    bufp->fullBit(oldp+159,(vlSymsp->TOP__top.__PVT__reset));
    bufp->fullBit(oldp+160,(vlSymsp->TOP__top.__PVT__update_en));
    bufp->fullBit(oldp+161,(vlSymsp->TOP__top.__PVT__update_val));
    bufp->fullIData(oldp+162,(vlSymsp->TOP__top.__PVT__PC),32);
    bufp->fullIData(oldp+163,(vlSymsp->TOP__top.__PVT__my_pc),32);
    bufp->fullBit(oldp+164,(vlSymsp->TOP__top.__PVT__my_update_en));
    bufp->fullBit(oldp+165,(vlSymsp->TOP__top.__PVT__my_update_val));
    bufp->fullIData(oldp+166,(vlSymsp->TOP__top.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y),32);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__top.__PVT__unnamedblk19__DOT__x),32);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__top.__PVT__unnamedblk21__DOT__x),32);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__top.__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y),32);
    bufp->fullBit(oldp+170,(vlSelf->clk));
    bufp->fullBit(oldp+171,(vlSelf->linetrace));
    bufp->fullBit(oldp+172,(vlSymsp->TOP__top.__PVT__prediction));
    bufp->fullBit(oldp+173,(vlSymsp->TOP__top__DUT.__PVT__prediction));
    bufp->fullCData(oldp+174,(vlSymsp->TOP__top__DUT.__PVT__current_PHT),2);
    bufp->fullSData(oldp+175,(vlSymsp->TOP__top__DUT.__PVT__PHT_index),11);
    bufp->fullCData(oldp+176,(vlSymsp->TOP__top.__PVT__counter),6);
    bufp->fullCData(oldp+177,(vlSymsp->TOP__top.__PVT__correct_counter),6);
    bufp->fullIData(oldp+178,(0x800U),32);
    bufp->fullIData(oldp+179,(0xbU),32);
}
