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
    tracep->declBit(c+490,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+490,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+437,"istream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+438,"istream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+439,"istream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+441,"ostream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+442,"ostream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+443,"ostream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declQuad(c+85+i*2,"src_msgs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);
    }
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+141+i*1,"snk_msgs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+444,"src_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+445,"snk_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+169,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+494,"rand_msg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+495,"rand_msg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("imul ");
    tracep->declBit(c+490,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+437,"istream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"istream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+439,"istream_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+442,"ostream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"ostream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+443,"ostream_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"IDLE", "CALC", "DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(1, "lab1_imul_IntMulBase.statetype", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+446,"state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+447,"nextstate",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+448,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+449,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+450,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+451,"next_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,"next_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,"next_ostream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+454,"next_ostream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+455,"add_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declArray(c+174,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+302,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+303,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("Add ");
    tracep->declBus(c+496,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+443,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+448,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+455,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vc_trace ");
    tracep->declBit(c+490,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+304,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+305,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+306,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+307,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+497,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+498,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+308,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+436,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+456,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+171,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sink ");
    tracep->declBus(c+496,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+499,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+490,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+500,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+442,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+443,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+445,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"sink_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+458,"sink_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+459,"sink_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("msg_delay ");
    tracep->declBus(c+496,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+490,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+500,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+442,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+443,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+457,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+458,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+459,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+460,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+461,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+462,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+463,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+464,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+501,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+502,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+503,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+465,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+466,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->pushNamePrefix("rand_delay_reg ");
    tracep->declBus(c+496,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+500,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+490,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+463,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+462,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+461,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sink ");
    tracep->declBus(c+496,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+499,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+500,"p_sim_mode",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+490,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+458,"rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+459,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+445,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+504,"c_index_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+1+i*1,"m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+467,"index_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+468,"index_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+469,"index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+470,"reset_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+471,"done_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+467,"go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+472,"failed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+505,"verbose",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+473,"m_curr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("index_reg ");
    tracep->declBus(c+504,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+506,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBit(c+490,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+469,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+468,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+467,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("src ");
    tracep->declBus(c+507,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+499,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+490,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+500,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+437,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+439,"msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+444,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+474,"src_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+475,"src_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+476,"src_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->pushNamePrefix("msg_delay ");
    tracep->declBus(c+507,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+490,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+500,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+474,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+475,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+476,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+437,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+439,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+478,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+479,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+480,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+481,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+482,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+501,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+502,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+503,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+483,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+484,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->pushNamePrefix("rand_delay_reg ");
    tracep->declBus(c+496,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+500,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+490,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+481,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+480,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+479,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("src ");
    tracep->declBus(c+507,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+499,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+490,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+474,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+475,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+476,"msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+444,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+504,"c_index_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declQuad(c+29+i*2,"m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);
    }
    tracep->declBit(c+485,"index_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+486,"index_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+487,"index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+488,"reset_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+489,"done_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+485,"go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("index_reg ");
    tracep->declBus(c+504,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+506,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBit(c+490,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+487,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+486,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+485,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("test_case__Vstatic__unnamedblk1 ");
    tracep->declBus(c+172,"idx",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+173,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+493,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP____024unit__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+499,"NUM_TESTS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+507,"INPUT_TEST_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+496,"OUTPUT_TEST_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+500,"MAX_SRC_DELAY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+500,"MAX_SNK_DELAY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[27]),32);
    bufp->fullQData(oldp+29,(vlSelf->top__DOT__src__DOT__src__DOT__m[0]),64);
    bufp->fullQData(oldp+31,(vlSelf->top__DOT__src__DOT__src__DOT__m[1]),64);
    bufp->fullQData(oldp+33,(vlSelf->top__DOT__src__DOT__src__DOT__m[2]),64);
    bufp->fullQData(oldp+35,(vlSelf->top__DOT__src__DOT__src__DOT__m[3]),64);
    bufp->fullQData(oldp+37,(vlSelf->top__DOT__src__DOT__src__DOT__m[4]),64);
    bufp->fullQData(oldp+39,(vlSelf->top__DOT__src__DOT__src__DOT__m[5]),64);
    bufp->fullQData(oldp+41,(vlSelf->top__DOT__src__DOT__src__DOT__m[6]),64);
    bufp->fullQData(oldp+43,(vlSelf->top__DOT__src__DOT__src__DOT__m[7]),64);
    bufp->fullQData(oldp+45,(vlSelf->top__DOT__src__DOT__src__DOT__m[8]),64);
    bufp->fullQData(oldp+47,(vlSelf->top__DOT__src__DOT__src__DOT__m[9]),64);
    bufp->fullQData(oldp+49,(vlSelf->top__DOT__src__DOT__src__DOT__m[10]),64);
    bufp->fullQData(oldp+51,(vlSelf->top__DOT__src__DOT__src__DOT__m[11]),64);
    bufp->fullQData(oldp+53,(vlSelf->top__DOT__src__DOT__src__DOT__m[12]),64);
    bufp->fullQData(oldp+55,(vlSelf->top__DOT__src__DOT__src__DOT__m[13]),64);
    bufp->fullQData(oldp+57,(vlSelf->top__DOT__src__DOT__src__DOT__m[14]),64);
    bufp->fullQData(oldp+59,(vlSelf->top__DOT__src__DOT__src__DOT__m[15]),64);
    bufp->fullQData(oldp+61,(vlSelf->top__DOT__src__DOT__src__DOT__m[16]),64);
    bufp->fullQData(oldp+63,(vlSelf->top__DOT__src__DOT__src__DOT__m[17]),64);
    bufp->fullQData(oldp+65,(vlSelf->top__DOT__src__DOT__src__DOT__m[18]),64);
    bufp->fullQData(oldp+67,(vlSelf->top__DOT__src__DOT__src__DOT__m[19]),64);
    bufp->fullQData(oldp+69,(vlSelf->top__DOT__src__DOT__src__DOT__m[20]),64);
    bufp->fullQData(oldp+71,(vlSelf->top__DOT__src__DOT__src__DOT__m[21]),64);
    bufp->fullQData(oldp+73,(vlSelf->top__DOT__src__DOT__src__DOT__m[22]),64);
    bufp->fullQData(oldp+75,(vlSelf->top__DOT__src__DOT__src__DOT__m[23]),64);
    bufp->fullQData(oldp+77,(vlSelf->top__DOT__src__DOT__src__DOT__m[24]),64);
    bufp->fullQData(oldp+79,(vlSelf->top__DOT__src__DOT__src__DOT__m[25]),64);
    bufp->fullQData(oldp+81,(vlSelf->top__DOT__src__DOT__src__DOT__m[26]),64);
    bufp->fullQData(oldp+83,(vlSelf->top__DOT__src__DOT__src__DOT__m[27]),64);
    bufp->fullQData(oldp+85,(vlSelf->top__DOT__src_msgs[0]),64);
    bufp->fullQData(oldp+87,(vlSelf->top__DOT__src_msgs[1]),64);
    bufp->fullQData(oldp+89,(vlSelf->top__DOT__src_msgs[2]),64);
    bufp->fullQData(oldp+91,(vlSelf->top__DOT__src_msgs[3]),64);
    bufp->fullQData(oldp+93,(vlSelf->top__DOT__src_msgs[4]),64);
    bufp->fullQData(oldp+95,(vlSelf->top__DOT__src_msgs[5]),64);
    bufp->fullQData(oldp+97,(vlSelf->top__DOT__src_msgs[6]),64);
    bufp->fullQData(oldp+99,(vlSelf->top__DOT__src_msgs[7]),64);
    bufp->fullQData(oldp+101,(vlSelf->top__DOT__src_msgs[8]),64);
    bufp->fullQData(oldp+103,(vlSelf->top__DOT__src_msgs[9]),64);
    bufp->fullQData(oldp+105,(vlSelf->top__DOT__src_msgs[10]),64);
    bufp->fullQData(oldp+107,(vlSelf->top__DOT__src_msgs[11]),64);
    bufp->fullQData(oldp+109,(vlSelf->top__DOT__src_msgs[12]),64);
    bufp->fullQData(oldp+111,(vlSelf->top__DOT__src_msgs[13]),64);
    bufp->fullQData(oldp+113,(vlSelf->top__DOT__src_msgs[14]),64);
    bufp->fullQData(oldp+115,(vlSelf->top__DOT__src_msgs[15]),64);
    bufp->fullQData(oldp+117,(vlSelf->top__DOT__src_msgs[16]),64);
    bufp->fullQData(oldp+119,(vlSelf->top__DOT__src_msgs[17]),64);
    bufp->fullQData(oldp+121,(vlSelf->top__DOT__src_msgs[18]),64);
    bufp->fullQData(oldp+123,(vlSelf->top__DOT__src_msgs[19]),64);
    bufp->fullQData(oldp+125,(vlSelf->top__DOT__src_msgs[20]),64);
    bufp->fullQData(oldp+127,(vlSelf->top__DOT__src_msgs[21]),64);
    bufp->fullQData(oldp+129,(vlSelf->top__DOT__src_msgs[22]),64);
    bufp->fullQData(oldp+131,(vlSelf->top__DOT__src_msgs[23]),64);
    bufp->fullQData(oldp+133,(vlSelf->top__DOT__src_msgs[24]),64);
    bufp->fullQData(oldp+135,(vlSelf->top__DOT__src_msgs[25]),64);
    bufp->fullQData(oldp+137,(vlSelf->top__DOT__src_msgs[26]),64);
    bufp->fullQData(oldp+139,(vlSelf->top__DOT__src_msgs[27]),64);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__snk_msgs[0]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__snk_msgs[1]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__snk_msgs[2]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__snk_msgs[3]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__snk_msgs[4]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__snk_msgs[5]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__snk_msgs[6]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__snk_msgs[7]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__snk_msgs[8]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__snk_msgs[9]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__snk_msgs[10]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__snk_msgs[11]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__snk_msgs[12]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__snk_msgs[13]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__snk_msgs[14]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__snk_msgs[15]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__snk_msgs[16]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__snk_msgs[17]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__snk_msgs[18]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__snk_msgs[19]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__snk_msgs[20]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__snk_msgs[21]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__snk_msgs[22]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__snk_msgs[23]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__snk_msgs[24]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__snk_msgs[25]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__snk_msgs[26]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__snk_msgs[27]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__a),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__b),32);
    bufp->fullCData(oldp+171,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level),4);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__unnamedblk2__DOT__x),32);
    bufp->fullWData(oldp+174,(vlSelf->top__DOT__imul__DOT__str),4096);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__imul__DOT__idx0),32);
    bufp->fullIData(oldp+303,(vlSelf->top__DOT__imul__DOT__idx1),32);
    bufp->fullIData(oldp+304,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0),32);
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0),32);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1),32);
    bufp->fullWData(oldp+308,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage),4096);
    bufp->fullIData(oldp+436,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next),32);
    bufp->fullBit(oldp+437,(vlSelf->top__DOT__istream_val));
    bufp->fullBit(oldp+438,(vlSelf->top__DOT__istream_rdy));
    bufp->fullQData(oldp+439,(vlSelf->top__DOT__istream_msg),64);
    bufp->fullBit(oldp+441,(vlSelf->top__DOT__ostream_rdy));
    bufp->fullBit(oldp+442,(vlSelf->top__DOT__ostream_val));
    bufp->fullIData(oldp+443,(vlSelf->top__DOT__ostream_msg),32);
    bufp->fullBit(oldp+444,(vlSelf->top__DOT__src_done));
    bufp->fullBit(oldp+445,(vlSelf->top__DOT__snk_done));
    bufp->fullCData(oldp+446,(vlSelf->top__DOT__imul__DOT__state),2);
    bufp->fullCData(oldp+447,(vlSelf->top__DOT__imul__DOT__nextstate),2);
    bufp->fullIData(oldp+448,(vlSelf->top__DOT__imul__DOT__a),32);
    bufp->fullIData(oldp+449,(vlSelf->top__DOT__imul__DOT__b),32);
    bufp->fullCData(oldp+450,(vlSelf->top__DOT__imul__DOT__counter),8);
    bufp->fullIData(oldp+451,(vlSelf->top__DOT__imul__DOT__next_a),32);
    bufp->fullIData(oldp+452,(vlSelf->top__DOT__imul__DOT__next_b),32);
    bufp->fullIData(oldp+453,(vlSelf->top__DOT__imul__DOT__next_ostream_msg),32);
    bufp->fullBit(oldp+454,(vlSelf->top__DOT__imul__DOT__next_ostream_val));
    bufp->fullIData(oldp+455,((vlSelf->top__DOT__imul__DOT__a 
                               + vlSelf->top__DOT__ostream_msg)),32);
    bufp->fullIData(oldp+456,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles),32);
    bufp->fullBit(oldp+457,(vlSelf->top__DOT__sink__DOT__sink_val));
    bufp->fullBit(oldp+458,(vlSelf->top__DOT__sink__DOT__sink_rdy));
    bufp->fullIData(oldp+459,(vlSelf->top__DOT__sink__DOT__sink_msg),32);
    bufp->fullIData(oldp+460,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num),32);
    bufp->fullBit(oldp+461,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en));
    bufp->fullIData(oldp+462,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next),32);
    bufp->fullIData(oldp+463,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay),32);
    bufp->fullBit(oldp+464,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay));
    bufp->fullBit(oldp+465,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next));
    bufp->fullBit(oldp+466,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state));
    bufp->fullBit(oldp+467,(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en));
    bufp->fullCData(oldp+468,((0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)))),5);
    bufp->fullCData(oldp+469,(vlSelf->top__DOT__sink__DOT__sink__DOT__index),5);
    bufp->fullBit(oldp+470,(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg));
    bufp->fullBit(oldp+471,(((~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
                             & (0x1bU == (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)))));
    bufp->fullBit(oldp+472,(vlSelf->top__DOT__sink__DOT__sink__DOT__failed));
    bufp->fullIData(oldp+473,(((0x1bU >= (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))
                                ? vlSelf->top__DOT__sink__DOT__sink__DOT__m
                               [vlSelf->top__DOT__sink__DOT__sink__DOT__index]
                                : 0U)),32);
    bufp->fullBit(oldp+474,(vlSelf->top__DOT__src__DOT__src_val));
    bufp->fullBit(oldp+475,(vlSelf->top__DOT__src__DOT__src_rdy));
    bufp->fullQData(oldp+476,(((0x1bU >= (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))
                                ? vlSelf->top__DOT__src__DOT__src__DOT__m
                               [vlSelf->top__DOT__src__DOT__src__DOT__index]
                                : 0ULL)),64);
    bufp->fullIData(oldp+478,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num),32);
    bufp->fullBit(oldp+479,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en));
    bufp->fullIData(oldp+480,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next),32);
    bufp->fullIData(oldp+481,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay),32);
    bufp->fullBit(oldp+482,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay));
    bufp->fullBit(oldp+483,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next));
    bufp->fullBit(oldp+484,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state));
    bufp->fullBit(oldp+485,(((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                             & (IData)(vlSelf->top__DOT__src__DOT__src_rdy))));
    bufp->fullCData(oldp+486,((0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)))),5);
    bufp->fullCData(oldp+487,(vlSelf->top__DOT__src__DOT__src__DOT__index),5);
    bufp->fullBit(oldp+488,(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg));
    bufp->fullBit(oldp+489,(((~ (IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg)) 
                             & (0x1bU == (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)))));
    bufp->fullBit(oldp+490,(vlSelf->clk));
    bufp->fullBit(oldp+491,(vlSelf->linetrace));
    bufp->fullBit(oldp+492,(vlSelf->top__DOT__reset));
    bufp->fullIData(oldp+493,(vlSelf->top__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+494,(vlSelf->top__DOT__rand_msg1),32);
    bufp->fullIData(oldp+495,(vlSelf->top__DOT__rand_msg2),32);
    bufp->fullIData(oldp+496,(0x20U),32);
    bufp->fullIData(oldp+497,(0x200U),32);
    bufp->fullIData(oldp+498,(0x1000U),32);
    bufp->fullIData(oldp+499,(0x1cU),32);
    bufp->fullIData(oldp+500,(0U),32);
    bufp->fullIData(oldp+501,(1U),32);
    bufp->fullBit(oldp+502,(0U));
    bufp->fullBit(oldp+503,(1U));
    bufp->fullIData(oldp+504,(5U),32);
    bufp->fullCData(oldp+505,(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose),4);
    bufp->fullCData(oldp+506,(0U),5);
    bufp->fullIData(oldp+507,(0x40U),32);
}
