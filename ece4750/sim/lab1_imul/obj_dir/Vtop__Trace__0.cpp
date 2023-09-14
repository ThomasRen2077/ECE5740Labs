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
        bufp->chgQData(oldp+0,(vlSymsp->TOP__top__src__src.__PVT__m[0]),64);
        bufp->chgQData(oldp+2,(vlSymsp->TOP__top__src__src.__PVT__m[1]),64);
        bufp->chgQData(oldp+4,(vlSymsp->TOP__top__src__src.__PVT__m[2]),64);
        bufp->chgQData(oldp+6,(vlSymsp->TOP__top__src__src.__PVT__m[3]),64);
        bufp->chgQData(oldp+8,(vlSymsp->TOP__top__src__src.__PVT__m[4]),64);
        bufp->chgQData(oldp+10,(vlSymsp->TOP__top__src__src.__PVT__m[5]),64);
        bufp->chgQData(oldp+12,(vlSymsp->TOP__top__src__src.__PVT__m[6]),64);
        bufp->chgQData(oldp+14,(vlSymsp->TOP__top__src__src.__PVT__m[7]),64);
        bufp->chgQData(oldp+16,(vlSymsp->TOP__top__src__src.__PVT__m[8]),64);
        bufp->chgQData(oldp+18,(vlSymsp->TOP__top__src__src.__PVT__m[9]),64);
        bufp->chgQData(oldp+20,(vlSymsp->TOP__top__src__src.__PVT__m[10]),64);
        bufp->chgQData(oldp+22,(vlSymsp->TOP__top__src__src.__PVT__m[11]),64);
        bufp->chgQData(oldp+24,(vlSymsp->TOP__top__src__src.__PVT__m[12]),64);
        bufp->chgQData(oldp+26,(vlSymsp->TOP__top__src__src.__PVT__m[13]),64);
        bufp->chgQData(oldp+28,(vlSymsp->TOP__top__src__src.__PVT__m[14]),64);
        bufp->chgQData(oldp+30,(vlSymsp->TOP__top__src__src.__PVT__m[15]),64);
        bufp->chgQData(oldp+32,(vlSymsp->TOP__top__src__src.__PVT__m[16]),64);
        bufp->chgQData(oldp+34,(vlSymsp->TOP__top__src__src.__PVT__m[17]),64);
        bufp->chgQData(oldp+36,(vlSymsp->TOP__top__src__src.__PVT__m[18]),64);
        bufp->chgQData(oldp+38,(vlSymsp->TOP__top__src__src.__PVT__m[19]),64);
        bufp->chgQData(oldp+40,(vlSymsp->TOP__top__src__src.__PVT__m[20]),64);
        bufp->chgQData(oldp+42,(vlSymsp->TOP__top__src__src.__PVT__m[21]),64);
        bufp->chgQData(oldp+44,(vlSymsp->TOP__top__src__src.__PVT__m[22]),64);
        bufp->chgQData(oldp+46,(vlSymsp->TOP__top__src__src.__PVT__m[23]),64);
        bufp->chgQData(oldp+48,(vlSymsp->TOP__top__src__src.__PVT__m[24]),64);
        bufp->chgQData(oldp+50,(vlSymsp->TOP__top__src__src.__PVT__m[25]),64);
        bufp->chgQData(oldp+52,(vlSymsp->TOP__top__src__src.__PVT__m[26]),64);
        bufp->chgQData(oldp+54,(vlSymsp->TOP__top__src__src.__PVT__m[27]),64);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__top__src__msg_delay.__PVT__max_delay),32);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__top__sink__msg_delay.__PVT__max_delay),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__top__sink__sink.__PVT__m[0]),32);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__top__sink__sink.__PVT__m[1]),32);
        bufp->chgIData(oldp+60,(vlSymsp->TOP__top__sink__sink.__PVT__m[2]),32);
        bufp->chgIData(oldp+61,(vlSymsp->TOP__top__sink__sink.__PVT__m[3]),32);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__top__sink__sink.__PVT__m[4]),32);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__top__sink__sink.__PVT__m[5]),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__top__sink__sink.__PVT__m[6]),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__top__sink__sink.__PVT__m[7]),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__top__sink__sink.__PVT__m[8]),32);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__top__sink__sink.__PVT__m[9]),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__top__sink__sink.__PVT__m[10]),32);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__top__sink__sink.__PVT__m[11]),32);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__top__sink__sink.__PVT__m[12]),32);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__top__sink__sink.__PVT__m[13]),32);
        bufp->chgIData(oldp+72,(vlSymsp->TOP__top__sink__sink.__PVT__m[14]),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__top__sink__sink.__PVT__m[15]),32);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__top__sink__sink.__PVT__m[16]),32);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__top__sink__sink.__PVT__m[17]),32);
        bufp->chgIData(oldp+76,(vlSymsp->TOP__top__sink__sink.__PVT__m[18]),32);
        bufp->chgIData(oldp+77,(vlSymsp->TOP__top__sink__sink.__PVT__m[19]),32);
        bufp->chgIData(oldp+78,(vlSymsp->TOP__top__sink__sink.__PVT__m[20]),32);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__top__sink__sink.__PVT__m[21]),32);
        bufp->chgIData(oldp+80,(vlSymsp->TOP__top__sink__sink.__PVT__m[22]),32);
        bufp->chgIData(oldp+81,(vlSymsp->TOP__top__sink__sink.__PVT__m[23]),32);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__top__sink__sink.__PVT__m[24]),32);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__top__sink__sink.__PVT__m[25]),32);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__top__sink__sink.__PVT__m[26]),32);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__top__sink__sink.__PVT__m[27]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+86,(vlSymsp->TOP__top.__PVT__src_msgs[0]),64);
        bufp->chgQData(oldp+88,(vlSymsp->TOP__top.__PVT__src_msgs[1]),64);
        bufp->chgQData(oldp+90,(vlSymsp->TOP__top.__PVT__src_msgs[2]),64);
        bufp->chgQData(oldp+92,(vlSymsp->TOP__top.__PVT__src_msgs[3]),64);
        bufp->chgQData(oldp+94,(vlSymsp->TOP__top.__PVT__src_msgs[4]),64);
        bufp->chgQData(oldp+96,(vlSymsp->TOP__top.__PVT__src_msgs[5]),64);
        bufp->chgQData(oldp+98,(vlSymsp->TOP__top.__PVT__src_msgs[6]),64);
        bufp->chgQData(oldp+100,(vlSymsp->TOP__top.__PVT__src_msgs[7]),64);
        bufp->chgQData(oldp+102,(vlSymsp->TOP__top.__PVT__src_msgs[8]),64);
        bufp->chgQData(oldp+104,(vlSymsp->TOP__top.__PVT__src_msgs[9]),64);
        bufp->chgQData(oldp+106,(vlSymsp->TOP__top.__PVT__src_msgs[10]),64);
        bufp->chgQData(oldp+108,(vlSymsp->TOP__top.__PVT__src_msgs[11]),64);
        bufp->chgQData(oldp+110,(vlSymsp->TOP__top.__PVT__src_msgs[12]),64);
        bufp->chgQData(oldp+112,(vlSymsp->TOP__top.__PVT__src_msgs[13]),64);
        bufp->chgQData(oldp+114,(vlSymsp->TOP__top.__PVT__src_msgs[14]),64);
        bufp->chgQData(oldp+116,(vlSymsp->TOP__top.__PVT__src_msgs[15]),64);
        bufp->chgQData(oldp+118,(vlSymsp->TOP__top.__PVT__src_msgs[16]),64);
        bufp->chgQData(oldp+120,(vlSymsp->TOP__top.__PVT__src_msgs[17]),64);
        bufp->chgQData(oldp+122,(vlSymsp->TOP__top.__PVT__src_msgs[18]),64);
        bufp->chgQData(oldp+124,(vlSymsp->TOP__top.__PVT__src_msgs[19]),64);
        bufp->chgQData(oldp+126,(vlSymsp->TOP__top.__PVT__src_msgs[20]),64);
        bufp->chgQData(oldp+128,(vlSymsp->TOP__top.__PVT__src_msgs[21]),64);
        bufp->chgQData(oldp+130,(vlSymsp->TOP__top.__PVT__src_msgs[22]),64);
        bufp->chgQData(oldp+132,(vlSymsp->TOP__top.__PVT__src_msgs[23]),64);
        bufp->chgQData(oldp+134,(vlSymsp->TOP__top.__PVT__src_msgs[24]),64);
        bufp->chgQData(oldp+136,(vlSymsp->TOP__top.__PVT__src_msgs[25]),64);
        bufp->chgQData(oldp+138,(vlSymsp->TOP__top.__PVT__src_msgs[26]),64);
        bufp->chgQData(oldp+140,(vlSymsp->TOP__top.__PVT__src_msgs[27]),64);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__top.__PVT__snk_msgs[0]),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__top.__PVT__snk_msgs[1]),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__top.__PVT__snk_msgs[2]),32);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__top.__PVT__snk_msgs[3]),32);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__top.__PVT__snk_msgs[4]),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__top.__PVT__snk_msgs[5]),32);
        bufp->chgIData(oldp+148,(vlSymsp->TOP__top.__PVT__snk_msgs[6]),32);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__top.__PVT__snk_msgs[7]),32);
        bufp->chgIData(oldp+150,(vlSymsp->TOP__top.__PVT__snk_msgs[8]),32);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__top.__PVT__snk_msgs[9]),32);
        bufp->chgIData(oldp+152,(vlSymsp->TOP__top.__PVT__snk_msgs[10]),32);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__top.__PVT__snk_msgs[11]),32);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__top.__PVT__snk_msgs[12]),32);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__top.__PVT__snk_msgs[13]),32);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__top.__PVT__snk_msgs[14]),32);
        bufp->chgIData(oldp+157,(vlSymsp->TOP__top.__PVT__snk_msgs[15]),32);
        bufp->chgIData(oldp+158,(vlSymsp->TOP__top.__PVT__snk_msgs[16]),32);
        bufp->chgIData(oldp+159,(vlSymsp->TOP__top.__PVT__snk_msgs[17]),32);
        bufp->chgIData(oldp+160,(vlSymsp->TOP__top.__PVT__snk_msgs[18]),32);
        bufp->chgIData(oldp+161,(vlSymsp->TOP__top.__PVT__snk_msgs[19]),32);
        bufp->chgIData(oldp+162,(vlSymsp->TOP__top.__PVT__snk_msgs[20]),32);
        bufp->chgIData(oldp+163,(vlSymsp->TOP__top.__PVT__snk_msgs[21]),32);
        bufp->chgIData(oldp+164,(vlSymsp->TOP__top.__PVT__snk_msgs[22]),32);
        bufp->chgIData(oldp+165,(vlSymsp->TOP__top.__PVT__snk_msgs[23]),32);
        bufp->chgIData(oldp+166,(vlSymsp->TOP__top.__PVT__snk_msgs[24]),32);
        bufp->chgIData(oldp+167,(vlSymsp->TOP__top.__PVT__snk_msgs[25]),32);
        bufp->chgIData(oldp+168,(vlSymsp->TOP__top.__PVT__snk_msgs[26]),32);
        bufp->chgIData(oldp+169,(vlSymsp->TOP__top.__PVT__snk_msgs[27]),32);
        bufp->chgIData(oldp+170,(vlSymsp->TOP__top.__PVT__a),32);
        bufp->chgIData(oldp+171,(vlSymsp->TOP__top.__PVT__b),32);
        bufp->chgIData(oldp+172,(vlSymsp->TOP__top.__PVT__test_case__Vstatic__unnamedblk1__DOT__idx),32);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__top.__PVT__unnamedblk2__DOT__x),32);
        bufp->chgIData(oldp+174,(vlSymsp->TOP__top__src.__PVT__max_delay),32);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__top__sink.__PVT__max_delay),32);
        bufp->chgCData(oldp+176,(vlSymsp->TOP__top__imul__vc_trace.__PVT__level),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x10U]))) {
        bufp->chgWData(oldp+177,(vlSymsp->TOP__top__imul.__PVT__str),4096);
        bufp->chgIData(oldp+305,(vlSymsp->TOP__top__imul.__PVT__idx0),32);
        bufp->chgIData(oldp+306,(vlSymsp->TOP__top__imul.__PVT__idx1),32);
        bufp->chgIData(oldp+307,(vlSymsp->TOP__top__imul__vc_trace.__PVT__len0),32);
        bufp->chgIData(oldp+308,(vlSymsp->TOP__top__imul__vc_trace.__PVT__len1),32);
        bufp->chgIData(oldp+309,(vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0),32);
        bufp->chgIData(oldp+310,(vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1),32);
        bufp->chgWData(oldp+311,(vlSymsp->TOP__top__imul__vc_trace.__PVT__storage),4096);
        bufp->chgIData(oldp+439,(vlSymsp->TOP__top__imul__vc_trace.__PVT__cycles_next),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+440,(vlSymsp->TOP__top.clk));
        bufp->chgBit(oldp+441,(vlSymsp->TOP__top.linetrace));
        bufp->chgBit(oldp+442,(vlSymsp->TOP__top__imul.__PVT__clk));
        bufp->chgBit(oldp+443,(vlSymsp->TOP__top__src.__PVT__clk));
        bufp->chgBit(oldp+444,(vlSymsp->TOP__top__sink.__PVT__clk));
        bufp->chgBit(oldp+445,(vlSymsp->TOP__top__imul__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+446,(vlSymsp->TOP__top__src__src.__PVT__clk));
        bufp->chgBit(oldp+447,(vlSymsp->TOP__top__src__msg_delay.__PVT__clk));
        bufp->chgBit(oldp+448,(vlSymsp->TOP__top__sink__msg_delay.__PVT__clk));
        bufp->chgBit(oldp+449,(vlSymsp->TOP__top__sink__sink.__PVT__clk));
        bufp->chgBit(oldp+450,(vlSymsp->TOP__top__src__src__index_reg.__PVT__clk));
        bufp->chgBit(oldp+451,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__clk));
        bufp->chgBit(oldp+452,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__clk));
        bufp->chgBit(oldp+453,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__clk));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+454,(vlSymsp->TOP__top__imul.__PVT__reset));
        bufp->chgBit(oldp+455,(vlSymsp->TOP__top__src.__PVT__reset));
        bufp->chgBit(oldp+456,(vlSymsp->TOP__top__sink.__PVT__reset));
        bufp->chgBit(oldp+457,(vlSymsp->TOP__top__src__src.__PVT__reset));
        bufp->chgBit(oldp+458,(vlSymsp->TOP__top__src__msg_delay.__PVT__reset));
        bufp->chgBit(oldp+459,(vlSymsp->TOP__top__sink__msg_delay.__PVT__reset));
        bufp->chgBit(oldp+460,(vlSymsp->TOP__top__sink__sink.__PVT__reset));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgBit(oldp+461,(vlSymsp->TOP__top__imul__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+462,(vlSymsp->TOP__top__src__src__index_reg.__PVT__reset));
        bufp->chgBit(oldp+463,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__reset));
        bufp->chgBit(oldp+464,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__reset));
        bufp->chgBit(oldp+465,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__reset));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgIData(oldp+466,(vlSymsp->TOP__top__imul.__PVT__next_a),32);
        bufp->chgIData(oldp+467,(vlSymsp->TOP__top__imul.__PVT__next_b),32);
        bufp->chgIData(oldp+468,(vlSymsp->TOP__top__imul.__PVT__next_ostream_msg),32);
        bufp->chgBit(oldp+469,(vlSymsp->TOP__top__imul.__PVT__next_ostream_val));
        bufp->chgBit(oldp+470,(vlSymsp->TOP__top__imul.__PVT__next_finish));
        bufp->chgCData(oldp+471,(vlSymsp->TOP__top__imul.__PVT__i),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+472,(vlSymsp->TOP__top.__PVT__src_done));
        bufp->chgBit(oldp+473,(vlSymsp->TOP__top__src.__PVT__done));
        bufp->chgBit(oldp+474,(vlSymsp->TOP__top__src.__PVT__src_val));
        bufp->chgBit(oldp+475,(vlSymsp->TOP__top__src__src.__PVT__val));
        bufp->chgBit(oldp+476,(vlSymsp->TOP__top__src__src.__PVT__done));
        bufp->chgBit(oldp+477,(vlSymsp->TOP__top__src__src.__PVT__reset_reg));
        bufp->chgBit(oldp+478,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_val));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+479,(vlSymsp->TOP__top.__PVT__snk_done));
        bufp->chgBit(oldp+480,(vlSymsp->TOP__top__sink.__PVT__done));
        bufp->chgBit(oldp+481,(vlSymsp->TOP__top__sink.__PVT__sink_rdy));
        bufp->chgBit(oldp+482,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_rdy));
        bufp->chgBit(oldp+483,(vlSymsp->TOP__top__sink__sink.__PVT__rdy));
        bufp->chgBit(oldp+484,(vlSymsp->TOP__top__sink__sink.__PVT__done));
        bufp->chgBit(oldp+485,(vlSymsp->TOP__top__sink__sink.__PVT__reset_reg));
        bufp->chgBit(oldp+486,(vlSymsp->TOP__top__sink__sink.__PVT__failed));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+487,(vlSymsp->TOP__top.__PVT__istream_rdy));
        bufp->chgBit(oldp+488,(vlSymsp->TOP__top.__PVT__ostream_val));
        bufp->chgIData(oldp+489,(vlSymsp->TOP__top.__PVT__ostream_msg),32);
        bufp->chgBit(oldp+490,(vlSymsp->TOP__top__imul.__PVT__istream_rdy));
        bufp->chgBit(oldp+491,(vlSymsp->TOP__top__imul.__PVT__ostream_val));
        bufp->chgIData(oldp+492,(vlSymsp->TOP__top__imul.__PVT__ostream_msg),32);
        bufp->chgCData(oldp+493,(vlSymsp->TOP__top__imul.__PVT__state),2);
        bufp->chgIData(oldp+494,(vlSymsp->TOP__top__imul.__PVT__a),32);
        bufp->chgIData(oldp+495,(vlSymsp->TOP__top__imul.__PVT__b),32);
        bufp->chgBit(oldp+496,(vlSymsp->TOP__top__imul.__PVT__finish));
        bufp->chgBit(oldp+497,(vlSymsp->TOP__top__src.__PVT__rdy));
        bufp->chgBit(oldp+498,(vlSymsp->TOP__top__sink.__PVT__val));
        bufp->chgIData(oldp+499,(vlSymsp->TOP__top__sink.__PVT__msg),32);
        bufp->chgBit(oldp+500,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_rdy));
        bufp->chgIData(oldp+501,(vlSymsp->TOP__top__imul__Add.__PVT__in0),32);
        bufp->chgBit(oldp+502,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_val));
        bufp->chgIData(oldp+503,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_msg),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgCData(oldp+504,(vlSymsp->TOP__top__sink__sink.__PVT__index_next),5);
        bufp->chgCData(oldp+505,(vlSymsp->TOP__top__sink__sink.__PVT__index),5);
        bufp->chgIData(oldp+506,(vlSymsp->TOP__top__sink__sink.__PVT__m_curr),32);
        bufp->chgCData(oldp+507,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__q),5);
        bufp->chgCData(oldp+508,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__d),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgQData(oldp+509,(vlSymsp->TOP__top__src.__PVT__src_msg),64);
        bufp->chgQData(oldp+511,(vlSymsp->TOP__top__src__src.__PVT__msg),64);
        bufp->chgCData(oldp+513,(vlSymsp->TOP__top__src__src.__PVT__index_next),5);
        bufp->chgCData(oldp+514,(vlSymsp->TOP__top__src__src.__PVT__index),5);
        bufp->chgQData(oldp+515,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_msg),64);
        bufp->chgCData(oldp+517,(vlSymsp->TOP__top__src__src__index_reg.__PVT__q),5);
        bufp->chgCData(oldp+518,(vlSymsp->TOP__top__src__src__index_reg.__PVT__d),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgBit(oldp+519,(vlSymsp->TOP__top.__PVT__ostream_rdy));
        bufp->chgBit(oldp+520,(vlSymsp->TOP__top__imul.__PVT__ostream_rdy));
        bufp->chgBit(oldp+521,(vlSymsp->TOP__top__sink.__PVT__rdy));
        bufp->chgBit(oldp+522,(vlSymsp->TOP__top__sink.__PVT__sink_val));
        bufp->chgIData(oldp+523,(vlSymsp->TOP__top__sink.__PVT__sink_msg),32);
        bufp->chgBit(oldp+524,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_rdy));
        bufp->chgBit(oldp+525,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_val));
        bufp->chgIData(oldp+526,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_msg),32);
        bufp->chgBit(oldp+527,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay_en));
        bufp->chgIData(oldp+528,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay_next),32);
        bufp->chgBit(oldp+529,(vlSymsp->TOP__top__sink__msg_delay.__PVT__state_next));
        bufp->chgBit(oldp+530,(vlSymsp->TOP__top__sink__sink.__PVT__val));
        bufp->chgIData(oldp+531,(vlSymsp->TOP__top__sink__sink.__PVT__msg),32);
        bufp->chgBit(oldp+532,(vlSymsp->TOP__top__sink__sink.__PVT__index_en));
        bufp->chgBit(oldp+533,(vlSymsp->TOP__top__sink__sink.__PVT__go));
        bufp->chgBit(oldp+534,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__en));
        bufp->chgIData(oldp+535,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__d),32);
        bufp->chgBit(oldp+536,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgBit(oldp+537,(vlSymsp->TOP__top.__PVT__istream_val));
        bufp->chgBit(oldp+538,(vlSymsp->TOP__top__imul.__PVT__istream_val));
        bufp->chgBit(oldp+539,(vlSymsp->TOP__top__src.__PVT__val));
        bufp->chgBit(oldp+540,(vlSymsp->TOP__top__src.__PVT__src_rdy));
        bufp->chgBit(oldp+541,(vlSymsp->TOP__top__src__src.__PVT__rdy));
        bufp->chgBit(oldp+542,(vlSymsp->TOP__top__src__src.__PVT__index_en));
        bufp->chgBit(oldp+543,(vlSymsp->TOP__top__src__src.__PVT__go));
        bufp->chgBit(oldp+544,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_rdy));
        bufp->chgBit(oldp+545,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_val));
        bufp->chgBit(oldp+546,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay_en));
        bufp->chgIData(oldp+547,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay_next),32);
        bufp->chgBit(oldp+548,(vlSymsp->TOP__top__src__msg_delay.__PVT__state_next));
        bufp->chgBit(oldp+549,(vlSymsp->TOP__top__src__src__index_reg.__PVT__en));
        bufp->chgIData(oldp+550,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__d),32);
        bufp->chgBit(oldp+551,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
        bufp->chgQData(oldp+552,(vlSymsp->TOP__top.__PVT__istream_msg),64);
        bufp->chgQData(oldp+554,(vlSymsp->TOP__top__imul.__PVT__istream_msg),64);
        bufp->chgQData(oldp+556,(vlSymsp->TOP__top__src.__PVT__msg),64);
        bufp->chgQData(oldp+558,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_msg),64);
    }
    bufp->chgBit(oldp+560,(vlSelf->clk));
    bufp->chgBit(oldp+561,(vlSelf->linetrace));
    bufp->chgBit(oldp+562,(vlSymsp->TOP__top.__PVT__reset));
    bufp->chgIData(oldp+563,(vlSymsp->TOP__top.__PVT__unnamedblk3__DOT__i),32);
    bufp->chgCData(oldp+564,(vlSymsp->TOP__top__imul.__PVT__nextstate),2);
    bufp->chgIData(oldp+565,(vlSymsp->TOP__top__imul.__PVT__add_result),32);
    bufp->chgIData(oldp+566,(vlSymsp->TOP__top__imul__vc_trace.__PVT__cycles),32);
    bufp->chgBit(oldp+567,(vlSymsp->TOP__top__src__src.__PVT__done_next));
    bufp->chgIData(oldp+568,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_num),32);
    bufp->chgIData(oldp+569,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay),32);
    bufp->chgBit(oldp+570,(vlSymsp->TOP__top__src__msg_delay.__PVT__zero_cycle_delay));
    bufp->chgBit(oldp+571,(vlSymsp->TOP__top__src__msg_delay.__PVT__state));
    bufp->chgIData(oldp+572,(vlSymsp->TOP__top__imul__Add.__PVT__in1),32);
    bufp->chgIData(oldp+573,(vlSymsp->TOP__top__imul__Add.__PVT__out),32);
    bufp->chgIData(oldp+574,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_num),32);
    bufp->chgIData(oldp+575,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay),32);
    bufp->chgBit(oldp+576,(vlSymsp->TOP__top__sink__msg_delay.__PVT__zero_cycle_delay));
    bufp->chgBit(oldp+577,(vlSymsp->TOP__top__sink__msg_delay.__PVT__state));
    bufp->chgBit(oldp+578,(vlSymsp->TOP__top__sink__sink.__PVT__done_next));
    bufp->chgIData(oldp+579,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__q),32);
    bufp->chgIData(oldp+580,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__q),32);
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
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
}
