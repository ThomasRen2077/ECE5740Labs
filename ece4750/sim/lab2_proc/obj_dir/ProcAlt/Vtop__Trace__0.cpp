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
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__idx),32);
        bufp->chgWData(oldp+1,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg),77);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__sink__DOT__sink__DOT__t),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+19,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+147,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+148,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+276,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+277,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+405,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+406,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+534,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgCData(oldp+535,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+536,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+664,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+665,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+793,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+794,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+922,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+923,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1051,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1052,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1180,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1181,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1309,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1310,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1438,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1439,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1567,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1568,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1696,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1697,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1825,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+1826,(vlSelf->top__DOT__reset));
        bufp->chgBit(oldp+1827,(vlSelf->top__DOT__mem_clear));
        bufp->chgIData(oldp+1828,(vlSelf->top__DOT__mem__DOT__mem__DOT__data_address),32);
        bufp->chgSData(oldp+1829,(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr),12);
        bufp->chgCData(oldp+1830,(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset),2);
        bufp->chgIData(oldp+1831,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[0]),32);
        bufp->chgIData(oldp+1832,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[1]),32);
        bufp->chgIData(oldp+1833,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[2]),32);
        bufp->chgIData(oldp+1834,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[3]),32);
        bufp->chgIData(oldp+1835,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[4]),32);
        bufp->chgIData(oldp+1836,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[5]),32);
        bufp->chgIData(oldp+1837,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[6]),32);
        bufp->chgIData(oldp+1838,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[7]),32);
        bufp->chgIData(oldp+1839,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[8]),32);
        bufp->chgIData(oldp+1840,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[9]),32);
        bufp->chgCData(oldp+1841,(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max),4);
        bufp->chgIData(oldp+1842,(vlSelf->top__DOT__sink__DOT__sink__DOT__data_data),32);
        bufp->chgIData(oldp+1843,(vlSelf->top__DOT__sink__DOT__sink__DOT__load__Vstatic__unnamedblk1__DOT__count),32);
        bufp->chgIData(oldp+1844,(vlSelf->top__DOT__src__DOT__src__DOT__m[0]),32);
        bufp->chgIData(oldp+1845,(vlSelf->top__DOT__src__DOT__src__DOT__m[1]),32);
        bufp->chgIData(oldp+1846,(vlSelf->top__DOT__src__DOT__src__DOT__m[2]),32);
        bufp->chgIData(oldp+1847,(vlSelf->top__DOT__src__DOT__src__DOT__m[3]),32);
        bufp->chgIData(oldp+1848,(vlSelf->top__DOT__src__DOT__src__DOT__m[4]),32);
        bufp->chgIData(oldp+1849,(vlSelf->top__DOT__src__DOT__src__DOT__m[5]),32);
        bufp->chgIData(oldp+1850,(vlSelf->top__DOT__src__DOT__src__DOT__m[6]),32);
        bufp->chgIData(oldp+1851,(vlSelf->top__DOT__src__DOT__src__DOT__m[7]),32);
        bufp->chgIData(oldp+1852,(vlSelf->top__DOT__src__DOT__src__DOT__m[8]),32);
        bufp->chgIData(oldp+1853,(vlSelf->top__DOT__src__DOT__src__DOT__m[9]),32);
        bufp->chgCData(oldp+1854,(vlSelf->top__DOT__src__DOT__src__DOT__index_max),4);
        bufp->chgIData(oldp+1855,(vlSelf->top__DOT__src__DOT__src__DOT__data_data),32);
        bufp->chgIData(oldp+1856,(vlSelf->top__DOT__src__DOT__src__DOT__load__Vstatic__unnamedblk1__DOT__count),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+1857,(vlSelf->top__DOT__DUT__DOT__idx0),32);
        bufp->chgIData(oldp+1858,(vlSelf->top__DOT__DUT__DOT__idx1),32);
        bufp->chgIData(oldp+1859,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0),32);
        bufp->chgWData(oldp+1860,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage),4096);
        bufp->chgIData(oldp+1988,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles_next),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+1989,(vlSelf->top__DOT__proc2mngr_rdy));
        bufp->chgBit(oldp+1990,(vlSelf->top__DOT__snk_done));
        bufp->chgBit(oldp+1991,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+1992,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+1993,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+1994,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgIData(oldp+1995,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i),32);
        bufp->chgIData(oldp+1996,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i),32);
        bufp->chgBit(oldp+1997,(vlSelf->top__DOT__sink__DOT__sink_rdy));
        bufp->chgBit(oldp+1998,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en));
        bufp->chgBit(oldp+1999,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2000,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next));
        bufp->chgBit(oldp+2001,(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en));
        bufp->chgBit(oldp+2002,(vlSelf->top__DOT__src__DOT__src__DOT__done_next));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+2003,(vlSelf->top__DOT__proc2mngr_msg),32);
        bufp->chgBit(oldp+2004,(vlSelf->top__DOT__proc2mngr_val));
        bufp->chgWData(oldp+2005,(vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg),77);
        bufp->chgBit(oldp+2008,(vlSelf->top__DOT__imem_reqstream_val));
        bufp->chgBit(oldp+2009,(vlSelf->top__DOT__imem_reqstream_rdy));
        bufp->chgQData(oldp+2010,(vlSelf->top__DOT__imem_respstream_msg),47);
        bufp->chgBit(oldp+2012,(vlSelf->top__DOT__imem_respstream_val));
        bufp->chgBit(oldp+2013,(vlSelf->top__DOT__dmem_reqstream_val));
        bufp->chgBit(oldp+2014,(vlSelf->top__DOT__dmem_reqstream_rdy));
        bufp->chgQData(oldp+2015,(vlSelf->top__DOT__dmem_respstream_msg),47);
        bufp->chgBit(oldp+2017,(vlSelf->top__DOT__dmem_respstream_val));
        bufp->chgBit(oldp+2018,(vlSelf->top__DOT__src_done));
        bufp->chgCData(oldp+2019,(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries),2);
        bufp->chgBit(oldp+2020,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+2021,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+2022,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+2023,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2024,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+2025,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2026,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2027,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2028,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgWData(oldp+2029,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgIData(oldp+2032,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgCData(oldp+2033,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_),3);
        bufp->chgCData(oldp+2034,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque),8);
        bufp->chgCData(oldp+2035,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test),2);
        bufp->chgCData(oldp+2036,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len),2);
        bufp->chgIData(oldp+2037,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data),32);
        bufp->chgIData(oldp+2038,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2039,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2040,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty));
        bufp->chgBit(oldp+2041,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr));
        bufp->chgBit(oldp+2042,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr));
        bufp->chgBit(oldp+2043,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        bufp->chgBit(oldp+2044,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        bufp->chgBit(oldp+2045,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+2046,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2047,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2048,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2049,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgBit(oldp+2050,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))));
        bufp->chgBit(oldp+2051,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)))));
        bufp->chgWData(oldp+2052,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data),77);
        bufp->chgWData(oldp+2055,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[0]),77);
        bufp->chgWData(oldp+2058,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[1]),77);
        bufp->chgCData(oldp+2061,((7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+2062,((0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+2063,(((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+2064,((3U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U])),2);
        bufp->chgIData(oldp+2065,(vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]),32);
        bufp->chgIData(oldp+2066,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgCData(oldp+2067,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_),3);
        bufp->chgCData(oldp+2068,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque),8);
        bufp->chgCData(oldp+2069,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test),2);
        bufp->chgCData(oldp+2070,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len),2);
        bufp->chgIData(oldp+2071,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data),32);
        bufp->chgIData(oldp+2072,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2073,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+2074,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgIData(oldp+2075,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore),32);
        bufp->chgIData(oldp+2076,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2077,(vlSelf->top__DOT__mem__DOT__mem_memreq0_val));
        bufp->chgBit(oldp+2078,(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy));
        bufp->chgWData(oldp+2079,(vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg),77);
        bufp->chgBit(oldp+2082,(vlSelf->top__DOT__mem__DOT__mem_memreq1_val));
        bufp->chgBit(oldp+2083,(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy));
        bufp->chgBit(oldp+2084,(vlSelf->top__DOT__mem__DOT__mem_memresp0_val));
        bufp->chgBit(oldp+2085,(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy));
        bufp->chgQData(oldp+2086,(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg),47);
        bufp->chgBit(oldp+2088,(vlSelf->top__DOT__mem__DOT__mem_memresp1_val));
        bufp->chgBit(oldp+2089,(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy));
        bufp->chgQData(oldp+2090,(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg),47);
        bufp->chgBit(oldp+2092,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+2093,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+2094,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgBit(oldp+2097,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+2098,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+2099,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgCData(oldp+2102,((7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+2103,((0xffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+2104,(((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+2105,((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U])),2);
        bufp->chgIData(oldp+2106,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]),32);
        bufp->chgCData(oldp+2107,((7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+2108,((0xffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+2109,(((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+2110,((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U])),2);
        bufp->chgIData(oldp+2111,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]),32);
        bufp->chgCData(oldp+2112,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M),3);
        bufp->chgCData(oldp+2113,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M),3);
        bufp->chgSData(oldp+2114,((0x3fffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                              >> 2U))),14);
        bufp->chgSData(oldp+2115,((0x3fffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                              >> 2U))),14);
        bufp->chgSData(oldp+2116,((0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                             >> 4U))),12);
        bufp->chgCData(oldp+2117,((3U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                         >> 2U))),2);
        bufp->chgSData(oldp+2118,((0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                             >> 4U))),12);
        bufp->chgCData(oldp+2119,((3U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                         >> 2U))),2);
        bufp->chgIData(oldp+2120,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M),32);
        bufp->chgIData(oldp+2121,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M),32);
        bufp->chgIData(oldp+2122,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M),32);
        bufp->chgIData(oldp+2123,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M),32);
        bufp->chgBit(oldp+2124,(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M));
        bufp->chgBit(oldp+2125,(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M));
        bufp->chgBit(oldp+2126,(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M));
        bufp->chgBit(oldp+2127,(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M));
        bufp->chgBit(oldp+2128,(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared));
        bufp->chgQData(oldp+2129,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp),47);
        bufp->chgQData(oldp+2131,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp),47);
        bufp->chgBit(oldp+2133,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+2134,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2135,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2136,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2137,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe));
        bufp->chgCData(oldp+2138,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_),3);
        bufp->chgCData(oldp+2139,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque),8);
        bufp->chgIData(oldp+2140,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr),32);
        bufp->chgCData(oldp+2141,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len),2);
        bufp->chgIData(oldp+2142,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data),32);
        bufp->chgIData(oldp+2143,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2144,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+2145,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2146,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2147,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2148,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe));
        bufp->chgIData(oldp+2149,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2150,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2151,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+2152,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2153,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2154,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgQData(oldp+2155,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore),47);
        bufp->chgCData(oldp+2157,((7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2cU)))),3);
        bufp->chgCData(oldp+2158,((0xffU & (IData)(
                                                   (vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                    >> 0x24U)))),8);
        bufp->chgCData(oldp+2159,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+2160,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+2161,((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg)),32);
        bufp->chgIData(oldp+2162,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2163,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2164,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+2165,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2166,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2167,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgQData(oldp+2168,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore),47);
        bufp->chgCData(oldp+2170,((7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2cU)))),3);
        bufp->chgCData(oldp+2171,((0xffU & (IData)(
                                                   (vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                    >> 0x24U)))),8);
        bufp->chgCData(oldp+2172,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+2173,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+2174,((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg)),32);
        bufp->chgIData(oldp+2175,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+2176,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+2177,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+2178,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+2179,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+2180,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+2181,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num),32);
        bufp->chgBit(oldp+2182,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en));
        bufp->chgIData(oldp+2183,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2184,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay),32);
        bufp->chgBit(oldp+2185,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2186,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next));
        bufp->chgBit(oldp+2187,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state));
        bufp->chgIData(oldp+2188,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num),32);
        bufp->chgBit(oldp+2189,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en));
        bufp->chgIData(oldp+2190,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2191,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay),32);
        bufp->chgBit(oldp+2192,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2193,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next));
        bufp->chgBit(oldp+2194,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state));
        bufp->chgIData(oldp+2195,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num),32);
        bufp->chgBit(oldp+2196,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en));
        bufp->chgIData(oldp+2197,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2198,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay),32);
        bufp->chgBit(oldp+2199,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2200,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next));
        bufp->chgBit(oldp+2201,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state));
        bufp->chgIData(oldp+2202,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num),32);
        bufp->chgBit(oldp+2203,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en));
        bufp->chgIData(oldp+2204,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2205,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay),32);
        bufp->chgBit(oldp+2206,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2207,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next));
        bufp->chgBit(oldp+2208,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state));
        bufp->chgIData(oldp+2209,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2210,(vlSelf->top__DOT__sink__DOT__sink_val));
        bufp->chgIData(oldp+2211,(vlSelf->top__DOT__sink__DOT__sink_msg),32);
        bufp->chgIData(oldp+2212,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num),32);
        bufp->chgIData(oldp+2213,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2214,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay),32);
        bufp->chgBit(oldp+2215,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state));
        bufp->chgCData(oldp+2216,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)))),4);
        bufp->chgCData(oldp+2217,(vlSelf->top__DOT__sink__DOT__sink__DOT__index),4);
        bufp->chgBit(oldp+2218,(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg));
        bufp->chgBit(oldp+2219,(vlSelf->top__DOT__sink__DOT__sink__DOT__failed));
        bufp->chgIData(oldp+2220,(vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr),32);
        bufp->chgBit(oldp+2221,(vlSelf->top__DOT__src__DOT__src_val));
        bufp->chgBit(oldp+2222,(vlSelf->top__DOT__src__DOT__src_rdy));
        bufp->chgIData(oldp+2223,(vlSelf->top__DOT__src__DOT__src_msg),32);
        bufp->chgIData(oldp+2224,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num),32);
        bufp->chgBit(oldp+2225,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en));
        bufp->chgIData(oldp+2226,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2227,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay),32);
        bufp->chgBit(oldp+2228,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2229,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next));
        bufp->chgBit(oldp+2230,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state));
        bufp->chgBit(oldp+2231,(vlSelf->top__DOT__src__DOT__src__DOT__index_en));
        bufp->chgCData(oldp+2232,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)))),4);
        bufp->chgCData(oldp+2233,(vlSelf->top__DOT__src__DOT__src__DOT__index),4);
        bufp->chgBit(oldp+2234,(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgWData(oldp+2235,(vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg),77);
        bufp->chgCData(oldp+2238,((7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+2239,((0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+2240,(((vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+2241,((3U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U])),2);
        bufp->chgIData(oldp+2242,(vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]),32);
        bufp->chgWData(oldp+2243,(vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg),77);
        bufp->chgCData(oldp+2246,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_),3);
        bufp->chgCData(oldp+2247,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque),8);
        bufp->chgIData(oldp+2248,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr),32);
        bufp->chgCData(oldp+2249,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len),2);
        bufp->chgIData(oldp+2250,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data),32);
    }
    bufp->chgBit(oldp+2251,(vlSelf->clk));
    bufp->chgBit(oldp+2252,(vlSelf->linetrace));
    bufp->chgIData(oldp+2253,(vlSelf->top__DOT__mngr2proc_msg),32);
    bufp->chgBit(oldp+2254,(vlSelf->top__DOT__mngr2proc_val));
    bufp->chgIData(oldp+2255,(vlSelf->top__DOT__fp),32);
    bufp->chgIData(oldp+2256,(vlSelf->top__DOT__mem__DOT__mem__DOT__data_data),32);
    bufp->chgIData(oldp+2257,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i),32);
    bufp->chgIData(oldp+2258,(vlSelf->top__DOT__unnamedblk1__DOT__i),32);
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
}
