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
    tracep->declBit(c+562,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+563,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+441,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+442,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+564,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+535,"istream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+482,"istream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+550,"istream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+517,"ostream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+483,"ostream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+484,"ostream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declQuad(c+87+i*2,"src_msgs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);
    }
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+143+i*1,"snk_msgs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+467,"src_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+474,"snk_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+171,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+580,"rand_msg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+581,"rand_msg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("test_case__Vstatic__unnamedblk1 ");
    tracep->declBus(c+173,"idx",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+174,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+565,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP____024unit__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+582,"NUM_TESTS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+583,"INPUT_TEST_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+584,"OUTPUT_TEST_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+585,"MAX_SRC_DELAY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+585,"MAX_SNK_DELAY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__imul__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__imul__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+443,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+455,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+536,"istream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"istream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+552,"istream_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+486,"ostream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+518,"ostream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+487,"ostream_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"IDLE", "CALC", "DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(1, "lab1_imul_IntMulBase.statetype", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+488,"state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+566,"nextstate",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+489,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+490,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+491,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+558,"next_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,"next_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+560,"next_ostream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+561,"next_ostream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+492,"add_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declArray(c+178,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+306,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+307,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__src__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__src__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+583,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+582,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+444,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+456,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+175,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+537,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+493,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+554,"msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+468,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+469,"src_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+538,"src_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+507,"src_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__sink__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__sink__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+584,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+582,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+445,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+176,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+494,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+519,"rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+495,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+475,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+520,"sink_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+476,"sink_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+521,"sink_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__imul__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__imul__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+446,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+462,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+308,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+309,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+310,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+311,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+586,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+587,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+312,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+440,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+567,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+177,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__src__src__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__src__src__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+583,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+582,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+447,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+458,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+539,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+509,"msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+471,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+585,"c_index_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declQuad(c+1+i*2,"m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);
    }
    tracep->declBit(c+540,"index_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+511,"index_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+512,"index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+472,"reset_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+568,"done_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+541,"go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__src__msg_delay__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__src__msg_delay__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+583,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+448,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+459,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+57,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+473,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+542,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+513,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+543,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+496,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+556,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+569,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+544,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+545,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+570,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+571,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+588,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+589,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+590,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+546,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+572,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__imul__Add__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__imul__Add__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+584,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+498,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+499,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__sink__msg_delay__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__sink__msg_delay__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+584,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+449,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+460,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+58,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+500,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+522,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+501,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+523,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+477,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+524,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+573,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+525,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+526,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+575,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+588,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+589,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+590,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+527,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+576,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__sink__sink__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__sink__sink__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+584,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+582,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+591,"p_sim_mode",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+450,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+461,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+528,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+478,"rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+529,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+479,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+585,"c_index_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+59+i*1,"m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+530,"index_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+502,"index_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+503,"index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+480,"reset_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+577,"done_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+531,"go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+481,"failed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+592,"verbose",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+504,"m_curr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__src__src__index_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__src__src__index_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+585,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+593,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBit(c+451,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+463,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+515,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+516,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+547,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__sink__sink__index_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__sink__sink__index_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+585,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+593,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBit(c+452,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+464,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+505,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+506,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+532,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__src__msg_delay__rand_delay_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__src__msg_delay__rand_delay_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+584,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+591,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+453,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+465,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+578,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+548,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+549,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__sink__msg_delay__rand_delay_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__sink__msg_delay__rand_delay_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+584,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+591,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+454,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+466,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+579,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+533,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+534,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("$unit ");
    Vtop___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("top ");
    Vtop___024root__trace_init_sub__TOP__top__0(vlSelf, tracep);
    tracep->pushNamePrefix("imul ");
    Vtop___024root__trace_init_sub__TOP__top__imul__0(vlSelf, tracep);
    tracep->pushNamePrefix("Add ");
    Vtop___024root__trace_init_sub__TOP__top__imul__Add__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__imul__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sink ");
    Vtop___024root__trace_init_sub__TOP__top__sink__0(vlSelf, tracep);
    tracep->pushNamePrefix("msg_delay ");
    Vtop___024root__trace_init_sub__TOP__top__sink__msg_delay__0(vlSelf, tracep);
    tracep->pushNamePrefix("rand_delay_reg ");
    Vtop___024root__trace_init_sub__TOP__top__sink__msg_delay__rand_delay_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sink ");
    Vtop___024root__trace_init_sub__TOP__top__sink__sink__0(vlSelf, tracep);
    tracep->pushNamePrefix("index_reg ");
    Vtop___024root__trace_init_sub__TOP__top__sink__sink__index_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("src ");
    Vtop___024root__trace_init_sub__TOP__top__src__0(vlSelf, tracep);
    tracep->pushNamePrefix("msg_delay ");
    Vtop___024root__trace_init_sub__TOP__top__src__msg_delay__0(vlSelf, tracep);
    tracep->pushNamePrefix("rand_delay_reg ");
    Vtop___024root__trace_init_sub__TOP__top__src__msg_delay__rand_delay_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("src ");
    Vtop___024root__trace_init_sub__TOP__top__src__src__0(vlSelf, tracep);
    tracep->pushNamePrefix("index_reg ");
    Vtop___024root__trace_init_sub__TOP__top__src__src__index_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
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
    bufp->fullQData(oldp+1,(vlSymsp->TOP__top__src__src.__PVT__m[0]),64);
    bufp->fullQData(oldp+3,(vlSymsp->TOP__top__src__src.__PVT__m[1]),64);
    bufp->fullQData(oldp+5,(vlSymsp->TOP__top__src__src.__PVT__m[2]),64);
    bufp->fullQData(oldp+7,(vlSymsp->TOP__top__src__src.__PVT__m[3]),64);
    bufp->fullQData(oldp+9,(vlSymsp->TOP__top__src__src.__PVT__m[4]),64);
    bufp->fullQData(oldp+11,(vlSymsp->TOP__top__src__src.__PVT__m[5]),64);
    bufp->fullQData(oldp+13,(vlSymsp->TOP__top__src__src.__PVT__m[6]),64);
    bufp->fullQData(oldp+15,(vlSymsp->TOP__top__src__src.__PVT__m[7]),64);
    bufp->fullQData(oldp+17,(vlSymsp->TOP__top__src__src.__PVT__m[8]),64);
    bufp->fullQData(oldp+19,(vlSymsp->TOP__top__src__src.__PVT__m[9]),64);
    bufp->fullQData(oldp+21,(vlSymsp->TOP__top__src__src.__PVT__m[10]),64);
    bufp->fullQData(oldp+23,(vlSymsp->TOP__top__src__src.__PVT__m[11]),64);
    bufp->fullQData(oldp+25,(vlSymsp->TOP__top__src__src.__PVT__m[12]),64);
    bufp->fullQData(oldp+27,(vlSymsp->TOP__top__src__src.__PVT__m[13]),64);
    bufp->fullQData(oldp+29,(vlSymsp->TOP__top__src__src.__PVT__m[14]),64);
    bufp->fullQData(oldp+31,(vlSymsp->TOP__top__src__src.__PVT__m[15]),64);
    bufp->fullQData(oldp+33,(vlSymsp->TOP__top__src__src.__PVT__m[16]),64);
    bufp->fullQData(oldp+35,(vlSymsp->TOP__top__src__src.__PVT__m[17]),64);
    bufp->fullQData(oldp+37,(vlSymsp->TOP__top__src__src.__PVT__m[18]),64);
    bufp->fullQData(oldp+39,(vlSymsp->TOP__top__src__src.__PVT__m[19]),64);
    bufp->fullQData(oldp+41,(vlSymsp->TOP__top__src__src.__PVT__m[20]),64);
    bufp->fullQData(oldp+43,(vlSymsp->TOP__top__src__src.__PVT__m[21]),64);
    bufp->fullQData(oldp+45,(vlSymsp->TOP__top__src__src.__PVT__m[22]),64);
    bufp->fullQData(oldp+47,(vlSymsp->TOP__top__src__src.__PVT__m[23]),64);
    bufp->fullQData(oldp+49,(vlSymsp->TOP__top__src__src.__PVT__m[24]),64);
    bufp->fullQData(oldp+51,(vlSymsp->TOP__top__src__src.__PVT__m[25]),64);
    bufp->fullQData(oldp+53,(vlSymsp->TOP__top__src__src.__PVT__m[26]),64);
    bufp->fullQData(oldp+55,(vlSymsp->TOP__top__src__src.__PVT__m[27]),64);
    bufp->fullIData(oldp+57,(vlSymsp->TOP__top__src__msg_delay.__PVT__max_delay),32);
    bufp->fullIData(oldp+58,(vlSymsp->TOP__top__sink__msg_delay.__PVT__max_delay),32);
    bufp->fullIData(oldp+59,(vlSymsp->TOP__top__sink__sink.__PVT__m[0]),32);
    bufp->fullIData(oldp+60,(vlSymsp->TOP__top__sink__sink.__PVT__m[1]),32);
    bufp->fullIData(oldp+61,(vlSymsp->TOP__top__sink__sink.__PVT__m[2]),32);
    bufp->fullIData(oldp+62,(vlSymsp->TOP__top__sink__sink.__PVT__m[3]),32);
    bufp->fullIData(oldp+63,(vlSymsp->TOP__top__sink__sink.__PVT__m[4]),32);
    bufp->fullIData(oldp+64,(vlSymsp->TOP__top__sink__sink.__PVT__m[5]),32);
    bufp->fullIData(oldp+65,(vlSymsp->TOP__top__sink__sink.__PVT__m[6]),32);
    bufp->fullIData(oldp+66,(vlSymsp->TOP__top__sink__sink.__PVT__m[7]),32);
    bufp->fullIData(oldp+67,(vlSymsp->TOP__top__sink__sink.__PVT__m[8]),32);
    bufp->fullIData(oldp+68,(vlSymsp->TOP__top__sink__sink.__PVT__m[9]),32);
    bufp->fullIData(oldp+69,(vlSymsp->TOP__top__sink__sink.__PVT__m[10]),32);
    bufp->fullIData(oldp+70,(vlSymsp->TOP__top__sink__sink.__PVT__m[11]),32);
    bufp->fullIData(oldp+71,(vlSymsp->TOP__top__sink__sink.__PVT__m[12]),32);
    bufp->fullIData(oldp+72,(vlSymsp->TOP__top__sink__sink.__PVT__m[13]),32);
    bufp->fullIData(oldp+73,(vlSymsp->TOP__top__sink__sink.__PVT__m[14]),32);
    bufp->fullIData(oldp+74,(vlSymsp->TOP__top__sink__sink.__PVT__m[15]),32);
    bufp->fullIData(oldp+75,(vlSymsp->TOP__top__sink__sink.__PVT__m[16]),32);
    bufp->fullIData(oldp+76,(vlSymsp->TOP__top__sink__sink.__PVT__m[17]),32);
    bufp->fullIData(oldp+77,(vlSymsp->TOP__top__sink__sink.__PVT__m[18]),32);
    bufp->fullIData(oldp+78,(vlSymsp->TOP__top__sink__sink.__PVT__m[19]),32);
    bufp->fullIData(oldp+79,(vlSymsp->TOP__top__sink__sink.__PVT__m[20]),32);
    bufp->fullIData(oldp+80,(vlSymsp->TOP__top__sink__sink.__PVT__m[21]),32);
    bufp->fullIData(oldp+81,(vlSymsp->TOP__top__sink__sink.__PVT__m[22]),32);
    bufp->fullIData(oldp+82,(vlSymsp->TOP__top__sink__sink.__PVT__m[23]),32);
    bufp->fullIData(oldp+83,(vlSymsp->TOP__top__sink__sink.__PVT__m[24]),32);
    bufp->fullIData(oldp+84,(vlSymsp->TOP__top__sink__sink.__PVT__m[25]),32);
    bufp->fullIData(oldp+85,(vlSymsp->TOP__top__sink__sink.__PVT__m[26]),32);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__top__sink__sink.__PVT__m[27]),32);
    bufp->fullQData(oldp+87,(vlSymsp->TOP__top.__PVT__src_msgs[0]),64);
    bufp->fullQData(oldp+89,(vlSymsp->TOP__top.__PVT__src_msgs[1]),64);
    bufp->fullQData(oldp+91,(vlSymsp->TOP__top.__PVT__src_msgs[2]),64);
    bufp->fullQData(oldp+93,(vlSymsp->TOP__top.__PVT__src_msgs[3]),64);
    bufp->fullQData(oldp+95,(vlSymsp->TOP__top.__PVT__src_msgs[4]),64);
    bufp->fullQData(oldp+97,(vlSymsp->TOP__top.__PVT__src_msgs[5]),64);
    bufp->fullQData(oldp+99,(vlSymsp->TOP__top.__PVT__src_msgs[6]),64);
    bufp->fullQData(oldp+101,(vlSymsp->TOP__top.__PVT__src_msgs[7]),64);
    bufp->fullQData(oldp+103,(vlSymsp->TOP__top.__PVT__src_msgs[8]),64);
    bufp->fullQData(oldp+105,(vlSymsp->TOP__top.__PVT__src_msgs[9]),64);
    bufp->fullQData(oldp+107,(vlSymsp->TOP__top.__PVT__src_msgs[10]),64);
    bufp->fullQData(oldp+109,(vlSymsp->TOP__top.__PVT__src_msgs[11]),64);
    bufp->fullQData(oldp+111,(vlSymsp->TOP__top.__PVT__src_msgs[12]),64);
    bufp->fullQData(oldp+113,(vlSymsp->TOP__top.__PVT__src_msgs[13]),64);
    bufp->fullQData(oldp+115,(vlSymsp->TOP__top.__PVT__src_msgs[14]),64);
    bufp->fullQData(oldp+117,(vlSymsp->TOP__top.__PVT__src_msgs[15]),64);
    bufp->fullQData(oldp+119,(vlSymsp->TOP__top.__PVT__src_msgs[16]),64);
    bufp->fullQData(oldp+121,(vlSymsp->TOP__top.__PVT__src_msgs[17]),64);
    bufp->fullQData(oldp+123,(vlSymsp->TOP__top.__PVT__src_msgs[18]),64);
    bufp->fullQData(oldp+125,(vlSymsp->TOP__top.__PVT__src_msgs[19]),64);
    bufp->fullQData(oldp+127,(vlSymsp->TOP__top.__PVT__src_msgs[20]),64);
    bufp->fullQData(oldp+129,(vlSymsp->TOP__top.__PVT__src_msgs[21]),64);
    bufp->fullQData(oldp+131,(vlSymsp->TOP__top.__PVT__src_msgs[22]),64);
    bufp->fullQData(oldp+133,(vlSymsp->TOP__top.__PVT__src_msgs[23]),64);
    bufp->fullQData(oldp+135,(vlSymsp->TOP__top.__PVT__src_msgs[24]),64);
    bufp->fullQData(oldp+137,(vlSymsp->TOP__top.__PVT__src_msgs[25]),64);
    bufp->fullQData(oldp+139,(vlSymsp->TOP__top.__PVT__src_msgs[26]),64);
    bufp->fullQData(oldp+141,(vlSymsp->TOP__top.__PVT__src_msgs[27]),64);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__top.__PVT__snk_msgs[0]),32);
    bufp->fullIData(oldp+144,(vlSymsp->TOP__top.__PVT__snk_msgs[1]),32);
    bufp->fullIData(oldp+145,(vlSymsp->TOP__top.__PVT__snk_msgs[2]),32);
    bufp->fullIData(oldp+146,(vlSymsp->TOP__top.__PVT__snk_msgs[3]),32);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__top.__PVT__snk_msgs[4]),32);
    bufp->fullIData(oldp+148,(vlSymsp->TOP__top.__PVT__snk_msgs[5]),32);
    bufp->fullIData(oldp+149,(vlSymsp->TOP__top.__PVT__snk_msgs[6]),32);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__top.__PVT__snk_msgs[7]),32);
    bufp->fullIData(oldp+151,(vlSymsp->TOP__top.__PVT__snk_msgs[8]),32);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__top.__PVT__snk_msgs[9]),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__top.__PVT__snk_msgs[10]),32);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__top.__PVT__snk_msgs[11]),32);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__top.__PVT__snk_msgs[12]),32);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__top.__PVT__snk_msgs[13]),32);
    bufp->fullIData(oldp+157,(vlSymsp->TOP__top.__PVT__snk_msgs[14]),32);
    bufp->fullIData(oldp+158,(vlSymsp->TOP__top.__PVT__snk_msgs[15]),32);
    bufp->fullIData(oldp+159,(vlSymsp->TOP__top.__PVT__snk_msgs[16]),32);
    bufp->fullIData(oldp+160,(vlSymsp->TOP__top.__PVT__snk_msgs[17]),32);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__top.__PVT__snk_msgs[18]),32);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__top.__PVT__snk_msgs[19]),32);
    bufp->fullIData(oldp+163,(vlSymsp->TOP__top.__PVT__snk_msgs[20]),32);
    bufp->fullIData(oldp+164,(vlSymsp->TOP__top.__PVT__snk_msgs[21]),32);
    bufp->fullIData(oldp+165,(vlSymsp->TOP__top.__PVT__snk_msgs[22]),32);
    bufp->fullIData(oldp+166,(vlSymsp->TOP__top.__PVT__snk_msgs[23]),32);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__top.__PVT__snk_msgs[24]),32);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__top.__PVT__snk_msgs[25]),32);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__top.__PVT__snk_msgs[26]),32);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__top.__PVT__snk_msgs[27]),32);
    bufp->fullIData(oldp+171,(vlSymsp->TOP__top.__PVT__a),32);
    bufp->fullIData(oldp+172,(vlSymsp->TOP__top.__PVT__b),32);
    bufp->fullIData(oldp+173,(vlSymsp->TOP__top.__PVT__test_case__Vstatic__unnamedblk1__DOT__idx),32);
    bufp->fullIData(oldp+174,(vlSymsp->TOP__top.__PVT__unnamedblk2__DOT__x),32);
    bufp->fullIData(oldp+175,(vlSymsp->TOP__top__src.__PVT__max_delay),32);
    bufp->fullIData(oldp+176,(vlSymsp->TOP__top__sink.__PVT__max_delay),32);
    bufp->fullCData(oldp+177,(vlSymsp->TOP__top__imul__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+178,(vlSymsp->TOP__top__imul.__PVT__str),4096);
    bufp->fullIData(oldp+306,(vlSymsp->TOP__top__imul.__PVT__idx0),32);
    bufp->fullIData(oldp+307,(vlSymsp->TOP__top__imul.__PVT__idx1),32);
    bufp->fullIData(oldp+308,(vlSymsp->TOP__top__imul__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+309,(vlSymsp->TOP__top__imul__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+310,(vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+311,(vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1),32);
    bufp->fullWData(oldp+312,(vlSymsp->TOP__top__imul__vc_trace.__PVT__storage),4096);
    bufp->fullIData(oldp+440,(vlSymsp->TOP__top__imul__vc_trace.__PVT__cycles_next),32);
    bufp->fullBit(oldp+441,(vlSymsp->TOP__top.clk));
    bufp->fullBit(oldp+442,(vlSymsp->TOP__top.linetrace));
    bufp->fullBit(oldp+443,(vlSymsp->TOP__top__imul.__PVT__clk));
    bufp->fullBit(oldp+444,(vlSymsp->TOP__top__src.__PVT__clk));
    bufp->fullBit(oldp+445,(vlSymsp->TOP__top__sink.__PVT__clk));
    bufp->fullBit(oldp+446,(vlSymsp->TOP__top__imul__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+447,(vlSymsp->TOP__top__src__src.__PVT__clk));
    bufp->fullBit(oldp+448,(vlSymsp->TOP__top__src__msg_delay.__PVT__clk));
    bufp->fullBit(oldp+449,(vlSymsp->TOP__top__sink__msg_delay.__PVT__clk));
    bufp->fullBit(oldp+450,(vlSymsp->TOP__top__sink__sink.__PVT__clk));
    bufp->fullBit(oldp+451,(vlSymsp->TOP__top__src__src__index_reg.__PVT__clk));
    bufp->fullBit(oldp+452,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__clk));
    bufp->fullBit(oldp+453,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__clk));
    bufp->fullBit(oldp+454,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__clk));
    bufp->fullBit(oldp+455,(vlSymsp->TOP__top__imul.__PVT__reset));
    bufp->fullBit(oldp+456,(vlSymsp->TOP__top__src.__PVT__reset));
    bufp->fullBit(oldp+457,(vlSymsp->TOP__top__sink.__PVT__reset));
    bufp->fullBit(oldp+458,(vlSymsp->TOP__top__src__src.__PVT__reset));
    bufp->fullBit(oldp+459,(vlSymsp->TOP__top__src__msg_delay.__PVT__reset));
    bufp->fullBit(oldp+460,(vlSymsp->TOP__top__sink__msg_delay.__PVT__reset));
    bufp->fullBit(oldp+461,(vlSymsp->TOP__top__sink__sink.__PVT__reset));
    bufp->fullBit(oldp+462,(vlSymsp->TOP__top__imul__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+463,(vlSymsp->TOP__top__src__src__index_reg.__PVT__reset));
    bufp->fullBit(oldp+464,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__reset));
    bufp->fullBit(oldp+465,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__reset));
    bufp->fullBit(oldp+466,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__reset));
    bufp->fullBit(oldp+467,(vlSymsp->TOP__top.__PVT__src_done));
    bufp->fullBit(oldp+468,(vlSymsp->TOP__top__src.__PVT__done));
    bufp->fullBit(oldp+469,(vlSymsp->TOP__top__src.__PVT__src_val));
    bufp->fullBit(oldp+470,(vlSymsp->TOP__top__src__src.__PVT__val));
    bufp->fullBit(oldp+471,(vlSymsp->TOP__top__src__src.__PVT__done));
    bufp->fullBit(oldp+472,(vlSymsp->TOP__top__src__src.__PVT__reset_reg));
    bufp->fullBit(oldp+473,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_val));
    bufp->fullBit(oldp+474,(vlSymsp->TOP__top.__PVT__snk_done));
    bufp->fullBit(oldp+475,(vlSymsp->TOP__top__sink.__PVT__done));
    bufp->fullBit(oldp+476,(vlSymsp->TOP__top__sink.__PVT__sink_rdy));
    bufp->fullBit(oldp+477,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_rdy));
    bufp->fullBit(oldp+478,(vlSymsp->TOP__top__sink__sink.__PVT__rdy));
    bufp->fullBit(oldp+479,(vlSymsp->TOP__top__sink__sink.__PVT__done));
    bufp->fullBit(oldp+480,(vlSymsp->TOP__top__sink__sink.__PVT__reset_reg));
    bufp->fullBit(oldp+481,(vlSymsp->TOP__top__sink__sink.__PVT__failed));
    bufp->fullBit(oldp+482,(vlSymsp->TOP__top.__PVT__istream_rdy));
    bufp->fullBit(oldp+483,(vlSymsp->TOP__top.__PVT__ostream_val));
    bufp->fullIData(oldp+484,(vlSymsp->TOP__top.__PVT__ostream_msg),32);
    bufp->fullBit(oldp+485,(vlSymsp->TOP__top__imul.__PVT__istream_rdy));
    bufp->fullBit(oldp+486,(vlSymsp->TOP__top__imul.__PVT__ostream_val));
    bufp->fullIData(oldp+487,(vlSymsp->TOP__top__imul.__PVT__ostream_msg),32);
    bufp->fullCData(oldp+488,(vlSymsp->TOP__top__imul.__PVT__state),2);
    bufp->fullIData(oldp+489,(vlSymsp->TOP__top__imul.__PVT__a),32);
    bufp->fullIData(oldp+490,(vlSymsp->TOP__top__imul.__PVT__b),32);
    bufp->fullCData(oldp+491,(vlSymsp->TOP__top__imul.__PVT__counter),6);
    bufp->fullIData(oldp+492,(vlSymsp->TOP__top__imul.__PVT__add_result),32);
    bufp->fullBit(oldp+493,(vlSymsp->TOP__top__src.__PVT__rdy));
    bufp->fullBit(oldp+494,(vlSymsp->TOP__top__sink.__PVT__val));
    bufp->fullIData(oldp+495,(vlSymsp->TOP__top__sink.__PVT__msg),32);
    bufp->fullBit(oldp+496,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_rdy));
    bufp->fullIData(oldp+497,(vlSymsp->TOP__top__imul__Add.__PVT__in0),32);
    bufp->fullIData(oldp+498,(vlSymsp->TOP__top__imul__Add.__PVT__in1),32);
    bufp->fullIData(oldp+499,(vlSymsp->TOP__top__imul__Add.__PVT__out),32);
    bufp->fullBit(oldp+500,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_val));
    bufp->fullIData(oldp+501,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_msg),32);
    bufp->fullCData(oldp+502,(vlSymsp->TOP__top__sink__sink.__PVT__index_next),5);
    bufp->fullCData(oldp+503,(vlSymsp->TOP__top__sink__sink.__PVT__index),5);
    bufp->fullIData(oldp+504,(vlSymsp->TOP__top__sink__sink.__PVT__m_curr),32);
    bufp->fullCData(oldp+505,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__q),5);
    bufp->fullCData(oldp+506,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__d),5);
    bufp->fullQData(oldp+507,(vlSymsp->TOP__top__src.__PVT__src_msg),64);
    bufp->fullQData(oldp+509,(vlSymsp->TOP__top__src__src.__PVT__msg),64);
    bufp->fullCData(oldp+511,(vlSymsp->TOP__top__src__src.__PVT__index_next),5);
    bufp->fullCData(oldp+512,(vlSymsp->TOP__top__src__src.__PVT__index),5);
    bufp->fullQData(oldp+513,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_msg),64);
    bufp->fullCData(oldp+515,(vlSymsp->TOP__top__src__src__index_reg.__PVT__q),5);
    bufp->fullCData(oldp+516,(vlSymsp->TOP__top__src__src__index_reg.__PVT__d),5);
    bufp->fullBit(oldp+517,(vlSymsp->TOP__top.__PVT__ostream_rdy));
    bufp->fullBit(oldp+518,(vlSymsp->TOP__top__imul.__PVT__ostream_rdy));
    bufp->fullBit(oldp+519,(vlSymsp->TOP__top__sink.__PVT__rdy));
    bufp->fullBit(oldp+520,(vlSymsp->TOP__top__sink.__PVT__sink_val));
    bufp->fullIData(oldp+521,(vlSymsp->TOP__top__sink.__PVT__sink_msg),32);
    bufp->fullBit(oldp+522,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_rdy));
    bufp->fullBit(oldp+523,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_val));
    bufp->fullIData(oldp+524,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_msg),32);
    bufp->fullBit(oldp+525,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay_en));
    bufp->fullIData(oldp+526,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay_next),32);
    bufp->fullBit(oldp+527,(vlSymsp->TOP__top__sink__msg_delay.__PVT__state_next));
    bufp->fullBit(oldp+528,(vlSymsp->TOP__top__sink__sink.__PVT__val));
    bufp->fullIData(oldp+529,(vlSymsp->TOP__top__sink__sink.__PVT__msg),32);
    bufp->fullBit(oldp+530,(vlSymsp->TOP__top__sink__sink.__PVT__index_en));
    bufp->fullBit(oldp+531,(vlSymsp->TOP__top__sink__sink.__PVT__go));
    bufp->fullBit(oldp+532,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__en));
    bufp->fullIData(oldp+533,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__d),32);
    bufp->fullBit(oldp+534,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__en));
    bufp->fullBit(oldp+535,(vlSymsp->TOP__top.__PVT__istream_val));
    bufp->fullBit(oldp+536,(vlSymsp->TOP__top__imul.__PVT__istream_val));
    bufp->fullBit(oldp+537,(vlSymsp->TOP__top__src.__PVT__val));
    bufp->fullBit(oldp+538,(vlSymsp->TOP__top__src.__PVT__src_rdy));
    bufp->fullBit(oldp+539,(vlSymsp->TOP__top__src__src.__PVT__rdy));
    bufp->fullBit(oldp+540,(vlSymsp->TOP__top__src__src.__PVT__index_en));
    bufp->fullBit(oldp+541,(vlSymsp->TOP__top__src__src.__PVT__go));
    bufp->fullBit(oldp+542,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_rdy));
    bufp->fullBit(oldp+543,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_val));
    bufp->fullBit(oldp+544,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay_en));
    bufp->fullIData(oldp+545,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay_next),32);
    bufp->fullBit(oldp+546,(vlSymsp->TOP__top__src__msg_delay.__PVT__state_next));
    bufp->fullBit(oldp+547,(vlSymsp->TOP__top__src__src__index_reg.__PVT__en));
    bufp->fullIData(oldp+548,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__d),32);
    bufp->fullBit(oldp+549,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__en));
    bufp->fullQData(oldp+550,(vlSymsp->TOP__top.__PVT__istream_msg),64);
    bufp->fullQData(oldp+552,(vlSymsp->TOP__top__imul.__PVT__istream_msg),64);
    bufp->fullQData(oldp+554,(vlSymsp->TOP__top__src.__PVT__msg),64);
    bufp->fullQData(oldp+556,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_msg),64);
    bufp->fullIData(oldp+558,(vlSymsp->TOP__top__imul.__PVT__next_a),32);
    bufp->fullIData(oldp+559,(vlSymsp->TOP__top__imul.__PVT__next_b),32);
    bufp->fullIData(oldp+560,(vlSymsp->TOP__top__imul.__PVT__next_ostream_msg),32);
    bufp->fullBit(oldp+561,(vlSymsp->TOP__top__imul.__PVT__next_ostream_val));
    bufp->fullBit(oldp+562,(vlSelf->clk));
    bufp->fullBit(oldp+563,(vlSelf->linetrace));
    bufp->fullBit(oldp+564,(vlSymsp->TOP__top.__PVT__reset));
    bufp->fullIData(oldp+565,(vlSymsp->TOP__top.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullCData(oldp+566,(vlSymsp->TOP__top__imul.__PVT__nextstate),2);
    bufp->fullIData(oldp+567,(vlSymsp->TOP__top__imul__vc_trace.__PVT__cycles),32);
    bufp->fullBit(oldp+568,(vlSymsp->TOP__top__src__src.__PVT__done_next));
    bufp->fullIData(oldp+569,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_num),32);
    bufp->fullIData(oldp+570,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay),32);
    bufp->fullBit(oldp+571,(vlSymsp->TOP__top__src__msg_delay.__PVT__zero_cycle_delay));
    bufp->fullBit(oldp+572,(vlSymsp->TOP__top__src__msg_delay.__PVT__state));
    bufp->fullIData(oldp+573,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_num),32);
    bufp->fullIData(oldp+574,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay),32);
    bufp->fullBit(oldp+575,(vlSymsp->TOP__top__sink__msg_delay.__PVT__zero_cycle_delay));
    bufp->fullBit(oldp+576,(vlSymsp->TOP__top__sink__msg_delay.__PVT__state));
    bufp->fullBit(oldp+577,(vlSymsp->TOP__top__sink__sink.__PVT__done_next));
    bufp->fullIData(oldp+578,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__q),32);
    bufp->fullIData(oldp+579,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__q),32);
    bufp->fullIData(oldp+580,(vlSymsp->TOP__top.__PVT__rand_msg1),32);
    bufp->fullIData(oldp+581,(vlSymsp->TOP__top.__PVT__rand_msg2),32);
    bufp->fullIData(oldp+582,(0x1cU),32);
    bufp->fullIData(oldp+583,(0x40U),32);
    bufp->fullIData(oldp+584,(0x20U),32);
    bufp->fullIData(oldp+585,(5U),32);
    bufp->fullIData(oldp+586,(0x200U),32);
    bufp->fullIData(oldp+587,(0x1000U),32);
    bufp->fullIData(oldp+588,(1U),32);
    bufp->fullBit(oldp+589,(0U));
    bufp->fullBit(oldp+590,(1U));
    bufp->fullIData(oldp+591,(0U),32);
    bufp->fullCData(oldp+592,(vlSymsp->TOP__top__sink__sink.__PVT__verbose),4);
    bufp->fullCData(oldp+593,(0U),5);
}
