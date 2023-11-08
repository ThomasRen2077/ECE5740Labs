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
    VlWide<16>/*511:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__reset));
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__memreq_msg_addr),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__memreq_msg_data),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__cache_resp_msg_data),32);
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__reg_en_M0));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__tarray_en));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__tarray_wen));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__z6b_sel));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__darray_write_mux_sel));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__darray_wen));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__write_en_sel));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__spill_one_word_done));
        bufp->chgBit(oldp+12,(vlSelf->top__DOT__refill_one_word_req_sent));
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__refill_one_word_resp_received));
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__Spill_or_Refill_sel));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__cache_req_msg_addr),32);
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__tarray_match));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__current_dirty));
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__DUT__DOT__z6b_mux_result),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__DUT__DOT__refill_addr),32);
        bufp->chgWData(oldp+20,(vlSelf->top__DOT__DUT__DOT__write_data),512);
        bufp->chgSData(oldp+36,(vlSelf->top__DOT__DUT__DOT__write_word_enable),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__memresp_msg_data),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__DUT__DOT__cache_to_mem_data),32);
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__spill_done));
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__refill_req_done));
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__refill_resp_done));
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__DUT__DOT__cache_request_data_M0),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__DUT__DOT__tag_array[0]),21);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__DUT__DOT__tag_array[1]),21);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__DUT__DOT__tag_array[2]),21);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__DUT__DOT__tag_array[3]),21);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__DUT__DOT__tag_array[4]),21);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__DUT__DOT__tag_array[5]),21);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__DUT__DOT__tag_array[6]),21);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__DUT__DOT__tag_array[7]),21);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__DUT__DOT__tag_array[8]),21);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__DUT__DOT__tag_array[9]),21);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__DUT__DOT__tag_array[10]),21);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__DUT__DOT__tag_array[11]),21);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__DUT__DOT__tag_array[12]),21);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__DUT__DOT__tag_array[13]),21);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__DUT__DOT__tag_array[14]),21);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__DUT__DOT__tag_array[15]),21);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__DUT__DOT__tag_array[16]),21);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__DUT__DOT__tag_array[17]),21);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__DUT__DOT__tag_array[18]),21);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__DUT__DOT__tag_array[19]),21);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__DUT__DOT__tag_array[20]),21);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__DUT__DOT__tag_array[21]),21);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__DUT__DOT__tag_array[22]),21);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__DUT__DOT__tag_array[23]),21);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__DUT__DOT__tag_array[24]),21);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__DUT__DOT__tag_array[25]),21);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__DUT__DOT__tag_array[26]),21);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__DUT__DOT__tag_array[27]),21);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__DUT__DOT__tag_array[28]),21);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__DUT__DOT__tag_array[29]),21);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__DUT__DOT__tag_array[30]),21);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__DUT__DOT__tag_array[31]),21);
        bufp->chgBit(oldp+76,(vlSelf->top__DOT__DUT__DOT__dirty_array[0]));
        bufp->chgBit(oldp+77,(vlSelf->top__DOT__DUT__DOT__dirty_array[1]));
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__DUT__DOT__dirty_array[2]));
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__DUT__DOT__dirty_array[3]));
        bufp->chgBit(oldp+80,(vlSelf->top__DOT__DUT__DOT__dirty_array[4]));
        bufp->chgBit(oldp+81,(vlSelf->top__DOT__DUT__DOT__dirty_array[5]));
        bufp->chgBit(oldp+82,(vlSelf->top__DOT__DUT__DOT__dirty_array[6]));
        bufp->chgBit(oldp+83,(vlSelf->top__DOT__DUT__DOT__dirty_array[7]));
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__DUT__DOT__dirty_array[8]));
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__DUT__DOT__dirty_array[9]));
        bufp->chgBit(oldp+86,(vlSelf->top__DOT__DUT__DOT__dirty_array[10]));
        bufp->chgBit(oldp+87,(vlSelf->top__DOT__DUT__DOT__dirty_array[11]));
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__DUT__DOT__dirty_array[12]));
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__DUT__DOT__dirty_array[13]));
        bufp->chgBit(oldp+90,(vlSelf->top__DOT__DUT__DOT__dirty_array[14]));
        bufp->chgBit(oldp+91,(vlSelf->top__DOT__DUT__DOT__dirty_array[15]));
        bufp->chgBit(oldp+92,(vlSelf->top__DOT__DUT__DOT__dirty_array[16]));
        bufp->chgBit(oldp+93,(vlSelf->top__DOT__DUT__DOT__dirty_array[17]));
        bufp->chgBit(oldp+94,(vlSelf->top__DOT__DUT__DOT__dirty_array[18]));
        bufp->chgBit(oldp+95,(vlSelf->top__DOT__DUT__DOT__dirty_array[19]));
        bufp->chgBit(oldp+96,(vlSelf->top__DOT__DUT__DOT__dirty_array[20]));
        bufp->chgBit(oldp+97,(vlSelf->top__DOT__DUT__DOT__dirty_array[21]));
        bufp->chgBit(oldp+98,(vlSelf->top__DOT__DUT__DOT__dirty_array[22]));
        bufp->chgBit(oldp+99,(vlSelf->top__DOT__DUT__DOT__dirty_array[23]));
        bufp->chgBit(oldp+100,(vlSelf->top__DOT__DUT__DOT__dirty_array[24]));
        bufp->chgBit(oldp+101,(vlSelf->top__DOT__DUT__DOT__dirty_array[25]));
        bufp->chgBit(oldp+102,(vlSelf->top__DOT__DUT__DOT__dirty_array[26]));
        bufp->chgBit(oldp+103,(vlSelf->top__DOT__DUT__DOT__dirty_array[27]));
        bufp->chgBit(oldp+104,(vlSelf->top__DOT__DUT__DOT__dirty_array[28]));
        bufp->chgBit(oldp+105,(vlSelf->top__DOT__DUT__DOT__dirty_array[29]));
        bufp->chgBit(oldp+106,(vlSelf->top__DOT__DUT__DOT__dirty_array[30]));
        bufp->chgBit(oldp+107,(vlSelf->top__DOT__DUT__DOT__dirty_array[31]));
        bufp->chgBit(oldp+108,(vlSelf->top__DOT__DUT__DOT__valid_array[0]));
        bufp->chgBit(oldp+109,(vlSelf->top__DOT__DUT__DOT__valid_array[1]));
        bufp->chgBit(oldp+110,(vlSelf->top__DOT__DUT__DOT__valid_array[2]));
        bufp->chgBit(oldp+111,(vlSelf->top__DOT__DUT__DOT__valid_array[3]));
        bufp->chgBit(oldp+112,(vlSelf->top__DOT__DUT__DOT__valid_array[4]));
        bufp->chgBit(oldp+113,(vlSelf->top__DOT__DUT__DOT__valid_array[5]));
        bufp->chgBit(oldp+114,(vlSelf->top__DOT__DUT__DOT__valid_array[6]));
        bufp->chgBit(oldp+115,(vlSelf->top__DOT__DUT__DOT__valid_array[7]));
        bufp->chgBit(oldp+116,(vlSelf->top__DOT__DUT__DOT__valid_array[8]));
        bufp->chgBit(oldp+117,(vlSelf->top__DOT__DUT__DOT__valid_array[9]));
        bufp->chgBit(oldp+118,(vlSelf->top__DOT__DUT__DOT__valid_array[10]));
        bufp->chgBit(oldp+119,(vlSelf->top__DOT__DUT__DOT__valid_array[11]));
        bufp->chgBit(oldp+120,(vlSelf->top__DOT__DUT__DOT__valid_array[12]));
        bufp->chgBit(oldp+121,(vlSelf->top__DOT__DUT__DOT__valid_array[13]));
        bufp->chgBit(oldp+122,(vlSelf->top__DOT__DUT__DOT__valid_array[14]));
        bufp->chgBit(oldp+123,(vlSelf->top__DOT__DUT__DOT__valid_array[15]));
        bufp->chgBit(oldp+124,(vlSelf->top__DOT__DUT__DOT__valid_array[16]));
        bufp->chgBit(oldp+125,(vlSelf->top__DOT__DUT__DOT__valid_array[17]));
        bufp->chgBit(oldp+126,(vlSelf->top__DOT__DUT__DOT__valid_array[18]));
        bufp->chgBit(oldp+127,(vlSelf->top__DOT__DUT__DOT__valid_array[19]));
        bufp->chgBit(oldp+128,(vlSelf->top__DOT__DUT__DOT__valid_array[20]));
        bufp->chgBit(oldp+129,(vlSelf->top__DOT__DUT__DOT__valid_array[21]));
        bufp->chgBit(oldp+130,(vlSelf->top__DOT__DUT__DOT__valid_array[22]));
        bufp->chgBit(oldp+131,(vlSelf->top__DOT__DUT__DOT__valid_array[23]));
        bufp->chgBit(oldp+132,(vlSelf->top__DOT__DUT__DOT__valid_array[24]));
        bufp->chgBit(oldp+133,(vlSelf->top__DOT__DUT__DOT__valid_array[25]));
        bufp->chgBit(oldp+134,(vlSelf->top__DOT__DUT__DOT__valid_array[26]));
        bufp->chgBit(oldp+135,(vlSelf->top__DOT__DUT__DOT__valid_array[27]));
        bufp->chgBit(oldp+136,(vlSelf->top__DOT__DUT__DOT__valid_array[28]));
        bufp->chgBit(oldp+137,(vlSelf->top__DOT__DUT__DOT__valid_array[29]));
        bufp->chgBit(oldp+138,(vlSelf->top__DOT__DUT__DOT__valid_array[30]));
        bufp->chgBit(oldp+139,(vlSelf->top__DOT__DUT__DOT__valid_array[31]));
        bufp->chgIData(oldp+140,((vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                  >> 0xbU)),21);
        bufp->chgCData(oldp+141,((0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                           >> 6U))),5);
        bufp->chgCData(oldp+142,((0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                          >> 2U))),4);
        bufp->chgIData(oldp+143,((0xffffffc0U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__DUT__DOT__spill_initial_addr),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__DUT__DOT__spill_addr),32);
        bufp->chgCData(oldp+146,(vlSelf->top__DOT__DUT__DOT__spill_counter),5);
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
        bufp->chgWData(oldp+147,(__Vtemp_1),512);
        bufp->chgCData(oldp+163,(vlSelf->top__DOT__DUT__DOT__refill_req_counter),5);
        bufp->chgCData(oldp+164,(vlSelf->top__DOT__DUT__DOT__refill_resp_counter),5);
        bufp->chgWData(oldp+165,(vlSelf->top__DOT__DUT__DOT__refill_data),512);
        bufp->chgSData(oldp+181,((0xffffU & ((IData)(1U) 
                                             << (0xfU 
                                                 & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                    >> 2U))))),16);
        bufp->chgWData(oldp+182,(vlSelf->top__DOT__DUT__DOT__data_array[0]),512);
        bufp->chgWData(oldp+198,(vlSelf->top__DOT__DUT__DOT__data_array[1]),512);
        bufp->chgWData(oldp+214,(vlSelf->top__DOT__DUT__DOT__data_array[2]),512);
        bufp->chgWData(oldp+230,(vlSelf->top__DOT__DUT__DOT__data_array[3]),512);
        bufp->chgWData(oldp+246,(vlSelf->top__DOT__DUT__DOT__data_array[4]),512);
        bufp->chgWData(oldp+262,(vlSelf->top__DOT__DUT__DOT__data_array[5]),512);
        bufp->chgWData(oldp+278,(vlSelf->top__DOT__DUT__DOT__data_array[6]),512);
        bufp->chgWData(oldp+294,(vlSelf->top__DOT__DUT__DOT__data_array[7]),512);
        bufp->chgWData(oldp+310,(vlSelf->top__DOT__DUT__DOT__data_array[8]),512);
        bufp->chgWData(oldp+326,(vlSelf->top__DOT__DUT__DOT__data_array[9]),512);
        bufp->chgWData(oldp+342,(vlSelf->top__DOT__DUT__DOT__data_array[10]),512);
        bufp->chgWData(oldp+358,(vlSelf->top__DOT__DUT__DOT__data_array[11]),512);
        bufp->chgWData(oldp+374,(vlSelf->top__DOT__DUT__DOT__data_array[12]),512);
        bufp->chgWData(oldp+390,(vlSelf->top__DOT__DUT__DOT__data_array[13]),512);
        bufp->chgWData(oldp+406,(vlSelf->top__DOT__DUT__DOT__data_array[14]),512);
        bufp->chgWData(oldp+422,(vlSelf->top__DOT__DUT__DOT__data_array[15]),512);
        bufp->chgWData(oldp+438,(vlSelf->top__DOT__DUT__DOT__data_array[16]),512);
        bufp->chgWData(oldp+454,(vlSelf->top__DOT__DUT__DOT__data_array[17]),512);
        bufp->chgWData(oldp+470,(vlSelf->top__DOT__DUT__DOT__data_array[18]),512);
        bufp->chgWData(oldp+486,(vlSelf->top__DOT__DUT__DOT__data_array[19]),512);
        bufp->chgWData(oldp+502,(vlSelf->top__DOT__DUT__DOT__data_array[20]),512);
        bufp->chgWData(oldp+518,(vlSelf->top__DOT__DUT__DOT__data_array[21]),512);
        bufp->chgWData(oldp+534,(vlSelf->top__DOT__DUT__DOT__data_array[22]),512);
        bufp->chgWData(oldp+550,(vlSelf->top__DOT__DUT__DOT__data_array[23]),512);
        bufp->chgWData(oldp+566,(vlSelf->top__DOT__DUT__DOT__data_array[24]),512);
        bufp->chgWData(oldp+582,(vlSelf->top__DOT__DUT__DOT__data_array[25]),512);
        bufp->chgWData(oldp+598,(vlSelf->top__DOT__DUT__DOT__data_array[26]),512);
        bufp->chgWData(oldp+614,(vlSelf->top__DOT__DUT__DOT__data_array[27]),512);
        bufp->chgWData(oldp+630,(vlSelf->top__DOT__DUT__DOT__data_array[28]),512);
        bufp->chgWData(oldp+646,(vlSelf->top__DOT__DUT__DOT__data_array[29]),512);
        bufp->chgWData(oldp+662,(vlSelf->top__DOT__DUT__DOT__data_array[30]),512);
        bufp->chgWData(oldp+678,(vlSelf->top__DOT__DUT__DOT__data_array[31]),512);
        bufp->chgWData(oldp+694,(vlSelf->top__DOT__DUT__DOT__data_array_output),512);
        bufp->chgIData(oldp+710,(vlSelf->top__DOT__DUT__DOT__data_array_output[0U]),32);
        bufp->chgIData(oldp+711,(vlSelf->top__DOT__DUT__DOT__data_array_output[1U]),32);
        bufp->chgIData(oldp+712,(vlSelf->top__DOT__DUT__DOT__data_array_output[2U]),32);
        bufp->chgIData(oldp+713,(vlSelf->top__DOT__DUT__DOT__data_array_output[3U]),32);
        bufp->chgIData(oldp+714,(vlSelf->top__DOT__DUT__DOT__data_array_output[4U]),32);
        bufp->chgIData(oldp+715,(vlSelf->top__DOT__DUT__DOT__data_array_output[5U]),32);
        bufp->chgIData(oldp+716,(vlSelf->top__DOT__DUT__DOT__data_array_output[6U]),32);
        bufp->chgIData(oldp+717,(vlSelf->top__DOT__DUT__DOT__data_array_output[7U]),32);
        bufp->chgIData(oldp+718,(vlSelf->top__DOT__DUT__DOT__data_array_output[8U]),32);
        bufp->chgIData(oldp+719,(vlSelf->top__DOT__DUT__DOT__data_array_output[9U]),32);
        bufp->chgIData(oldp+720,(vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]),32);
        bufp->chgIData(oldp+721,(vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]),32);
        bufp->chgIData(oldp+722,(vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]),32);
        bufp->chgIData(oldp+723,(vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]),32);
        bufp->chgIData(oldp+724,(vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]),32);
        bufp->chgIData(oldp+725,(vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]),32);
    }
    bufp->chgBit(oldp+726,(vlSelf->clk));
    bufp->chgBit(oldp+727,(vlSelf->linetrace));
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
