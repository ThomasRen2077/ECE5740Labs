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
    tracep->declBit(c+1545,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1546,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+20,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2,"memreq_msg_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,"memreq_msg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,"memresp_msg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,"cache_req_msg_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,"cache_req_msg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,"cache_resp_msg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,"reg_en_M0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+6,"tarray_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+7,"tarray_en2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+8,"tarray_wen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+9,"tarray_wen2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+10,"z6b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+11,"darray_write_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+12,"darray_wen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+13,"darray_wen2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+14,"write_en_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+15,"spill_one_word_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+16,"refill_one_word_req_sent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+17,"refill_one_word_resp_received",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+18,"Spill_or_Refill_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+89,"tarray_match",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+90,"current_dirty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+91,"spill_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+173,"refill_req_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+174,"refill_resp_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+92,"current_lru",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+93,"flush_dirty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+19,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+175,"flush_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+22,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+26,"memreq_msg_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"memreq_msg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"memresp_msg_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+169,"cache_req_msg_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"cache_req_msg_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"cache_resp_msg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+29,"reg_en_M0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"tarray_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"tarray_en2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"tarray_wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"tarray_wen2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"z6b_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"darray_write_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"darray_wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"darray_wen2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"write_en_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"spill_one_word_done",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"refill_one_word_req_sent",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"refill_one_word_resp_received",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"Spill_or_Refill_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"tarray_match",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"current_dirty",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"spill_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+176,"refill_req_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"refill_resp_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"current_lru",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+100,"flush_dirty",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"flush_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1552,"c_reset_vector",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1501,"cache_request_addr_M0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1467,"cache_request_data_M0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+179+i*1,"tag_array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 20,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+211+i*1,"tag_array2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 20,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+243+i*1,"dirty_array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+275+i*1,"dirty_array2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+307+i*1,"valid_array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+339+i*1,"valid_array2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+371+i*1,"lru_array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    tracep->declBus(c+1502,"current_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 20,0);
    tracep->declBus(c+1503,"index_M0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1504,"offset_M0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+101,"tarray_match1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+102,"tarray_match2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+1468,"repl_cachereq_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 511,0);
    tracep->declBus(c+1553,"mask",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1505,"z6b_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1547,"z6b_mux_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,"spill_initial_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,"spill_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,"spill_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+404,"flush_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+105,"index_spill",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+106,"Spill_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 20,0);
    tracep->declBus(c+107,"cache_to_mem_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,"refill_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+405,"refill_req_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+406,"refill_resp_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declArray(c+407,"refill_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 511,0);
    tracep->declArray(c+55,"write_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 511,0);
    tracep->declBus(c+1548,"write_word_enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+1506,"offset_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+423+i*16,"data_array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 511,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+935+i*16,"data_array2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 511,0);
    }
    tracep->declArray(c+108,"data_array_output",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 511,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1447,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1448,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1449,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__FLush_dirty_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__FLush_dirty_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1554,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+124,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+125,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBit(c+126,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+127,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__cache_request_addr_reg_M0__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__cache_request_addr_reg_M0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1555,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1552,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+23,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1507,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+51,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__cache_request_data_reg_M0__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__cache_request_data_reg_M0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1555,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1552,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+24,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1484,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+54,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__z6b_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__z6b_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1555,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1508,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1509,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+44,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1549,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__Spill_or_Refill_Mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__Spill_or_Refill_Mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1555,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+128,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+171,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+45,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+172,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__spill_index_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__spill_index_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1556,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1510,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1450,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+46,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+129,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__Spill_tag_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__Spill_tag_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1557,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+130,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 20,0);
    tracep->declBus(c+131,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 20,0);
    tracep->declBit(c+132,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+133,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 20,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__darray_write_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__darray_write_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1558,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+1485,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
    tracep->declArray(c+1451,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
    tracep->declBit(c+47,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+71,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__way_output_sel_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__way_output_sel_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1558,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+1513,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
    tracep->declArray(c+1529,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
    tracep->declBit(c+134,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+135,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__word_en_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__word_en_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1559,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1550,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1511,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+48,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1551,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__output_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__output_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1555,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+151,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+152,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+154,"in3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+155,"in4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+156,"in5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+157,"in6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+158,"in7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+159,"in8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+160,"in9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+161,"in10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+162,"in11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+163,"in12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+164,"in13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+165,"in14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+166,"in15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1512,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+167,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
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
    tracep->pushNamePrefix("FLush_dirty_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__FLush_dirty_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Spill_or_Refill_Mux ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__Spill_or_Refill_Mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Spill_tag_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__Spill_tag_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_request_addr_reg_M0 ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__cache_request_addr_reg_M0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_request_data_reg_M0 ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__cache_request_data_reg_M0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("darray_write_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__darray_write_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("output_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__output_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spill_index_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__spill_index_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("way_output_sel_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__way_output_sel_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("word_en_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__word_en_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("z6b_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__z6b_mux__0(vlSelf, tracep);
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
    bufp->fullBit(oldp+1,(vlSymsp->TOP__top.__PVT__reset));
    bufp->fullIData(oldp+2,(vlSymsp->TOP__top.__PVT__memreq_msg_addr),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__top.__PVT__memreq_msg_data),32);
    bufp->fullIData(oldp+4,(vlSymsp->TOP__top.__PVT__cache_resp_msg_data),32);
    bufp->fullBit(oldp+5,(vlSymsp->TOP__top.__PVT__reg_en_M0));
    bufp->fullBit(oldp+6,(vlSymsp->TOP__top.__PVT__tarray_en));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__top.__PVT__tarray_en2));
    bufp->fullBit(oldp+8,(vlSymsp->TOP__top.__PVT__tarray_wen));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__top.__PVT__tarray_wen2));
    bufp->fullBit(oldp+10,(vlSymsp->TOP__top.__PVT__z6b_sel));
    bufp->fullBit(oldp+11,(vlSymsp->TOP__top.__PVT__darray_write_mux_sel));
    bufp->fullBit(oldp+12,(vlSymsp->TOP__top.__PVT__darray_wen));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__top.__PVT__darray_wen2));
    bufp->fullBit(oldp+14,(vlSymsp->TOP__top.__PVT__write_en_sel));
    bufp->fullBit(oldp+15,(vlSymsp->TOP__top.__PVT__spill_one_word_done));
    bufp->fullBit(oldp+16,(vlSymsp->TOP__top.__PVT__refill_one_word_req_sent));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__top.__PVT__refill_one_word_resp_received));
    bufp->fullBit(oldp+18,(vlSymsp->TOP__top.__PVT__Spill_or_Refill_sel));
    bufp->fullBit(oldp+19,(vlSymsp->TOP__top.__PVT__flush));
    bufp->fullBit(oldp+20,(vlSymsp->TOP__top.clk));
    bufp->fullBit(oldp+21,(vlSymsp->TOP__top.linetrace));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__top__DUT.__PVT__clk));
    bufp->fullBit(oldp+23,(vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0.__PVT__clk));
    bufp->fullBit(oldp+24,(vlSymsp->TOP__top__DUT__cache_request_data_reg_M0.__PVT__clk));
    bufp->fullBit(oldp+25,(vlSymsp->TOP__top__DUT.__PVT__reset));
    bufp->fullIData(oldp+26,(vlSymsp->TOP__top__DUT.__PVT__memreq_msg_addr),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__top__DUT.__PVT__memreq_msg_data),32);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__top__DUT.__PVT__cache_resp_msg_data),32);
    bufp->fullBit(oldp+29,(vlSymsp->TOP__top__DUT.__PVT__reg_en_M0));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__top__DUT.__PVT__tarray_en));
    bufp->fullBit(oldp+31,(vlSymsp->TOP__top__DUT.__PVT__tarray_en2));
    bufp->fullBit(oldp+32,(vlSymsp->TOP__top__DUT.__PVT__tarray_wen));
    bufp->fullBit(oldp+33,(vlSymsp->TOP__top__DUT.__PVT__tarray_wen2));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__top__DUT.__PVT__z6b_sel));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__top__DUT.__PVT__darray_write_mux_sel));
    bufp->fullBit(oldp+36,(vlSymsp->TOP__top__DUT.__PVT__darray_wen));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__top__DUT.__PVT__darray_wen2));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__top__DUT.__PVT__write_en_sel));
    bufp->fullBit(oldp+39,(vlSymsp->TOP__top__DUT.__PVT__spill_one_word_done));
    bufp->fullBit(oldp+40,(vlSymsp->TOP__top__DUT.__PVT__refill_one_word_req_sent));
    bufp->fullBit(oldp+41,(vlSymsp->TOP__top__DUT.__PVT__refill_one_word_resp_received));
    bufp->fullBit(oldp+42,(vlSymsp->TOP__top__DUT.__PVT__Spill_or_Refill_sel));
    bufp->fullBit(oldp+43,(vlSymsp->TOP__top__DUT.__PVT__flush));
    bufp->fullBit(oldp+44,(vlSymsp->TOP__top__DUT__z6b_mux.__PVT__sel));
    bufp->fullBit(oldp+45,(vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux.__PVT__sel));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__top__DUT__spill_index_mux.__PVT__sel));
    bufp->fullBit(oldp+47,(vlSymsp->TOP__top__DUT__darray_write_mux.__PVT__sel));
    bufp->fullBit(oldp+48,(vlSymsp->TOP__top__DUT__word_en_mux.__PVT__sel));
    bufp->fullBit(oldp+49,(vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0.__PVT__reset));
    bufp->fullIData(oldp+50,(vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0.__PVT__d),32);
    bufp->fullBit(oldp+51,(vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0.__PVT__en));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__top__DUT__cache_request_data_reg_M0.__PVT__reset));
    bufp->fullIData(oldp+53,(vlSymsp->TOP__top__DUT__cache_request_data_reg_M0.__PVT__d),32);
    bufp->fullBit(oldp+54,(vlSymsp->TOP__top__DUT__cache_request_data_reg_M0.__PVT__en));
    bufp->fullWData(oldp+55,(vlSymsp->TOP__top__DUT.__PVT__write_data),512);
    bufp->fullWData(oldp+71,(vlSymsp->TOP__top__DUT__darray_write_mux.__PVT__out),512);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__top.__PVT__memresp_msg_data),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__top.__PVT__cache_req_msg_data),32);
    bufp->fullBit(oldp+89,(vlSymsp->TOP__top.__PVT__tarray_match));
    bufp->fullBit(oldp+90,(vlSymsp->TOP__top.__PVT__current_dirty));
    bufp->fullBit(oldp+91,(vlSymsp->TOP__top.__PVT__spill_done));
    bufp->fullBit(oldp+92,(vlSymsp->TOP__top.__PVT__current_lru));
    bufp->fullBit(oldp+93,(vlSymsp->TOP__top.__PVT__flush_dirty));
    bufp->fullIData(oldp+94,(vlSymsp->TOP__top__DUT.__PVT__memresp_msg_data),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__top__DUT.__PVT__cache_req_msg_data),32);
    bufp->fullBit(oldp+96,(vlSymsp->TOP__top__DUT.__PVT__tarray_match));
    bufp->fullBit(oldp+97,(vlSymsp->TOP__top__DUT.__PVT__current_dirty));
    bufp->fullBit(oldp+98,(vlSymsp->TOP__top__DUT.__PVT__spill_done));
    bufp->fullBit(oldp+99,(vlSymsp->TOP__top__DUT.__PVT__current_lru));
    bufp->fullBit(oldp+100,(vlSymsp->TOP__top__DUT.__PVT__flush_dirty));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__top__DUT.__PVT__tarray_match1));
    bufp->fullBit(oldp+102,(vlSymsp->TOP__top__DUT.__PVT__tarray_match2));
    bufp->fullIData(oldp+103,(vlSymsp->TOP__top__DUT.__PVT__spill_initial_addr),32);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__top__DUT.__PVT__spill_addr),32);
    bufp->fullCData(oldp+105,(vlSymsp->TOP__top__DUT.__PVT__index_spill),5);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__top__DUT.__PVT__Spill_tag),21);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__top__DUT.__PVT__cache_to_mem_data),32);
    bufp->fullWData(oldp+108,(vlSymsp->TOP__top__DUT.__PVT__data_array_output),512);
    bufp->fullBit(oldp+124,(vlSymsp->TOP__top__DUT__FLush_dirty_mux.__PVT__in0));
    bufp->fullBit(oldp+125,(vlSymsp->TOP__top__DUT__FLush_dirty_mux.__PVT__in1));
    bufp->fullBit(oldp+126,(vlSymsp->TOP__top__DUT__FLush_dirty_mux.__PVT__sel));
    bufp->fullBit(oldp+127,(vlSymsp->TOP__top__DUT__FLush_dirty_mux.__PVT__out));
    bufp->fullIData(oldp+128,(vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux.__PVT__in0),32);
    bufp->fullCData(oldp+129,(vlSymsp->TOP__top__DUT__spill_index_mux.__PVT__out),5);
    bufp->fullIData(oldp+130,(vlSymsp->TOP__top__DUT__Spill_tag_mux.__PVT__in0),21);
    bufp->fullIData(oldp+131,(vlSymsp->TOP__top__DUT__Spill_tag_mux.__PVT__in1),21);
    bufp->fullBit(oldp+132,(vlSymsp->TOP__top__DUT__Spill_tag_mux.__PVT__sel));
    bufp->fullIData(oldp+133,(vlSymsp->TOP__top__DUT__Spill_tag_mux.__PVT__out),21);
    bufp->fullBit(oldp+134,(vlSymsp->TOP__top__DUT__way_output_sel_mux.__PVT__sel));
    bufp->fullWData(oldp+135,(vlSymsp->TOP__top__DUT__way_output_sel_mux.__PVT__out),512);
    bufp->fullIData(oldp+151,(vlSymsp->TOP__top__DUT__output_mux.__PVT__in0),32);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__top__DUT__output_mux.__PVT__in1),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__top__DUT__output_mux.__PVT__in2),32);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__top__DUT__output_mux.__PVT__in3),32);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__top__DUT__output_mux.__PVT__in4),32);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__top__DUT__output_mux.__PVT__in5),32);
    bufp->fullIData(oldp+157,(vlSymsp->TOP__top__DUT__output_mux.__PVT__in6),32);
    bufp->fullIData(oldp+158,(vlSymsp->TOP__top__DUT__output_mux.__PVT__in7),32);
    bufp->fullIData(oldp+159,(vlSymsp->TOP__top__DUT__output_mux.__PVT__in8),32);
    bufp->fullIData(oldp+160,(vlSymsp->TOP__top__DUT__output_mux.__PVT__in9),32);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__top__DUT__output_mux.__PVT__in10),32);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__top__DUT__output_mux.__PVT__in11),32);
    bufp->fullIData(oldp+163,(vlSymsp->TOP__top__DUT__output_mux.__PVT__in12),32);
    bufp->fullIData(oldp+164,(vlSymsp->TOP__top__DUT__output_mux.__PVT__in13),32);
    bufp->fullIData(oldp+165,(vlSymsp->TOP__top__DUT__output_mux.__PVT__in14),32);
    bufp->fullIData(oldp+166,(vlSymsp->TOP__top__DUT__output_mux.__PVT__in15),32);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__top__DUT__output_mux.__PVT__out),32);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__top.__PVT__cache_req_msg_addr),32);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__top__DUT.__PVT__cache_req_msg_addr),32);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__top__DUT.__PVT__refill_addr),32);
    bufp->fullIData(oldp+171,(vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux.__PVT__in1),32);
    bufp->fullIData(oldp+172,(vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux.__PVT__out),32);
    bufp->fullBit(oldp+173,(vlSymsp->TOP__top.__PVT__refill_req_done));
    bufp->fullBit(oldp+174,(vlSymsp->TOP__top.__PVT__refill_resp_done));
    bufp->fullBit(oldp+175,(vlSymsp->TOP__top.__PVT__flush_done));
    bufp->fullBit(oldp+176,(vlSymsp->TOP__top__DUT.__PVT__refill_req_done));
    bufp->fullBit(oldp+177,(vlSymsp->TOP__top__DUT.__PVT__refill_resp_done));
    bufp->fullBit(oldp+178,(vlSymsp->TOP__top__DUT.__PVT__flush_done));
    bufp->fullIData(oldp+179,(vlSymsp->TOP__top__DUT.__PVT__tag_array[0]),21);
    bufp->fullIData(oldp+180,(vlSymsp->TOP__top__DUT.__PVT__tag_array[1]),21);
    bufp->fullIData(oldp+181,(vlSymsp->TOP__top__DUT.__PVT__tag_array[2]),21);
    bufp->fullIData(oldp+182,(vlSymsp->TOP__top__DUT.__PVT__tag_array[3]),21);
    bufp->fullIData(oldp+183,(vlSymsp->TOP__top__DUT.__PVT__tag_array[4]),21);
    bufp->fullIData(oldp+184,(vlSymsp->TOP__top__DUT.__PVT__tag_array[5]),21);
    bufp->fullIData(oldp+185,(vlSymsp->TOP__top__DUT.__PVT__tag_array[6]),21);
    bufp->fullIData(oldp+186,(vlSymsp->TOP__top__DUT.__PVT__tag_array[7]),21);
    bufp->fullIData(oldp+187,(vlSymsp->TOP__top__DUT.__PVT__tag_array[8]),21);
    bufp->fullIData(oldp+188,(vlSymsp->TOP__top__DUT.__PVT__tag_array[9]),21);
    bufp->fullIData(oldp+189,(vlSymsp->TOP__top__DUT.__PVT__tag_array[10]),21);
    bufp->fullIData(oldp+190,(vlSymsp->TOP__top__DUT.__PVT__tag_array[11]),21);
    bufp->fullIData(oldp+191,(vlSymsp->TOP__top__DUT.__PVT__tag_array[12]),21);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__top__DUT.__PVT__tag_array[13]),21);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__top__DUT.__PVT__tag_array[14]),21);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__top__DUT.__PVT__tag_array[15]),21);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__top__DUT.__PVT__tag_array[16]),21);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__top__DUT.__PVT__tag_array[17]),21);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__top__DUT.__PVT__tag_array[18]),21);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__top__DUT.__PVT__tag_array[19]),21);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__top__DUT.__PVT__tag_array[20]),21);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__top__DUT.__PVT__tag_array[21]),21);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__top__DUT.__PVT__tag_array[22]),21);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__top__DUT.__PVT__tag_array[23]),21);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__top__DUT.__PVT__tag_array[24]),21);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__top__DUT.__PVT__tag_array[25]),21);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__top__DUT.__PVT__tag_array[26]),21);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__top__DUT.__PVT__tag_array[27]),21);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__top__DUT.__PVT__tag_array[28]),21);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__top__DUT.__PVT__tag_array[29]),21);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__top__DUT.__PVT__tag_array[30]),21);
    bufp->fullIData(oldp+210,(vlSymsp->TOP__top__DUT.__PVT__tag_array[31]),21);
    bufp->fullIData(oldp+211,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[0]),21);
    bufp->fullIData(oldp+212,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[1]),21);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[2]),21);
    bufp->fullIData(oldp+214,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[3]),21);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[4]),21);
    bufp->fullIData(oldp+216,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[5]),21);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[6]),21);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[7]),21);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[8]),21);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[9]),21);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[10]),21);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[11]),21);
    bufp->fullIData(oldp+223,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[12]),21);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[13]),21);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[14]),21);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[15]),21);
    bufp->fullIData(oldp+227,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[16]),21);
    bufp->fullIData(oldp+228,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[17]),21);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[18]),21);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[19]),21);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[20]),21);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[21]),21);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[22]),21);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[23]),21);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[24]),21);
    bufp->fullIData(oldp+236,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[25]),21);
    bufp->fullIData(oldp+237,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[26]),21);
    bufp->fullIData(oldp+238,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[27]),21);
    bufp->fullIData(oldp+239,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[28]),21);
    bufp->fullIData(oldp+240,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[29]),21);
    bufp->fullIData(oldp+241,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[30]),21);
    bufp->fullIData(oldp+242,(vlSymsp->TOP__top__DUT.__PVT__tag_array2[31]),21);
    bufp->fullBit(oldp+243,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[0]));
    bufp->fullBit(oldp+244,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[1]));
    bufp->fullBit(oldp+245,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[2]));
    bufp->fullBit(oldp+246,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[3]));
    bufp->fullBit(oldp+247,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[4]));
    bufp->fullBit(oldp+248,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[5]));
    bufp->fullBit(oldp+249,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[6]));
    bufp->fullBit(oldp+250,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[7]));
    bufp->fullBit(oldp+251,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[8]));
    bufp->fullBit(oldp+252,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[9]));
    bufp->fullBit(oldp+253,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[10]));
    bufp->fullBit(oldp+254,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[11]));
    bufp->fullBit(oldp+255,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[12]));
    bufp->fullBit(oldp+256,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[13]));
    bufp->fullBit(oldp+257,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[14]));
    bufp->fullBit(oldp+258,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[15]));
    bufp->fullBit(oldp+259,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[16]));
    bufp->fullBit(oldp+260,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[17]));
    bufp->fullBit(oldp+261,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[18]));
    bufp->fullBit(oldp+262,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[19]));
    bufp->fullBit(oldp+263,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[20]));
    bufp->fullBit(oldp+264,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[21]));
    bufp->fullBit(oldp+265,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[22]));
    bufp->fullBit(oldp+266,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[23]));
    bufp->fullBit(oldp+267,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[24]));
    bufp->fullBit(oldp+268,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[25]));
    bufp->fullBit(oldp+269,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[26]));
    bufp->fullBit(oldp+270,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[27]));
    bufp->fullBit(oldp+271,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[28]));
    bufp->fullBit(oldp+272,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[29]));
    bufp->fullBit(oldp+273,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[30]));
    bufp->fullBit(oldp+274,(vlSymsp->TOP__top__DUT.__PVT__dirty_array[31]));
    bufp->fullBit(oldp+275,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[0]));
    bufp->fullBit(oldp+276,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[1]));
    bufp->fullBit(oldp+277,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[2]));
    bufp->fullBit(oldp+278,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[3]));
    bufp->fullBit(oldp+279,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[4]));
    bufp->fullBit(oldp+280,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[5]));
    bufp->fullBit(oldp+281,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[6]));
    bufp->fullBit(oldp+282,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[7]));
    bufp->fullBit(oldp+283,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[8]));
    bufp->fullBit(oldp+284,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[9]));
    bufp->fullBit(oldp+285,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[10]));
    bufp->fullBit(oldp+286,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[11]));
    bufp->fullBit(oldp+287,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[12]));
    bufp->fullBit(oldp+288,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[13]));
    bufp->fullBit(oldp+289,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[14]));
    bufp->fullBit(oldp+290,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[15]));
    bufp->fullBit(oldp+291,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[16]));
    bufp->fullBit(oldp+292,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[17]));
    bufp->fullBit(oldp+293,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[18]));
    bufp->fullBit(oldp+294,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[19]));
    bufp->fullBit(oldp+295,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[20]));
    bufp->fullBit(oldp+296,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[21]));
    bufp->fullBit(oldp+297,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[22]));
    bufp->fullBit(oldp+298,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[23]));
    bufp->fullBit(oldp+299,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[24]));
    bufp->fullBit(oldp+300,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[25]));
    bufp->fullBit(oldp+301,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[26]));
    bufp->fullBit(oldp+302,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[27]));
    bufp->fullBit(oldp+303,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[28]));
    bufp->fullBit(oldp+304,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[29]));
    bufp->fullBit(oldp+305,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[30]));
    bufp->fullBit(oldp+306,(vlSymsp->TOP__top__DUT.__PVT__dirty_array2[31]));
    bufp->fullBit(oldp+307,(vlSymsp->TOP__top__DUT.__PVT__valid_array[0]));
    bufp->fullBit(oldp+308,(vlSymsp->TOP__top__DUT.__PVT__valid_array[1]));
    bufp->fullBit(oldp+309,(vlSymsp->TOP__top__DUT.__PVT__valid_array[2]));
    bufp->fullBit(oldp+310,(vlSymsp->TOP__top__DUT.__PVT__valid_array[3]));
    bufp->fullBit(oldp+311,(vlSymsp->TOP__top__DUT.__PVT__valid_array[4]));
    bufp->fullBit(oldp+312,(vlSymsp->TOP__top__DUT.__PVT__valid_array[5]));
    bufp->fullBit(oldp+313,(vlSymsp->TOP__top__DUT.__PVT__valid_array[6]));
    bufp->fullBit(oldp+314,(vlSymsp->TOP__top__DUT.__PVT__valid_array[7]));
    bufp->fullBit(oldp+315,(vlSymsp->TOP__top__DUT.__PVT__valid_array[8]));
    bufp->fullBit(oldp+316,(vlSymsp->TOP__top__DUT.__PVT__valid_array[9]));
    bufp->fullBit(oldp+317,(vlSymsp->TOP__top__DUT.__PVT__valid_array[10]));
    bufp->fullBit(oldp+318,(vlSymsp->TOP__top__DUT.__PVT__valid_array[11]));
    bufp->fullBit(oldp+319,(vlSymsp->TOP__top__DUT.__PVT__valid_array[12]));
    bufp->fullBit(oldp+320,(vlSymsp->TOP__top__DUT.__PVT__valid_array[13]));
    bufp->fullBit(oldp+321,(vlSymsp->TOP__top__DUT.__PVT__valid_array[14]));
    bufp->fullBit(oldp+322,(vlSymsp->TOP__top__DUT.__PVT__valid_array[15]));
    bufp->fullBit(oldp+323,(vlSymsp->TOP__top__DUT.__PVT__valid_array[16]));
    bufp->fullBit(oldp+324,(vlSymsp->TOP__top__DUT.__PVT__valid_array[17]));
    bufp->fullBit(oldp+325,(vlSymsp->TOP__top__DUT.__PVT__valid_array[18]));
    bufp->fullBit(oldp+326,(vlSymsp->TOP__top__DUT.__PVT__valid_array[19]));
    bufp->fullBit(oldp+327,(vlSymsp->TOP__top__DUT.__PVT__valid_array[20]));
    bufp->fullBit(oldp+328,(vlSymsp->TOP__top__DUT.__PVT__valid_array[21]));
    bufp->fullBit(oldp+329,(vlSymsp->TOP__top__DUT.__PVT__valid_array[22]));
    bufp->fullBit(oldp+330,(vlSymsp->TOP__top__DUT.__PVT__valid_array[23]));
    bufp->fullBit(oldp+331,(vlSymsp->TOP__top__DUT.__PVT__valid_array[24]));
    bufp->fullBit(oldp+332,(vlSymsp->TOP__top__DUT.__PVT__valid_array[25]));
    bufp->fullBit(oldp+333,(vlSymsp->TOP__top__DUT.__PVT__valid_array[26]));
    bufp->fullBit(oldp+334,(vlSymsp->TOP__top__DUT.__PVT__valid_array[27]));
    bufp->fullBit(oldp+335,(vlSymsp->TOP__top__DUT.__PVT__valid_array[28]));
    bufp->fullBit(oldp+336,(vlSymsp->TOP__top__DUT.__PVT__valid_array[29]));
    bufp->fullBit(oldp+337,(vlSymsp->TOP__top__DUT.__PVT__valid_array[30]));
    bufp->fullBit(oldp+338,(vlSymsp->TOP__top__DUT.__PVT__valid_array[31]));
    bufp->fullBit(oldp+339,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[0]));
    bufp->fullBit(oldp+340,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[1]));
    bufp->fullBit(oldp+341,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[2]));
    bufp->fullBit(oldp+342,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[3]));
    bufp->fullBit(oldp+343,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[4]));
    bufp->fullBit(oldp+344,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[5]));
    bufp->fullBit(oldp+345,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[6]));
    bufp->fullBit(oldp+346,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[7]));
    bufp->fullBit(oldp+347,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[8]));
    bufp->fullBit(oldp+348,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[9]));
    bufp->fullBit(oldp+349,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[10]));
    bufp->fullBit(oldp+350,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[11]));
    bufp->fullBit(oldp+351,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[12]));
    bufp->fullBit(oldp+352,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[13]));
    bufp->fullBit(oldp+353,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[14]));
    bufp->fullBit(oldp+354,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[15]));
    bufp->fullBit(oldp+355,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[16]));
    bufp->fullBit(oldp+356,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[17]));
    bufp->fullBit(oldp+357,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[18]));
    bufp->fullBit(oldp+358,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[19]));
    bufp->fullBit(oldp+359,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[20]));
    bufp->fullBit(oldp+360,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[21]));
    bufp->fullBit(oldp+361,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[22]));
    bufp->fullBit(oldp+362,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[23]));
    bufp->fullBit(oldp+363,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[24]));
    bufp->fullBit(oldp+364,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[25]));
    bufp->fullBit(oldp+365,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[26]));
    bufp->fullBit(oldp+366,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[27]));
    bufp->fullBit(oldp+367,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[28]));
    bufp->fullBit(oldp+368,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[29]));
    bufp->fullBit(oldp+369,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[30]));
    bufp->fullBit(oldp+370,(vlSymsp->TOP__top__DUT.__PVT__valid_array2[31]));
    bufp->fullBit(oldp+371,(vlSymsp->TOP__top__DUT.__PVT__lru_array[0]));
    bufp->fullBit(oldp+372,(vlSymsp->TOP__top__DUT.__PVT__lru_array[1]));
    bufp->fullBit(oldp+373,(vlSymsp->TOP__top__DUT.__PVT__lru_array[2]));
    bufp->fullBit(oldp+374,(vlSymsp->TOP__top__DUT.__PVT__lru_array[3]));
    bufp->fullBit(oldp+375,(vlSymsp->TOP__top__DUT.__PVT__lru_array[4]));
    bufp->fullBit(oldp+376,(vlSymsp->TOP__top__DUT.__PVT__lru_array[5]));
    bufp->fullBit(oldp+377,(vlSymsp->TOP__top__DUT.__PVT__lru_array[6]));
    bufp->fullBit(oldp+378,(vlSymsp->TOP__top__DUT.__PVT__lru_array[7]));
    bufp->fullBit(oldp+379,(vlSymsp->TOP__top__DUT.__PVT__lru_array[8]));
    bufp->fullBit(oldp+380,(vlSymsp->TOP__top__DUT.__PVT__lru_array[9]));
    bufp->fullBit(oldp+381,(vlSymsp->TOP__top__DUT.__PVT__lru_array[10]));
    bufp->fullBit(oldp+382,(vlSymsp->TOP__top__DUT.__PVT__lru_array[11]));
    bufp->fullBit(oldp+383,(vlSymsp->TOP__top__DUT.__PVT__lru_array[12]));
    bufp->fullBit(oldp+384,(vlSymsp->TOP__top__DUT.__PVT__lru_array[13]));
    bufp->fullBit(oldp+385,(vlSymsp->TOP__top__DUT.__PVT__lru_array[14]));
    bufp->fullBit(oldp+386,(vlSymsp->TOP__top__DUT.__PVT__lru_array[15]));
    bufp->fullBit(oldp+387,(vlSymsp->TOP__top__DUT.__PVT__lru_array[16]));
    bufp->fullBit(oldp+388,(vlSymsp->TOP__top__DUT.__PVT__lru_array[17]));
    bufp->fullBit(oldp+389,(vlSymsp->TOP__top__DUT.__PVT__lru_array[18]));
    bufp->fullBit(oldp+390,(vlSymsp->TOP__top__DUT.__PVT__lru_array[19]));
    bufp->fullBit(oldp+391,(vlSymsp->TOP__top__DUT.__PVT__lru_array[20]));
    bufp->fullBit(oldp+392,(vlSymsp->TOP__top__DUT.__PVT__lru_array[21]));
    bufp->fullBit(oldp+393,(vlSymsp->TOP__top__DUT.__PVT__lru_array[22]));
    bufp->fullBit(oldp+394,(vlSymsp->TOP__top__DUT.__PVT__lru_array[23]));
    bufp->fullBit(oldp+395,(vlSymsp->TOP__top__DUT.__PVT__lru_array[24]));
    bufp->fullBit(oldp+396,(vlSymsp->TOP__top__DUT.__PVT__lru_array[25]));
    bufp->fullBit(oldp+397,(vlSymsp->TOP__top__DUT.__PVT__lru_array[26]));
    bufp->fullBit(oldp+398,(vlSymsp->TOP__top__DUT.__PVT__lru_array[27]));
    bufp->fullBit(oldp+399,(vlSymsp->TOP__top__DUT.__PVT__lru_array[28]));
    bufp->fullBit(oldp+400,(vlSymsp->TOP__top__DUT.__PVT__lru_array[29]));
    bufp->fullBit(oldp+401,(vlSymsp->TOP__top__DUT.__PVT__lru_array[30]));
    bufp->fullBit(oldp+402,(vlSymsp->TOP__top__DUT.__PVT__lru_array[31]));
    bufp->fullCData(oldp+403,(vlSymsp->TOP__top__DUT.__PVT__spill_counter),5);
    bufp->fullCData(oldp+404,(vlSymsp->TOP__top__DUT.__PVT__flush_counter),7);
    bufp->fullCData(oldp+405,(vlSymsp->TOP__top__DUT.__PVT__refill_req_counter),5);
    bufp->fullCData(oldp+406,(vlSymsp->TOP__top__DUT.__PVT__refill_resp_counter),5);
    bufp->fullWData(oldp+407,(vlSymsp->TOP__top__DUT.__PVT__refill_data),512);
    bufp->fullWData(oldp+423,(vlSymsp->TOP__top__DUT.__PVT__data_array[0]),512);
    bufp->fullWData(oldp+439,(vlSymsp->TOP__top__DUT.__PVT__data_array[1]),512);
    bufp->fullWData(oldp+455,(vlSymsp->TOP__top__DUT.__PVT__data_array[2]),512);
    bufp->fullWData(oldp+471,(vlSymsp->TOP__top__DUT.__PVT__data_array[3]),512);
    bufp->fullWData(oldp+487,(vlSymsp->TOP__top__DUT.__PVT__data_array[4]),512);
    bufp->fullWData(oldp+503,(vlSymsp->TOP__top__DUT.__PVT__data_array[5]),512);
    bufp->fullWData(oldp+519,(vlSymsp->TOP__top__DUT.__PVT__data_array[6]),512);
    bufp->fullWData(oldp+535,(vlSymsp->TOP__top__DUT.__PVT__data_array[7]),512);
    bufp->fullWData(oldp+551,(vlSymsp->TOP__top__DUT.__PVT__data_array[8]),512);
    bufp->fullWData(oldp+567,(vlSymsp->TOP__top__DUT.__PVT__data_array[9]),512);
    bufp->fullWData(oldp+583,(vlSymsp->TOP__top__DUT.__PVT__data_array[10]),512);
    bufp->fullWData(oldp+599,(vlSymsp->TOP__top__DUT.__PVT__data_array[11]),512);
    bufp->fullWData(oldp+615,(vlSymsp->TOP__top__DUT.__PVT__data_array[12]),512);
    bufp->fullWData(oldp+631,(vlSymsp->TOP__top__DUT.__PVT__data_array[13]),512);
    bufp->fullWData(oldp+647,(vlSymsp->TOP__top__DUT.__PVT__data_array[14]),512);
    bufp->fullWData(oldp+663,(vlSymsp->TOP__top__DUT.__PVT__data_array[15]),512);
    bufp->fullWData(oldp+679,(vlSymsp->TOP__top__DUT.__PVT__data_array[16]),512);
    bufp->fullWData(oldp+695,(vlSymsp->TOP__top__DUT.__PVT__data_array[17]),512);
    bufp->fullWData(oldp+711,(vlSymsp->TOP__top__DUT.__PVT__data_array[18]),512);
    bufp->fullWData(oldp+727,(vlSymsp->TOP__top__DUT.__PVT__data_array[19]),512);
    bufp->fullWData(oldp+743,(vlSymsp->TOP__top__DUT.__PVT__data_array[20]),512);
    bufp->fullWData(oldp+759,(vlSymsp->TOP__top__DUT.__PVT__data_array[21]),512);
    bufp->fullWData(oldp+775,(vlSymsp->TOP__top__DUT.__PVT__data_array[22]),512);
    bufp->fullWData(oldp+791,(vlSymsp->TOP__top__DUT.__PVT__data_array[23]),512);
    bufp->fullWData(oldp+807,(vlSymsp->TOP__top__DUT.__PVT__data_array[24]),512);
    bufp->fullWData(oldp+823,(vlSymsp->TOP__top__DUT.__PVT__data_array[25]),512);
    bufp->fullWData(oldp+839,(vlSymsp->TOP__top__DUT.__PVT__data_array[26]),512);
    bufp->fullWData(oldp+855,(vlSymsp->TOP__top__DUT.__PVT__data_array[27]),512);
    bufp->fullWData(oldp+871,(vlSymsp->TOP__top__DUT.__PVT__data_array[28]),512);
    bufp->fullWData(oldp+887,(vlSymsp->TOP__top__DUT.__PVT__data_array[29]),512);
    bufp->fullWData(oldp+903,(vlSymsp->TOP__top__DUT.__PVT__data_array[30]),512);
    bufp->fullWData(oldp+919,(vlSymsp->TOP__top__DUT.__PVT__data_array[31]),512);
    bufp->fullWData(oldp+935,(vlSymsp->TOP__top__DUT.__PVT__data_array2[0]),512);
    bufp->fullWData(oldp+951,(vlSymsp->TOP__top__DUT.__PVT__data_array2[1]),512);
    bufp->fullWData(oldp+967,(vlSymsp->TOP__top__DUT.__PVT__data_array2[2]),512);
    bufp->fullWData(oldp+983,(vlSymsp->TOP__top__DUT.__PVT__data_array2[3]),512);
    bufp->fullWData(oldp+999,(vlSymsp->TOP__top__DUT.__PVT__data_array2[4]),512);
    bufp->fullWData(oldp+1015,(vlSymsp->TOP__top__DUT.__PVT__data_array2[5]),512);
    bufp->fullWData(oldp+1031,(vlSymsp->TOP__top__DUT.__PVT__data_array2[6]),512);
    bufp->fullWData(oldp+1047,(vlSymsp->TOP__top__DUT.__PVT__data_array2[7]),512);
    bufp->fullWData(oldp+1063,(vlSymsp->TOP__top__DUT.__PVT__data_array2[8]),512);
    bufp->fullWData(oldp+1079,(vlSymsp->TOP__top__DUT.__PVT__data_array2[9]),512);
    bufp->fullWData(oldp+1095,(vlSymsp->TOP__top__DUT.__PVT__data_array2[10]),512);
    bufp->fullWData(oldp+1111,(vlSymsp->TOP__top__DUT.__PVT__data_array2[11]),512);
    bufp->fullWData(oldp+1127,(vlSymsp->TOP__top__DUT.__PVT__data_array2[12]),512);
    bufp->fullWData(oldp+1143,(vlSymsp->TOP__top__DUT.__PVT__data_array2[13]),512);
    bufp->fullWData(oldp+1159,(vlSymsp->TOP__top__DUT.__PVT__data_array2[14]),512);
    bufp->fullWData(oldp+1175,(vlSymsp->TOP__top__DUT.__PVT__data_array2[15]),512);
    bufp->fullWData(oldp+1191,(vlSymsp->TOP__top__DUT.__PVT__data_array2[16]),512);
    bufp->fullWData(oldp+1207,(vlSymsp->TOP__top__DUT.__PVT__data_array2[17]),512);
    bufp->fullWData(oldp+1223,(vlSymsp->TOP__top__DUT.__PVT__data_array2[18]),512);
    bufp->fullWData(oldp+1239,(vlSymsp->TOP__top__DUT.__PVT__data_array2[19]),512);
    bufp->fullWData(oldp+1255,(vlSymsp->TOP__top__DUT.__PVT__data_array2[20]),512);
    bufp->fullWData(oldp+1271,(vlSymsp->TOP__top__DUT.__PVT__data_array2[21]),512);
    bufp->fullWData(oldp+1287,(vlSymsp->TOP__top__DUT.__PVT__data_array2[22]),512);
    bufp->fullWData(oldp+1303,(vlSymsp->TOP__top__DUT.__PVT__data_array2[23]),512);
    bufp->fullWData(oldp+1319,(vlSymsp->TOP__top__DUT.__PVT__data_array2[24]),512);
    bufp->fullWData(oldp+1335,(vlSymsp->TOP__top__DUT.__PVT__data_array2[25]),512);
    bufp->fullWData(oldp+1351,(vlSymsp->TOP__top__DUT.__PVT__data_array2[26]),512);
    bufp->fullWData(oldp+1367,(vlSymsp->TOP__top__DUT.__PVT__data_array2[27]),512);
    bufp->fullWData(oldp+1383,(vlSymsp->TOP__top__DUT.__PVT__data_array2[28]),512);
    bufp->fullWData(oldp+1399,(vlSymsp->TOP__top__DUT.__PVT__data_array2[29]),512);
    bufp->fullWData(oldp+1415,(vlSymsp->TOP__top__DUT.__PVT__data_array2[30]),512);
    bufp->fullWData(oldp+1431,(vlSymsp->TOP__top__DUT.__PVT__data_array2[31]),512);
    bufp->fullCData(oldp+1447,(vlSymsp->TOP__top__DUT.__PVT__unnamedblk1__DOT__i),6);
    bufp->fullCData(oldp+1448,(vlSymsp->TOP__top__DUT.__PVT__unnamedblk2__DOT__i),6);
    bufp->fullCData(oldp+1449,(vlSymsp->TOP__top__DUT.__PVT__unnamedblk3__DOT__i),6);
    bufp->fullCData(oldp+1450,(vlSymsp->TOP__top__DUT__spill_index_mux.__PVT__in1),5);
    bufp->fullWData(oldp+1451,(vlSymsp->TOP__top__DUT__darray_write_mux.__PVT__in1),512);
    bufp->fullIData(oldp+1467,(vlSymsp->TOP__top__DUT.__PVT__cache_request_data_M0),32);
    bufp->fullWData(oldp+1468,(vlSymsp->TOP__top__DUT.__PVT__repl_cachereq_data),512);
    bufp->fullIData(oldp+1484,(vlSymsp->TOP__top__DUT__cache_request_data_reg_M0.__PVT__q),32);
    bufp->fullWData(oldp+1485,(vlSymsp->TOP__top__DUT__darray_write_mux.__PVT__in0),512);
    bufp->fullIData(oldp+1501,(vlSymsp->TOP__top__DUT.__PVT__cache_request_addr_M0),32);
    bufp->fullIData(oldp+1502,(vlSymsp->TOP__top__DUT.__PVT__current_tag),21);
    bufp->fullCData(oldp+1503,(vlSymsp->TOP__top__DUT.__PVT__index_M0),5);
    bufp->fullCData(oldp+1504,(vlSymsp->TOP__top__DUT.__PVT__offset_M0),4);
    bufp->fullIData(oldp+1505,(vlSymsp->TOP__top__DUT.__PVT__z6b_result),32);
    bufp->fullSData(oldp+1506,(vlSymsp->TOP__top__DUT.__PVT__offset_write),16);
    bufp->fullIData(oldp+1507,(vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0.__PVT__q),32);
    bufp->fullIData(oldp+1508,(vlSymsp->TOP__top__DUT__z6b_mux.__PVT__in0),32);
    bufp->fullIData(oldp+1509,(vlSymsp->TOP__top__DUT__z6b_mux.__PVT__in1),32);
    bufp->fullCData(oldp+1510,(vlSymsp->TOP__top__DUT__spill_index_mux.__PVT__in0),5);
    bufp->fullSData(oldp+1511,(vlSymsp->TOP__top__DUT__word_en_mux.__PVT__in1),16);
    bufp->fullCData(oldp+1512,(vlSymsp->TOP__top__DUT__output_mux.__PVT__sel),4);
    bufp->fullWData(oldp+1513,(vlSymsp->TOP__top__DUT__way_output_sel_mux.__PVT__in0),512);
    bufp->fullWData(oldp+1529,(vlSymsp->TOP__top__DUT__way_output_sel_mux.__PVT__in1),512);
    bufp->fullBit(oldp+1545,(vlSelf->clk));
    bufp->fullBit(oldp+1546,(vlSelf->linetrace));
    bufp->fullIData(oldp+1547,(vlSymsp->TOP__top__DUT.__PVT__z6b_mux_result),32);
    bufp->fullSData(oldp+1548,(vlSymsp->TOP__top__DUT.__PVT__write_word_enable),16);
    bufp->fullIData(oldp+1549,(vlSymsp->TOP__top__DUT__z6b_mux.__PVT__out),32);
    bufp->fullSData(oldp+1550,(vlSymsp->TOP__top__DUT__word_en_mux.__PVT__in0),16);
    bufp->fullSData(oldp+1551,(vlSymsp->TOP__top__DUT__word_en_mux.__PVT__out),16);
    bufp->fullIData(oldp+1552,(0U),32);
    bufp->fullIData(oldp+1553,(0xffffffc0U),32);
    bufp->fullIData(oldp+1554,(1U),32);
    bufp->fullIData(oldp+1555,(0x20U),32);
    bufp->fullIData(oldp+1556,(5U),32);
    bufp->fullIData(oldp+1557,(0x15U),32);
    bufp->fullIData(oldp+1558,(0x200U),32);
    bufp->fullIData(oldp+1559,(0x10U),32);
}
