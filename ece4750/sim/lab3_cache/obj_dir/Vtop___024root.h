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
        CData/*0:0*/ top__DOT__memreq_val;
        CData/*0:0*/ top__DOT__memreq_type;
        CData/*0:0*/ top__DOT__memresp_val;
        CData/*0:0*/ top__DOT__memresp_rdy;
        CData/*0:0*/ top__DOT__memresp_type;
        CData/*0:0*/ top__DOT__cache_req_val;
        CData/*0:0*/ top__DOT__cache_req_rdy;
        CData/*0:0*/ top__DOT__cache_req_type;
        CData/*0:0*/ top__DOT__cache_resp_val;
        CData/*0:0*/ top__DOT__cache_resp_rdy;
        CData/*0:0*/ top__DOT__cache_resp_type;
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
        CData/*0:0*/ top__DOT__flush_done;
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT____Vtogcov__linetrace;
        CData/*0:0*/ top__DOT____Vtogcov__reset;
        CData/*0:0*/ top__DOT____Vtogcov__memreq_val;
        CData/*0:0*/ top__DOT____Vtogcov__memreq_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__memreq_type;
        CData/*0:0*/ top__DOT____Vtogcov__memresp_val;
        CData/*0:0*/ top__DOT____Vtogcov__memresp_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__memresp_type;
        CData/*0:0*/ top__DOT____Vtogcov__cache_req_val;
        CData/*0:0*/ top__DOT____Vtogcov__cache_req_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__cache_req_type;
        CData/*0:0*/ top__DOT____Vtogcov__cache_resp_val;
        CData/*0:0*/ top__DOT____Vtogcov__cache_resp_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__cache_resp_type;
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
        CData/*0:0*/ top__DOT____Vtogcov__flush_done;
        CData/*0:0*/ top__DOT__DUT__DOT__input_go;
        CData/*0:0*/ top__DOT__DUT__DOT__stall_Y;
    };
    struct {
        CData/*0:0*/ top__DOT__DUT__DOT__val_M0;
        CData/*0:0*/ top__DOT__DUT__DOT__mem_req_type_M0;
        CData/*1:0*/ top__DOT__DUT__DOT__state_reg;
        CData/*1:0*/ top__DOT__DUT__DOT__state_next;
        CData/*0:0*/ top__DOT__DUT__DOT__ostall_M0;
        CData/*0:0*/ top__DOT__DUT__DOT__stall_M0;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__input_go;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_Y;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__stall_Y;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__val_M0;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__mem_req_type_M0;
        CData/*1:0*/ top__DOT__DUT__DOT____Vtogcov__state_reg;
        CData/*1:0*/ top__DOT__DUT__DOT____Vtogcov__state_next;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_M0;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__ostall_notrdy;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__stall_M0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlTriggerScheduler __VtrigSched_h3d404bd2__0;
    VlDelayScheduler __VdlySched;
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
