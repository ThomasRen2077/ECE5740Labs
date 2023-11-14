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
    VlWide<3>/*95:0*/ __Vtemp_3;
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
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+2387,(vlSelf->top__DOT__proc2mngr_rdy));
        bufp->chgBit(oldp+2388,(vlSelf->top__DOT__snk_done));
        bufp->chgIData(oldp+2389,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i),32);
        bufp->chgIData(oldp+2390,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i),32);
        bufp->chgBit(oldp+2391,(vlSelf->top__DOT__sink__DOT__sink_rdy));
        bufp->chgBit(oldp+2392,(vlSelf->top__DOT__src__DOT__src__DOT__done_next));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgBit(oldp+2393,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2394,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2395,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2396,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgBit(oldp+2397,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en));
        bufp->chgBit(oldp+2398,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2399,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next));
        bufp->chgBit(oldp+2400,(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+2401,(vlSelf->top__DOT__mngr2proc_rdy));
        bufp->chgBit(oldp+2402,((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_M0)))));
        bufp->chgBit(oldp+2403,(vlSelf->top__DOT__imem_respstream_rdy));
        bufp->chgBit(oldp+2404,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy));
        bufp->chgQData(oldp+2405,(vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg),64);
        bufp->chgBit(oldp+2407,(vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_val));
        bufp->chgBit(oldp+2408,(vlSelf->top__DOT__DUT__DOT__reg_en_D));
        bufp->chgBit(oldp+2409,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D));
        bufp->chgBit(oldp+2410,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F));
        bufp->chgBit(oldp+2411,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D));
        bufp->chgBit(oldp+2412,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F));
        bufp->chgBit(oldp+2413,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D));
        bufp->chgBit(oldp+2414,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D));
        bufp->chgIData(oldp+2415,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D),32);
        bufp->chgIData(oldp+2416,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D),32);
        bufp->chgBit(oldp+2417,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state));
        bufp->chgBit(oldp+2418,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go));
        bufp->chgCData(oldp+2419,(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_next),2);
        bufp->chgBit(oldp+2420,(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__istream_go));
        bufp->chgIData(oldp+2421,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out),32);
        bufp->chgBit(oldp+2422,((1U & (~ (IData)(vlSelf->top__DOT__imem_respstream_rdy)))));
        bufp->chgBit(oldp+2423,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__ostall_M0));
        bufp->chgBit(oldp+2424,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_M0));
        bufp->chgBit(oldp+2425,(vlSelf->top__DOT__src__DOT__src_rdy));
        bufp->chgBit(oldp+2426,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en));
        bufp->chgBit(oldp+2427,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2428,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next));
        bufp->chgBit(oldp+2429,(vlSelf->top__DOT__src__DOT__src__DOT__index_en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgBit(oldp+2430,(vlSelf->top__DOT__imem_reqstream_val));
        bufp->chgBit(oldp+2431,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val));
        bufp->chgBit(oldp+2432,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2433,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        bufp->chgBit(oldp+2434,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        bufp->chgBit(oldp+2435,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2436,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2437,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2438,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgBit(oldp+2439,((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_Y)))));
        bufp->chgBit(oldp+2440,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))));
        bufp->chgBit(oldp+2441,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_Y));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+2442,(vlSelf->top__DOT__imem_respstream_val));
        bufp->chgBit(oldp+2443,(vlSelf->top__DOT__cache1_req_rdy));
        bufp->chgQData(oldp+2444,(vlSelf->top__DOT__dmem_respstream_msg),47);
        bufp->chgBit(oldp+2446,(vlSelf->top__DOT__cache1_resp_val));
        bufp->chgWData(oldp+2447,(vlSelf->top__DOT__cache0_req_msg),77);
        bufp->chgBit(oldp+2450,(vlSelf->top__DOT__cache0_req_val));
        bufp->chgBit(oldp+2451,(vlSelf->top__DOT__cache0_req_rdy));
        bufp->chgQData(oldp+2452,(vlSelf->top__DOT__cache0_resp_msg),47);
        bufp->chgBit(oldp+2454,(vlSelf->top__DOT__cache0_resp_val));
        bufp->chgBit(oldp+2455,(vlSelf->top__DOT__cache0_resp_rdy));
        bufp->chgBit(oldp+2456,(vlSelf->top__DOT__src_done));
        bufp->chgCData(oldp+2457,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_),3);
        bufp->chgCData(oldp+2458,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque),8);
        bufp->chgCData(oldp+2459,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test),2);
        bufp->chgCData(oldp+2460,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len),2);
        bufp->chgIData(oldp+2461,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data),32);
        bufp->chgBit(oldp+2462,(vlSelf->top__DOT__cache__DOT__icache__DOT__mem_resp_msg_type));
        bufp->chgBit(oldp+2463,(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_en));
        bufp->chgBit(oldp+2464,(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_wen));
        bufp->chgBit(oldp+2465,(vlSelf->top__DOT__cache__DOT__icache__DOT__z6b_sel));
        bufp->chgBit(oldp+2466,(vlSelf->top__DOT__cache__DOT__icache__DOT__darray_write_mux_sel));
        bufp->chgBit(oldp+2467,(vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen));
        bufp->chgBit(oldp+2468,(vlSelf->top__DOT__cache__DOT__icache__DOT__write_en_sel));
        bufp->chgBit(oldp+2469,(vlSelf->top__DOT__cache__DOT__icache__DOT__spill_one_word_done));
        bufp->chgBit(oldp+2470,(vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_req_sent));
        bufp->chgBit(oldp+2471,(vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_resp_received));
        bufp->chgBit(oldp+2472,(vlSelf->top__DOT__cache__DOT__icache__DOT__Spill_or_Refill_sel));
        bufp->chgBit(oldp+2473,(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match));
        bufp->chgBit(oldp+2474,(vlSelf->top__DOT__cache__DOT__icache__DOT__current_dirty));
        bufp->chgBit(oldp+2475,(vlSelf->top__DOT__cache__DOT__icache__DOT__spill_done));
        bufp->chgBit(oldp+2476,(vlSelf->top__DOT__cache__DOT__icache__DOT__refill_req_done));
        bufp->chgBit(oldp+2477,(vlSelf->top__DOT__cache__DOT__icache__DOT__refill_resp_done));
        bufp->chgBit(oldp+2478,(vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__ctrl__cache_req_type));
        bufp->chgBit(oldp+2479,(((IData)(vlSelf->top__DOT__cache0_resp_val) 
                                 & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                            >> 0x2cU)))));
        bufp->chgBit(oldp+2480,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__val_M0));
        bufp->chgBit(oldp+2481,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__mem_req_type_M0));
        bufp->chgCData(oldp+2482,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_reg),2);
        bufp->chgCData(oldp+2483,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_next),2);
        bufp->chgBit(oldp+2484,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__ostall_miss));
        bufp->chgIData(oldp+2485,(vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data),32);
        bufp->chgIData(oldp+2486,(vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr),32);
        bufp->chgIData(oldp+2487,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_to_mem_data),32);
        bufp->chgIData(oldp+2488,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data),32);
        bufp->chgIData(oldp+2489,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0),32);
        bufp->chgIData(oldp+2490,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0),32);
        bufp->chgIData(oldp+2491,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[0]),21);
        bufp->chgIData(oldp+2492,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[1]),21);
        bufp->chgIData(oldp+2493,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[2]),21);
        bufp->chgIData(oldp+2494,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[3]),21);
        bufp->chgIData(oldp+2495,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[4]),21);
        bufp->chgIData(oldp+2496,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[5]),21);
        bufp->chgIData(oldp+2497,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[6]),21);
        bufp->chgIData(oldp+2498,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[7]),21);
        bufp->chgIData(oldp+2499,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[8]),21);
        bufp->chgIData(oldp+2500,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[9]),21);
        bufp->chgIData(oldp+2501,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[10]),21);
        bufp->chgIData(oldp+2502,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[11]),21);
        bufp->chgIData(oldp+2503,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[12]),21);
        bufp->chgIData(oldp+2504,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[13]),21);
        bufp->chgIData(oldp+2505,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[14]),21);
        bufp->chgIData(oldp+2506,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[15]),21);
        bufp->chgIData(oldp+2507,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[16]),21);
        bufp->chgIData(oldp+2508,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[17]),21);
        bufp->chgIData(oldp+2509,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[18]),21);
        bufp->chgIData(oldp+2510,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[19]),21);
        bufp->chgIData(oldp+2511,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[20]),21);
        bufp->chgIData(oldp+2512,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[21]),21);
        bufp->chgIData(oldp+2513,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[22]),21);
        bufp->chgIData(oldp+2514,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[23]),21);
        bufp->chgIData(oldp+2515,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[24]),21);
        bufp->chgIData(oldp+2516,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[25]),21);
        bufp->chgIData(oldp+2517,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[26]),21);
        bufp->chgIData(oldp+2518,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[27]),21);
        bufp->chgIData(oldp+2519,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[28]),21);
        bufp->chgIData(oldp+2520,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[29]),21);
        bufp->chgIData(oldp+2521,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[30]),21);
        bufp->chgIData(oldp+2522,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag_array[31]),21);
        bufp->chgBit(oldp+2523,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[0]));
        bufp->chgBit(oldp+2524,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[1]));
        bufp->chgBit(oldp+2525,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[2]));
        bufp->chgBit(oldp+2526,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[3]));
        bufp->chgBit(oldp+2527,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[4]));
        bufp->chgBit(oldp+2528,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[5]));
        bufp->chgBit(oldp+2529,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[6]));
        bufp->chgBit(oldp+2530,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[7]));
        bufp->chgBit(oldp+2531,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[8]));
        bufp->chgBit(oldp+2532,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[9]));
        bufp->chgBit(oldp+2533,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[10]));
        bufp->chgBit(oldp+2534,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[11]));
        bufp->chgBit(oldp+2535,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[12]));
        bufp->chgBit(oldp+2536,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[13]));
        bufp->chgBit(oldp+2537,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[14]));
        bufp->chgBit(oldp+2538,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[15]));
        bufp->chgBit(oldp+2539,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[16]));
        bufp->chgBit(oldp+2540,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[17]));
        bufp->chgBit(oldp+2541,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[18]));
        bufp->chgBit(oldp+2542,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[19]));
        bufp->chgBit(oldp+2543,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[20]));
        bufp->chgBit(oldp+2544,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[21]));
        bufp->chgBit(oldp+2545,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[22]));
        bufp->chgBit(oldp+2546,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[23]));
        bufp->chgBit(oldp+2547,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[24]));
        bufp->chgBit(oldp+2548,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[25]));
        bufp->chgBit(oldp+2549,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[26]));
        bufp->chgBit(oldp+2550,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[27]));
        bufp->chgBit(oldp+2551,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[28]));
        bufp->chgBit(oldp+2552,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[29]));
        bufp->chgBit(oldp+2553,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[30]));
        bufp->chgBit(oldp+2554,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty_array[31]));
        bufp->chgBit(oldp+2555,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[0]));
        bufp->chgBit(oldp+2556,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[1]));
        bufp->chgBit(oldp+2557,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[2]));
        bufp->chgBit(oldp+2558,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[3]));
        bufp->chgBit(oldp+2559,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[4]));
        bufp->chgBit(oldp+2560,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[5]));
        bufp->chgBit(oldp+2561,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[6]));
        bufp->chgBit(oldp+2562,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[7]));
        bufp->chgBit(oldp+2563,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[8]));
        bufp->chgBit(oldp+2564,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[9]));
        bufp->chgBit(oldp+2565,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[10]));
        bufp->chgBit(oldp+2566,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[11]));
        bufp->chgBit(oldp+2567,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[12]));
        bufp->chgBit(oldp+2568,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[13]));
        bufp->chgBit(oldp+2569,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[14]));
        bufp->chgBit(oldp+2570,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[15]));
        bufp->chgBit(oldp+2571,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[16]));
        bufp->chgBit(oldp+2572,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[17]));
        bufp->chgBit(oldp+2573,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[18]));
        bufp->chgBit(oldp+2574,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[19]));
        bufp->chgBit(oldp+2575,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[20]));
        bufp->chgBit(oldp+2576,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[21]));
        bufp->chgBit(oldp+2577,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[22]));
        bufp->chgBit(oldp+2578,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[23]));
        bufp->chgBit(oldp+2579,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[24]));
        bufp->chgBit(oldp+2580,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[25]));
        bufp->chgBit(oldp+2581,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[26]));
        bufp->chgBit(oldp+2582,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[27]));
        bufp->chgBit(oldp+2583,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[28]));
        bufp->chgBit(oldp+2584,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[29]));
        bufp->chgBit(oldp+2585,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[30]));
        bufp->chgBit(oldp+2586,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid_array[31]));
        bufp->chgIData(oldp+2587,((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0 
                                   >> 0xbU)),21);
        bufp->chgCData(oldp+2588,((0x1fU & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0 
                                            >> 6U))),5);
        bufp->chgCData(oldp+2589,((0xfU & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0 
                                           >> 2U))),4);
        bufp->chgIData(oldp+2590,((0xffffffc0U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)),32);
        bufp->chgIData(oldp+2591,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__z6b_mux_result),32);
        bufp->chgIData(oldp+2592,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__spill_initial_addr),32);
        bufp->chgIData(oldp+2593,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__spill_addr),32);
        bufp->chgCData(oldp+2594,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__spill_counter),5);
        __Vtemp_1[0U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[1U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[2U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[3U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[4U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[5U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[6U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[7U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[8U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[9U] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[0xaU] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[0xbU] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[0xcU] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[0xdU] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[0xeU] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[0xfU] = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_data_M0;
        bufp->chgWData(oldp+2595,(__Vtemp_1),512);
        bufp->chgIData(oldp+2611,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr),32);
        bufp->chgCData(oldp+2612,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_req_counter),5);
        bufp->chgCData(oldp+2613,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_resp_counter),5);
        bufp->chgWData(oldp+2614,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_data),512);
        bufp->chgWData(oldp+2630,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data),512);
        bufp->chgSData(oldp+2646,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable),16);
        bufp->chgSData(oldp+2647,((0xffffU & ((IData)(1U) 
                                              << (0xfU 
                                                  & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0 
                                                     >> 2U))))),16);
        bufp->chgWData(oldp+2648,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[0]),512);
        bufp->chgWData(oldp+2664,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[1]),512);
        bufp->chgWData(oldp+2680,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[2]),512);
        bufp->chgWData(oldp+2696,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[3]),512);
        bufp->chgWData(oldp+2712,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[4]),512);
        bufp->chgWData(oldp+2728,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[5]),512);
        bufp->chgWData(oldp+2744,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[6]),512);
        bufp->chgWData(oldp+2760,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[7]),512);
        bufp->chgWData(oldp+2776,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[8]),512);
        bufp->chgWData(oldp+2792,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[9]),512);
        bufp->chgWData(oldp+2808,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[10]),512);
        bufp->chgWData(oldp+2824,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[11]),512);
        bufp->chgWData(oldp+2840,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[12]),512);
        bufp->chgWData(oldp+2856,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[13]),512);
        bufp->chgWData(oldp+2872,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[14]),512);
        bufp->chgWData(oldp+2888,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[15]),512);
        bufp->chgWData(oldp+2904,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[16]),512);
        bufp->chgWData(oldp+2920,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[17]),512);
        bufp->chgWData(oldp+2936,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[18]),512);
        bufp->chgWData(oldp+2952,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[19]),512);
        bufp->chgWData(oldp+2968,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[20]),512);
        bufp->chgWData(oldp+2984,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[21]),512);
        bufp->chgWData(oldp+3000,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[22]),512);
        bufp->chgWData(oldp+3016,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[23]),512);
        bufp->chgWData(oldp+3032,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[24]),512);
        bufp->chgWData(oldp+3048,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[25]),512);
        bufp->chgWData(oldp+3064,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[26]),512);
        bufp->chgWData(oldp+3080,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[27]),512);
        bufp->chgWData(oldp+3096,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[28]),512);
        bufp->chgWData(oldp+3112,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[29]),512);
        bufp->chgWData(oldp+3128,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[30]),512);
        bufp->chgWData(oldp+3144,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array[31]),512);
        bufp->chgWData(oldp+3160,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output),512);
        bufp->chgIData(oldp+3176,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0U]),32);
        bufp->chgIData(oldp+3177,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[1U]),32);
        bufp->chgIData(oldp+3178,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[2U]),32);
        bufp->chgIData(oldp+3179,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[3U]),32);
        bufp->chgIData(oldp+3180,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]),32);
        bufp->chgIData(oldp+3181,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]),32);
        bufp->chgIData(oldp+3182,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]),32);
        bufp->chgIData(oldp+3183,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]),32);
        bufp->chgIData(oldp+3184,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]),32);
        bufp->chgIData(oldp+3185,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]),32);
        bufp->chgIData(oldp+3186,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]),32);
        bufp->chgIData(oldp+3187,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]),32);
        bufp->chgIData(oldp+3188,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]),32);
        bufp->chgIData(oldp+3189,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]),32);
        bufp->chgIData(oldp+3190,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]),32);
        bufp->chgIData(oldp+3191,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]),32);
        bufp->chgCData(oldp+3192,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__unnamedblk1__DOT__i),6);
        bufp->chgCData(oldp+3193,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__unnamedblk2__DOT__i),6);
        bufp->chgBit(oldp+3194,(vlSelf->top__DOT__mem__DOT__mem_memreq0_val));
        bufp->chgBit(oldp+3195,(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy));
        bufp->chgBit(oldp+3196,(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy));
        bufp->chgBit(oldp+3197,(vlSelf->top__DOT__mem__DOT__mem_memresp0_val));
        bufp->chgBit(oldp+3198,(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy));
        bufp->chgQData(oldp+3199,(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg),47);
        bufp->chgBit(oldp+3201,(vlSelf->top__DOT__mem__DOT__mem_memresp1_val));
        bufp->chgQData(oldp+3202,(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg),47);
        bufp->chgBit(oldp+3204,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+3205,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+3206,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgBit(oldp+3209,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+3210,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+3211,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgCData(oldp+3214,((7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+3215,((0xffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+3216,(((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+3217,((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U])),2);
        bufp->chgIData(oldp+3218,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]),32);
        bufp->chgCData(oldp+3219,((7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+3220,((0xffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+3221,(((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+3222,((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U])),2);
        bufp->chgIData(oldp+3223,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]),32);
        bufp->chgCData(oldp+3224,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M),3);
        bufp->chgCData(oldp+3225,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M),3);
        bufp->chgSData(oldp+3226,((0x3fffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                              >> 2U))),14);
        bufp->chgSData(oldp+3227,((0x3fffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                              >> 2U))),14);
        bufp->chgSData(oldp+3228,((0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                             >> 4U))),12);
        bufp->chgCData(oldp+3229,((3U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                         >> 2U))),2);
        bufp->chgSData(oldp+3230,((0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                             >> 4U))),12);
        bufp->chgCData(oldp+3231,((3U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                         >> 2U))),2);
        bufp->chgIData(oldp+3232,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M),32);
        bufp->chgIData(oldp+3233,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M),32);
        bufp->chgIData(oldp+3234,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M),32);
        bufp->chgIData(oldp+3235,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M),32);
        bufp->chgBit(oldp+3236,(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M));
        bufp->chgBit(oldp+3237,(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M));
        bufp->chgBit(oldp+3238,(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M));
        bufp->chgBit(oldp+3239,(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M));
        bufp->chgBit(oldp+3240,(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared));
        bufp->chgQData(oldp+3241,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp),47);
        bufp->chgQData(oldp+3243,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp),47);
        bufp->chgBit(oldp+3245,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+3246,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+3247,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+3248,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+3249,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe));
        bufp->chgIData(oldp+3250,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+3251,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+3252,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgIData(oldp+3253,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+3254,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+3255,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+3256,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+3257,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+3258,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgQData(oldp+3259,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore),47);
        bufp->chgCData(oldp+3261,((7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2cU)))),3);
        bufp->chgCData(oldp+3262,((0xffU & (IData)(
                                                   (vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                    >> 0x24U)))),8);
        bufp->chgCData(oldp+3263,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+3264,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+3265,((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg)),32);
        bufp->chgIData(oldp+3266,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+3267,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgQData(oldp+3268,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore),47);
        bufp->chgCData(oldp+3270,((7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2cU)))),3);
        bufp->chgCData(oldp+3271,((0xffU & (IData)(
                                                   (vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                    >> 0x24U)))),8);
        bufp->chgCData(oldp+3272,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+3273,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+3274,((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg)),32);
        bufp->chgIData(oldp+3275,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+3276,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles),32);
        bufp->chgCData(oldp+3277,((7U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+3278,((0xffU & (vlSelf->top__DOT__cache0_req_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+3279,(((vlSelf->top__DOT__cache0_req_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__cache0_req_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+3280,((3U & vlSelf->top__DOT__cache0_req_msg[1U])),2);
        bufp->chgIData(oldp+3281,(vlSelf->top__DOT__cache0_req_msg[0U]),32);
        bufp->chgIData(oldp+3282,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+3283,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgCData(oldp+3284,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_),3);
        bufp->chgCData(oldp+3285,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque),8);
        bufp->chgCData(oldp+3286,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test),2);
        bufp->chgCData(oldp+3287,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len),2);
        bufp->chgIData(oldp+3288,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+3289,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+3290,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num),32);
        bufp->chgBit(oldp+3291,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en));
        bufp->chgIData(oldp+3292,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+3293,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay),32);
        bufp->chgBit(oldp+3294,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+3295,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next));
        bufp->chgBit(oldp+3296,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state));
        bufp->chgIData(oldp+3297,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num),32);
        bufp->chgIData(oldp+3298,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+3299,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay),32);
        bufp->chgBit(oldp+3300,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state));
        bufp->chgIData(oldp+3301,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num),32);
        bufp->chgBit(oldp+3302,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en));
        bufp->chgIData(oldp+3303,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+3304,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay),32);
        bufp->chgBit(oldp+3305,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+3306,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next));
        bufp->chgBit(oldp+3307,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state));
        bufp->chgIData(oldp+3308,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num),32);
        bufp->chgIData(oldp+3309,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+3310,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay),32);
        bufp->chgBit(oldp+3311,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state));
        bufp->chgIData(oldp+3312,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+3313,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num),32);
        bufp->chgIData(oldp+3314,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+3315,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay),32);
        bufp->chgBit(oldp+3316,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state));
        bufp->chgCData(oldp+3317,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)))),4);
        bufp->chgCData(oldp+3318,(vlSelf->top__DOT__sink__DOT__sink__DOT__index),4);
        bufp->chgBit(oldp+3319,(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg));
        bufp->chgBit(oldp+3320,(vlSelf->top__DOT__sink__DOT__sink__DOT__failed));
        bufp->chgIData(oldp+3321,(vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr),32);
        bufp->chgBit(oldp+3322,(vlSelf->top__DOT__src__DOT__src_val));
        bufp->chgIData(oldp+3323,(vlSelf->top__DOT__src__DOT__src_msg),32);
        bufp->chgIData(oldp+3324,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num),32);
        bufp->chgIData(oldp+3325,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+3326,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay),32);
        bufp->chgBit(oldp+3327,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state));
        bufp->chgCData(oldp+3328,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)))),4);
        bufp->chgCData(oldp+3329,(vlSelf->top__DOT__src__DOT__src__DOT__index),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+3330,(vlSelf->top__DOT__proc2mngr_msg),32);
        bufp->chgBit(oldp+3331,(vlSelf->top__DOT__proc2mngr_val));
        bufp->chgWData(oldp+3332,(vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg),77);
        bufp->chgWData(oldp+3335,(vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg),77);
        bufp->chgBit(oldp+3338,(vlSelf->top__DOT__commit_inst));
        bufp->chgBit(oldp+3339,((0U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W)));
        bufp->chgCData(oldp+3340,(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries),2);
        __Vtemp_3[0U] = 0U;
        __Vtemp_3[1U] = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U);
        __Vtemp_3[2U] = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         >> 0x1eU);
        bufp->chgWData(oldp+3341,(__Vtemp_3),77);
        bufp->chgBit(oldp+3344,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgIData(oldp+3345,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F),32);
        bufp->chgBit(oldp+3346,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+3347,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg),77);
        bufp->chgBit(oldp+3350,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_type));
        bufp->chgIData(oldp+3351,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X),32);
        bufp->chgIData(oldp+3352,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_X),32);
        bufp->chgBit(oldp+3353,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgIData(oldp+3354,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W),32);
        bufp->chgBit(oldp+3355,(vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val));
        bufp->chgBit(oldp+3356,(vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_rdy));
        bufp->chgIData(oldp+3357,(vlSelf->top__DOT__DUT__DOT__IntMulAlt_respstream_msg),32);
        bufp->chgBit(oldp+3358,(vlSelf->top__DOT__DUT__DOT__IntMulAlt_respstream_val));
        bufp->chgCData(oldp+3359,(vlSelf->top__DOT__DUT__DOT__pc_sel_F),2);
        bufp->chgCData(oldp+3360,(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D),2);
        bufp->chgCData(oldp+3361,(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D),2);
        bufp->chgBit(oldp+3362,(vlSelf->top__DOT__DUT__DOT__op1_sel_D));
        bufp->chgCData(oldp+3363,(vlSelf->top__DOT__DUT__DOT__op2_sel_D),2);
        bufp->chgCData(oldp+3364,(vlSelf->top__DOT__DUT__DOT__csrr_sel_D),2);
        bufp->chgCData(oldp+3365,(vlSelf->top__DOT__DUT__DOT__imm_type_D),3);
        bufp->chgCData(oldp+3366,(vlSelf->top__DOT__DUT__DOT__alu_fn_X),4);
        bufp->chgCData(oldp+3367,(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X),2);
        bufp->chgBit(oldp+3368,(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M));
        bufp->chgBit(oldp+3369,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)))));
        bufp->chgCData(oldp+3370,(vlSelf->top__DOT__DUT__DOT__rf_waddr_W),5);
        bufp->chgBit(oldp+3371,(vlSelf->top__DOT__DUT__DOT__rf_wen_W));
        bufp->chgBit(oldp+3372,(vlSelf->top__DOT__DUT__DOT__stats_en_wen_W));
        bufp->chgIData(oldp+3373,(vlSelf->top__DOT__DUT__DOT__inst_D),32);
        bufp->chgBit(oldp+3374,(vlSelf->top__DOT__DUT__DOT__br_cond_eq_X));
        bufp->chgBit(oldp+3375,(vlSelf->top__DOT__DUT__DOT__br_cond_lt_X));
        bufp->chgBit(oldp+3376,(vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X));
        bufp->chgBit(oldp+3377,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F));
        bufp->chgBit(oldp+3378,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D));
        bufp->chgBit(oldp+3379,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X));
        bufp->chgBit(oldp+3380,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M));
        bufp->chgBit(oldp+3381,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W));
        bufp->chgBit(oldp+3382,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X));
        bufp->chgBit(oldp+3383,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W));
        bufp->chgBit(oldp+3384,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W));
        bufp->chgBit(oldp+3385,((7U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D))));
        bufp->chgBit(oldp+3386,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D));
        bufp->chgBit(oldp+3387,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X));
        bufp->chgCData(oldp+3388,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D),2);
        bufp->chgCData(oldp+3389,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X),2);
        bufp->chgCData(oldp+3390,((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                            >> 7U))),5);
        bufp->chgCData(oldp+3391,((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+3392,((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                            >> 0x14U))),5);
        bufp->chgSData(oldp+3393,((vlSelf->top__DOT__DUT__DOT__inst_D 
                                   >> 0x14U)),12);
        bufp->chgBit(oldp+3394,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D));
        bufp->chgCData(oldp+3395,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D),4);
        bufp->chgBit(oldp+3396,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D));
        bufp->chgBit(oldp+3397,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D));
        bufp->chgCData(oldp+3398,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D),4);
        bufp->chgCData(oldp+3399,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D),2);
        bufp->chgCData(oldp+3400,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D),2);
        bufp->chgBit(oldp+3401,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D));
        bufp->chgBit(oldp+3402,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D));
        bufp->chgBit(oldp+3403,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D));
        bufp->chgBit(oldp+3404,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D));
        bufp->chgBit(oldp+3405,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D));
        bufp->chgBit(oldp+3406,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D));
        bufp->chgBit(oldp+3407,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D));
        bufp->chgBit(oldp+3408,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_IntMulAlt_D));
        bufp->chgBit(oldp+3409,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_load_use_X_rs1_D));
        bufp->chgBit(oldp+3410,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_load_use_X_rs2_D));
        bufp->chgBit(oldp+3411,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+3412,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+3413,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+3414,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+3415,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+3416,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+3417,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D));
        bufp->chgIData(oldp+3418,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X),32);
        bufp->chgCData(oldp+3419,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X),2);
        bufp->chgBit(oldp+3420,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X));
        bufp->chgBit(oldp+3421,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X));
        bufp->chgCData(oldp+3422,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X),5);
        bufp->chgBit(oldp+3423,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X));
        bufp->chgBit(oldp+3424,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X));
        bufp->chgCData(oldp+3425,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X),4);
        bufp->chgBit(oldp+3426,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_dmem_reqstream_X));
        bufp->chgBit(oldp+3427,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_IntMulAlt_X));
        bufp->chgIData(oldp+3428,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M),32);
        bufp->chgCData(oldp+3429,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M),2);
        bufp->chgBit(oldp+3430,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M));
        bufp->chgCData(oldp+3431,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M),5);
        bufp->chgBit(oldp+3432,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M));
        bufp->chgBit(oldp+3433,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M));
        bufp->chgIData(oldp+3434,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W),32);
        bufp->chgBit(oldp+3435,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W));
        bufp->chgBit(oldp+3436,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W));
        bufp->chgBit(oldp+3437,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W));
        bufp->chgCData(oldp+3438,((0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)),7);
        bufp->chgCData(oldp+3439,((7U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                         >> 0xcU))),3);
        bufp->chgBit(oldp+3440,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgWData(oldp+3441,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgCData(oldp+3444,((7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+3445,((0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+3446,(((vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+3447,((3U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U])),2);
        bufp->chgIData(oldp+3448,(vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]),32);
        bufp->chgIData(oldp+3449,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+3450,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+3451,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F),32);
        bufp->chgIData(oldp+3452,(((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)),32);
        bufp->chgIData(oldp+3453,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X),32);
        bufp->chgIData(oldp+3454,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D),32);
        bufp->chgIData(oldp+3455,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D),32);
        bufp->chgIData(oldp+3456,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D),32);
        bufp->chgIData(oldp+3457,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D),32);
        bufp->chgIData(oldp+3458,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D),32);
        bufp->chgIData(oldp+3459,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X),32);
        bufp->chgIData(oldp+3460,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X),32);
        bufp->chgIData(oldp+3461,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X),32);
        bufp->chgIData(oldp+3462,(((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)),32);
        bufp->chgIData(oldp+3463,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X),32);
        bufp->chgIData(oldp+3464,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M),32);
        bufp->chgIData(oldp+3465,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W),32);
        bufp->chgBit(oldp+3466,((1U & (IData)((1ULL 
                                               & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D)) 
                                                   + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D))) 
                                                  >> 0x20U))))));
        bufp->chgIData(oldp+3467,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0),32);
        bufp->chgIData(oldp+3468,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1),32);
        bufp->chgIData(oldp+3469,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[0]),32);
        bufp->chgIData(oldp+3470,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[1]),32);
        bufp->chgIData(oldp+3471,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[2]),32);
        bufp->chgIData(oldp+3472,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[3]),32);
        bufp->chgIData(oldp+3473,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[4]),32);
        bufp->chgIData(oldp+3474,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[5]),32);
        bufp->chgIData(oldp+3475,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[6]),32);
        bufp->chgIData(oldp+3476,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[7]),32);
        bufp->chgIData(oldp+3477,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[8]),32);
        bufp->chgIData(oldp+3478,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[9]),32);
        bufp->chgIData(oldp+3479,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[10]),32);
        bufp->chgIData(oldp+3480,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[11]),32);
        bufp->chgIData(oldp+3481,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[12]),32);
        bufp->chgIData(oldp+3482,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[13]),32);
        bufp->chgIData(oldp+3483,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[14]),32);
        bufp->chgIData(oldp+3484,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[15]),32);
        bufp->chgIData(oldp+3485,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[16]),32);
        bufp->chgIData(oldp+3486,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[17]),32);
        bufp->chgIData(oldp+3487,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[18]),32);
        bufp->chgIData(oldp+3488,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[19]),32);
        bufp->chgIData(oldp+3489,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[20]),32);
        bufp->chgIData(oldp+3490,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[21]),32);
        bufp->chgIData(oldp+3491,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[22]),32);
        bufp->chgIData(oldp+3492,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[23]),32);
        bufp->chgIData(oldp+3493,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[24]),32);
        bufp->chgIData(oldp+3494,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[25]),32);
        bufp->chgIData(oldp+3495,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[26]),32);
        bufp->chgIData(oldp+3496,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[27]),32);
        bufp->chgIData(oldp+3497,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[28]),32);
        bufp->chgIData(oldp+3498,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[29]),32);
        bufp->chgIData(oldp+3499,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[30]),32);
        bufp->chgIData(oldp+3500,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[31]),32);
        bufp->chgBit(oldp+3501,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty));
        bufp->chgBit(oldp+3502,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr));
        bufp->chgBit(oldp+3503,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr));
        bufp->chgBit(oldp+3504,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+3505,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))));
        bufp->chgBit(oldp+3506,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)))));
        bufp->chgWData(oldp+3507,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data),77);
        bufp->chgWData(oldp+3510,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[0]),77);
        bufp->chgWData(oldp+3513,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[1]),77);
        bufp->chgCData(oldp+3516,((7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+3517,((0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+3518,(((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+3519,((3U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U])),2);
        bufp->chgIData(oldp+3520,(vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]),32);
        bufp->chgIData(oldp+3521,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+3522,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state));
        bufp->chgIData(oldp+3523,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+3524,(vlSelf->top__DOT__DUT__DOT__mul__DOT__a_mux_sel));
        bufp->chgBit(oldp+3525,(vlSelf->top__DOT__DUT__DOT__mul__DOT__b_mux_sel));
        bufp->chgBit(oldp+3526,(vlSelf->top__DOT__DUT__DOT__mul__DOT__result_mux_sel));
        bufp->chgBit(oldp+3527,(vlSelf->top__DOT__DUT__DOT__mul__DOT__result_reg_en));
        bufp->chgBit(oldp+3528,(vlSelf->top__DOT__DUT__DOT__mul__DOT__add_mux_sel));
        bufp->chgBit(oldp+3529,((1U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_reg_out)));
        bufp->chgBit(oldp+3530,((0U == vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_reg_out)));
        bufp->chgIData(oldp+3531,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__result_reg_out),32);
        bufp->chgCData(oldp+3532,(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_reg),2);
        bufp->chgBit(oldp+3533,((1U & (~ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_reg_out))));
        bufp->chgIData(oldp+3534,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__rshifter_out),32);
        bufp->chgIData(oldp+3535,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_reg_out),32);
        bufp->chgCData(oldp+3536,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__calc_shamt_out),4);
        bufp->chgIData(oldp+3537,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__lshifter_out),32);
        bufp->chgIData(oldp+3538,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_reg_out),32);
        bufp->chgIData(oldp+3539,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__add_mux_out),32);
        bufp->chgIData(oldp+3540,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__result_mux_out),32);
        bufp->chgIData(oldp+3541,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__add_out),32);
        bufp->chgCData(oldp+3542,((0xffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_reg_out)),8);
        bufp->chgIData(oldp+3543,(vlSelf->top__DOT__DUT__DOT__mul__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+3544,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+3545,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgIData(oldp+3546,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore),32);
        bufp->chgIData(oldp+3547,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+3548,((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                       >> 0xaU))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+3549,(vlSelf->top__DOT__dmem_reqstream_val));
        bufp->chgBit(oldp+3550,(vlSelf->top__DOT__dmem_respstream_rdy));
        bufp->chgBit(oldp+3551,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F));
        bufp->chgBit(oldp+3552,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val));
        bufp->chgBit(oldp+3553,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val));
        bufp->chgBit(oldp+3554,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)))));
        bufp->chgBit(oldp+3555,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)))));
        bufp->chgBit(oldp+3556,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F));
        bufp->chgBit(oldp+3557,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M));
        bufp->chgBit(oldp+3558,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X));
        bufp->chgBit(oldp+3559,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M));
        bufp->chgBit(oldp+3560,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X));
        bufp->chgBit(oldp+3561,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D));
        bufp->chgBit(oldp+3562,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X));
        bufp->chgBit(oldp+3563,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M));
        bufp->chgBit(oldp+3564,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+3565,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+3566,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+3567,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+3568,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgIData(oldp+3569,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D),32);
        bufp->chgIData(oldp+3570,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D),32);
        bufp->chgIData(oldp+3571,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D),32);
        bufp->chgIData(oldp+3572,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M),32);
        bufp->chgBit(oldp+3573,(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__ostream_go));
        bufp->chgIData(oldp+3574,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out),32);
        bufp->chgBit(oldp+3575,(vlSelf->top__DOT__mem__DOT__mem_memreq1_val));
        bufp->chgWData(oldp+3576,(vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg),77);
        bufp->chgBit(oldp+3579,(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy));
        bufp->chgBit(oldp+3580,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+3581,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+3582,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe));
        bufp->chgCData(oldp+3583,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_),3);
        bufp->chgCData(oldp+3584,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque),8);
        bufp->chgIData(oldp+3585,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr),32);
        bufp->chgCData(oldp+3586,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len),2);
        bufp->chgIData(oldp+3587,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data),32);
        bufp->chgBit(oldp+3588,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+3589,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+3590,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+3591,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgBit(oldp+3592,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en));
        bufp->chgBit(oldp+3593,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+3594,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next));
        bufp->chgBit(oldp+3595,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en));
        bufp->chgBit(oldp+3596,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+3597,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next));
        bufp->chgBit(oldp+3598,(vlSelf->top__DOT__sink__DOT__sink_val));
        bufp->chgIData(oldp+3599,(vlSelf->top__DOT__sink__DOT__sink_msg),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgQData(oldp+3600,(vlSelf->top__DOT__imem_respstream_msg),47);
        bufp->chgIData(oldp+3602,((IData)(vlSelf->top__DOT__imem_respstream_msg)),32);
        bufp->chgCData(oldp+3603,((7U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2cU)))),3);
        bufp->chgCData(oldp+3604,((0xffU & (IData)(
                                                   (vlSelf->top__DOT__imem_respstream_msg 
                                                    >> 0x24U)))),8);
        bufp->chgCData(oldp+3605,((3U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+3606,((3U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x20U)))),2);
        bufp->chgWData(oldp+3607,(vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg),77);
        bufp->chgCData(oldp+3610,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_),3);
        bufp->chgCData(oldp+3611,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque),8);
        bufp->chgIData(oldp+3612,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr),32);
        bufp->chgCData(oldp+3613,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len),2);
        bufp->chgIData(oldp+3614,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data),32);
    }
    bufp->chgBit(oldp+3615,(vlSelf->clk));
    bufp->chgBit(oldp+3616,(vlSelf->linetrace));
    bufp->chgIData(oldp+3617,(vlSelf->top__DOT__mngr2proc_msg),32);
    bufp->chgBit(oldp+3618,(vlSelf->top__DOT__mngr2proc_val));
    bufp->chgBit(oldp+3619,(vlSelf->top__DOT__flush));
    bufp->chgBit(oldp+3620,(vlSelf->top__DOT__cpu_en));
    bufp->chgIData(oldp+3621,(vlSelf->top__DOT__fp),32);
    bufp->chgBit(oldp+3622,(vlSelf->top__DOT____Vcellinp__DUT__clk));
    bufp->chgIData(oldp+3623,(vlSelf->top__DOT__mem__DOT__mem__DOT__data_data),32);
    bufp->chgIData(oldp+3624,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i),32);
    bufp->chgIData(oldp+3625,(vlSelf->top__DOT__unnamedblk1__DOT__i),32);
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
