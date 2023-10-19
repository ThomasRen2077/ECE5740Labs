// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__reset));
        bufp->chgQData(oldp+1,(vlSelf->top__DOT__imem_respstream_msg),47);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__dmem_respstream_msg_data),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__mngr2proc_data),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__IntMulAlt_respstream_msg),32);
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__imem_respstream_drop));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__reg_en_F));
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__pc_sel_F),2);
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__reg_en_D));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__op1_sel_D));
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__op2_sel_D),2);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__csrr_sel_D),2);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__imm_type_D),3);
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__reg_en_X));
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__alu_fn_X),4);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__ex_result_sel_X),2);
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__reg_en_M));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__wb_result_sel_M));
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__reg_en_W));
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__rf_waddr_W),5);
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__rf_wen_W));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__stats_en_wen_W));
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__core_id),32);
        bufp->chgIData(oldp+24,((IData)(vlSelf->top__DOT__imem_respstream_msg)),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__DUT__DOT__pc_next_F),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__DUT__DOT__alu_result_X),32);
        bufp->chgQData(oldp+27,(vlSelf->top__DOT__IntMulAlt_reqstream_msg),64);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__DUT__DOT__jal_target_D),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__DUT__DOT__imm_D),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__DUT__DOT__op1_D),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__DUT__DOT__op2_D),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__DUT__DOT__ex_result_X),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__DUT__DOT__wb_result_M),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__DUT__DOT__rf_rdata1_X),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__DUT__DOT__wb_result_W),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__inst_D),32);
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__br_cond_eq_X));
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__br_cond_lt_X));
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__br_cond_ltu_X));
        bufp->chgBit(oldp+41,((0U != vlSelf->top__DOT__DUT__DOT__stats_en_W)));
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__DUT__DOT__pc_F),32);
        bufp->chgIData(oldp+43,(((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_F)),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__DUT__DOT__br_target_X),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__DUT__DOT__pc_D),32);
        bufp->chgCData(oldp+46,((0x1fU & (vlSelf->top__DOT__inst_D 
                                          >> 7U))),5);
        bufp->chgCData(oldp+47,((0x1fU & (vlSelf->top__DOT__inst_D 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+48,((0x1fU & (vlSelf->top__DOT__inst_D 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__DUT__DOT__rf_rdata0_D),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__DUT__DOT__rf_rdata1_D),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__DUT__DOT__op1_X),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__DUT__DOT__op2_X),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__DUT__DOT__pc_X),32);
        bufp->chgIData(oldp+54,(((IData)(4U) + vlSelf->top__DOT__DUT__DOT__pc_X)),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__DUT__DOT__ex_result_M),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__DUT__DOT__stats_en_W),32);
        bufp->chgCData(oldp+57,((0x7fU & vlSelf->top__DOT__inst_D)),7);
        bufp->chgCData(oldp+58,((7U & (vlSelf->top__DOT__inst_D 
                                       >> 0xcU))),3);
        bufp->chgSData(oldp+59,((vlSelf->top__DOT__inst_D 
                                 >> 0x14U)),12);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data0),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rf_read_data1),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[0]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[1]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[2]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[3]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[4]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[5]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[6]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[7]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[8]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[9]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[10]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[11]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[12]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[13]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[14]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[15]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[16]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[17]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[18]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[19]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[20]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[21]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[22]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[23]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[24]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[25]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[26]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[27]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[28]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[29]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[30]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__DUT__DOT__rf__DOT__rfile__DOT__rfile[31]),32);
    }
    bufp->chgBit(oldp+94,(vlSelf->clk));
    bufp->chgBit(oldp+95,(vlSelf->linetrace));
    bufp->chgIData(oldp+96,(vlSelf->top__DOT__DUT__DOT__csrr_data_D),32);
    bufp->chgBit(oldp+97,((1U & (IData)((1ULL & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__pc_D)) 
                                                  + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__imm_D))) 
                                                 >> 0x20U))))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
