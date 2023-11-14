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
    VlWide<3>/*95:0*/ __Vtemp_5;
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
        bufp->chgBit(oldp+2402,(vlSelf->top__DOT__imem_respstream_rdy));
        bufp->chgBit(oldp+2403,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy));
        bufp->chgQData(oldp+2404,(vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg),64);
        bufp->chgBit(oldp+2406,(vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_val));
        bufp->chgBit(oldp+2407,(vlSelf->top__DOT__DUT__DOT__reg_en_D));
        bufp->chgBit(oldp+2408,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D));
        bufp->chgBit(oldp+2409,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F));
        bufp->chgBit(oldp+2410,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D));
        bufp->chgBit(oldp+2411,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F));
        bufp->chgBit(oldp+2412,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D));
        bufp->chgBit(oldp+2413,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D));
        bufp->chgIData(oldp+2414,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D),32);
        bufp->chgIData(oldp+2415,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D),32);
        bufp->chgBit(oldp+2416,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state));
        bufp->chgBit(oldp+2417,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go));
        bufp->chgCData(oldp+2418,(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_next),2);
        bufp->chgBit(oldp+2419,(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__istream_go));
        bufp->chgIData(oldp+2420,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out),32);
        bufp->chgBit(oldp+2421,(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy));
        bufp->chgBit(oldp+2422,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2423,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2424,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2425,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgBit(oldp+2426,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en));
        bufp->chgBit(oldp+2427,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2428,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next));
        bufp->chgBit(oldp+2429,(vlSelf->top__DOT__src__DOT__src_rdy));
        bufp->chgBit(oldp+2430,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en));
        bufp->chgBit(oldp+2431,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2432,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next));
        bufp->chgBit(oldp+2433,(vlSelf->top__DOT__src__DOT__src__DOT__index_en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgBit(oldp+2434,(vlSelf->top__DOT__imem_reqstream_val));
        bufp->chgBit(oldp+2435,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val));
        bufp->chgBit(oldp+2436,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2437,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        bufp->chgBit(oldp+2438,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        bufp->chgBit(oldp+2439,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2440,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2441,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2442,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgBit(oldp+2443,(vlSelf->top__DOT__mem__DOT__mem_memreq0_val));
        bufp->chgWData(oldp+2444,(vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg),77);
        bufp->chgBit(oldp+2447,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2448,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2449,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe));
        bufp->chgCData(oldp+2450,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_),3);
        bufp->chgCData(oldp+2451,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque),8);
        bufp->chgIData(oldp+2452,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr),32);
        bufp->chgCData(oldp+2453,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len),2);
        bufp->chgIData(oldp+2454,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data),32);
        bufp->chgBit(oldp+2455,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en));
        bufp->chgBit(oldp+2456,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2457,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+2458,(vlSelf->top__DOT__cache0_req_rdy));
        bufp->chgQData(oldp+2459,(vlSelf->top__DOT__imem_respstream_msg),47);
        bufp->chgBit(oldp+2461,(vlSelf->top__DOT__cache0_resp_val));
        bufp->chgQData(oldp+2462,(vlSelf->top__DOT__dmem_respstream_msg),47);
        bufp->chgBit(oldp+2464,(vlSelf->top__DOT__dmem_respstream_val));
        bufp->chgWData(oldp+2465,(vlSelf->top__DOT__cache1_req_msg),77);
        bufp->chgBit(oldp+2468,(vlSelf->top__DOT__cache1_req_val));
        bufp->chgBit(oldp+2469,(vlSelf->top__DOT__cache1_req_rdy));
        bufp->chgQData(oldp+2470,(vlSelf->top__DOT__cache1_resp_msg),47);
        bufp->chgBit(oldp+2472,(vlSelf->top__DOT__cache1_resp_val));
        bufp->chgBit(oldp+2473,(vlSelf->top__DOT__cache1_resp_rdy));
        bufp->chgBit(oldp+2474,(vlSelf->top__DOT__src_done));
        bufp->chgCData(oldp+2475,((7U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2cU)))),3);
        bufp->chgCData(oldp+2476,((0xffU & (IData)(
                                                   (vlSelf->top__DOT__dmem_respstream_msg 
                                                    >> 0x24U)))),8);
        bufp->chgCData(oldp+2477,((3U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+2478,((3U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+2479,((IData)(vlSelf->top__DOT__dmem_respstream_msg)),32);
        bufp->chgCData(oldp+2480,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_),3);
        bufp->chgCData(oldp+2481,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque),8);
        bufp->chgCData(oldp+2482,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test),2);
        bufp->chgCData(oldp+2483,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len),2);
        bufp->chgBit(oldp+2484,(vlSelf->top__DOT__cache__DOT__dcache__DOT__mem_resp_msg_type));
        bufp->chgBit(oldp+2485,(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray_en));
        bufp->chgBit(oldp+2486,(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray_en2));
        bufp->chgBit(oldp+2487,(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray_wen));
        bufp->chgBit(oldp+2488,(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray_wen2));
        bufp->chgBit(oldp+2489,(vlSelf->top__DOT__cache__DOT__dcache__DOT__z6b_sel));
        bufp->chgBit(oldp+2490,(vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_write_mux_sel));
        bufp->chgBit(oldp+2491,(vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_wen));
        bufp->chgBit(oldp+2492,(vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_wen2));
        bufp->chgBit(oldp+2493,(vlSelf->top__DOT__cache__DOT__dcache__DOT__write_en_sel));
        bufp->chgBit(oldp+2494,(vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_one_word_done));
        bufp->chgBit(oldp+2495,(vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_req_sent));
        bufp->chgBit(oldp+2496,(vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_resp_received));
        bufp->chgBit(oldp+2497,(vlSelf->top__DOT__cache__DOT__dcache__DOT__Spill_or_Refill_sel));
        bufp->chgBit(oldp+2498,(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray_match));
        bufp->chgBit(oldp+2499,(vlSelf->top__DOT__cache__DOT__dcache__DOT__current_dirty));
        bufp->chgBit(oldp+2500,(vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_done));
        bufp->chgBit(oldp+2501,(vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_req_done));
        bufp->chgBit(oldp+2502,(vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_resp_done));
        bufp->chgBit(oldp+2503,(vlSelf->top__DOT__cache__DOT__dcache__DOT__current_lru));
        bufp->chgBit(oldp+2504,(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__ctrl__cache_req_type));
        bufp->chgBit(oldp+2505,(((IData)(vlSelf->top__DOT__cache1_resp_val) 
                                 & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                            >> 0x2cU)))));
        bufp->chgBit(oldp+2506,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__val_M0));
        bufp->chgBit(oldp+2507,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__mem_req_type_M0));
        bufp->chgCData(oldp+2508,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__state_reg),2);
        bufp->chgCData(oldp+2509,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__state_next),2);
        bufp->chgBit(oldp+2510,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__ostall_miss));
        bufp->chgIData(oldp+2511,(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data),32);
        bufp->chgIData(oldp+2512,(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr),32);
        bufp->chgIData(oldp+2513,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_to_mem_data),32);
        bufp->chgIData(oldp+2514,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data),32);
        bufp->chgIData(oldp+2515,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0),32);
        bufp->chgIData(oldp+2516,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0),32);
        bufp->chgIData(oldp+2517,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[0]),21);
        bufp->chgIData(oldp+2518,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[1]),21);
        bufp->chgIData(oldp+2519,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[2]),21);
        bufp->chgIData(oldp+2520,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[3]),21);
        bufp->chgIData(oldp+2521,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[4]),21);
        bufp->chgIData(oldp+2522,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[5]),21);
        bufp->chgIData(oldp+2523,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[6]),21);
        bufp->chgIData(oldp+2524,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[7]),21);
        bufp->chgIData(oldp+2525,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[8]),21);
        bufp->chgIData(oldp+2526,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[9]),21);
        bufp->chgIData(oldp+2527,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[10]),21);
        bufp->chgIData(oldp+2528,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[11]),21);
        bufp->chgIData(oldp+2529,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[12]),21);
        bufp->chgIData(oldp+2530,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[13]),21);
        bufp->chgIData(oldp+2531,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[14]),21);
        bufp->chgIData(oldp+2532,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[15]),21);
        bufp->chgIData(oldp+2533,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[16]),21);
        bufp->chgIData(oldp+2534,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[17]),21);
        bufp->chgIData(oldp+2535,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[18]),21);
        bufp->chgIData(oldp+2536,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[19]),21);
        bufp->chgIData(oldp+2537,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[20]),21);
        bufp->chgIData(oldp+2538,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[21]),21);
        bufp->chgIData(oldp+2539,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[22]),21);
        bufp->chgIData(oldp+2540,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[23]),21);
        bufp->chgIData(oldp+2541,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[24]),21);
        bufp->chgIData(oldp+2542,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[25]),21);
        bufp->chgIData(oldp+2543,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[26]),21);
        bufp->chgIData(oldp+2544,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[27]),21);
        bufp->chgIData(oldp+2545,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[28]),21);
        bufp->chgIData(oldp+2546,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[29]),21);
        bufp->chgIData(oldp+2547,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[30]),21);
        bufp->chgIData(oldp+2548,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array[31]),21);
        bufp->chgIData(oldp+2549,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[0]),21);
        bufp->chgIData(oldp+2550,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[1]),21);
        bufp->chgIData(oldp+2551,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[2]),21);
        bufp->chgIData(oldp+2552,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[3]),21);
        bufp->chgIData(oldp+2553,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[4]),21);
        bufp->chgIData(oldp+2554,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[5]),21);
        bufp->chgIData(oldp+2555,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[6]),21);
        bufp->chgIData(oldp+2556,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[7]),21);
        bufp->chgIData(oldp+2557,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[8]),21);
        bufp->chgIData(oldp+2558,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[9]),21);
        bufp->chgIData(oldp+2559,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[10]),21);
        bufp->chgIData(oldp+2560,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[11]),21);
        bufp->chgIData(oldp+2561,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[12]),21);
        bufp->chgIData(oldp+2562,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[13]),21);
        bufp->chgIData(oldp+2563,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[14]),21);
        bufp->chgIData(oldp+2564,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[15]),21);
        bufp->chgIData(oldp+2565,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[16]),21);
        bufp->chgIData(oldp+2566,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[17]),21);
        bufp->chgIData(oldp+2567,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[18]),21);
        bufp->chgIData(oldp+2568,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[19]),21);
        bufp->chgIData(oldp+2569,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[20]),21);
        bufp->chgIData(oldp+2570,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[21]),21);
        bufp->chgIData(oldp+2571,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[22]),21);
        bufp->chgIData(oldp+2572,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[23]),21);
        bufp->chgIData(oldp+2573,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[24]),21);
        bufp->chgIData(oldp+2574,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[25]),21);
        bufp->chgIData(oldp+2575,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[26]),21);
        bufp->chgIData(oldp+2576,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[27]),21);
        bufp->chgIData(oldp+2577,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[28]),21);
        bufp->chgIData(oldp+2578,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[29]),21);
        bufp->chgIData(oldp+2579,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[30]),21);
        bufp->chgIData(oldp+2580,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag_array2[31]),21);
        bufp->chgBit(oldp+2581,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[0]));
        bufp->chgBit(oldp+2582,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[1]));
        bufp->chgBit(oldp+2583,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[2]));
        bufp->chgBit(oldp+2584,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[3]));
        bufp->chgBit(oldp+2585,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[4]));
        bufp->chgBit(oldp+2586,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[5]));
        bufp->chgBit(oldp+2587,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[6]));
        bufp->chgBit(oldp+2588,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[7]));
        bufp->chgBit(oldp+2589,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[8]));
        bufp->chgBit(oldp+2590,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[9]));
        bufp->chgBit(oldp+2591,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[10]));
        bufp->chgBit(oldp+2592,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[11]));
        bufp->chgBit(oldp+2593,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[12]));
        bufp->chgBit(oldp+2594,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[13]));
        bufp->chgBit(oldp+2595,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[14]));
        bufp->chgBit(oldp+2596,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[15]));
        bufp->chgBit(oldp+2597,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[16]));
        bufp->chgBit(oldp+2598,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[17]));
        bufp->chgBit(oldp+2599,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[18]));
        bufp->chgBit(oldp+2600,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[19]));
        bufp->chgBit(oldp+2601,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[20]));
        bufp->chgBit(oldp+2602,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[21]));
        bufp->chgBit(oldp+2603,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[22]));
        bufp->chgBit(oldp+2604,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[23]));
        bufp->chgBit(oldp+2605,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[24]));
        bufp->chgBit(oldp+2606,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[25]));
        bufp->chgBit(oldp+2607,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[26]));
        bufp->chgBit(oldp+2608,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[27]));
        bufp->chgBit(oldp+2609,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[28]));
        bufp->chgBit(oldp+2610,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[29]));
        bufp->chgBit(oldp+2611,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[30]));
        bufp->chgBit(oldp+2612,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array[31]));
        bufp->chgBit(oldp+2613,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[0]));
        bufp->chgBit(oldp+2614,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[1]));
        bufp->chgBit(oldp+2615,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[2]));
        bufp->chgBit(oldp+2616,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[3]));
        bufp->chgBit(oldp+2617,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[4]));
        bufp->chgBit(oldp+2618,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[5]));
        bufp->chgBit(oldp+2619,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[6]));
        bufp->chgBit(oldp+2620,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[7]));
        bufp->chgBit(oldp+2621,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[8]));
        bufp->chgBit(oldp+2622,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[9]));
        bufp->chgBit(oldp+2623,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[10]));
        bufp->chgBit(oldp+2624,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[11]));
        bufp->chgBit(oldp+2625,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[12]));
        bufp->chgBit(oldp+2626,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[13]));
        bufp->chgBit(oldp+2627,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[14]));
        bufp->chgBit(oldp+2628,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[15]));
        bufp->chgBit(oldp+2629,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[16]));
        bufp->chgBit(oldp+2630,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[17]));
        bufp->chgBit(oldp+2631,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[18]));
        bufp->chgBit(oldp+2632,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[19]));
        bufp->chgBit(oldp+2633,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[20]));
        bufp->chgBit(oldp+2634,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[21]));
        bufp->chgBit(oldp+2635,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[22]));
        bufp->chgBit(oldp+2636,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[23]));
        bufp->chgBit(oldp+2637,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[24]));
        bufp->chgBit(oldp+2638,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[25]));
        bufp->chgBit(oldp+2639,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[26]));
        bufp->chgBit(oldp+2640,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[27]));
        bufp->chgBit(oldp+2641,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[28]));
        bufp->chgBit(oldp+2642,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[29]));
        bufp->chgBit(oldp+2643,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[30]));
        bufp->chgBit(oldp+2644,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty_array2[31]));
        bufp->chgBit(oldp+2645,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[0]));
        bufp->chgBit(oldp+2646,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[1]));
        bufp->chgBit(oldp+2647,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[2]));
        bufp->chgBit(oldp+2648,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[3]));
        bufp->chgBit(oldp+2649,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[4]));
        bufp->chgBit(oldp+2650,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[5]));
        bufp->chgBit(oldp+2651,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[6]));
        bufp->chgBit(oldp+2652,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[7]));
        bufp->chgBit(oldp+2653,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[8]));
        bufp->chgBit(oldp+2654,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[9]));
        bufp->chgBit(oldp+2655,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[10]));
        bufp->chgBit(oldp+2656,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[11]));
        bufp->chgBit(oldp+2657,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[12]));
        bufp->chgBit(oldp+2658,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[13]));
        bufp->chgBit(oldp+2659,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[14]));
        bufp->chgBit(oldp+2660,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[15]));
        bufp->chgBit(oldp+2661,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[16]));
        bufp->chgBit(oldp+2662,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[17]));
        bufp->chgBit(oldp+2663,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[18]));
        bufp->chgBit(oldp+2664,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[19]));
        bufp->chgBit(oldp+2665,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[20]));
        bufp->chgBit(oldp+2666,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[21]));
        bufp->chgBit(oldp+2667,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[22]));
        bufp->chgBit(oldp+2668,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[23]));
        bufp->chgBit(oldp+2669,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[24]));
        bufp->chgBit(oldp+2670,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[25]));
        bufp->chgBit(oldp+2671,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[26]));
        bufp->chgBit(oldp+2672,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[27]));
        bufp->chgBit(oldp+2673,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[28]));
        bufp->chgBit(oldp+2674,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[29]));
        bufp->chgBit(oldp+2675,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[30]));
        bufp->chgBit(oldp+2676,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array[31]));
        bufp->chgBit(oldp+2677,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[0]));
        bufp->chgBit(oldp+2678,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[1]));
        bufp->chgBit(oldp+2679,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[2]));
        bufp->chgBit(oldp+2680,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[3]));
        bufp->chgBit(oldp+2681,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[4]));
        bufp->chgBit(oldp+2682,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[5]));
        bufp->chgBit(oldp+2683,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[6]));
        bufp->chgBit(oldp+2684,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[7]));
        bufp->chgBit(oldp+2685,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[8]));
        bufp->chgBit(oldp+2686,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[9]));
        bufp->chgBit(oldp+2687,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[10]));
        bufp->chgBit(oldp+2688,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[11]));
        bufp->chgBit(oldp+2689,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[12]));
        bufp->chgBit(oldp+2690,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[13]));
        bufp->chgBit(oldp+2691,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[14]));
        bufp->chgBit(oldp+2692,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[15]));
        bufp->chgBit(oldp+2693,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[16]));
        bufp->chgBit(oldp+2694,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[17]));
        bufp->chgBit(oldp+2695,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[18]));
        bufp->chgBit(oldp+2696,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[19]));
        bufp->chgBit(oldp+2697,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[20]));
        bufp->chgBit(oldp+2698,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[21]));
        bufp->chgBit(oldp+2699,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[22]));
        bufp->chgBit(oldp+2700,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[23]));
        bufp->chgBit(oldp+2701,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[24]));
        bufp->chgBit(oldp+2702,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[25]));
        bufp->chgBit(oldp+2703,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[26]));
        bufp->chgBit(oldp+2704,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[27]));
        bufp->chgBit(oldp+2705,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[28]));
        bufp->chgBit(oldp+2706,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[29]));
        bufp->chgBit(oldp+2707,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[30]));
        bufp->chgBit(oldp+2708,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid_array2[31]));
        bufp->chgBit(oldp+2709,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[0]));
        bufp->chgBit(oldp+2710,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[1]));
        bufp->chgBit(oldp+2711,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[2]));
        bufp->chgBit(oldp+2712,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[3]));
        bufp->chgBit(oldp+2713,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[4]));
        bufp->chgBit(oldp+2714,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[5]));
        bufp->chgBit(oldp+2715,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[6]));
        bufp->chgBit(oldp+2716,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[7]));
        bufp->chgBit(oldp+2717,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[8]));
        bufp->chgBit(oldp+2718,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[9]));
        bufp->chgBit(oldp+2719,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[10]));
        bufp->chgBit(oldp+2720,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[11]));
        bufp->chgBit(oldp+2721,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[12]));
        bufp->chgBit(oldp+2722,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[13]));
        bufp->chgBit(oldp+2723,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[14]));
        bufp->chgBit(oldp+2724,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[15]));
        bufp->chgBit(oldp+2725,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[16]));
        bufp->chgBit(oldp+2726,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[17]));
        bufp->chgBit(oldp+2727,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[18]));
        bufp->chgBit(oldp+2728,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[19]));
        bufp->chgBit(oldp+2729,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[20]));
        bufp->chgBit(oldp+2730,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[21]));
        bufp->chgBit(oldp+2731,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[22]));
        bufp->chgBit(oldp+2732,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[23]));
        bufp->chgBit(oldp+2733,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[24]));
        bufp->chgBit(oldp+2734,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[25]));
        bufp->chgBit(oldp+2735,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[26]));
        bufp->chgBit(oldp+2736,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[27]));
        bufp->chgBit(oldp+2737,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[28]));
        bufp->chgBit(oldp+2738,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[29]));
        bufp->chgBit(oldp+2739,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[30]));
        bufp->chgBit(oldp+2740,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__lru_array[31]));
        bufp->chgIData(oldp+2741,((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                                   >> 0xbU)),21);
        bufp->chgCData(oldp+2742,((0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                                            >> 6U))),5);
        bufp->chgCData(oldp+2743,((0xfU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                                           >> 2U))),4);
        bufp->chgBit(oldp+2744,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tarray_match1));
        bufp->chgIData(oldp+2745,((0xffffffc0U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0)),32);
        bufp->chgIData(oldp+2746,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__z6b_mux_result),32);
        bufp->chgIData(oldp+2747,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr),32);
        bufp->chgIData(oldp+2748,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr),32);
        bufp->chgCData(oldp+2749,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_counter),5);
        bufp->chgIData(oldp+2750,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__Spill_tag),21);
        __Vtemp_1[0U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[1U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[2U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[3U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[4U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[5U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[6U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[7U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[8U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[9U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[0xaU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[0xbU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[0xcU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[0xdU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[0xeU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0;
        __Vtemp_1[0xfU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_data_M0;
        bufp->chgWData(oldp+2751,(__Vtemp_1),512);
        bufp->chgIData(oldp+2767,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__refill_addr),32);
        bufp->chgCData(oldp+2768,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__refill_req_counter),5);
        bufp->chgCData(oldp+2769,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__refill_resp_counter),5);
        bufp->chgWData(oldp+2770,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__refill_data),512);
        bufp->chgWData(oldp+2786,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data),512);
        bufp->chgSData(oldp+2802,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable),16);
        bufp->chgSData(oldp+2803,((0xffffU & ((IData)(1U) 
                                              << (0xfU 
                                                  & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                                                     >> 2U))))),16);
        bufp->chgWData(oldp+2804,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[0]),512);
        bufp->chgWData(oldp+2820,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[1]),512);
        bufp->chgWData(oldp+2836,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[2]),512);
        bufp->chgWData(oldp+2852,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[3]),512);
        bufp->chgWData(oldp+2868,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[4]),512);
        bufp->chgWData(oldp+2884,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[5]),512);
        bufp->chgWData(oldp+2900,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[6]),512);
        bufp->chgWData(oldp+2916,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[7]),512);
        bufp->chgWData(oldp+2932,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[8]),512);
        bufp->chgWData(oldp+2948,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[9]),512);
        bufp->chgWData(oldp+2964,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[10]),512);
        bufp->chgWData(oldp+2980,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[11]),512);
        bufp->chgWData(oldp+2996,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[12]),512);
        bufp->chgWData(oldp+3012,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[13]),512);
        bufp->chgWData(oldp+3028,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[14]),512);
        bufp->chgWData(oldp+3044,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[15]),512);
        bufp->chgWData(oldp+3060,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[16]),512);
        bufp->chgWData(oldp+3076,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[17]),512);
        bufp->chgWData(oldp+3092,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[18]),512);
        bufp->chgWData(oldp+3108,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[19]),512);
        bufp->chgWData(oldp+3124,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[20]),512);
        bufp->chgWData(oldp+3140,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[21]),512);
        bufp->chgWData(oldp+3156,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[22]),512);
        bufp->chgWData(oldp+3172,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[23]),512);
        bufp->chgWData(oldp+3188,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[24]),512);
        bufp->chgWData(oldp+3204,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[25]),512);
        bufp->chgWData(oldp+3220,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[26]),512);
        bufp->chgWData(oldp+3236,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[27]),512);
        bufp->chgWData(oldp+3252,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[28]),512);
        bufp->chgWData(oldp+3268,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[29]),512);
        bufp->chgWData(oldp+3284,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[30]),512);
        bufp->chgWData(oldp+3300,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array[31]),512);
        bufp->chgWData(oldp+3316,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[0]),512);
        bufp->chgWData(oldp+3332,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[1]),512);
        bufp->chgWData(oldp+3348,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[2]),512);
        bufp->chgWData(oldp+3364,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[3]),512);
        bufp->chgWData(oldp+3380,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[4]),512);
        bufp->chgWData(oldp+3396,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[5]),512);
        bufp->chgWData(oldp+3412,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[6]),512);
        bufp->chgWData(oldp+3428,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[7]),512);
        bufp->chgWData(oldp+3444,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[8]),512);
        bufp->chgWData(oldp+3460,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[9]),512);
        bufp->chgWData(oldp+3476,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[10]),512);
        bufp->chgWData(oldp+3492,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[11]),512);
        bufp->chgWData(oldp+3508,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[12]),512);
        bufp->chgWData(oldp+3524,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[13]),512);
        bufp->chgWData(oldp+3540,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[14]),512);
        bufp->chgWData(oldp+3556,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[15]),512);
        bufp->chgWData(oldp+3572,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[16]),512);
        bufp->chgWData(oldp+3588,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[17]),512);
        bufp->chgWData(oldp+3604,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[18]),512);
        bufp->chgWData(oldp+3620,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[19]),512);
        bufp->chgWData(oldp+3636,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[20]),512);
        bufp->chgWData(oldp+3652,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[21]),512);
        bufp->chgWData(oldp+3668,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[22]),512);
        bufp->chgWData(oldp+3684,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[23]),512);
        bufp->chgWData(oldp+3700,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[24]),512);
        bufp->chgWData(oldp+3716,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[25]),512);
        bufp->chgWData(oldp+3732,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[26]),512);
        bufp->chgWData(oldp+3748,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[27]),512);
        bufp->chgWData(oldp+3764,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[28]),512);
        bufp->chgWData(oldp+3780,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[29]),512);
        bufp->chgWData(oldp+3796,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[30]),512);
        bufp->chgWData(oldp+3812,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2[31]),512);
        bufp->chgWData(oldp+3828,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output),512);
        bufp->chgIData(oldp+3844,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__Spill_tag_mux__in0),21);
        bufp->chgIData(oldp+3845,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__Spill_tag_mux__in1),21);
        bufp->chgIData(oldp+3846,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]),32);
        bufp->chgIData(oldp+3847,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]),32);
        bufp->chgIData(oldp+3848,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]),32);
        bufp->chgIData(oldp+3849,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]),32);
        bufp->chgIData(oldp+3850,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]),32);
        bufp->chgIData(oldp+3851,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]),32);
        bufp->chgIData(oldp+3852,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]),32);
        bufp->chgIData(oldp+3853,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]),32);
        bufp->chgIData(oldp+3854,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]),32);
        bufp->chgIData(oldp+3855,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]),32);
        bufp->chgIData(oldp+3856,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]),32);
        bufp->chgIData(oldp+3857,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]),32);
        bufp->chgIData(oldp+3858,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]),32);
        bufp->chgIData(oldp+3859,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]),32);
        bufp->chgIData(oldp+3860,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]),32);
        bufp->chgIData(oldp+3861,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]),32);
        bufp->chgCData(oldp+3862,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__unnamedblk1__DOT__i),6);
        bufp->chgCData(oldp+3863,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__unnamedblk2__DOT__i),6);
        bufp->chgCData(oldp+3864,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__unnamedblk3__DOT__i),6);
        __Vtemp_2[0U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][0U];
        __Vtemp_2[1U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][1U];
        __Vtemp_2[2U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][2U];
        __Vtemp_2[3U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][3U];
        __Vtemp_2[4U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][4U];
        __Vtemp_2[5U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][5U];
        __Vtemp_2[6U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][6U];
        __Vtemp_2[7U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][7U];
        __Vtemp_2[8U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][8U];
        __Vtemp_2[9U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][9U];
        __Vtemp_2[0xaU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][0xaU];
        __Vtemp_2[0xbU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][0xbU];
        __Vtemp_2[0xcU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][0xcU];
        __Vtemp_2[0xdU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][0xdU];
        __Vtemp_2[0xeU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][0xeU];
        __Vtemp_2[0xfU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array2
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][0xfU];
        bufp->chgWData(oldp+3865,(__Vtemp_2),512);
        __Vtemp_3[0U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][0U];
        __Vtemp_3[1U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][1U];
        __Vtemp_3[2U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][2U];
        __Vtemp_3[3U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][3U];
        __Vtemp_3[4U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][4U];
        __Vtemp_3[5U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][5U];
        __Vtemp_3[6U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][6U];
        __Vtemp_3[7U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][7U];
        __Vtemp_3[8U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][8U];
        __Vtemp_3[9U] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][9U];
        __Vtemp_3[0xaU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][0xaU];
        __Vtemp_3[0xbU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][0xbU];
        __Vtemp_3[0xcU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][0xcU];
        __Vtemp_3[0xdU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][0xdU];
        __Vtemp_3[0xeU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][0xeU];
        __Vtemp_3[0xfU] = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0 
                       >> 6U))][0xfU];
        bufp->chgWData(oldp+3881,(__Vtemp_3),512);
        bufp->chgBit(oldp+3897,(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy));
        bufp->chgBit(oldp+3898,(vlSelf->top__DOT__mem__DOT__mem_memreq1_val));
        bufp->chgBit(oldp+3899,(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy));
        bufp->chgBit(oldp+3900,(vlSelf->top__DOT__mem__DOT__mem_memresp0_val));
        bufp->chgQData(oldp+3901,(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg),47);
        bufp->chgBit(oldp+3903,(vlSelf->top__DOT__mem__DOT__mem_memresp1_val));
        bufp->chgBit(oldp+3904,(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy));
        bufp->chgQData(oldp+3905,(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg),47);
        bufp->chgBit(oldp+3907,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+3908,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+3909,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgBit(oldp+3912,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+3913,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+3914,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgCData(oldp+3917,((7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+3918,((0xffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+3919,(((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+3920,((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U])),2);
        bufp->chgIData(oldp+3921,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]),32);
        bufp->chgCData(oldp+3922,((7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+3923,((0xffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+3924,(((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+3925,((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U])),2);
        bufp->chgIData(oldp+3926,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]),32);
        bufp->chgCData(oldp+3927,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M),3);
        bufp->chgCData(oldp+3928,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M),3);
        bufp->chgSData(oldp+3929,((0x3fffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                              >> 2U))),14);
        bufp->chgSData(oldp+3930,((0x3fffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                              >> 2U))),14);
        bufp->chgSData(oldp+3931,((0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                             >> 4U))),12);
        bufp->chgCData(oldp+3932,((3U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                         >> 2U))),2);
        bufp->chgSData(oldp+3933,((0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                             >> 4U))),12);
        bufp->chgCData(oldp+3934,((3U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                         >> 2U))),2);
        bufp->chgIData(oldp+3935,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M),32);
        bufp->chgIData(oldp+3936,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M),32);
        bufp->chgIData(oldp+3937,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M),32);
        bufp->chgIData(oldp+3938,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M),32);
        bufp->chgBit(oldp+3939,(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M));
        bufp->chgBit(oldp+3940,(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M));
        bufp->chgBit(oldp+3941,(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M));
        bufp->chgBit(oldp+3942,(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M));
        bufp->chgBit(oldp+3943,(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared));
        bufp->chgQData(oldp+3944,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp),47);
        bufp->chgQData(oldp+3946,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp),47);
        bufp->chgBit(oldp+3948,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+3949,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgIData(oldp+3950,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+3951,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+3952,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+3953,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+3954,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+3955,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe));
        bufp->chgIData(oldp+3956,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+3957,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgQData(oldp+3958,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore),47);
        bufp->chgCData(oldp+3960,((7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2cU)))),3);
        bufp->chgCData(oldp+3961,((0xffU & (IData)(
                                                   (vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                    >> 0x24U)))),8);
        bufp->chgCData(oldp+3962,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+3963,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+3964,((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg)),32);
        bufp->chgIData(oldp+3965,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+3966,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+3967,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+3968,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+3969,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+3970,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgQData(oldp+3971,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore),47);
        bufp->chgCData(oldp+3973,((7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2cU)))),3);
        bufp->chgCData(oldp+3974,((0xffU & (IData)(
                                                   (vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                    >> 0x24U)))),8);
        bufp->chgCData(oldp+3975,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+3976,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+3977,((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg)),32);
        bufp->chgIData(oldp+3978,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+3979,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+3980,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgCData(oldp+3981,((7U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+3982,((0xffU & (vlSelf->top__DOT__cache1_req_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+3983,(((vlSelf->top__DOT__cache1_req_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__cache1_req_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+3984,((3U & vlSelf->top__DOT__cache1_req_msg[1U])),2);
        bufp->chgIData(oldp+3985,(vlSelf->top__DOT__cache1_req_msg[0U]),32);
        bufp->chgIData(oldp+3986,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+3987,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgCData(oldp+3988,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_),3);
        bufp->chgCData(oldp+3989,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque),8);
        bufp->chgCData(oldp+3990,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test),2);
        bufp->chgCData(oldp+3991,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len),2);
        bufp->chgIData(oldp+3992,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+3993,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num),32);
        bufp->chgIData(oldp+3994,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+3995,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay),32);
        bufp->chgBit(oldp+3996,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state));
        bufp->chgIData(oldp+3997,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num),32);
        bufp->chgBit(oldp+3998,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en));
        bufp->chgIData(oldp+3999,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+4000,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay),32);
        bufp->chgBit(oldp+4001,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+4002,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next));
        bufp->chgBit(oldp+4003,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state));
        bufp->chgIData(oldp+4004,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num),32);
        bufp->chgIData(oldp+4005,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+4006,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay),32);
        bufp->chgBit(oldp+4007,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state));
        bufp->chgIData(oldp+4008,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num),32);
        bufp->chgBit(oldp+4009,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en));
        bufp->chgIData(oldp+4010,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+4011,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay),32);
        bufp->chgBit(oldp+4012,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+4013,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next));
        bufp->chgBit(oldp+4014,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state));
        bufp->chgIData(oldp+4015,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+4016,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num),32);
        bufp->chgIData(oldp+4017,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+4018,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay),32);
        bufp->chgBit(oldp+4019,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state));
        bufp->chgCData(oldp+4020,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)))),4);
        bufp->chgCData(oldp+4021,(vlSelf->top__DOT__sink__DOT__sink__DOT__index),4);
        bufp->chgBit(oldp+4022,(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg));
        bufp->chgBit(oldp+4023,(vlSelf->top__DOT__sink__DOT__sink__DOT__failed));
        bufp->chgIData(oldp+4024,(vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr),32);
        bufp->chgBit(oldp+4025,(vlSelf->top__DOT__src__DOT__src_val));
        bufp->chgIData(oldp+4026,(vlSelf->top__DOT__src__DOT__src_msg),32);
        bufp->chgIData(oldp+4027,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num),32);
        bufp->chgIData(oldp+4028,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+4029,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay),32);
        bufp->chgBit(oldp+4030,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state));
        bufp->chgCData(oldp+4031,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)))),4);
        bufp->chgCData(oldp+4032,(vlSelf->top__DOT__src__DOT__src__DOT__index),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+4033,(vlSelf->top__DOT__proc2mngr_msg),32);
        bufp->chgBit(oldp+4034,(vlSelf->top__DOT__proc2mngr_val));
        bufp->chgWData(oldp+4035,(vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg),77);
        bufp->chgWData(oldp+4038,(vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg),77);
        bufp->chgBit(oldp+4041,(vlSelf->top__DOT__commit_inst));
        bufp->chgBit(oldp+4042,((0U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W)));
        bufp->chgCData(oldp+4043,(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries),2);
        __Vtemp_5[0U] = 0U;
        __Vtemp_5[1U] = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U);
        __Vtemp_5[2U] = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         >> 0x1eU);
        bufp->chgWData(oldp+4044,(__Vtemp_5),77);
        bufp->chgBit(oldp+4047,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgIData(oldp+4048,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F),32);
        bufp->chgBit(oldp+4049,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+4050,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg),77);
        bufp->chgBit(oldp+4053,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_type));
        bufp->chgIData(oldp+4054,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X),32);
        bufp->chgIData(oldp+4055,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_X),32);
        bufp->chgBit(oldp+4056,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgIData(oldp+4057,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W),32);
        bufp->chgBit(oldp+4058,(vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val));
        bufp->chgBit(oldp+4059,(vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_rdy));
        bufp->chgIData(oldp+4060,(vlSelf->top__DOT__DUT__DOT__IntMulAlt_respstream_msg),32);
        bufp->chgBit(oldp+4061,(vlSelf->top__DOT__DUT__DOT__IntMulAlt_respstream_val));
        bufp->chgCData(oldp+4062,(vlSelf->top__DOT__DUT__DOT__pc_sel_F),2);
        bufp->chgCData(oldp+4063,(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D),2);
        bufp->chgCData(oldp+4064,(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D),2);
        bufp->chgBit(oldp+4065,(vlSelf->top__DOT__DUT__DOT__op1_sel_D));
        bufp->chgCData(oldp+4066,(vlSelf->top__DOT__DUT__DOT__op2_sel_D),2);
        bufp->chgCData(oldp+4067,(vlSelf->top__DOT__DUT__DOT__csrr_sel_D),2);
        bufp->chgCData(oldp+4068,(vlSelf->top__DOT__DUT__DOT__imm_type_D),3);
        bufp->chgCData(oldp+4069,(vlSelf->top__DOT__DUT__DOT__alu_fn_X),4);
        bufp->chgCData(oldp+4070,(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X),2);
        bufp->chgBit(oldp+4071,(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M));
        bufp->chgBit(oldp+4072,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)))));
        bufp->chgCData(oldp+4073,(vlSelf->top__DOT__DUT__DOT__rf_waddr_W),5);
        bufp->chgBit(oldp+4074,(vlSelf->top__DOT__DUT__DOT__rf_wen_W));
        bufp->chgBit(oldp+4075,(vlSelf->top__DOT__DUT__DOT__stats_en_wen_W));
        bufp->chgIData(oldp+4076,(vlSelf->top__DOT__DUT__DOT__inst_D),32);
        bufp->chgBit(oldp+4077,(vlSelf->top__DOT__DUT__DOT__br_cond_eq_X));
        bufp->chgBit(oldp+4078,(vlSelf->top__DOT__DUT__DOT__br_cond_lt_X));
        bufp->chgBit(oldp+4079,(vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X));
        bufp->chgBit(oldp+4080,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F));
        bufp->chgBit(oldp+4081,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D));
        bufp->chgBit(oldp+4082,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X));
        bufp->chgBit(oldp+4083,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M));
        bufp->chgBit(oldp+4084,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W));
        bufp->chgBit(oldp+4085,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X));
        bufp->chgBit(oldp+4086,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W));
        bufp->chgBit(oldp+4087,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W));
        bufp->chgBit(oldp+4088,((7U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D))));
        bufp->chgBit(oldp+4089,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D));
        bufp->chgBit(oldp+4090,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X));
        bufp->chgCData(oldp+4091,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D),2);
        bufp->chgCData(oldp+4092,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X),2);
        bufp->chgCData(oldp+4093,((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                            >> 7U))),5);
        bufp->chgCData(oldp+4094,((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+4095,((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                            >> 0x14U))),5);
        bufp->chgSData(oldp+4096,((vlSelf->top__DOT__DUT__DOT__inst_D 
                                   >> 0x14U)),12);
        bufp->chgBit(oldp+4097,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D));
        bufp->chgCData(oldp+4098,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D),4);
        bufp->chgBit(oldp+4099,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D));
        bufp->chgBit(oldp+4100,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D));
        bufp->chgCData(oldp+4101,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D),4);
        bufp->chgCData(oldp+4102,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D),2);
        bufp->chgCData(oldp+4103,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D),2);
        bufp->chgBit(oldp+4104,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D));
        bufp->chgBit(oldp+4105,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D));
        bufp->chgBit(oldp+4106,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D));
        bufp->chgBit(oldp+4107,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D));
        bufp->chgBit(oldp+4108,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D));
        bufp->chgBit(oldp+4109,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D));
        bufp->chgBit(oldp+4110,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D));
        bufp->chgBit(oldp+4111,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_IntMulAlt_D));
        bufp->chgBit(oldp+4112,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_load_use_X_rs1_D));
        bufp->chgBit(oldp+4113,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_load_use_X_rs2_D));
        bufp->chgBit(oldp+4114,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+4115,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+4116,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+4117,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+4118,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+4119,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing));
        bufp->chgBit(oldp+4120,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D));
        bufp->chgIData(oldp+4121,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X),32);
        bufp->chgCData(oldp+4122,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X),2);
        bufp->chgBit(oldp+4123,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X));
        bufp->chgBit(oldp+4124,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X));
        bufp->chgCData(oldp+4125,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X),5);
        bufp->chgBit(oldp+4126,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X));
        bufp->chgBit(oldp+4127,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X));
        bufp->chgCData(oldp+4128,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X),4);
        bufp->chgBit(oldp+4129,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_dmem_reqstream_X));
        bufp->chgBit(oldp+4130,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_IntMulAlt_X));
        bufp->chgIData(oldp+4131,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M),32);
        bufp->chgCData(oldp+4132,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M),2);
        bufp->chgBit(oldp+4133,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M));
        bufp->chgCData(oldp+4134,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M),5);
        bufp->chgBit(oldp+4135,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M));
        bufp->chgBit(oldp+4136,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M));
        bufp->chgIData(oldp+4137,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W),32);
        bufp->chgBit(oldp+4138,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W));
        bufp->chgBit(oldp+4139,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W));
        bufp->chgBit(oldp+4140,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W));
        bufp->chgCData(oldp+4141,((0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)),7);
        bufp->chgCData(oldp+4142,((7U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                         >> 0xcU))),3);
        bufp->chgBit(oldp+4143,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgWData(oldp+4144,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgCData(oldp+4147,((7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+4148,((0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+4149,(((vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+4150,((3U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U])),2);
        bufp->chgIData(oldp+4151,(vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]),32);
        bufp->chgIData(oldp+4152,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+4153,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+4154,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F),32);
        bufp->chgIData(oldp+4155,(((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)),32);
        bufp->chgIData(oldp+4156,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X),32);
        bufp->chgIData(oldp+4157,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D),32);
        bufp->chgIData(oldp+4158,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D),32);
        bufp->chgIData(oldp+4159,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D),32);
        bufp->chgIData(oldp+4160,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D),32);
        bufp->chgIData(oldp+4161,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D),32);
        bufp->chgIData(oldp+4162,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X),32);
        bufp->chgIData(oldp+4163,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X),32);
        bufp->chgIData(oldp+4164,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X),32);
        bufp->chgIData(oldp+4165,(((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)),32);
        bufp->chgIData(oldp+4166,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X),32);
        bufp->chgIData(oldp+4167,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M),32);
        bufp->chgIData(oldp+4168,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W),32);
        bufp->chgBit(oldp+4169,((1U & (IData)((1ULL 
                                               & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D)) 
                                                   + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D))) 
                                                  >> 0x20U))))));
        bufp->chgIData(oldp+4170,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0),32);
        bufp->chgIData(oldp+4171,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1),32);
        bufp->chgIData(oldp+4172,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[0]),32);
        bufp->chgIData(oldp+4173,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[1]),32);
        bufp->chgIData(oldp+4174,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[2]),32);
        bufp->chgIData(oldp+4175,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[3]),32);
        bufp->chgIData(oldp+4176,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[4]),32);
        bufp->chgIData(oldp+4177,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[5]),32);
        bufp->chgIData(oldp+4178,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[6]),32);
        bufp->chgIData(oldp+4179,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[7]),32);
        bufp->chgIData(oldp+4180,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[8]),32);
        bufp->chgIData(oldp+4181,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[9]),32);
        bufp->chgIData(oldp+4182,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[10]),32);
        bufp->chgIData(oldp+4183,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[11]),32);
        bufp->chgIData(oldp+4184,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[12]),32);
        bufp->chgIData(oldp+4185,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[13]),32);
        bufp->chgIData(oldp+4186,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[14]),32);
        bufp->chgIData(oldp+4187,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[15]),32);
        bufp->chgIData(oldp+4188,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[16]),32);
        bufp->chgIData(oldp+4189,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[17]),32);
        bufp->chgIData(oldp+4190,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[18]),32);
        bufp->chgIData(oldp+4191,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[19]),32);
        bufp->chgIData(oldp+4192,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[20]),32);
        bufp->chgIData(oldp+4193,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[21]),32);
        bufp->chgIData(oldp+4194,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[22]),32);
        bufp->chgIData(oldp+4195,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[23]),32);
        bufp->chgIData(oldp+4196,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[24]),32);
        bufp->chgIData(oldp+4197,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[25]),32);
        bufp->chgIData(oldp+4198,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[26]),32);
        bufp->chgIData(oldp+4199,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[27]),32);
        bufp->chgIData(oldp+4200,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[28]),32);
        bufp->chgIData(oldp+4201,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[29]),32);
        bufp->chgIData(oldp+4202,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[30]),32);
        bufp->chgIData(oldp+4203,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[31]),32);
        bufp->chgBit(oldp+4204,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty));
        bufp->chgBit(oldp+4205,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr));
        bufp->chgBit(oldp+4206,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr));
        bufp->chgBit(oldp+4207,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+4208,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))));
        bufp->chgBit(oldp+4209,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)))));
        bufp->chgWData(oldp+4210,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data),77);
        bufp->chgWData(oldp+4213,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[0]),77);
        bufp->chgWData(oldp+4216,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[1]),77);
        bufp->chgCData(oldp+4219,((7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+4220,((0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+4221,(((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+4222,((3U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U])),2);
        bufp->chgIData(oldp+4223,(vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]),32);
        bufp->chgIData(oldp+4224,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+4225,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state));
        bufp->chgIData(oldp+4226,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+4227,(vlSelf->top__DOT__DUT__DOT__mul__DOT__a_mux_sel));
        bufp->chgBit(oldp+4228,(vlSelf->top__DOT__DUT__DOT__mul__DOT__b_mux_sel));
        bufp->chgBit(oldp+4229,(vlSelf->top__DOT__DUT__DOT__mul__DOT__result_mux_sel));
        bufp->chgBit(oldp+4230,(vlSelf->top__DOT__DUT__DOT__mul__DOT__result_reg_en));
        bufp->chgBit(oldp+4231,(vlSelf->top__DOT__DUT__DOT__mul__DOT__add_mux_sel));
        bufp->chgBit(oldp+4232,((1U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_reg_out)));
        bufp->chgBit(oldp+4233,((0U == vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_reg_out)));
        bufp->chgIData(oldp+4234,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__result_reg_out),32);
        bufp->chgCData(oldp+4235,(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_reg),2);
        bufp->chgBit(oldp+4236,((1U & (~ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_reg_out))));
        bufp->chgIData(oldp+4237,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__rshifter_out),32);
        bufp->chgIData(oldp+4238,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_reg_out),32);
        bufp->chgCData(oldp+4239,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__calc_shamt_out),4);
        bufp->chgIData(oldp+4240,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__lshifter_out),32);
        bufp->chgIData(oldp+4241,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_reg_out),32);
        bufp->chgIData(oldp+4242,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__add_mux_out),32);
        bufp->chgIData(oldp+4243,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__result_mux_out),32);
        bufp->chgIData(oldp+4244,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__add_out),32);
        bufp->chgCData(oldp+4245,((0xffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_reg_out)),8);
        bufp->chgIData(oldp+4246,(vlSelf->top__DOT__DUT__DOT__mul__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+4247,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+4248,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgIData(oldp+4249,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore),32);
        bufp->chgIData(oldp+4250,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+4251,((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                       >> 0xaU))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+4252,(vlSelf->top__DOT__dmem_reqstream_val));
        bufp->chgBit(oldp+4253,((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__stall_M0)))));
        bufp->chgBit(oldp+4254,(vlSelf->top__DOT__dmem_respstream_rdy));
        bufp->chgBit(oldp+4255,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F));
        bufp->chgBit(oldp+4256,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val));
        bufp->chgBit(oldp+4257,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val));
        bufp->chgBit(oldp+4258,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)))));
        bufp->chgBit(oldp+4259,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)))));
        bufp->chgBit(oldp+4260,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F));
        bufp->chgBit(oldp+4261,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M));
        bufp->chgBit(oldp+4262,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X));
        bufp->chgBit(oldp+4263,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M));
        bufp->chgBit(oldp+4264,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X));
        bufp->chgBit(oldp+4265,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D));
        bufp->chgBit(oldp+4266,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X));
        bufp->chgBit(oldp+4267,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M));
        bufp->chgBit(oldp+4268,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+4269,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+4270,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+4271,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+4272,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgIData(oldp+4273,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D),32);
        bufp->chgIData(oldp+4274,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D),32);
        bufp->chgIData(oldp+4275,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D),32);
        bufp->chgIData(oldp+4276,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M),32);
        bufp->chgBit(oldp+4277,(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__ostream_go));
        bufp->chgIData(oldp+4278,(vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out),32);
        bufp->chgBit(oldp+4279,((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__stall_Y)))));
        bufp->chgBit(oldp+4280,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))));
        bufp->chgBit(oldp+4281,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__stall_Y));
        bufp->chgBit(oldp+4282,((1U & (~ (IData)(vlSelf->top__DOT__dmem_respstream_rdy)))));
        bufp->chgBit(oldp+4283,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__ostall_M0));
        bufp->chgBit(oldp+4284,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__stall_M0));
        bufp->chgBit(oldp+4285,(vlSelf->top__DOT__sink__DOT__sink_val));
        bufp->chgIData(oldp+4286,(vlSelf->top__DOT__sink__DOT__sink_msg),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgIData(oldp+4287,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data),32);
        bufp->chgWData(oldp+4288,(vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg),77);
        bufp->chgCData(oldp+4291,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_),3);
        bufp->chgCData(oldp+4292,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque),8);
        bufp->chgIData(oldp+4293,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr),32);
        bufp->chgCData(oldp+4294,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len),2);
        bufp->chgIData(oldp+4295,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data),32);
    }
    bufp->chgBit(oldp+4296,(vlSelf->clk));
    bufp->chgBit(oldp+4297,(vlSelf->linetrace));
    bufp->chgIData(oldp+4298,(vlSelf->top__DOT__mngr2proc_msg),32);
    bufp->chgBit(oldp+4299,(vlSelf->top__DOT__mngr2proc_val));
    bufp->chgBit(oldp+4300,(vlSelf->top__DOT__flush));
    bufp->chgBit(oldp+4301,(vlSelf->top__DOT__cpu_en));
    bufp->chgIData(oldp+4302,(vlSelf->top__DOT__fp),32);
    bufp->chgBit(oldp+4303,(vlSelf->top__DOT____Vcellinp__DUT__clk));
    bufp->chgIData(oldp+4304,(vlSelf->top__DOT__mem__DOT__mem__DOT__data_data),32);
    bufp->chgIData(oldp+4305,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i),32);
    bufp->chgIData(oldp+4306,(vlSelf->top__DOT__unnamedblk1__DOT__i),32);
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
