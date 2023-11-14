// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_lab3_cache_CacheBaseDpath;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_top final : public VerilatedModule {
  public:
    // CELLS
    Vtop_lab3_cache_CacheBaseDpath* __PVT__DUT;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(linetrace,0,0);
    CData/*0:0*/ __PVT__reset;
    CData/*0:0*/ __PVT__reg_en_M0;
    CData/*0:0*/ __PVT__tarray_en;
    CData/*0:0*/ __PVT__tarray_wen;
    CData/*0:0*/ __PVT__z6b_sel;
    CData/*0:0*/ __PVT__darray_write_mux_sel;
    CData/*0:0*/ __PVT__darray_wen;
    CData/*0:0*/ __PVT__write_en_sel;
    CData/*0:0*/ __PVT__spill_one_word_done;
    CData/*0:0*/ __PVT__refill_one_word_req_sent;
    CData/*0:0*/ __PVT__refill_one_word_resp_received;
    CData/*0:0*/ __PVT__Spill_or_Refill_sel;
    CData/*0:0*/ __PVT__tarray_match;
    CData/*0:0*/ __PVT__current_dirty;
    CData/*0:0*/ __PVT__spill_done;
    CData/*0:0*/ __PVT__refill_req_done;
    CData/*0:0*/ __PVT__refill_resp_done;
    CData/*0:0*/ __PVT__flush;
    CData/*0:0*/ __PVT__flush_done;
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__linetrace;
    CData/*0:0*/ __Vtogcov__reset;
    CData/*0:0*/ __Vtogcov__reg_en_M0;
    CData/*0:0*/ __Vtogcov__tarray_en;
    CData/*0:0*/ __Vtogcov__tarray_wen;
    CData/*0:0*/ __Vtogcov__z6b_sel;
    CData/*0:0*/ __Vtogcov__darray_write_mux_sel;
    CData/*0:0*/ __Vtogcov__darray_wen;
    CData/*0:0*/ __Vtogcov__write_en_sel;
    CData/*0:0*/ __Vtogcov__spill_one_word_done;
    CData/*0:0*/ __Vtogcov__refill_one_word_req_sent;
    CData/*0:0*/ __Vtogcov__refill_one_word_resp_received;
    CData/*0:0*/ __Vtogcov__Spill_or_Refill_sel;
    CData/*0:0*/ __Vtogcov__tarray_match;
    CData/*0:0*/ __Vtogcov__current_dirty;
    CData/*0:0*/ __Vtogcov__spill_done;
    CData/*0:0*/ __Vtogcov__refill_req_done;
    CData/*0:0*/ __Vtogcov__refill_resp_done;
    CData/*0:0*/ __Vtogcov__flush;
    CData/*0:0*/ __Vtogcov__flush_done;
    IData/*31:0*/ __PVT__memreq_msg_addr;
    IData/*31:0*/ __PVT__memreq_msg_data;
    IData/*31:0*/ __PVT__memresp_msg_data;
    IData/*31:0*/ __PVT__cache_req_msg_addr;
    IData/*31:0*/ __PVT__cache_req_msg_data;
    IData/*31:0*/ __PVT__cache_resp_msg_data;
    IData/*31:0*/ __Vtogcov__memreq_msg_addr;
    IData/*31:0*/ __Vtogcov__memreq_msg_data;
    IData/*31:0*/ __Vtogcov__memresp_msg_data;
    IData/*31:0*/ __Vtogcov__cache_req_msg_addr;
    IData/*31:0*/ __Vtogcov__cache_req_msg_data;
    IData/*31:0*/ __Vtogcov__cache_resp_msg_data;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_top(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_top();
    VL_UNCOPYABLE(Vtop_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
