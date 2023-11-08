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
    tracep->declBit(c+727,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+728,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+727,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+728,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2,"memreq_msg_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,"memreq_msg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,"memresp_msg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,"cache_req_msg_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,"cache_req_msg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,"cache_resp_msg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,"reg_en_M0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+6,"tarray_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+7,"tarray_wen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+8,"z6b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+9,"darray_write_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+10,"darray_wen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+11,"write_en_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+12,"spill_one_word_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+13,"refill_one_word_req_sent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+14,"refill_one_word_resp_received",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+15,"Spill_or_Refill_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+17,"tarray_match",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+18,"current_dirty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+40,"spill_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+41,"refill_req_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+42,"refill_resp_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+729,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("DUT ");
    tracep->declBit(c+727,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"memreq_msg_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"memreq_msg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"memresp_msg_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+16,"cache_req_msg_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"cache_req_msg_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"cache_resp_msg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5,"reg_en_M0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"tarray_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"tarray_wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"z6b_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"darray_write_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"darray_wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"write_en_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"spill_one_word_done",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"refill_one_word_req_sent",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"refill_one_word_resp_received",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"Spill_or_Refill_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"tarray_match",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"current_dirty",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"spill_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"refill_req_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"refill_resp_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+729,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+730,"c_reset_vector",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+43,"cache_request_addr_M0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,"cache_request_data_M0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+45+i*1,"tag_array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 20,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+77+i*1,"dirty_array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+109+i*1,"valid_array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    tracep->declBus(c+141,"current_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 20,0);
    tracep->declBus(c+142,"index_M0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+143,"offset_M0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+731,"mask",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+144,"z6b_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,"z6b_mux_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,"spill_initial_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,"spill_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,"spill_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,"cache_to_mem_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declArray(c+148,"repl_cachereq_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 511,0);
    tracep->declBus(c+20,"refill_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,"refill_req_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+165,"refill_resp_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declArray(c+166,"refill_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 511,0);
    tracep->declArray(c+21,"write_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 511,0);
    tracep->declBus(c+37,"write_word_enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+182,"offset_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+183+i*16,"data_array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 511,0);
    }
    tracep->declArray(c+695,"data_array_output",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 511,0);
    tracep->pushNamePrefix("Spill_or_Refill_Mux ");
    tracep->declBus(c+732,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+146,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+15,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_request_addr_reg_M0 ");
    tracep->declBus(c+732,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+730,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+727,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+43,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_request_data_reg_M0 ");
    tracep->declBus(c+732,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+730,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+727,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+44,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("darray_write_mux ");
    tracep->declBus(c+733,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+148,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
    tracep->declArray(c+166,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
    tracep->declBit(c+9,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+21,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("output_mux ");
    tracep->declBus(c+732,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+711,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+712,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+713,"in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+714,"in3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+715,"in4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+716,"in5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+717,"in6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+718,"in7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+719,"in8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+720,"in9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+721,"in10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+722,"in11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+723,"in12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+724,"in13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+725,"in14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+726,"in15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+143,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+38,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("word_en_mux ");
    tracep->declBus(c+734,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+735,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+182,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+11,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+37,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("z6b_mux ");
    tracep->declBus(c+732,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+43,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+144,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+8,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
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
    VlWide<16>/*511:0*/ __Vtemp_1;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__reset));
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__memreq_msg_addr),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__memreq_msg_data),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__cache_resp_msg_data),32);
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__reg_en_M0));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__tarray_en));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__tarray_wen));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__z6b_sel));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__darray_write_mux_sel));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__darray_wen));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__write_en_sel));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__spill_one_word_done));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__refill_one_word_req_sent));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__refill_one_word_resp_received));
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__Spill_or_Refill_sel));
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__cache_req_msg_addr),32);
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__tarray_match));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__current_dirty));
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__DUT__DOT__z6b_mux_result),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__DUT__DOT__refill_addr),32);
    bufp->fullWData(oldp+21,(vlSelf->top__DOT__DUT__DOT__write_data),512);
    bufp->fullSData(oldp+37,(vlSelf->top__DOT__DUT__DOT__write_word_enable),16);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__memresp_msg_data),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__DUT__DOT__cache_to_mem_data),32);
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__spill_done));
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__refill_req_done));
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__refill_resp_done));
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__DUT__DOT__cache_request_data_M0),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__DUT__DOT__tag_array[0]),21);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__DUT__DOT__tag_array[1]),21);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__DUT__DOT__tag_array[2]),21);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__DUT__DOT__tag_array[3]),21);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__DUT__DOT__tag_array[4]),21);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__DUT__DOT__tag_array[5]),21);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__DUT__DOT__tag_array[6]),21);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__DUT__DOT__tag_array[7]),21);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__DUT__DOT__tag_array[8]),21);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__DUT__DOT__tag_array[9]),21);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__DUT__DOT__tag_array[10]),21);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__DUT__DOT__tag_array[11]),21);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__DUT__DOT__tag_array[12]),21);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__DUT__DOT__tag_array[13]),21);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__DUT__DOT__tag_array[14]),21);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__DUT__DOT__tag_array[15]),21);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__DUT__DOT__tag_array[16]),21);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__DUT__DOT__tag_array[17]),21);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__DUT__DOT__tag_array[18]),21);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__DUT__DOT__tag_array[19]),21);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__DUT__DOT__tag_array[20]),21);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__DUT__DOT__tag_array[21]),21);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__DUT__DOT__tag_array[22]),21);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__DUT__DOT__tag_array[23]),21);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__DUT__DOT__tag_array[24]),21);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__DUT__DOT__tag_array[25]),21);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__DUT__DOT__tag_array[26]),21);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__DUT__DOT__tag_array[27]),21);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__DUT__DOT__tag_array[28]),21);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__DUT__DOT__tag_array[29]),21);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__DUT__DOT__tag_array[30]),21);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__DUT__DOT__tag_array[31]),21);
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__DUT__DOT__dirty_array[0]));
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__DUT__DOT__dirty_array[1]));
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__DUT__DOT__dirty_array[2]));
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__DUT__DOT__dirty_array[3]));
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__DUT__DOT__dirty_array[4]));
    bufp->fullBit(oldp+82,(vlSelf->top__DOT__DUT__DOT__dirty_array[5]));
    bufp->fullBit(oldp+83,(vlSelf->top__DOT__DUT__DOT__dirty_array[6]));
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__DUT__DOT__dirty_array[7]));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__DUT__DOT__dirty_array[8]));
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__DUT__DOT__dirty_array[9]));
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__DUT__DOT__dirty_array[10]));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__DUT__DOT__dirty_array[11]));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__DUT__DOT__dirty_array[12]));
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__DUT__DOT__dirty_array[13]));
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__DUT__DOT__dirty_array[14]));
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__DUT__DOT__dirty_array[15]));
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__DUT__DOT__dirty_array[16]));
    bufp->fullBit(oldp+94,(vlSelf->top__DOT__DUT__DOT__dirty_array[17]));
    bufp->fullBit(oldp+95,(vlSelf->top__DOT__DUT__DOT__dirty_array[18]));
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__DUT__DOT__dirty_array[19]));
    bufp->fullBit(oldp+97,(vlSelf->top__DOT__DUT__DOT__dirty_array[20]));
    bufp->fullBit(oldp+98,(vlSelf->top__DOT__DUT__DOT__dirty_array[21]));
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__DUT__DOT__dirty_array[22]));
    bufp->fullBit(oldp+100,(vlSelf->top__DOT__DUT__DOT__dirty_array[23]));
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__DUT__DOT__dirty_array[24]));
    bufp->fullBit(oldp+102,(vlSelf->top__DOT__DUT__DOT__dirty_array[25]));
    bufp->fullBit(oldp+103,(vlSelf->top__DOT__DUT__DOT__dirty_array[26]));
    bufp->fullBit(oldp+104,(vlSelf->top__DOT__DUT__DOT__dirty_array[27]));
    bufp->fullBit(oldp+105,(vlSelf->top__DOT__DUT__DOT__dirty_array[28]));
    bufp->fullBit(oldp+106,(vlSelf->top__DOT__DUT__DOT__dirty_array[29]));
    bufp->fullBit(oldp+107,(vlSelf->top__DOT__DUT__DOT__dirty_array[30]));
    bufp->fullBit(oldp+108,(vlSelf->top__DOT__DUT__DOT__dirty_array[31]));
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__DUT__DOT__valid_array[0]));
    bufp->fullBit(oldp+110,(vlSelf->top__DOT__DUT__DOT__valid_array[1]));
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__DUT__DOT__valid_array[2]));
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__DUT__DOT__valid_array[3]));
    bufp->fullBit(oldp+113,(vlSelf->top__DOT__DUT__DOT__valid_array[4]));
    bufp->fullBit(oldp+114,(vlSelf->top__DOT__DUT__DOT__valid_array[5]));
    bufp->fullBit(oldp+115,(vlSelf->top__DOT__DUT__DOT__valid_array[6]));
    bufp->fullBit(oldp+116,(vlSelf->top__DOT__DUT__DOT__valid_array[7]));
    bufp->fullBit(oldp+117,(vlSelf->top__DOT__DUT__DOT__valid_array[8]));
    bufp->fullBit(oldp+118,(vlSelf->top__DOT__DUT__DOT__valid_array[9]));
    bufp->fullBit(oldp+119,(vlSelf->top__DOT__DUT__DOT__valid_array[10]));
    bufp->fullBit(oldp+120,(vlSelf->top__DOT__DUT__DOT__valid_array[11]));
    bufp->fullBit(oldp+121,(vlSelf->top__DOT__DUT__DOT__valid_array[12]));
    bufp->fullBit(oldp+122,(vlSelf->top__DOT__DUT__DOT__valid_array[13]));
    bufp->fullBit(oldp+123,(vlSelf->top__DOT__DUT__DOT__valid_array[14]));
    bufp->fullBit(oldp+124,(vlSelf->top__DOT__DUT__DOT__valid_array[15]));
    bufp->fullBit(oldp+125,(vlSelf->top__DOT__DUT__DOT__valid_array[16]));
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__DUT__DOT__valid_array[17]));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__DUT__DOT__valid_array[18]));
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__DUT__DOT__valid_array[19]));
    bufp->fullBit(oldp+129,(vlSelf->top__DOT__DUT__DOT__valid_array[20]));
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__DUT__DOT__valid_array[21]));
    bufp->fullBit(oldp+131,(vlSelf->top__DOT__DUT__DOT__valid_array[22]));
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__DUT__DOT__valid_array[23]));
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__DUT__DOT__valid_array[24]));
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__DUT__DOT__valid_array[25]));
    bufp->fullBit(oldp+135,(vlSelf->top__DOT__DUT__DOT__valid_array[26]));
    bufp->fullBit(oldp+136,(vlSelf->top__DOT__DUT__DOT__valid_array[27]));
    bufp->fullBit(oldp+137,(vlSelf->top__DOT__DUT__DOT__valid_array[28]));
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__DUT__DOT__valid_array[29]));
    bufp->fullBit(oldp+139,(vlSelf->top__DOT__DUT__DOT__valid_array[30]));
    bufp->fullBit(oldp+140,(vlSelf->top__DOT__DUT__DOT__valid_array[31]));
    bufp->fullIData(oldp+141,((vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+142,((0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                        >> 6U))),5);
    bufp->fullCData(oldp+143,((0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                       >> 2U))),4);
    bufp->fullIData(oldp+144,((0xffffffc0U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__DUT__DOT__spill_initial_addr),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__DUT__DOT__spill_addr),32);
    bufp->fullCData(oldp+147,(vlSelf->top__DOT__DUT__DOT__spill_counter),5);
    __Vtemp_1[0U] = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    __Vtemp_1[1U] = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    __Vtemp_1[2U] = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    __Vtemp_1[3U] = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    __Vtemp_1[4U] = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    __Vtemp_1[5U] = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    __Vtemp_1[6U] = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    __Vtemp_1[7U] = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    __Vtemp_1[8U] = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    __Vtemp_1[9U] = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    __Vtemp_1[0xaU] = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    __Vtemp_1[0xbU] = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    __Vtemp_1[0xcU] = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    __Vtemp_1[0xdU] = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    __Vtemp_1[0xeU] = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    __Vtemp_1[0xfU] = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    bufp->fullWData(oldp+148,(__Vtemp_1),512);
    bufp->fullCData(oldp+164,(vlSelf->top__DOT__DUT__DOT__refill_req_counter),5);
    bufp->fullCData(oldp+165,(vlSelf->top__DOT__DUT__DOT__refill_resp_counter),5);
    bufp->fullWData(oldp+166,(vlSelf->top__DOT__DUT__DOT__refill_data),512);
    bufp->fullSData(oldp+182,((0xffffU & ((IData)(1U) 
                                          << (0xfU 
                                              & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                 >> 2U))))),16);
    bufp->fullWData(oldp+183,(vlSelf->top__DOT__DUT__DOT__data_array[0]),512);
    bufp->fullWData(oldp+199,(vlSelf->top__DOT__DUT__DOT__data_array[1]),512);
    bufp->fullWData(oldp+215,(vlSelf->top__DOT__DUT__DOT__data_array[2]),512);
    bufp->fullWData(oldp+231,(vlSelf->top__DOT__DUT__DOT__data_array[3]),512);
    bufp->fullWData(oldp+247,(vlSelf->top__DOT__DUT__DOT__data_array[4]),512);
    bufp->fullWData(oldp+263,(vlSelf->top__DOT__DUT__DOT__data_array[5]),512);
    bufp->fullWData(oldp+279,(vlSelf->top__DOT__DUT__DOT__data_array[6]),512);
    bufp->fullWData(oldp+295,(vlSelf->top__DOT__DUT__DOT__data_array[7]),512);
    bufp->fullWData(oldp+311,(vlSelf->top__DOT__DUT__DOT__data_array[8]),512);
    bufp->fullWData(oldp+327,(vlSelf->top__DOT__DUT__DOT__data_array[9]),512);
    bufp->fullWData(oldp+343,(vlSelf->top__DOT__DUT__DOT__data_array[10]),512);
    bufp->fullWData(oldp+359,(vlSelf->top__DOT__DUT__DOT__data_array[11]),512);
    bufp->fullWData(oldp+375,(vlSelf->top__DOT__DUT__DOT__data_array[12]),512);
    bufp->fullWData(oldp+391,(vlSelf->top__DOT__DUT__DOT__data_array[13]),512);
    bufp->fullWData(oldp+407,(vlSelf->top__DOT__DUT__DOT__data_array[14]),512);
    bufp->fullWData(oldp+423,(vlSelf->top__DOT__DUT__DOT__data_array[15]),512);
    bufp->fullWData(oldp+439,(vlSelf->top__DOT__DUT__DOT__data_array[16]),512);
    bufp->fullWData(oldp+455,(vlSelf->top__DOT__DUT__DOT__data_array[17]),512);
    bufp->fullWData(oldp+471,(vlSelf->top__DOT__DUT__DOT__data_array[18]),512);
    bufp->fullWData(oldp+487,(vlSelf->top__DOT__DUT__DOT__data_array[19]),512);
    bufp->fullWData(oldp+503,(vlSelf->top__DOT__DUT__DOT__data_array[20]),512);
    bufp->fullWData(oldp+519,(vlSelf->top__DOT__DUT__DOT__data_array[21]),512);
    bufp->fullWData(oldp+535,(vlSelf->top__DOT__DUT__DOT__data_array[22]),512);
    bufp->fullWData(oldp+551,(vlSelf->top__DOT__DUT__DOT__data_array[23]),512);
    bufp->fullWData(oldp+567,(vlSelf->top__DOT__DUT__DOT__data_array[24]),512);
    bufp->fullWData(oldp+583,(vlSelf->top__DOT__DUT__DOT__data_array[25]),512);
    bufp->fullWData(oldp+599,(vlSelf->top__DOT__DUT__DOT__data_array[26]),512);
    bufp->fullWData(oldp+615,(vlSelf->top__DOT__DUT__DOT__data_array[27]),512);
    bufp->fullWData(oldp+631,(vlSelf->top__DOT__DUT__DOT__data_array[28]),512);
    bufp->fullWData(oldp+647,(vlSelf->top__DOT__DUT__DOT__data_array[29]),512);
    bufp->fullWData(oldp+663,(vlSelf->top__DOT__DUT__DOT__data_array[30]),512);
    bufp->fullWData(oldp+679,(vlSelf->top__DOT__DUT__DOT__data_array[31]),512);
    bufp->fullWData(oldp+695,(vlSelf->top__DOT__DUT__DOT__data_array_output),512);
    bufp->fullIData(oldp+711,(vlSelf->top__DOT__DUT__DOT__data_array_output[0U]),32);
    bufp->fullIData(oldp+712,(vlSelf->top__DOT__DUT__DOT__data_array_output[1U]),32);
    bufp->fullIData(oldp+713,(vlSelf->top__DOT__DUT__DOT__data_array_output[2U]),32);
    bufp->fullIData(oldp+714,(vlSelf->top__DOT__DUT__DOT__data_array_output[3U]),32);
    bufp->fullIData(oldp+715,(vlSelf->top__DOT__DUT__DOT__data_array_output[4U]),32);
    bufp->fullIData(oldp+716,(vlSelf->top__DOT__DUT__DOT__data_array_output[5U]),32);
    bufp->fullIData(oldp+717,(vlSelf->top__DOT__DUT__DOT__data_array_output[6U]),32);
    bufp->fullIData(oldp+718,(vlSelf->top__DOT__DUT__DOT__data_array_output[7U]),32);
    bufp->fullIData(oldp+719,(vlSelf->top__DOT__DUT__DOT__data_array_output[8U]),32);
    bufp->fullIData(oldp+720,(vlSelf->top__DOT__DUT__DOT__data_array_output[9U]),32);
    bufp->fullIData(oldp+721,(vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]),32);
    bufp->fullIData(oldp+722,(vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]),32);
    bufp->fullIData(oldp+723,(vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]),32);
    bufp->fullIData(oldp+724,(vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]),32);
    bufp->fullIData(oldp+725,(vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]),32);
    bufp->fullIData(oldp+726,(vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]),32);
    bufp->fullBit(oldp+727,(vlSelf->clk));
    bufp->fullBit(oldp+728,(vlSelf->linetrace));
    bufp->fullBit(oldp+729,(vlSelf->top__DOT__flush));
    bufp->fullIData(oldp+730,(0U),32);
    bufp->fullIData(oldp+731,(0xffffffc0U),32);
    bufp->fullIData(oldp+732,(0x20U),32);
    bufp->fullIData(oldp+733,(0x200U),32);
    bufp->fullIData(oldp+734,(0x10U),32);
    bufp->fullSData(oldp+735,(0xffffU),16);
}
