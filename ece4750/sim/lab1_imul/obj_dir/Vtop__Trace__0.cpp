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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[27]),32);
        bufp->chgQData(oldp+28,(vlSelf->top__DOT__src__DOT__src__DOT__m[0]),64);
        bufp->chgQData(oldp+30,(vlSelf->top__DOT__src__DOT__src__DOT__m[1]),64);
        bufp->chgQData(oldp+32,(vlSelf->top__DOT__src__DOT__src__DOT__m[2]),64);
        bufp->chgQData(oldp+34,(vlSelf->top__DOT__src__DOT__src__DOT__m[3]),64);
        bufp->chgQData(oldp+36,(vlSelf->top__DOT__src__DOT__src__DOT__m[4]),64);
        bufp->chgQData(oldp+38,(vlSelf->top__DOT__src__DOT__src__DOT__m[5]),64);
        bufp->chgQData(oldp+40,(vlSelf->top__DOT__src__DOT__src__DOT__m[6]),64);
        bufp->chgQData(oldp+42,(vlSelf->top__DOT__src__DOT__src__DOT__m[7]),64);
        bufp->chgQData(oldp+44,(vlSelf->top__DOT__src__DOT__src__DOT__m[8]),64);
        bufp->chgQData(oldp+46,(vlSelf->top__DOT__src__DOT__src__DOT__m[9]),64);
        bufp->chgQData(oldp+48,(vlSelf->top__DOT__src__DOT__src__DOT__m[10]),64);
        bufp->chgQData(oldp+50,(vlSelf->top__DOT__src__DOT__src__DOT__m[11]),64);
        bufp->chgQData(oldp+52,(vlSelf->top__DOT__src__DOT__src__DOT__m[12]),64);
        bufp->chgQData(oldp+54,(vlSelf->top__DOT__src__DOT__src__DOT__m[13]),64);
        bufp->chgQData(oldp+56,(vlSelf->top__DOT__src__DOT__src__DOT__m[14]),64);
        bufp->chgQData(oldp+58,(vlSelf->top__DOT__src__DOT__src__DOT__m[15]),64);
        bufp->chgQData(oldp+60,(vlSelf->top__DOT__src__DOT__src__DOT__m[16]),64);
        bufp->chgQData(oldp+62,(vlSelf->top__DOT__src__DOT__src__DOT__m[17]),64);
        bufp->chgQData(oldp+64,(vlSelf->top__DOT__src__DOT__src__DOT__m[18]),64);
        bufp->chgQData(oldp+66,(vlSelf->top__DOT__src__DOT__src__DOT__m[19]),64);
        bufp->chgQData(oldp+68,(vlSelf->top__DOT__src__DOT__src__DOT__m[20]),64);
        bufp->chgQData(oldp+70,(vlSelf->top__DOT__src__DOT__src__DOT__m[21]),64);
        bufp->chgQData(oldp+72,(vlSelf->top__DOT__src__DOT__src__DOT__m[22]),64);
        bufp->chgQData(oldp+74,(vlSelf->top__DOT__src__DOT__src__DOT__m[23]),64);
        bufp->chgQData(oldp+76,(vlSelf->top__DOT__src__DOT__src__DOT__m[24]),64);
        bufp->chgQData(oldp+78,(vlSelf->top__DOT__src__DOT__src__DOT__m[25]),64);
        bufp->chgQData(oldp+80,(vlSelf->top__DOT__src__DOT__src__DOT__m[26]),64);
        bufp->chgQData(oldp+82,(vlSelf->top__DOT__src__DOT__src__DOT__m[27]),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+84,(vlSelf->top__DOT__src_msgs[0]),64);
        bufp->chgQData(oldp+86,(vlSelf->top__DOT__src_msgs[1]),64);
        bufp->chgQData(oldp+88,(vlSelf->top__DOT__src_msgs[2]),64);
        bufp->chgQData(oldp+90,(vlSelf->top__DOT__src_msgs[3]),64);
        bufp->chgQData(oldp+92,(vlSelf->top__DOT__src_msgs[4]),64);
        bufp->chgQData(oldp+94,(vlSelf->top__DOT__src_msgs[5]),64);
        bufp->chgQData(oldp+96,(vlSelf->top__DOT__src_msgs[6]),64);
        bufp->chgQData(oldp+98,(vlSelf->top__DOT__src_msgs[7]),64);
        bufp->chgQData(oldp+100,(vlSelf->top__DOT__src_msgs[8]),64);
        bufp->chgQData(oldp+102,(vlSelf->top__DOT__src_msgs[9]),64);
        bufp->chgQData(oldp+104,(vlSelf->top__DOT__src_msgs[10]),64);
        bufp->chgQData(oldp+106,(vlSelf->top__DOT__src_msgs[11]),64);
        bufp->chgQData(oldp+108,(vlSelf->top__DOT__src_msgs[12]),64);
        bufp->chgQData(oldp+110,(vlSelf->top__DOT__src_msgs[13]),64);
        bufp->chgQData(oldp+112,(vlSelf->top__DOT__src_msgs[14]),64);
        bufp->chgQData(oldp+114,(vlSelf->top__DOT__src_msgs[15]),64);
        bufp->chgQData(oldp+116,(vlSelf->top__DOT__src_msgs[16]),64);
        bufp->chgQData(oldp+118,(vlSelf->top__DOT__src_msgs[17]),64);
        bufp->chgQData(oldp+120,(vlSelf->top__DOT__src_msgs[18]),64);
        bufp->chgQData(oldp+122,(vlSelf->top__DOT__src_msgs[19]),64);
        bufp->chgQData(oldp+124,(vlSelf->top__DOT__src_msgs[20]),64);
        bufp->chgQData(oldp+126,(vlSelf->top__DOT__src_msgs[21]),64);
        bufp->chgQData(oldp+128,(vlSelf->top__DOT__src_msgs[22]),64);
        bufp->chgQData(oldp+130,(vlSelf->top__DOT__src_msgs[23]),64);
        bufp->chgQData(oldp+132,(vlSelf->top__DOT__src_msgs[24]),64);
        bufp->chgQData(oldp+134,(vlSelf->top__DOT__src_msgs[25]),64);
        bufp->chgQData(oldp+136,(vlSelf->top__DOT__src_msgs[26]),64);
        bufp->chgQData(oldp+138,(vlSelf->top__DOT__src_msgs[27]),64);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__snk_msgs[0]),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__snk_msgs[1]),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__snk_msgs[2]),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__snk_msgs[3]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__snk_msgs[4]),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__snk_msgs[5]),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__snk_msgs[6]),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__snk_msgs[7]),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__snk_msgs[8]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__snk_msgs[9]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__snk_msgs[10]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__snk_msgs[11]),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__snk_msgs[12]),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__snk_msgs[13]),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__snk_msgs[14]),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__snk_msgs[15]),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__snk_msgs[16]),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__snk_msgs[17]),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__snk_msgs[18]),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__snk_msgs[19]),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__snk_msgs[20]),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__snk_msgs[21]),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__snk_msgs[22]),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__snk_msgs[23]),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__snk_msgs[24]),32);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__snk_msgs[25]),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__snk_msgs[26]),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__snk_msgs[27]),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__a),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__b),32);
        bufp->chgCData(oldp+170,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level),4);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx),32);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__unnamedblk2__DOT__x),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgWData(oldp+173,(vlSelf->top__DOT__imul__DOT__str),4096);
        bufp->chgIData(oldp+301,(vlSelf->top__DOT__imul__DOT__idx0),32);
        bufp->chgIData(oldp+302,(vlSelf->top__DOT__imul__DOT__idx1),32);
        bufp->chgIData(oldp+303,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0),32);
        bufp->chgIData(oldp+304,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1),32);
        bufp->chgIData(oldp+305,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0),32);
        bufp->chgIData(oldp+306,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1),32);
        bufp->chgWData(oldp+307,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage),4096);
        bufp->chgIData(oldp+435,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+436,(vlSelf->top__DOT__istream_val));
        bufp->chgBit(oldp+437,(vlSelf->top__DOT__istream_rdy));
        bufp->chgQData(oldp+438,(vlSelf->top__DOT__istream_msg),64);
        bufp->chgBit(oldp+440,(vlSelf->top__DOT__ostream_rdy));
        bufp->chgBit(oldp+441,(vlSelf->top__DOT__ostream_val));
        bufp->chgIData(oldp+442,(vlSelf->top__DOT__ostream_msg),32);
        bufp->chgBit(oldp+443,(vlSelf->top__DOT__src_done));
        bufp->chgBit(oldp+444,(vlSelf->top__DOT__snk_done));
        bufp->chgCData(oldp+445,(vlSelf->top__DOT__imul__DOT__state),2);
        bufp->chgCData(oldp+446,(vlSelf->top__DOT__imul__DOT__nextstate),2);
        bufp->chgIData(oldp+447,(vlSelf->top__DOT__imul__DOT__a),32);
        bufp->chgIData(oldp+448,(vlSelf->top__DOT__imul__DOT__b),32);
        bufp->chgCData(oldp+449,(vlSelf->top__DOT__imul__DOT__counter),8);
        bufp->chgIData(oldp+450,(vlSelf->top__DOT__imul__DOT__next_a),32);
        bufp->chgIData(oldp+451,(vlSelf->top__DOT__imul__DOT__next_b),32);
        bufp->chgIData(oldp+452,(vlSelf->top__DOT__imul__DOT__next_ostream_msg),32);
        bufp->chgBit(oldp+453,(vlSelf->top__DOT__imul__DOT__next_ostream_val));
        bufp->chgIData(oldp+454,((vlSelf->top__DOT__imul__DOT__a 
                                  + vlSelf->top__DOT__ostream_msg)),32);
        bufp->chgIData(oldp+455,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+456,(vlSelf->top__DOT__sink__DOT__sink_val));
        bufp->chgBit(oldp+457,(vlSelf->top__DOT__sink__DOT__sink_rdy));
        bufp->chgIData(oldp+458,(vlSelf->top__DOT__sink__DOT__sink_msg),32);
        bufp->chgIData(oldp+459,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num),32);
        bufp->chgBit(oldp+460,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en));
        bufp->chgIData(oldp+461,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+462,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay),32);
        bufp->chgBit(oldp+463,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+464,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next));
        bufp->chgBit(oldp+465,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state));
        bufp->chgBit(oldp+466,(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en));
        bufp->chgCData(oldp+467,((0x1fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)))),5);
        bufp->chgCData(oldp+468,(vlSelf->top__DOT__sink__DOT__sink__DOT__index),5);
        bufp->chgBit(oldp+469,(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg));
        bufp->chgBit(oldp+470,(((~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
                                & (0x1bU == (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)))));
        bufp->chgBit(oldp+471,(vlSelf->top__DOT__sink__DOT__sink__DOT__failed));
        bufp->chgIData(oldp+472,(((0x1bU >= (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))
                                   ? vlSelf->top__DOT__sink__DOT__sink__DOT__m
                                  [vlSelf->top__DOT__sink__DOT__sink__DOT__index]
                                   : 0U)),32);
        bufp->chgBit(oldp+473,(vlSelf->top__DOT__src__DOT__src_val));
        bufp->chgBit(oldp+474,(vlSelf->top__DOT__src__DOT__src_rdy));
        bufp->chgQData(oldp+475,(((0x1bU >= (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))
                                   ? vlSelf->top__DOT__src__DOT__src__DOT__m
                                  [vlSelf->top__DOT__src__DOT__src__DOT__index]
                                   : 0ULL)),64);
        bufp->chgIData(oldp+477,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num),32);
        bufp->chgBit(oldp+478,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en));
        bufp->chgIData(oldp+479,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+480,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay),32);
        bufp->chgBit(oldp+481,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+482,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next));
        bufp->chgBit(oldp+483,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state));
        bufp->chgBit(oldp+484,(((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                                & (IData)(vlSelf->top__DOT__src__DOT__src_rdy))));
        bufp->chgCData(oldp+485,((0x1fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)))),5);
        bufp->chgCData(oldp+486,(vlSelf->top__DOT__src__DOT__src__DOT__index),5);
        bufp->chgBit(oldp+487,(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg));
        bufp->chgBit(oldp+488,(((~ (IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg)) 
                                & (0x1bU == (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)))));
    }
    bufp->chgBit(oldp+489,(vlSelf->clk));
    bufp->chgBit(oldp+490,(vlSelf->linetrace));
    bufp->chgBit(oldp+491,(vlSelf->top__DOT__reset));
    bufp->chgIData(oldp+492,(vlSelf->top__DOT__unnamedblk3__DOT__i),32);
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
}
