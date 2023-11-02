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
    tracep->declBit(c+298,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+299,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+298,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+299,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+265,"istream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+275,"istream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+300,"istream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+266,"ostream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+276,"ostream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+277,"ostream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+305,"istream_val_f",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+306,"ostream_rdy_f",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+267,"istream_msg_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,"istream_msg_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("imul ");
    tracep->declBit(c+298,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"istream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"istream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+300,"istream_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+276,"ostream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"ostream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+277,"ostream_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+278,"a_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+279,"b_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+280,"result_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+281,"result_reg_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+282,"add_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+283,"b_lsb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+284,"is_b_zero",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+285,"product",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declArray(c+1,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+129,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+130,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("ctrl ");
    tracep->declBit(c+298,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"istream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"istream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"ostream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"ostream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"a_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"b_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"result_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+281,"result_reg_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"add_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+283,"b_lsb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"is_b_zero",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+307,"STATE_IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+308,"STATE_CALC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+309,"STATE_DONE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+286,"state_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+270,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+271,"istream_go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+272,"ostream_go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+284,"is_calc_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+310,"a_x",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+310,"a_lsh",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+311,"a_ld",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+310,"b_x",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+310,"b_rsh",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+311,"b_ld",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+310,"res_x",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+310,"res_add",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+311,"res_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+310,"add_x",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+310,"add_add",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+311,"add_res",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+283,"do_sh_add",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+287,"do_sh",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpath ");
    tracep->declBit(c+298,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+302,"istream_msg_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+303,"istream_msg_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+285,"ostream_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+278,"a_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"b_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"result_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+281,"result_reg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"add_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+283,"b_lsb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"is_b_zero",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+288,"rshifter_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,"b_mux_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,"b_reg_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,"calc_shamt_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+291,"lshifter_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+274,"a_mux_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,"a_reg_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,"add_mux_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,"result_mux_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,"result_reg_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,"add_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("a_mux ");
    tracep->declBus(c+312,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+291,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+302,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+278,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+274,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("a_reg ");
    tracep->declBus(c+312,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+298,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+292,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+274,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add ");
    tracep->declBus(c+312,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+292,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+285,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+295,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add_mux ");
    tracep->declBus(c+312,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+295,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+285,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+282,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+293,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b_mux ");
    tracep->declBus(c+312,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+288,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+303,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+279,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+273,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b_reg ");
    tracep->declBus(c+312,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+298,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+289,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+273,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b_zero_cmp ");
    tracep->declBus(c+312,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+289,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+284,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_shamt ");
    tracep->declBus(c+296,"in_",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+290,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lshifter ");
    tracep->declBus(c+312,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+313,"p_shamt_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+292,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+290,"shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+291,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_mux ");
    tracep->declBus(c+312,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+293,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+314,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+280,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+294,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg ");
    tracep->declBus(c+312,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+298,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+285,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+294,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+281,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rshifter ");
    tracep->declBus(c+312,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+313,"p_shamt_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+289,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+290,"shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+288,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("vc_trace ");
    tracep->declBit(c+298,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+131,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+132,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+133,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+134,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+315,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+316,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+135,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+263,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+297,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+304,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+269,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
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
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__unnamedblk1__DOT__x),32);
    bufp->fullCData(oldp+270,(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next),2);
    bufp->fullBit(oldp+271,(vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go));
    bufp->fullBit(oldp+272,(vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go));
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out),32);
    bufp->fullBit(oldp+275,(vlSelf->top__DOT__istream_rdy));
    bufp->fullBit(oldp+276,(vlSelf->top__DOT__ostream_val));
    bufp->fullIData(oldp+277,(vlSelf->top__DOT__ostream_msg),32);
    bufp->fullBit(oldp+278,(vlSelf->top__DOT__imul__DOT__a_mux_sel));
    bufp->fullBit(oldp+279,(vlSelf->top__DOT__imul__DOT__b_mux_sel));
    bufp->fullBit(oldp+280,(vlSelf->top__DOT__imul__DOT__result_mux_sel));
    bufp->fullBit(oldp+281,(vlSelf->top__DOT__imul__DOT__result_reg_en));
    bufp->fullBit(oldp+282,(vlSelf->top__DOT__imul__DOT__add_mux_sel));
    bufp->fullBit(oldp+283,((1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)));
    bufp->fullBit(oldp+284,((0U == vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)));
    bufp->fullIData(oldp+285,(vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out),32);
    bufp->fullCData(oldp+286,(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg),2);
    bufp->fullBit(oldp+287,((1U & (~ vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))));
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out),32);
    bufp->fullIData(oldp+289,(vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out),32);
    bufp->fullCData(oldp+290,(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out),4);
    bufp->fullIData(oldp+291,(vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out),32);
    bufp->fullIData(oldp+292,(vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out),32);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out),32);
    bufp->fullIData(oldp+294,(vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out),32);
    bufp->fullIData(oldp+295,(vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out),32);
    bufp->fullCData(oldp+296,((0xffU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)),8);
    bufp->fullIData(oldp+297,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles),32);
    bufp->fullBit(oldp+298,(vlSelf->clk));
    bufp->fullBit(oldp+299,(vlSelf->linetrace));
    bufp->fullQData(oldp+300,(vlSelf->top__DOT__istream_msg),64);
    bufp->fullIData(oldp+302,((IData)((vlSelf->top__DOT__istream_msg 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+303,((IData)(vlSelf->top__DOT__istream_msg)),32);
    bufp->fullCData(oldp+304,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level),4);
    bufp->fullBit(oldp+305,(vlSelf->top__DOT__istream_val_f));
    bufp->fullBit(oldp+306,(vlSelf->top__DOT__ostream_rdy_f));
    bufp->fullCData(oldp+307,(0U),2);
    bufp->fullCData(oldp+308,(1U),2);
    bufp->fullCData(oldp+309,(2U),2);
    bufp->fullBit(oldp+310,(0U));
    bufp->fullBit(oldp+311,(1U));
    bufp->fullIData(oldp+312,(0x20U),32);
    bufp->fullIData(oldp+313,(4U),32);
    bufp->fullIData(oldp+314,(0U),32);
    bufp->fullIData(oldp+315,(0x200U),32);
    bufp->fullIData(oldp+316,(0x1000U),32);
}
