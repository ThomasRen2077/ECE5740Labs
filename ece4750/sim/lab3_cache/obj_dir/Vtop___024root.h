// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop___024unit;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(linetrace,0,0);
        CData/*0:0*/ top__DOT__reset;
        CData/*0:0*/ top__DOT__reg_en_M0;
        CData/*0:0*/ top__DOT__tarray_en;
        CData/*0:0*/ top__DOT__tarray_wen;
        CData/*0:0*/ top__DOT__z6b_sel;
        CData/*0:0*/ top__DOT__darray_write_mux_sel;
        CData/*0:0*/ top__DOT__darray_wen;
        CData/*0:0*/ top__DOT__write_en_sel;
        CData/*0:0*/ top__DOT__spill_one_word_done;
        CData/*0:0*/ top__DOT__refill_one_word_req_sent;
        CData/*0:0*/ top__DOT__refill_one_word_resp_received;
        CData/*0:0*/ top__DOT__Spill_or_Refill_sel;
        CData/*0:0*/ top__DOT__tarray_match;
        CData/*0:0*/ top__DOT__current_dirty;
        CData/*0:0*/ top__DOT__spill_done;
        CData/*0:0*/ top__DOT__refill_req_done;
        CData/*0:0*/ top__DOT__refill_resp_done;
        CData/*0:0*/ top__DOT__flush;
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT____Vtogcov__linetrace;
        CData/*0:0*/ top__DOT____Vtogcov__reset;
        CData/*0:0*/ top__DOT____Vtogcov__reg_en_M0;
        CData/*0:0*/ top__DOT____Vtogcov__tarray_en;
        CData/*0:0*/ top__DOT____Vtogcov__tarray_wen;
        CData/*0:0*/ top__DOT____Vtogcov__z6b_sel;
        CData/*0:0*/ top__DOT____Vtogcov__darray_write_mux_sel;
        CData/*0:0*/ top__DOT____Vtogcov__darray_wen;
        CData/*0:0*/ top__DOT____Vtogcov__write_en_sel;
        CData/*0:0*/ top__DOT____Vtogcov__spill_one_word_done;
        CData/*0:0*/ top__DOT____Vtogcov__refill_one_word_req_sent;
        CData/*0:0*/ top__DOT____Vtogcov__refill_one_word_resp_received;
        CData/*0:0*/ top__DOT____Vtogcov__Spill_or_Refill_sel;
        CData/*0:0*/ top__DOT____Vtogcov__tarray_match;
        CData/*0:0*/ top__DOT____Vtogcov__current_dirty;
        CData/*0:0*/ top__DOT____Vtogcov__spill_done;
        CData/*0:0*/ top__DOT____Vtogcov__refill_req_done;
        CData/*0:0*/ top__DOT____Vtogcov__refill_resp_done;
        CData/*0:0*/ top__DOT____Vtogcov__flush;
        CData/*4:0*/ top__DOT__DUT__DOT__spill_counter;
        CData/*4:0*/ top__DOT__DUT__DOT__refill_req_counter;
        CData/*4:0*/ top__DOT__DUT__DOT__refill_resp_counter;
        CData/*4:0*/ top__DOT__DUT__DOT____Vtogcov__spill_counter;
        CData/*4:0*/ top__DOT__DUT__DOT____Vtogcov__refill_req_counter;
        CData/*4:0*/ top__DOT__DUT__DOT____Vtogcov__refill_resp_counter;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ top__DOT__DUT__DOT__write_word_enable;
        SData/*15:0*/ top__DOT__DUT__DOT____Vtogcov__write_word_enable;
        SData/*15:0*/ top__DOT__DUT__DOT____Vtogcov__offset_write;
        SData/*15:0*/ top__DOT__DUT__DOT__word_en_mux__DOT____Vtogcov__in0;
        IData/*31:0*/ top__DOT__memreq_msg_addr;
        IData/*31:0*/ top__DOT__memreq_msg_data;
        IData/*31:0*/ top__DOT__memresp_msg_data;
        IData/*31:0*/ top__DOT__cache_req_msg_addr;
        IData/*31:0*/ top__DOT__cache_resp_msg_data;
        IData/*31:0*/ top__DOT____Vtogcov__memreq_msg_addr;
        IData/*31:0*/ top__DOT____Vtogcov__memreq_msg_data;
        IData/*31:0*/ top__DOT____Vtogcov__memresp_msg_data;
        IData/*31:0*/ top__DOT____Vtogcov__cache_req_msg_addr;
        IData/*31:0*/ top__DOT____Vtogcov__cache_req_msg_data;
        IData/*31:0*/ top__DOT____Vtogcov__cache_resp_msg_data;
        IData/*31:0*/ top__DOT__DUT__DOT__cache_request_addr_M0;
    };
    struct {
        IData/*31:0*/ top__DOT__DUT__DOT__cache_request_data_M0;
        IData/*31:0*/ top__DOT__DUT__DOT__z6b_mux_result;
        IData/*31:0*/ top__DOT__DUT__DOT__spill_initial_addr;
        IData/*31:0*/ top__DOT__DUT__DOT__spill_addr;
        IData/*31:0*/ top__DOT__DUT__DOT__cache_to_mem_data;
        IData/*31:0*/ top__DOT__DUT__DOT__refill_addr;
        VlWide<16>/*511:0*/ top__DOT__DUT__DOT__refill_data;
        VlWide<16>/*511:0*/ top__DOT__DUT__DOT__write_data;
        VlWide<16>/*511:0*/ top__DOT__DUT__DOT__data_array_output;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__z6b_result;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__z6b_mux_result;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__spill_initial_addr;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__spill_addr;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__refill_addr;
        IData/*31:0*/ top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0;
        IData/*31:0*/ top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1;
        IData/*31:0*/ top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2;
        IData/*31:0*/ top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3;
        IData/*31:0*/ top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4;
        IData/*31:0*/ top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5;
        IData/*31:0*/ top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6;
        IData/*31:0*/ top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7;
        IData/*31:0*/ top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8;
        IData/*31:0*/ top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9;
        IData/*31:0*/ top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10;
        IData/*31:0*/ top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11;
        IData/*31:0*/ top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12;
        IData/*31:0*/ top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13;
        IData/*31:0*/ top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14;
        IData/*31:0*/ top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*20:0*/, 32> top__DOT__DUT__DOT__tag_array;
        VlUnpacked<CData/*0:0*/, 32> top__DOT__DUT__DOT__dirty_array;
        VlUnpacked<CData/*0:0*/, 32> top__DOT__DUT__DOT__valid_array;
        VlUnpacked<VlWide<16>/*511:0*/, 32> top__DOT__DUT__DOT__data_array;
        VlUnpacked<CData/*0:0*/, 32> top__DOT__DUT__DOT____Vtogcov__dirty_array;
        VlUnpacked<CData/*0:0*/, 32> top__DOT__DUT__DOT____Vtogcov__valid_array;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3d404bd2__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
