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
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    VlWide<16>/*511:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__idx),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__DUT__DOT__mul__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__sink__DOT__sink__DOT__t),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+17,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+145,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+146,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+274,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+275,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+403,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+404,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+532,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+533,(vlSelf->top__DOT__DUT__DOT__mul__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+661,(vlSelf->top__DOT__DUT__DOT__mul__DOT__vc_trace__DOT__level),4);
        bufp->chgCData(oldp+662,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+663,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+791,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+792,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+920,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+921,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1049,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1050,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1178,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1179,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1307,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1308,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1436,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1437,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1565,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1566,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1694,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1695,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1823,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1824,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1952,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+1953,(vlSelf->top__DOT__reset));
        bufp->chgBit(oldp+1954,(vlSelf->top__DOT__mem_clear));
        bufp->chgIData(oldp+1955,(vlSelf->top__DOT__mem__DOT__mem__DOT__data_address),32);
        bufp->chgSData(oldp+1956,(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr),12);
        bufp->chgCData(oldp+1957,(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset),2);
        bufp->chgIData(oldp+1958,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[0]),32);
        bufp->chgIData(oldp+1959,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[1]),32);
        bufp->chgIData(oldp+1960,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[2]),32);
        bufp->chgIData(oldp+1961,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[3]),32);
        bufp->chgIData(oldp+1962,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[4]),32);
        bufp->chgIData(oldp+1963,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[5]),32);
        bufp->chgIData(oldp+1964,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[6]),32);
        bufp->chgIData(oldp+1965,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[7]),32);
        bufp->chgIData(oldp+1966,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[8]),32);
        bufp->chgIData(oldp+1967,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[9]),32);
        bufp->chgCData(oldp+1968,(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max),4);
        bufp->chgIData(oldp+1969,(vlSelf->top__DOT__sink__DOT__sink__DOT__data_data),32);
        bufp->chgIData(oldp+1970,(vlSelf->top__DOT__sink__DOT__sink__DOT__load__Vstatic__unnamedblk1__DOT__count),32);
        bufp->chgIData(oldp+1971,(vlSelf->top__DOT__src__DOT__src__DOT__m[0]),32);
        bufp->chgIData(oldp+1972,(vlSelf->top__DOT__src__DOT__src__DOT__m[1]),32);
        bufp->chgIData(oldp+1973,(vlSelf->top__DOT__src__DOT__src__DOT__m[2]),32);
        bufp->chgIData(oldp+1974,(vlSelf->top__DOT__src__DOT__src__DOT__m[3]),32);
        bufp->chgIData(oldp+1975,(vlSelf->top__DOT__src__DOT__src__DOT__m[4]),32);
        bufp->chgIData(oldp+1976,(vlSelf->top__DOT__src__DOT__src__DOT__m[5]),32);
        bufp->chgIData(oldp+1977,(vlSelf->top__DOT__src__DOT__src__DOT__m[6]),32);
        bufp->chgIData(oldp+1978,(vlSelf->top__DOT__src__DOT__src__DOT__m[7]),32);
        bufp->chgIData(oldp+1979,(vlSelf->top__DOT__src__DOT__src__DOT__m[8]),32);
        bufp->chgIData(oldp+1980,(vlSelf->top__DOT__src__DOT__src__DOT__m[9]),32);
        bufp->chgCData(oldp+1981,(vlSelf->top__DOT__src__DOT__src__DOT__index_max),4);
        bufp->chgIData(oldp+1982,(vlSelf->top__DOT__src__DOT__src__DOT__data_data),32);
        bufp->chgIData(oldp+1983,(vlSelf->top__DOT__src__DOT__src__DOT__load__Vstatic__unnamedblk1__DOT__count),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgWData(oldp+1984,(vlSelf->top__DOT__DUT__DOT__temp),4096);
        bufp->chgWData(oldp+2112,(vlSelf->top__DOT__DUT__DOT__str),4096);
        bufp->chgIData(oldp+2240,(vlSelf->top__DOT__DUT__DOT__idx0),32);
        bufp->chgIData(oldp+2241,(vlSelf->top__DOT__DUT__DOT__idx1),32);
        bufp->chgIData(oldp+2242,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str),24);
        bufp->chgIData(oldp+2243,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str),24);
        bufp->chgIData(oldp+2244,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str),24);
        bufp->chgWData(oldp+2245,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str),72);
        bufp->chgSData(oldp+2248,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str),16);
        bufp->chgCData(oldp+2249,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1),5);
        bufp->chgCData(oldp+2250,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2),5);
        bufp->chgCData(oldp+2251,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd),5);
        bufp->chgSData(oldp+2252,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr),12);
        bufp->chgCData(oldp+2253,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct),7);
        bufp->chgIData(oldp+2254,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0),32);
        bufp->chgIData(oldp+2255,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1),32);
        bufp->chgIData(oldp+2256,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0),32);
        bufp->chgIData(oldp+2257,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1),32);
        bufp->chgWData(oldp+2258,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage),4096);
        bufp->chgIData(oldp+2386,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles_next),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+2387,(vlSelf->top__DOT__dmem_respstream_val));
        bufp->chgWData(oldp+2388,(vlSelf->top__DOT__cache0_req_msg),77);
        bufp->chgBit(oldp+2391,(vlSelf->top__DOT__cache0_req_val));
        bufp->chgWData(oldp+2392,(vlSelf->top__DOT__cache1_req_msg),77);
        bufp->chgBit(oldp+2395,(vlSelf->top__DOT__cache1_req_val));
        bufp->chgBit(oldp+2396,(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray_wen));
        bufp->chgBit(oldp+2397,(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray_wen2));
        bufp->chgBit(oldp+2398,(vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_wen));
        bufp->chgBit(oldp+2399,(vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_wen2));
        bufp->chgBit(oldp+2400,(vlSelf->top__DOT__cache__DOT__dcache__DOT__write_en_sel));
        bufp->chgBit(oldp+2401,(vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_one_word_done));
        bufp->chgBit(oldp+2402,(vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_req_sent));
        bufp->chgBit(oldp+2403,(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray_match));
        bufp->chgBit(oldp+2404,(vlSelf->top__DOT__cache__DOT__dcache__DOT__current_dirty));
        bufp->chgBit(oldp+2405,(vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_done));
        bufp->chgBit(oldp+2406,(vlSelf->top__DOT__cache__DOT__dcache__DOT__current_lru));
        bufp->chgBit(oldp+2407,(vlSelf->top__DOT__cache__DOT__dcache__DOT__flush_dirty));
        bufp->chgCData(oldp+2408,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_next),2);
        bufp->chgBit(oldp+2409,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__ostall_miss));
        bufp->chgIData(oldp+2410,(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data),32);
        bufp->chgIData(oldp+2411,(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr),32);
        bufp->chgIData(oldp+2412,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_to_mem_data),32);
        bufp->chgBit(oldp+2413,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tarray_match1));
        bufp->chgBit(oldp+2414,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tarray_match2));
        bufp->chgIData(oldp+2415,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr),32);
        bufp->chgIData(oldp+2416,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr),32);
        bufp->chgCData(oldp+2417,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__index_spill),5);
        bufp->chgIData(oldp+2418,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__Spill_tag),21);
        bufp->chgSData(oldp+2419,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable),16);
        bufp->chgWData(oldp+2420,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output),512);
        bufp->chgBit(oldp+2436,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vcellinp__FLush_dirty_mux__in0));
        bufp->chgBit(oldp+2437,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vcellinp__FLush_dirty_mux__in1));
        bufp->chgIData(oldp+2438,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vcellinp__Spill_tag_mux__in0),21);
        bufp->chgIData(oldp+2439,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vcellinp__Spill_tag_mux__in1),21);
        bufp->chgIData(oldp+2440,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output[0U]),32);
        bufp->chgIData(oldp+2441,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output[1U]),32);
        bufp->chgIData(oldp+2442,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output[2U]),32);
        bufp->chgIData(oldp+2443,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output[3U]),32);
        bufp->chgIData(oldp+2444,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output[4U]),32);
        bufp->chgIData(oldp+2445,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output[5U]),32);
        bufp->chgIData(oldp+2446,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output[6U]),32);
        bufp->chgIData(oldp+2447,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output[7U]),32);
        bufp->chgIData(oldp+2448,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output[8U]),32);
        bufp->chgIData(oldp+2449,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output[9U]),32);
        bufp->chgIData(oldp+2450,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output[0xaU]),32);
        bufp->chgIData(oldp+2451,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output[0xbU]),32);
        bufp->chgIData(oldp+2452,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output[0xcU]),32);
        bufp->chgIData(oldp+2453,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output[0xdU]),32);
        bufp->chgIData(oldp+2454,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output[0xeU]),32);
        bufp->chgIData(oldp+2455,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array_output[0xfU]),32);
        bufp->chgBit(oldp+2456,(vlSelf->top__DOT__cache__DOT__icache__DOT__spill_one_word_done));
        bufp->chgBit(oldp+2457,(vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_req_sent));
        bufp->chgBit(oldp+2458,(vlSelf->top__DOT__cache__DOT__icache__DOT__spill_done));
        bufp->chgCData(oldp+2459,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_next),2);
        bufp->chgIData(oldp+2460,(vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr),32);
        bufp->chgIData(oldp+2461,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_to_mem_data),32);
        bufp->chgIData(oldp+2462,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__spill_initial_addr),32);
        bufp->chgIData(oldp+2463,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__spill_addr),32);
        bufp->chgCData(oldp+2464,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__index_spill),5);
        bufp->chgBit(oldp+2465,(vlSelf->top__DOT__mem__DOT__mem_memreq0_val));
        bufp->chgWData(oldp+2466,(vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg),77);
        bufp->chgBit(oldp+2469,(vlSelf->top__DOT__mem__DOT__mem_memreq1_val));
        bufp->chgWData(oldp+2470,(vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg),77);
        bufp->chgBit(oldp+2473,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2474,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2475,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe));
        bufp->chgCData(oldp+2476,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_),3);
        bufp->chgCData(oldp+2477,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque),8);
        bufp->chgIData(oldp+2478,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr),32);
        bufp->chgCData(oldp+2479,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len),2);
        bufp->chgIData(oldp+2480,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data),32);
        bufp->chgBit(oldp+2481,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2482,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2483,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe));
        bufp->chgCData(oldp+2484,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_),3);
        bufp->chgCData(oldp+2485,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque),8);
        bufp->chgIData(oldp+2486,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr),32);
        bufp->chgCData(oldp+2487,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len),2);
        bufp->chgIData(oldp+2488,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data),32);
        bufp->chgCData(oldp+2489,((7U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+2490,((0xffU & (vlSelf->top__DOT__cache0_req_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+2491,(((vlSelf->top__DOT__cache0_req_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__cache0_req_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+2492,((3U & vlSelf->top__DOT__cache0_req_msg[1U])),2);
        bufp->chgIData(oldp+2493,(vlSelf->top__DOT__cache0_req_msg[0U]),32);
        bufp->chgCData(oldp+2494,((7U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+2495,((0xffU & (vlSelf->top__DOT__cache1_req_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+2496,(((vlSelf->top__DOT__cache1_req_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__cache1_req_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+2497,((3U & vlSelf->top__DOT__cache1_req_msg[1U])),2);
        bufp->chgIData(oldp+2498,(vlSelf->top__DOT__cache1_req_msg[0U]),32);
        bufp->chgBit(oldp+2499,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en));
        bufp->chgBit(oldp+2500,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2501,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next));
        bufp->chgBit(oldp+2502,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en));
        bufp->chgBit(oldp+2503,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2504,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+2505,(vlSelf->top__DOT__mngr2proc_rdy));
        bufp->chgBit(oldp+2506,((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_M0)))));
        bufp->chgBit(oldp+2507,(vlSelf->top__DOT__imem_respstream_rdy));
        bufp->chgBit(oldp+2508,(vlSelf->top__DOT__dmem_reqstream_val));
        bufp->chgBit(oldp+2509,((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__stall_M0)))));
        bufp->chgBit(oldp+2510,(vlSelf->top__DOT__dmem_respstream_rdy));
        bufp->chgBit(oldp+2511,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F));
        bufp->chgBit(oldp+2512,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val));
        bufp->chgBit(oldp+2513,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy));
        bufp->chgBit(oldp+2514,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val));
        bufp->chgQData(oldp+2515,(vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg),64);
        bufp->chgBit(oldp+2517,(vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_val));
        bufp->chgBit(oldp+2518,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)))));
        bufp->chgBit(oldp+2519,(vlSelf->top__DOT__DUT__DOT__reg_en_D));
        bufp->chgBit(oldp+2520,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)))));
        bufp->chgBit(oldp+2521,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F));
        bufp->chgBit(oldp+2522,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D));
        bufp->chgBit(oldp+2523,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M));
        bufp->chgBit(oldp+2524,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F));
        bufp->chgBit(oldp+2525,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D));
        bufp->chgBit(oldp+2526,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X));
        bufp->chgBit(oldp+2527,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M));
        bufp->chgBit(oldp+2528,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X));
        bufp->chgBit(oldp+2529,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D));
        bufp->chgBit(oldp+2530,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F));
        bufp->chgBit(oldp+2531,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D));
        bufp->chgBit(oldp+2532,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D));
        bufp->chgBit(oldp+2533,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X));
        bufp->chgBit(oldp+2534,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M));
        bufp->chgBit(oldp+2535,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2536,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2537,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2538,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2539,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgIData(oldp+2540,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D),32);
        bufp->chgIData(oldp+2541,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D),32);
        bufp->chgIData(oldp+2542,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D),32);
        bufp->chgIData(oldp+2543,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D),32);
        bufp->chgIData(oldp+2544,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D),32);
        bufp->chgIData(oldp+2545,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M),32);
        bufp->chgBit(oldp+2546,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state));
        bufp->chgBit(oldp+2547,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go));
        bufp->chgCData(oldp+2548,(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_next),2);
        bufp->chgBit(oldp+2549,(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__istream_go));
        bufp->chgBit(oldp+2550,(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__ostream_go));
        bufp->chgIData(oldp+2551,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out),32);
        bufp->chgIData(oldp+2552,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out),32);
        bufp->chgBit(oldp+2553,((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__stall_Y)))));
        bufp->chgBit(oldp+2554,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))));
        bufp->chgBit(oldp+2555,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__stall_Y));
        bufp->chgBit(oldp+2556,((1U & (~ (IData)(vlSelf->top__DOT__dmem_respstream_rdy)))));
        bufp->chgBit(oldp+2557,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__ostall_M0));
        bufp->chgBit(oldp+2558,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__stall_M0));
        bufp->chgBit(oldp+2559,((1U & (~ (IData)(vlSelf->top__DOT__imem_respstream_rdy)))));
        bufp->chgBit(oldp+2560,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__ostall_M0));
        bufp->chgBit(oldp+2561,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_M0));
        bufp->chgBit(oldp+2562,(vlSelf->top__DOT__src__DOT__src_rdy));
        bufp->chgBit(oldp+2563,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en));
        bufp->chgBit(oldp+2564,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2565,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next));
        bufp->chgBit(oldp+2566,(vlSelf->top__DOT__src__DOT__src__DOT__index_en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+2567,(vlSelf->top__DOT__proc2mngr_rdy));
        bufp->chgBit(oldp+2568,(vlSelf->top__DOT__snk_done));
        bufp->chgIData(oldp+2569,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i),32);
        bufp->chgIData(oldp+2570,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i),32);
        bufp->chgBit(oldp+2571,(vlSelf->top__DOT__sink__DOT__sink_rdy));
        bufp->chgBit(oldp+2572,(vlSelf->top__DOT__src__DOT__src__DOT__done_next));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgBit(oldp+2573,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2574,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2575,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2576,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgBit(oldp+2577,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en));
        bufp->chgBit(oldp+2578,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2579,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next));
        bufp->chgBit(oldp+2580,(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgBit(oldp+2581,(vlSelf->top__DOT__imem_reqstream_val));
        bufp->chgBit(oldp+2582,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val));
        bufp->chgBit(oldp+2583,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2584,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        bufp->chgBit(oldp+2585,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        bufp->chgBit(oldp+2586,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2587,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2588,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2589,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgBit(oldp+2590,((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_Y)))));
        bufp->chgBit(oldp+2591,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))));
        bufp->chgBit(oldp+2592,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_Y));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+2593,(vlSelf->top__DOT__imem_respstream_val));
        bufp->chgBit(oldp+2594,(vlSelf->top__DOT__cache0_req_rdy));
        bufp->chgQData(oldp+2595,(vlSelf->top__DOT__cache0_resp_msg),47);
        bufp->chgBit(oldp+2597,(vlSelf->top__DOT__cache0_resp_val));
        bufp->chgBit(oldp+2598,(vlSelf->top__DOT__cache0_resp_rdy));
        bufp->chgBit(oldp+2599,(vlSelf->top__DOT__cache1_req_rdy));
        bufp->chgQData(oldp+2600,(vlSelf->top__DOT__cache1_resp_msg),47);
        bufp->chgBit(oldp+2602,(vlSelf->top__DOT__cache1_resp_val));
        bufp->chgBit(oldp+2603,(vlSelf->top__DOT__cache1_resp_rdy));
        bufp->chgBit(oldp+2604,(vlSelf->top__DOT__src_done));
        bufp->chgBit(oldp+2605,(vlSelf->top__DOT__flush_done));
        bufp->chgBit(oldp+2606,(vlSelf->top__DOT__cache__DOT__flush_done1));
        bufp->chgBit(oldp+2607,(vlSelf->top__DOT__cache__DOT__flush_done2));
        bufp->chgBit(oldp+2608,(vlSelf->top__DOT__cache__DOT__dcache__DOT__mem_resp_msg_type));
        bufp->chgBit(oldp+2609,(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray_en));
        bufp->chgBit(oldp+2610,(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray_en2));
        bufp->chgBit(oldp+2611,(vlSelf->top__DOT__cache__DOT__dcache__DOT__z6b_sel));
        bufp->chgBit(oldp+2612,(vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_write_mux_sel));
        bufp->chgBit(oldp+2613,(vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_resp_received));
        bufp->chgBit(oldp+2614,(vlSelf->top__DOT__cache__DOT__dcache__DOT__Spill_or_Refill_sel));
        bufp->chgBit(oldp+2615,(vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_req_done));
        bufp->chgBit(oldp+2616,(vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_resp_done));
        bufp->chgBit(oldp+2617,(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__ctrlunit__cache_req_type));
        bufp->chgBit(oldp+2618,(((IData)(vlSelf->top__DOT__cache1_resp_val) 
                                 & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                            >> 0x2cU)))));
        bufp->chgBit(oldp+2619,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__val_M0));
        bufp->chgBit(oldp+2620,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__mem_req_type_M0));
        bufp->chgCData(oldp+2621,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg),2);
        bufp->chgIData(oldp+2622,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data),32);
        bufp->chgIData(oldp+2623,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0),32);
        bufp->chgIData(oldp+2624,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0),32);
        bufp->chgIData(oldp+2625,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[0]),21);
        bufp->chgIData(oldp+2626,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[1]),21);
        bufp->chgIData(oldp+2627,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[2]),21);
        bufp->chgIData(oldp+2628,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[3]),21);
        bufp->chgIData(oldp+2629,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[4]),21);
        bufp->chgIData(oldp+2630,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[5]),21);
        bufp->chgIData(oldp+2631,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[6]),21);
        bufp->chgIData(oldp+2632,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[7]),21);
        bufp->chgIData(oldp+2633,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[8]),21);
        bufp->chgIData(oldp+2634,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[9]),21);
        bufp->chgIData(oldp+2635,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[10]),21);
        bufp->chgIData(oldp+2636,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[11]),21);
        bufp->chgIData(oldp+2637,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[12]),21);
        bufp->chgIData(oldp+2638,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[13]),21);
        bufp->chgIData(oldp+2639,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[14]),21);
        bufp->chgIData(oldp+2640,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[15]),21);
        bufp->chgIData(oldp+2641,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[16]),21);
        bufp->chgIData(oldp+2642,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[17]),21);
        bufp->chgIData(oldp+2643,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[18]),21);
        bufp->chgIData(oldp+2644,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[19]),21);
        bufp->chgIData(oldp+2645,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[20]),21);
        bufp->chgIData(oldp+2646,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[21]),21);
        bufp->chgIData(oldp+2647,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[22]),21);
        bufp->chgIData(oldp+2648,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[23]),21);
        bufp->chgIData(oldp+2649,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[24]),21);
        bufp->chgIData(oldp+2650,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[25]),21);
        bufp->chgIData(oldp+2651,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[26]),21);
        bufp->chgIData(oldp+2652,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[27]),21);
        bufp->chgIData(oldp+2653,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[28]),21);
        bufp->chgIData(oldp+2654,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[29]),21);
        bufp->chgIData(oldp+2655,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[30]),21);
        bufp->chgIData(oldp+2656,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array[31]),21);
        bufp->chgIData(oldp+2657,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[0]),21);
        bufp->chgIData(oldp+2658,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[1]),21);
        bufp->chgIData(oldp+2659,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[2]),21);
        bufp->chgIData(oldp+2660,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[3]),21);
        bufp->chgIData(oldp+2661,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[4]),21);
        bufp->chgIData(oldp+2662,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[5]),21);
        bufp->chgIData(oldp+2663,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[6]),21);
        bufp->chgIData(oldp+2664,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[7]),21);
        bufp->chgIData(oldp+2665,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[8]),21);
        bufp->chgIData(oldp+2666,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[9]),21);
        bufp->chgIData(oldp+2667,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[10]),21);
        bufp->chgIData(oldp+2668,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[11]),21);
        bufp->chgIData(oldp+2669,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[12]),21);
        bufp->chgIData(oldp+2670,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[13]),21);
        bufp->chgIData(oldp+2671,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[14]),21);
        bufp->chgIData(oldp+2672,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[15]),21);
        bufp->chgIData(oldp+2673,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[16]),21);
        bufp->chgIData(oldp+2674,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[17]),21);
        bufp->chgIData(oldp+2675,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[18]),21);
        bufp->chgIData(oldp+2676,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[19]),21);
        bufp->chgIData(oldp+2677,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[20]),21);
        bufp->chgIData(oldp+2678,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[21]),21);
        bufp->chgIData(oldp+2679,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[22]),21);
        bufp->chgIData(oldp+2680,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[23]),21);
        bufp->chgIData(oldp+2681,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[24]),21);
        bufp->chgIData(oldp+2682,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[25]),21);
        bufp->chgIData(oldp+2683,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[26]),21);
        bufp->chgIData(oldp+2684,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[27]),21);
        bufp->chgIData(oldp+2685,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[28]),21);
        bufp->chgIData(oldp+2686,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[29]),21);
        bufp->chgIData(oldp+2687,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[30]),21);
        bufp->chgIData(oldp+2688,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__tag_array2[31]),21);
        bufp->chgBit(oldp+2689,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[0]));
        bufp->chgBit(oldp+2690,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[1]));
        bufp->chgBit(oldp+2691,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[2]));
        bufp->chgBit(oldp+2692,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[3]));
        bufp->chgBit(oldp+2693,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[4]));
        bufp->chgBit(oldp+2694,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[5]));
        bufp->chgBit(oldp+2695,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[6]));
        bufp->chgBit(oldp+2696,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[7]));
        bufp->chgBit(oldp+2697,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[8]));
        bufp->chgBit(oldp+2698,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[9]));
        bufp->chgBit(oldp+2699,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[10]));
        bufp->chgBit(oldp+2700,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[11]));
        bufp->chgBit(oldp+2701,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[12]));
        bufp->chgBit(oldp+2702,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[13]));
        bufp->chgBit(oldp+2703,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[14]));
        bufp->chgBit(oldp+2704,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[15]));
        bufp->chgBit(oldp+2705,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[16]));
        bufp->chgBit(oldp+2706,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[17]));
        bufp->chgBit(oldp+2707,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[18]));
        bufp->chgBit(oldp+2708,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[19]));
        bufp->chgBit(oldp+2709,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[20]));
        bufp->chgBit(oldp+2710,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[21]));
        bufp->chgBit(oldp+2711,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[22]));
        bufp->chgBit(oldp+2712,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[23]));
        bufp->chgBit(oldp+2713,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[24]));
        bufp->chgBit(oldp+2714,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[25]));
        bufp->chgBit(oldp+2715,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[26]));
        bufp->chgBit(oldp+2716,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[27]));
        bufp->chgBit(oldp+2717,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[28]));
        bufp->chgBit(oldp+2718,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[29]));
        bufp->chgBit(oldp+2719,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[30]));
        bufp->chgBit(oldp+2720,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array[31]));
        bufp->chgBit(oldp+2721,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[0]));
        bufp->chgBit(oldp+2722,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[1]));
        bufp->chgBit(oldp+2723,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[2]));
        bufp->chgBit(oldp+2724,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[3]));
        bufp->chgBit(oldp+2725,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[4]));
        bufp->chgBit(oldp+2726,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[5]));
        bufp->chgBit(oldp+2727,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[6]));
        bufp->chgBit(oldp+2728,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[7]));
        bufp->chgBit(oldp+2729,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[8]));
        bufp->chgBit(oldp+2730,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[9]));
        bufp->chgBit(oldp+2731,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[10]));
        bufp->chgBit(oldp+2732,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[11]));
        bufp->chgBit(oldp+2733,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[12]));
        bufp->chgBit(oldp+2734,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[13]));
        bufp->chgBit(oldp+2735,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[14]));
        bufp->chgBit(oldp+2736,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[15]));
        bufp->chgBit(oldp+2737,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[16]));
        bufp->chgBit(oldp+2738,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[17]));
        bufp->chgBit(oldp+2739,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[18]));
        bufp->chgBit(oldp+2740,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[19]));
        bufp->chgBit(oldp+2741,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[20]));
        bufp->chgBit(oldp+2742,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[21]));
        bufp->chgBit(oldp+2743,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[22]));
        bufp->chgBit(oldp+2744,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[23]));
        bufp->chgBit(oldp+2745,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[24]));
        bufp->chgBit(oldp+2746,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[25]));
        bufp->chgBit(oldp+2747,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[26]));
        bufp->chgBit(oldp+2748,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[27]));
        bufp->chgBit(oldp+2749,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[28]));
        bufp->chgBit(oldp+2750,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[29]));
        bufp->chgBit(oldp+2751,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[30]));
        bufp->chgBit(oldp+2752,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__dirty_array2[31]));
        bufp->chgBit(oldp+2753,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[0]));
        bufp->chgBit(oldp+2754,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[1]));
        bufp->chgBit(oldp+2755,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[2]));
        bufp->chgBit(oldp+2756,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[3]));
        bufp->chgBit(oldp+2757,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[4]));
        bufp->chgBit(oldp+2758,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[5]));
        bufp->chgBit(oldp+2759,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[6]));
        bufp->chgBit(oldp+2760,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[7]));
        bufp->chgBit(oldp+2761,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[8]));
        bufp->chgBit(oldp+2762,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[9]));
        bufp->chgBit(oldp+2763,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[10]));
        bufp->chgBit(oldp+2764,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[11]));
        bufp->chgBit(oldp+2765,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[12]));
        bufp->chgBit(oldp+2766,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[13]));
        bufp->chgBit(oldp+2767,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[14]));
        bufp->chgBit(oldp+2768,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[15]));
        bufp->chgBit(oldp+2769,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[16]));
        bufp->chgBit(oldp+2770,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[17]));
        bufp->chgBit(oldp+2771,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[18]));
        bufp->chgBit(oldp+2772,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[19]));
        bufp->chgBit(oldp+2773,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[20]));
        bufp->chgBit(oldp+2774,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[21]));
        bufp->chgBit(oldp+2775,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[22]));
        bufp->chgBit(oldp+2776,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[23]));
        bufp->chgBit(oldp+2777,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[24]));
        bufp->chgBit(oldp+2778,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[25]));
        bufp->chgBit(oldp+2779,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[26]));
        bufp->chgBit(oldp+2780,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[27]));
        bufp->chgBit(oldp+2781,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[28]));
        bufp->chgBit(oldp+2782,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[29]));
        bufp->chgBit(oldp+2783,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[30]));
        bufp->chgBit(oldp+2784,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array[31]));
        bufp->chgBit(oldp+2785,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[0]));
        bufp->chgBit(oldp+2786,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[1]));
        bufp->chgBit(oldp+2787,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[2]));
        bufp->chgBit(oldp+2788,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[3]));
        bufp->chgBit(oldp+2789,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[4]));
        bufp->chgBit(oldp+2790,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[5]));
        bufp->chgBit(oldp+2791,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[6]));
        bufp->chgBit(oldp+2792,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[7]));
        bufp->chgBit(oldp+2793,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[8]));
        bufp->chgBit(oldp+2794,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[9]));
        bufp->chgBit(oldp+2795,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[10]));
        bufp->chgBit(oldp+2796,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[11]));
        bufp->chgBit(oldp+2797,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[12]));
        bufp->chgBit(oldp+2798,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[13]));
        bufp->chgBit(oldp+2799,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[14]));
        bufp->chgBit(oldp+2800,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[15]));
        bufp->chgBit(oldp+2801,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[16]));
        bufp->chgBit(oldp+2802,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[17]));
        bufp->chgBit(oldp+2803,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[18]));
        bufp->chgBit(oldp+2804,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[19]));
        bufp->chgBit(oldp+2805,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[20]));
        bufp->chgBit(oldp+2806,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[21]));
        bufp->chgBit(oldp+2807,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[22]));
        bufp->chgBit(oldp+2808,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[23]));
        bufp->chgBit(oldp+2809,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[24]));
        bufp->chgBit(oldp+2810,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[25]));
        bufp->chgBit(oldp+2811,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[26]));
        bufp->chgBit(oldp+2812,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[27]));
        bufp->chgBit(oldp+2813,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[28]));
        bufp->chgBit(oldp+2814,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[29]));
        bufp->chgBit(oldp+2815,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[30]));
        bufp->chgBit(oldp+2816,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__valid_array2[31]));
        bufp->chgBit(oldp+2817,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[0]));
        bufp->chgBit(oldp+2818,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[1]));
        bufp->chgBit(oldp+2819,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[2]));
        bufp->chgBit(oldp+2820,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[3]));
        bufp->chgBit(oldp+2821,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[4]));
        bufp->chgBit(oldp+2822,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[5]));
        bufp->chgBit(oldp+2823,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[6]));
        bufp->chgBit(oldp+2824,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[7]));
        bufp->chgBit(oldp+2825,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[8]));
        bufp->chgBit(oldp+2826,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[9]));
        bufp->chgBit(oldp+2827,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[10]));
        bufp->chgBit(oldp+2828,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[11]));
        bufp->chgBit(oldp+2829,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[12]));
        bufp->chgBit(oldp+2830,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[13]));
        bufp->chgBit(oldp+2831,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[14]));
        bufp->chgBit(oldp+2832,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[15]));
        bufp->chgBit(oldp+2833,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[16]));
        bufp->chgBit(oldp+2834,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[17]));
        bufp->chgBit(oldp+2835,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[18]));
        bufp->chgBit(oldp+2836,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[19]));
        bufp->chgBit(oldp+2837,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[20]));
        bufp->chgBit(oldp+2838,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[21]));
        bufp->chgBit(oldp+2839,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[22]));
        bufp->chgBit(oldp+2840,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[23]));
        bufp->chgBit(oldp+2841,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[24]));
        bufp->chgBit(oldp+2842,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[25]));
        bufp->chgBit(oldp+2843,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[26]));
        bufp->chgBit(oldp+2844,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[27]));
        bufp->chgBit(oldp+2845,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[28]));
        bufp->chgBit(oldp+2846,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[29]));
        bufp->chgBit(oldp+2847,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[30]));
        bufp->chgBit(oldp+2848,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__lru_array[31]));
        bufp->chgIData(oldp+2849,((vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                                   >> 0xbU)),21);
        bufp->chgCData(oldp+2850,((0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                                            >> 6U))),5);
        bufp->chgCData(oldp+2851,((0xfU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                                           >> 2U))),4);
        __Vtemp_1[0U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0;
        __Vtemp_1[1U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0;
        __Vtemp_1[2U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0;
        __Vtemp_1[3U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0;
        __Vtemp_1[4U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0;
        __Vtemp_1[5U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0;
        __Vtemp_1[6U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0;
        __Vtemp_1[7U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0;
        __Vtemp_1[8U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0;
        __Vtemp_1[9U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0;
        __Vtemp_1[0xaU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0;
        __Vtemp_1[0xbU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0;
        __Vtemp_1[0xcU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0;
        __Vtemp_1[0xdU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0;
        __Vtemp_1[0xeU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0;
        __Vtemp_1[0xfU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_data_M0;
        bufp->chgWData(oldp+2852,(__Vtemp_1),512);
        bufp->chgIData(oldp+2868,((0xffffffc0U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0)),32);
        bufp->chgIData(oldp+2869,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result),32);
        bufp->chgCData(oldp+2870,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_counter),5);
        bufp->chgCData(oldp+2871,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__flush_counter),7);
        bufp->chgIData(oldp+2872,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr),32);
        bufp->chgCData(oldp+2873,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_req_counter),5);
        bufp->chgCData(oldp+2874,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_resp_counter),5);
        bufp->chgWData(oldp+2875,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_data),512);
        bufp->chgWData(oldp+2891,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_data),512);
        bufp->chgSData(oldp+2907,((0xffffU & ((IData)(1U) 
                                              << (0xfU 
                                                  & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                                                     >> 2U))))),16);
        bufp->chgWData(oldp+2908,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[0]),512);
        bufp->chgWData(oldp+2924,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[1]),512);
        bufp->chgWData(oldp+2940,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[2]),512);
        bufp->chgWData(oldp+2956,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[3]),512);
        bufp->chgWData(oldp+2972,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[4]),512);
        bufp->chgWData(oldp+2988,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[5]),512);
        bufp->chgWData(oldp+3004,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[6]),512);
        bufp->chgWData(oldp+3020,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[7]),512);
        bufp->chgWData(oldp+3036,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[8]),512);
        bufp->chgWData(oldp+3052,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[9]),512);
        bufp->chgWData(oldp+3068,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[10]),512);
        bufp->chgWData(oldp+3084,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[11]),512);
        bufp->chgWData(oldp+3100,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[12]),512);
        bufp->chgWData(oldp+3116,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[13]),512);
        bufp->chgWData(oldp+3132,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[14]),512);
        bufp->chgWData(oldp+3148,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[15]),512);
        bufp->chgWData(oldp+3164,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[16]),512);
        bufp->chgWData(oldp+3180,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[17]),512);
        bufp->chgWData(oldp+3196,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[18]),512);
        bufp->chgWData(oldp+3212,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[19]),512);
        bufp->chgWData(oldp+3228,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[20]),512);
        bufp->chgWData(oldp+3244,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[21]),512);
        bufp->chgWData(oldp+3260,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[22]),512);
        bufp->chgWData(oldp+3276,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[23]),512);
        bufp->chgWData(oldp+3292,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[24]),512);
        bufp->chgWData(oldp+3308,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[25]),512);
        bufp->chgWData(oldp+3324,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[26]),512);
        bufp->chgWData(oldp+3340,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[27]),512);
        bufp->chgWData(oldp+3356,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[28]),512);
        bufp->chgWData(oldp+3372,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[29]),512);
        bufp->chgWData(oldp+3388,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[30]),512);
        bufp->chgWData(oldp+3404,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array[31]),512);
        bufp->chgWData(oldp+3420,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[0]),512);
        bufp->chgWData(oldp+3436,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[1]),512);
        bufp->chgWData(oldp+3452,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[2]),512);
        bufp->chgWData(oldp+3468,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[3]),512);
        bufp->chgWData(oldp+3484,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[4]),512);
        bufp->chgWData(oldp+3500,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[5]),512);
        bufp->chgWData(oldp+3516,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[6]),512);
        bufp->chgWData(oldp+3532,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[7]),512);
        bufp->chgWData(oldp+3548,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[8]),512);
        bufp->chgWData(oldp+3564,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[9]),512);
        bufp->chgWData(oldp+3580,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[10]),512);
        bufp->chgWData(oldp+3596,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[11]),512);
        bufp->chgWData(oldp+3612,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[12]),512);
        bufp->chgWData(oldp+3628,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[13]),512);
        bufp->chgWData(oldp+3644,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[14]),512);
        bufp->chgWData(oldp+3660,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[15]),512);
        bufp->chgWData(oldp+3676,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[16]),512);
        bufp->chgWData(oldp+3692,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[17]),512);
        bufp->chgWData(oldp+3708,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[18]),512);
        bufp->chgWData(oldp+3724,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[19]),512);
        bufp->chgWData(oldp+3740,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[20]),512);
        bufp->chgWData(oldp+3756,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[21]),512);
        bufp->chgWData(oldp+3772,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[22]),512);
        bufp->chgWData(oldp+3788,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[23]),512);
        bufp->chgWData(oldp+3804,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[24]),512);
        bufp->chgWData(oldp+3820,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[25]),512);
        bufp->chgWData(oldp+3836,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[26]),512);
        bufp->chgWData(oldp+3852,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[27]),512);
        bufp->chgWData(oldp+3868,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[28]),512);
        bufp->chgWData(oldp+3884,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[29]),512);
        bufp->chgWData(oldp+3900,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[30]),512);
        bufp->chgWData(oldp+3916,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2[31]),512);
        bufp->chgCData(oldp+3932,((0x1fU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__flush_counter))),5);
        bufp->chgCData(oldp+3933,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__unnamedblk1__DOT__i),6);
        bufp->chgCData(oldp+3934,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__unnamedblk2__DOT__i),6);
        bufp->chgCData(oldp+3935,(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__unnamedblk3__DOT__i),6);
        __Vtemp_2[0U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][0U];
        __Vtemp_2[1U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][1U];
        __Vtemp_2[2U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][2U];
        __Vtemp_2[3U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][3U];
        __Vtemp_2[4U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][4U];
        __Vtemp_2[5U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][5U];
        __Vtemp_2[6U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][6U];
        __Vtemp_2[7U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][7U];
        __Vtemp_2[8U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][8U];
        __Vtemp_2[9U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][9U];
        __Vtemp_2[0xaU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][0xaU];
        __Vtemp_2[0xbU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][0xbU];
        __Vtemp_2[0xcU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][0xcU];
        __Vtemp_2[0xdU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][0xdU];
        __Vtemp_2[0xeU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][0xeU];
        __Vtemp_2[0xfU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][0xfU];
        bufp->chgWData(oldp+3936,(__Vtemp_2),512);
        __Vtemp_3[0U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][0U];
        __Vtemp_3[1U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][1U];
        __Vtemp_3[2U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][2U];
        __Vtemp_3[3U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][3U];
        __Vtemp_3[4U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][4U];
        __Vtemp_3[5U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][5U];
        __Vtemp_3[6U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][6U];
        __Vtemp_3[7U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][7U];
        __Vtemp_3[8U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][8U];
        __Vtemp_3[9U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][9U];
        __Vtemp_3[0xaU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][0xaU];
        __Vtemp_3[0xbU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][0xbU];
        __Vtemp_3[0xcU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][0xcU];
        __Vtemp_3[0xdU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][0xdU];
        __Vtemp_3[0xeU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][0xeU];
        __Vtemp_3[0xfU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_request_addr_M0 
                       >> 6U))][0xfU];
        bufp->chgWData(oldp+3952,(__Vtemp_3),512);
        bufp->chgBit(oldp+3968,(vlSelf->top__DOT__cache__DOT__icache__DOT__mem_resp_msg_type));
        bufp->chgBit(oldp+3969,(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_en));
        bufp->chgBit(oldp+3970,(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_wen));
        bufp->chgBit(oldp+3971,(vlSelf->top__DOT__cache__DOT__icache__DOT__z6b_sel));
        bufp->chgBit(oldp+3972,(vlSelf->top__DOT__cache__DOT__icache__DOT__darray_write_mux_sel));
        bufp->chgBit(oldp+3973,(vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen));
        bufp->chgBit(oldp+3974,(vlSelf->top__DOT__cache__DOT__icache__DOT__write_en_sel));
        bufp->chgBit(oldp+3975,(vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_resp_received));
        bufp->chgBit(oldp+3976,(vlSelf->top__DOT__cache__DOT__icache__DOT__Spill_or_Refill_sel));
        bufp->chgBit(oldp+3977,(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match));
        bufp->chgBit(oldp+3978,(vlSelf->top__DOT__cache__DOT__icache__DOT__current_dirty));
        bufp->chgBit(oldp+3979,(vlSelf->top__DOT__cache__DOT__icache__DOT__refill_req_done));
        bufp->chgBit(oldp+3980,(vlSelf->top__DOT__cache__DOT__icache__DOT__refill_resp_done));
        bufp->chgBit(oldp+3981,(vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__ctrl__cache_req_type));
        bufp->chgBit(oldp+3982,(((IData)(vlSelf->top__DOT__cache0_resp_val) 
                                 & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                            >> 0x2cU)))));
        bufp->chgBit(oldp+3983,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__val_M0));
        bufp->chgBit(oldp+3984,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__mem_req_type_M0));
        bufp->chgCData(oldp+3985,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_reg),2);
        bufp->chgBit(oldp+3986,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__ostall_miss));
        bufp->chgIData(oldp+3987,(vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data),32);
        bufp->chgIData(oldp+3988,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data),32);
        bufp->chgIData(oldp+3989,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0),32);
        bufp->chgIData(oldp+3990,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0),32);
        bufp->chgIData(oldp+3991,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[0]),21);
        bufp->chgIData(oldp+3992,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[1]),21);
        bufp->chgIData(oldp+3993,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[2]),21);
        bufp->chgIData(oldp+3994,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[3]),21);
        bufp->chgIData(oldp+3995,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[4]),21);
        bufp->chgIData(oldp+3996,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[5]),21);
        bufp->chgIData(oldp+3997,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[6]),21);
        bufp->chgIData(oldp+3998,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[7]),21);
        bufp->chgIData(oldp+3999,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[8]),21);
        bufp->chgIData(oldp+4000,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[9]),21);
        bufp->chgIData(oldp+4001,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[10]),21);
        bufp->chgIData(oldp+4002,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[11]),21);
        bufp->chgIData(oldp+4003,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[12]),21);
        bufp->chgIData(oldp+4004,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[13]),21);
        bufp->chgIData(oldp+4005,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[14]),21);
        bufp->chgIData(oldp+4006,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[15]),21);
        bufp->chgIData(oldp+4007,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[16]),21);
        bufp->chgIData(oldp+4008,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[17]),21);
        bufp->chgIData(oldp+4009,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[18]),21);
        bufp->chgIData(oldp+4010,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[19]),21);
        bufp->chgIData(oldp+4011,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[20]),21);
        bufp->chgIData(oldp+4012,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[21]),21);
        bufp->chgIData(oldp+4013,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[22]),21);
        bufp->chgIData(oldp+4014,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[23]),21);
        bufp->chgIData(oldp+4015,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[24]),21);
        bufp->chgIData(oldp+4016,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[25]),21);
        bufp->chgIData(oldp+4017,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[26]),21);
        bufp->chgIData(oldp+4018,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[27]),21);
        bufp->chgIData(oldp+4019,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[28]),21);
        bufp->chgIData(oldp+4020,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[29]),21);
        bufp->chgIData(oldp+4021,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[30]),21);
        bufp->chgIData(oldp+4022,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[31]),21);
        bufp->chgBit(oldp+4023,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[0]));
        bufp->chgBit(oldp+4024,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[1]));
        bufp->chgBit(oldp+4025,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[2]));
        bufp->chgBit(oldp+4026,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[3]));
        bufp->chgBit(oldp+4027,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[4]));
        bufp->chgBit(oldp+4028,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[5]));
        bufp->chgBit(oldp+4029,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[6]));
        bufp->chgBit(oldp+4030,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[7]));
        bufp->chgBit(oldp+4031,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[8]));
        bufp->chgBit(oldp+4032,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[9]));
        bufp->chgBit(oldp+4033,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[10]));
        bufp->chgBit(oldp+4034,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[11]));
        bufp->chgBit(oldp+4035,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[12]));
        bufp->chgBit(oldp+4036,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[13]));
        bufp->chgBit(oldp+4037,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[14]));
        bufp->chgBit(oldp+4038,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[15]));
        bufp->chgBit(oldp+4039,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[16]));
        bufp->chgBit(oldp+4040,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[17]));
        bufp->chgBit(oldp+4041,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[18]));
        bufp->chgBit(oldp+4042,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[19]));
        bufp->chgBit(oldp+4043,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[20]));
        bufp->chgBit(oldp+4044,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[21]));
        bufp->chgBit(oldp+4045,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[22]));
        bufp->chgBit(oldp+4046,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[23]));
        bufp->chgBit(oldp+4047,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[24]));
        bufp->chgBit(oldp+4048,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[25]));
        bufp->chgBit(oldp+4049,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[26]));
        bufp->chgBit(oldp+4050,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[27]));
        bufp->chgBit(oldp+4051,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[28]));
        bufp->chgBit(oldp+4052,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[29]));
        bufp->chgBit(oldp+4053,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[30]));
        bufp->chgBit(oldp+4054,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[31]));
        bufp->chgBit(oldp+4055,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[0]));
        bufp->chgBit(oldp+4056,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[1]));
        bufp->chgBit(oldp+4057,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[2]));
        bufp->chgBit(oldp+4058,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[3]));
        bufp->chgBit(oldp+4059,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[4]));
        bufp->chgBit(oldp+4060,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[5]));
        bufp->chgBit(oldp+4061,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[6]));
        bufp->chgBit(oldp+4062,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[7]));
        bufp->chgBit(oldp+4063,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[8]));
        bufp->chgBit(oldp+4064,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[9]));
        bufp->chgBit(oldp+4065,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[10]));
        bufp->chgBit(oldp+4066,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[11]));
        bufp->chgBit(oldp+4067,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[12]));
        bufp->chgBit(oldp+4068,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[13]));
        bufp->chgBit(oldp+4069,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[14]));
        bufp->chgBit(oldp+4070,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[15]));
        bufp->chgBit(oldp+4071,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[16]));
        bufp->chgBit(oldp+4072,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[17]));
        bufp->chgBit(oldp+4073,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[18]));
        bufp->chgBit(oldp+4074,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[19]));
        bufp->chgBit(oldp+4075,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[20]));
        bufp->chgBit(oldp+4076,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[21]));
        bufp->chgBit(oldp+4077,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[22]));
        bufp->chgBit(oldp+4078,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[23]));
        bufp->chgBit(oldp+4079,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[24]));
        bufp->chgBit(oldp+4080,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[25]));
        bufp->chgBit(oldp+4081,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[26]));
        bufp->chgBit(oldp+4082,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[27]));
        bufp->chgBit(oldp+4083,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[28]));
        bufp->chgBit(oldp+4084,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[29]));
        bufp->chgBit(oldp+4085,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[30]));
        bufp->chgBit(oldp+4086,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[31]));
        bufp->chgIData(oldp+4087,((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0 
                                   >> 0xbU)),21);
        bufp->chgCData(oldp+4088,((0x1fU & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0 
                                            >> 6U))),5);
        bufp->chgCData(oldp+4089,((0xfU & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0 
                                           >> 2U))),4);
        __Vtemp_4[0U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_4[1U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_4[2U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_4[3U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_4[4U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_4[5U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_4[6U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_4[7U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_4[8U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_4[9U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_4[0xaU] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_4[0xbU] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_4[0xcU] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_4[0xdU] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_4[0xeU] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_4[0xfU] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        bufp->chgWData(oldp+4090,(__Vtemp_4),512);
        bufp->chgCData(oldp+4106,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__spill_counter),5);
        bufp->chgCData(oldp+4107,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_counter),6);
        bufp->chgCData(oldp+4108,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_req_counter),5);
        bufp->chgIData(oldp+4109,((0xffffffc0U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)),32);
        bufp->chgIData(oldp+4110,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__z6b_mux_result),32);
        bufp->chgIData(oldp+4111,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr),32);
        bufp->chgCData(oldp+4112,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_resp_counter),5);
        bufp->chgWData(oldp+4113,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_data),512);
        bufp->chgWData(oldp+4129,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data),512);
        bufp->chgSData(oldp+4145,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable),16);
        bufp->chgSData(oldp+4146,((0xffffU & ((IData)(1U) 
                                              << (0xfU 
                                                  & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0 
                                                     >> 2U))))),16);
        bufp->chgWData(oldp+4147,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[0]),512);
        bufp->chgWData(oldp+4163,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[1]),512);
        bufp->chgWData(oldp+4179,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[2]),512);
        bufp->chgWData(oldp+4195,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[3]),512);
        bufp->chgWData(oldp+4211,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[4]),512);
        bufp->chgWData(oldp+4227,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[5]),512);
        bufp->chgWData(oldp+4243,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[6]),512);
        bufp->chgWData(oldp+4259,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[7]),512);
        bufp->chgWData(oldp+4275,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[8]),512);
        bufp->chgWData(oldp+4291,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[9]),512);
        bufp->chgWData(oldp+4307,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[10]),512);
        bufp->chgWData(oldp+4323,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[11]),512);
        bufp->chgWData(oldp+4339,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[12]),512);
        bufp->chgWData(oldp+4355,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[13]),512);
        bufp->chgWData(oldp+4371,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[14]),512);
        bufp->chgWData(oldp+4387,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[15]),512);
        bufp->chgWData(oldp+4403,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[16]),512);
        bufp->chgWData(oldp+4419,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[17]),512);
        bufp->chgWData(oldp+4435,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[18]),512);
        bufp->chgWData(oldp+4451,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[19]),512);
        bufp->chgWData(oldp+4467,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[20]),512);
        bufp->chgWData(oldp+4483,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[21]),512);
        bufp->chgWData(oldp+4499,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[22]),512);
        bufp->chgWData(oldp+4515,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[23]),512);
        bufp->chgWData(oldp+4531,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[24]),512);
        bufp->chgWData(oldp+4547,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[25]),512);
        bufp->chgWData(oldp+4563,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[26]),512);
        bufp->chgWData(oldp+4579,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[27]),512);
        bufp->chgWData(oldp+4595,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[28]),512);
        bufp->chgWData(oldp+4611,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[29]),512);
        bufp->chgWData(oldp+4627,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[30]),512);
        bufp->chgWData(oldp+4643,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[31]),512);
        bufp->chgWData(oldp+4659,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output),512);
        bufp->chgIData(oldp+4675,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0U]),32);
        bufp->chgIData(oldp+4676,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[1U]),32);
        bufp->chgIData(oldp+4677,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[2U]),32);
        bufp->chgIData(oldp+4678,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[3U]),32);
        bufp->chgIData(oldp+4679,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]),32);
        bufp->chgIData(oldp+4680,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]),32);
        bufp->chgIData(oldp+4681,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]),32);
        bufp->chgIData(oldp+4682,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]),32);
        bufp->chgIData(oldp+4683,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]),32);
        bufp->chgIData(oldp+4684,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]),32);
        bufp->chgIData(oldp+4685,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]),32);
        bufp->chgIData(oldp+4686,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]),32);
        bufp->chgIData(oldp+4687,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]),32);
        bufp->chgIData(oldp+4688,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]),32);
        bufp->chgIData(oldp+4689,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]),32);
        bufp->chgIData(oldp+4690,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]),32);
        bufp->chgCData(oldp+4691,((0x1fU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_counter))),5);
        bufp->chgCData(oldp+4692,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__unnamedblk1__DOT__i),6);
        bufp->chgCData(oldp+4693,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__unnamedblk2__DOT__i),6);
        bufp->chgBit(oldp+4694,(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy));
        bufp->chgBit(oldp+4695,(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy));
        bufp->chgBit(oldp+4696,(vlSelf->top__DOT__mem__DOT__mem_memresp0_val));
        bufp->chgBit(oldp+4697,(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy));
        bufp->chgQData(oldp+4698,(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg),47);
        bufp->chgBit(oldp+4700,(vlSelf->top__DOT__mem__DOT__mem_memresp1_val));
        bufp->chgBit(oldp+4701,(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy));
        bufp->chgQData(oldp+4702,(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg),47);
        bufp->chgBit(oldp+4704,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+4705,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+4706,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgBit(oldp+4709,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+4710,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+4711,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgCData(oldp+4714,((7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+4715,((0xffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+4716,(((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+4717,((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U])),2);
        bufp->chgIData(oldp+4718,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]),32);
        bufp->chgCData(oldp+4719,((7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+4720,((0xffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+4721,(((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+4722,((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U])),2);
        bufp->chgIData(oldp+4723,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]),32);
        bufp->chgCData(oldp+4724,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M),3);
        bufp->chgCData(oldp+4725,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M),3);
        bufp->chgSData(oldp+4726,((0x3fffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                              >> 2U))),14);
        bufp->chgSData(oldp+4727,((0x3fffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                              >> 2U))),14);
        bufp->chgSData(oldp+4728,((0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                             >> 4U))),12);
        bufp->chgCData(oldp+4729,((3U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                         >> 2U))),2);
        bufp->chgSData(oldp+4730,((0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                             >> 4U))),12);
        bufp->chgCData(oldp+4731,((3U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                         >> 2U))),2);
        bufp->chgIData(oldp+4732,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M),32);
        bufp->chgIData(oldp+4733,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M),32);
        bufp->chgIData(oldp+4734,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M),32);
        bufp->chgIData(oldp+4735,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M),32);
        bufp->chgBit(oldp+4736,(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M));
        bufp->chgBit(oldp+4737,(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M));
        bufp->chgBit(oldp+4738,(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M));
        bufp->chgBit(oldp+4739,(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M));
        bufp->chgBit(oldp+4740,(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared));
        bufp->chgQData(oldp+4741,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp),47);
        bufp->chgQData(oldp+4743,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp),47);
        bufp->chgBit(oldp+4745,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+4746,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgIData(oldp+4747,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+4748,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+4749,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgIData(oldp+4750,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+4751,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+4752,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+4753,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+4754,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+4755,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgQData(oldp+4756,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore),47);
        bufp->chgCData(oldp+4758,((7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2cU)))),3);
        bufp->chgCData(oldp+4759,((0xffU & (IData)(
                                                   (vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                    >> 0x24U)))),8);
        bufp->chgCData(oldp+4760,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+4761,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+4762,((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg)),32);
        bufp->chgIData(oldp+4763,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+4764,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+4765,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+4766,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+4767,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+4768,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgQData(oldp+4769,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore),47);
        bufp->chgCData(oldp+4771,((7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2cU)))),3);
        bufp->chgCData(oldp+4772,((0xffU & (IData)(
                                                   (vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                    >> 0x24U)))),8);
        bufp->chgCData(oldp+4773,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+4774,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+4775,((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg)),32);
        bufp->chgIData(oldp+4776,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+4777,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+4778,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+4779,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgCData(oldp+4780,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_),3);
        bufp->chgCData(oldp+4781,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque),8);
        bufp->chgCData(oldp+4782,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test),2);
        bufp->chgCData(oldp+4783,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len),2);
        bufp->chgIData(oldp+4784,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgCData(oldp+4785,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_),3);
        bufp->chgCData(oldp+4786,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque),8);
        bufp->chgCData(oldp+4787,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test),2);
        bufp->chgCData(oldp+4788,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len),2);
        bufp->chgIData(oldp+4789,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+4790,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num),32);
        bufp->chgIData(oldp+4791,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+4792,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay),32);
        bufp->chgBit(oldp+4793,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state));
        bufp->chgIData(oldp+4794,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num),32);
        bufp->chgIData(oldp+4795,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+4796,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay),32);
        bufp->chgBit(oldp+4797,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state));
        bufp->chgIData(oldp+4798,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num),32);
        bufp->chgBit(oldp+4799,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en));
        bufp->chgIData(oldp+4800,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+4801,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay),32);
        bufp->chgBit(oldp+4802,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+4803,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next));
        bufp->chgBit(oldp+4804,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state));
        bufp->chgIData(oldp+4805,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num),32);
        bufp->chgBit(oldp+4806,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en));
        bufp->chgIData(oldp+4807,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+4808,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay),32);
        bufp->chgBit(oldp+4809,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+4810,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next));
        bufp->chgBit(oldp+4811,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state));
        bufp->chgIData(oldp+4812,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+4813,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num),32);
        bufp->chgIData(oldp+4814,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+4815,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay),32);
        bufp->chgBit(oldp+4816,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state));
        bufp->chgCData(oldp+4817,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)))),4);
        bufp->chgCData(oldp+4818,(vlSelf->top__DOT__sink__DOT__sink__DOT__index),4);
        bufp->chgBit(oldp+4819,(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg));
        bufp->chgBit(oldp+4820,(vlSelf->top__DOT__sink__DOT__sink__DOT__failed));
        bufp->chgIData(oldp+4821,(vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr),32);
        bufp->chgBit(oldp+4822,(vlSelf->top__DOT__src__DOT__src_val));
        bufp->chgIData(oldp+4823,(vlSelf->top__DOT__src__DOT__src_msg),32);
        bufp->chgIData(oldp+4824,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num),32);
        bufp->chgIData(oldp+4825,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+4826,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay),32);
        bufp->chgBit(oldp+4827,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state));
        bufp->chgCData(oldp+4828,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)))),4);
        bufp->chgCData(oldp+4829,(vlSelf->top__DOT__src__DOT__src__DOT__index),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+4830,(vlSelf->top__DOT__proc2mngr_msg),32);
        bufp->chgBit(oldp+4831,(vlSelf->top__DOT__proc2mngr_val));
        bufp->chgWData(oldp+4832,(vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg),77);
        bufp->chgWData(oldp+4835,(vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg),77);
        bufp->chgBit(oldp+4838,(vlSelf->top__DOT__commit_inst));
        bufp->chgBit(oldp+4839,((0U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W)));
        bufp->chgCData(oldp+4840,(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries),2);
        __Vtemp_6[0U] = 0U;
        __Vtemp_6[1U] = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U);
        __Vtemp_6[2U] = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         >> 0x1eU);
        bufp->chgWData(oldp+4841,(__Vtemp_6),77);
        bufp->chgBit(oldp+4844,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgIData(oldp+4845,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F),32);
        bufp->chgBit(oldp+4846,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+4847,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg),77);
        bufp->chgBit(oldp+4850,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_type));
        bufp->chgIData(oldp+4851,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X),32);
        bufp->chgIData(oldp+4852,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_X),32);
        bufp->chgBit(oldp+4853,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgIData(oldp+4854,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W),32);
        bufp->chgBit(oldp+4855,(vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val));
        bufp->chgBit(oldp+4856,(vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_rdy));
        bufp->chgIData(oldp+4857,(vlSelf->top__DOT__DUT__DOT__IntMulAlt_respstream_msg),32);
        bufp->chgBit(oldp+4858,(vlSelf->top__DOT__DUT__DOT__IntMulAlt_respstream_val));
        bufp->chgCData(oldp+4859,(vlSelf->top__DOT__DUT__DOT__pc_sel_F),2);
        bufp->chgCData(oldp+4860,(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D),2);
        bufp->chgCData(oldp+4861,(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D),2);
        bufp->chgBit(oldp+4862,(vlSelf->top__DOT__DUT__DOT__op1_sel_D));
        bufp->chgCData(oldp+4863,(vlSelf->top__DOT__DUT__DOT__op2_sel_D),2);
        bufp->chgCData(oldp+4864,(vlSelf->top__DOT__DUT__DOT__csrr_sel_D),2);
        bufp->chgCData(oldp+4865,(vlSelf->top__DOT__DUT__DOT__imm_type_D),3);
        bufp->chgCData(oldp+4866,(vlSelf->top__DOT__DUT__DOT__alu_fn_X),4);
        bufp->chgCData(oldp+4867,(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X),2);
        bufp->chgBit(oldp+4868,(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M));
        bufp->chgBit(oldp+4869,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)))));
        bufp->chgCData(oldp+4870,(vlSelf->top__DOT__DUT__DOT__rf_waddr_W),5);
        bufp->chgBit(oldp+4871,(vlSelf->top__DOT__DUT__DOT__rf_wen_W));
        bufp->chgBit(oldp+4872,(vlSelf->top__DOT__DUT__DOT__stats_en_wen_W));
        bufp->chgIData(oldp+4873,(vlSelf->top__DOT__DUT__DOT__inst_D),32);
        bufp->chgBit(oldp+4874,(vlSelf->top__DOT__DUT__DOT__br_cond_eq_X));
        bufp->chgBit(oldp+4875,(vlSelf->top__DOT__DUT__DOT__br_cond_lt_X));
        bufp->chgBit(oldp+4876,(vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X));
        bufp->chgBit(oldp+4877,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F));
        bufp->chgBit(oldp+4878,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D));
        bufp->chgBit(oldp+4879,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X));
        bufp->chgBit(oldp+4880,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M));
        bufp->chgBit(oldp+4881,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W));
        bufp->chgBit(oldp+4882,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X));
        bufp->chgBit(oldp+4883,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W));
        bufp->chgBit(oldp+4884,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W));
        bufp->chgBit(oldp+4885,((7U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D))));
        bufp->chgBit(oldp+4886,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D));
        bufp->chgBit(oldp+4887,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X));
        bufp->chgCData(oldp+4888,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D),2);
        bufp->chgCData(oldp+4889,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X),2);
        bufp->chgCData(oldp+4890,((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                            >> 7U))),5);
        bufp->chgCData(oldp+4891,((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+4892,((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                            >> 0x14U))),5);
        bufp->chgSData(oldp+4893,((vlSelf->top__DOT__DUT__DOT__inst_D 
                                   >> 0x14U)),12);
        bufp->chgBit(oldp+4894,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D));
        bufp->chgCData(oldp+4895,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D),4);
        bufp->chgBit(oldp+4896,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D));
        bufp->chgBit(oldp+4897,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D));
        bufp->chgCData(oldp+4898,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D),4);
        bufp->chgCData(oldp+4899,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D),2);
        bufp->chgCData(oldp+4900,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D),2);
        bufp->chgBit(oldp+4901,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D));
        bufp->chgBit(oldp+4902,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D));
        bufp->chgBit(oldp+4903,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D));
        bufp->chgBit(oldp+4904,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D));
        bufp->chgBit(oldp+4905,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D));
        bufp->chgBit(oldp+4906,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D));
        bufp->chgBit(oldp+4907,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D));
        bufp->chgBit(oldp+4908,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_IntMulAlt_D));
        bufp->chgBit(oldp+4909,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_load_use_X_rs1_D));
        bufp->chgBit(oldp+4910,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_load_use_X_rs2_D));
        bufp->chgBit(oldp+4911,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+4912,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+4913,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+4914,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+4915,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+4916,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+4917,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D));
        bufp->chgIData(oldp+4918,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X),32);
        bufp->chgCData(oldp+4919,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X),2);
        bufp->chgBit(oldp+4920,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X));
        bufp->chgBit(oldp+4921,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X));
        bufp->chgCData(oldp+4922,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X),5);
        bufp->chgBit(oldp+4923,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X));
        bufp->chgBit(oldp+4924,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X));
        bufp->chgCData(oldp+4925,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X),4);
        bufp->chgBit(oldp+4926,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_dmem_reqstream_X));
        bufp->chgBit(oldp+4927,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_IntMulAlt_X));
        bufp->chgIData(oldp+4928,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M),32);
        bufp->chgCData(oldp+4929,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M),2);
        bufp->chgBit(oldp+4930,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M));
        bufp->chgCData(oldp+4931,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M),5);
        bufp->chgBit(oldp+4932,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M));
        bufp->chgBit(oldp+4933,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M));
        bufp->chgIData(oldp+4934,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W),32);
        bufp->chgBit(oldp+4935,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W));
        bufp->chgBit(oldp+4936,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W));
        bufp->chgBit(oldp+4937,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W));
        bufp->chgCData(oldp+4938,((0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)),7);
        bufp->chgCData(oldp+4939,((7U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                         >> 0xcU))),3);
        bufp->chgBit(oldp+4940,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgWData(oldp+4941,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgCData(oldp+4944,((7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+4945,((0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+4946,(((vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+4947,((3U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U])),2);
        bufp->chgIData(oldp+4948,(vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]),32);
        bufp->chgIData(oldp+4949,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+4950,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+4951,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F),32);
        bufp->chgIData(oldp+4952,(((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)),32);
        bufp->chgIData(oldp+4953,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X),32);
        bufp->chgIData(oldp+4954,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D),32);
        bufp->chgIData(oldp+4955,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D),32);
        bufp->chgIData(oldp+4956,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D),32);
        bufp->chgIData(oldp+4957,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D),32);
        bufp->chgIData(oldp+4958,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D),32);
        bufp->chgIData(oldp+4959,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X),32);
        bufp->chgIData(oldp+4960,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X),32);
        bufp->chgIData(oldp+4961,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X),32);
        bufp->chgIData(oldp+4962,(((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)),32);
        bufp->chgIData(oldp+4963,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X),32);
        bufp->chgIData(oldp+4964,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M),32);
        bufp->chgIData(oldp+4965,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W),32);
        bufp->chgBit(oldp+4966,((1U & (IData)((1ULL 
                                               & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D)) 
                                                   + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D))) 
                                                  >> 0x20U))))));
        bufp->chgIData(oldp+4967,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0),32);
        bufp->chgIData(oldp+4968,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1),32);
        bufp->chgIData(oldp+4969,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[0]),32);
        bufp->chgIData(oldp+4970,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[1]),32);
        bufp->chgIData(oldp+4971,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[2]),32);
        bufp->chgIData(oldp+4972,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[3]),32);
        bufp->chgIData(oldp+4973,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[4]),32);
        bufp->chgIData(oldp+4974,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[5]),32);
        bufp->chgIData(oldp+4975,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[6]),32);
        bufp->chgIData(oldp+4976,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[7]),32);
        bufp->chgIData(oldp+4977,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[8]),32);
        bufp->chgIData(oldp+4978,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[9]),32);
        bufp->chgIData(oldp+4979,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[10]),32);
        bufp->chgIData(oldp+4980,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[11]),32);
        bufp->chgIData(oldp+4981,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[12]),32);
        bufp->chgIData(oldp+4982,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[13]),32);
        bufp->chgIData(oldp+4983,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[14]),32);
        bufp->chgIData(oldp+4984,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[15]),32);
        bufp->chgIData(oldp+4985,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[16]),32);
        bufp->chgIData(oldp+4986,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[17]),32);
        bufp->chgIData(oldp+4987,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[18]),32);
        bufp->chgIData(oldp+4988,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[19]),32);
        bufp->chgIData(oldp+4989,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[20]),32);
        bufp->chgIData(oldp+4990,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[21]),32);
        bufp->chgIData(oldp+4991,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[22]),32);
        bufp->chgIData(oldp+4992,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[23]),32);
        bufp->chgIData(oldp+4993,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[24]),32);
        bufp->chgIData(oldp+4994,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[25]),32);
        bufp->chgIData(oldp+4995,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[26]),32);
        bufp->chgIData(oldp+4996,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[27]),32);
        bufp->chgIData(oldp+4997,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[28]),32);
        bufp->chgIData(oldp+4998,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[29]),32);
        bufp->chgIData(oldp+4999,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[30]),32);
        bufp->chgIData(oldp+5000,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[31]),32);
        bufp->chgBit(oldp+5001,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty));
        bufp->chgBit(oldp+5002,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr));
        bufp->chgBit(oldp+5003,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr));
        bufp->chgBit(oldp+5004,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+5005,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))));
        bufp->chgBit(oldp+5006,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)))));
        bufp->chgWData(oldp+5007,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data),77);
        bufp->chgWData(oldp+5010,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[0]),77);
        bufp->chgWData(oldp+5013,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[1]),77);
        bufp->chgCData(oldp+5016,((7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+5017,((0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+5018,(((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+5019,((3U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U])),2);
        bufp->chgIData(oldp+5020,(vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]),32);
        bufp->chgIData(oldp+5021,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+5022,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state));
        bufp->chgIData(oldp+5023,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+5024,(vlSelf->top__DOT__DUT__DOT__mul__DOT__a_mux_sel));
        bufp->chgBit(oldp+5025,(vlSelf->top__DOT__DUT__DOT__mul__DOT__b_mux_sel));
        bufp->chgBit(oldp+5026,(vlSelf->top__DOT__DUT__DOT__mul__DOT__result_mux_sel));
        bufp->chgBit(oldp+5027,(vlSelf->top__DOT__DUT__DOT__mul__DOT__result_reg_en));
        bufp->chgBit(oldp+5028,(vlSelf->top__DOT__DUT__DOT__mul__DOT__add_mux_sel));
        bufp->chgBit(oldp+5029,((1U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_reg_out)));
        bufp->chgBit(oldp+5030,((0U == vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_reg_out)));
        bufp->chgIData(oldp+5031,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__result_reg_out),32);
        bufp->chgCData(oldp+5032,(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_reg),2);
        bufp->chgBit(oldp+5033,((1U & (~ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_reg_out))));
        bufp->chgIData(oldp+5034,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__rshifter_out),32);
        bufp->chgIData(oldp+5035,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_reg_out),32);
        bufp->chgCData(oldp+5036,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__calc_shamt_out),4);
        bufp->chgIData(oldp+5037,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__lshifter_out),32);
        bufp->chgIData(oldp+5038,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_reg_out),32);
        bufp->chgIData(oldp+5039,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__add_mux_out),32);
        bufp->chgIData(oldp+5040,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__result_mux_out),32);
        bufp->chgIData(oldp+5041,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__add_out),32);
        bufp->chgCData(oldp+5042,((0xffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_reg_out)),8);
        bufp->chgIData(oldp+5043,(vlSelf->top__DOT__DUT__DOT__mul__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+5044,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+5045,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgIData(oldp+5046,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore),32);
        bufp->chgIData(oldp+5047,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+5048,((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+5049,((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                       >> 0xaU))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgQData(oldp+5050,(vlSelf->top__DOT__imem_respstream_msg),47);
        bufp->chgIData(oldp+5052,((IData)(vlSelf->top__DOT__imem_respstream_msg)),32);
        bufp->chgCData(oldp+5053,((7U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2cU)))),3);
        bufp->chgCData(oldp+5054,((0xffU & (IData)(
                                                   (vlSelf->top__DOT__imem_respstream_msg 
                                                    >> 0x24U)))),8);
        bufp->chgCData(oldp+5055,((3U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+5056,((3U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x20U)))),2);
    }
    bufp->chgBit(oldp+5057,(vlSelf->clk));
    bufp->chgBit(oldp+5058,(vlSelf->linetrace));
    bufp->chgIData(oldp+5059,(vlSelf->top__DOT__mngr2proc_msg),32);
    bufp->chgBit(oldp+5060,(vlSelf->top__DOT__mngr2proc_val));
    bufp->chgQData(oldp+5061,(vlSelf->top__DOT__dmem_respstream_msg),47);
    bufp->chgBit(oldp+5063,(vlSelf->top__DOT__flush));
    bufp->chgBit(oldp+5064,(vlSelf->top__DOT__cpu_en));
    bufp->chgIData(oldp+5065,(vlSelf->top__DOT__fp),32);
    bufp->chgBit(oldp+5066,(vlSelf->top__DOT____Vcellinp__DUT__clk));
    bufp->chgCData(oldp+5067,((7U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                             >> 0x2cU)))),3);
    bufp->chgCData(oldp+5068,((0xffU & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                >> 0x24U)))),8);
    bufp->chgCData(oldp+5069,((3U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                             >> 0x22U)))),2);
    bufp->chgCData(oldp+5070,((3U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                             >> 0x20U)))),2);
    bufp->chgIData(oldp+5071,((IData)(vlSelf->top__DOT__dmem_respstream_msg)),32);
    bufp->chgIData(oldp+5072,(vlSelf->top__DOT__mem__DOT__mem__DOT__data_data),32);
    bufp->chgIData(oldp+5073,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i),32);
    bufp->chgBit(oldp+5074,(vlSelf->top__DOT__sink__DOT__sink_val));
    bufp->chgIData(oldp+5075,(vlSelf->top__DOT__sink__DOT__sink_msg),32);
    bufp->chgIData(oldp+5076,(vlSelf->top__DOT__unnamedblk1__DOT__i),32);
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
}
