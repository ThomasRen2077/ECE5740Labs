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
        CData/*0:0*/ top__DOT__istream_val;
        CData/*0:0*/ top__DOT__istream_rdy;
        CData/*0:0*/ top__DOT__ostream_rdy;
        CData/*0:0*/ top__DOT__ostream_val;
        CData/*0:0*/ top__DOT__src_done;
        CData/*0:0*/ top__DOT__snk_done;
        CData/*0:0*/ top__DOT__src__DOT__src_val;
        CData/*0:0*/ top__DOT__src__DOT__src_rdy;
        CData/*4:0*/ top__DOT__src__DOT__src__DOT__index_next;
        CData/*4:0*/ top__DOT__src__DOT__src__DOT__index;
        CData/*0:0*/ top__DOT__src__DOT__src__DOT__reset_reg;
        CData/*0:0*/ top__DOT__src__DOT__msg_delay__DOT__rand_delay_en;
        CData/*0:0*/ top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay;
        CData/*0:0*/ top__DOT__src__DOT__msg_delay__DOT__state_next;
        CData/*0:0*/ top__DOT__src__DOT__msg_delay__DOT__state;
        CData/*1:0*/ top__DOT__imul__DOT__state;
        CData/*1:0*/ top__DOT__imul__DOT__nextstate;
        CData/*7:0*/ top__DOT__imul__DOT__counter;
        CData/*0:0*/ top__DOT__imul__DOT__next_ostream_val;
        CData/*3:0*/ top__DOT__imul__DOT__vc_trace__DOT__level;
        CData/*0:0*/ top__DOT__sink__DOT__sink_val;
        CData/*0:0*/ top__DOT__sink__DOT__sink_rdy;
        CData/*0:0*/ top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en;
        CData/*0:0*/ top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay;
        CData/*0:0*/ top__DOT__sink__DOT__msg_delay__DOT__state_next;
        CData/*0:0*/ top__DOT__sink__DOT__msg_delay__DOT__state;
        CData/*0:0*/ top__DOT__sink__DOT__sink__DOT__index_en;
        CData/*4:0*/ top__DOT__sink__DOT__sink__DOT__index_next;
        CData/*4:0*/ top__DOT__sink__DOT__sink__DOT__index;
        CData/*0:0*/ top__DOT__sink__DOT__sink__DOT__reset_reg;
        CData/*0:0*/ top__DOT__sink__DOT__sink__DOT__failed;
        CData/*3:0*/ top__DOT__sink__DOT__sink__DOT__verbose;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top__DOT__ostream_msg;
        IData/*31:0*/ top__DOT__a;
        IData/*31:0*/ top__DOT__b;
        IData/*31:0*/ top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx;
        IData/*31:0*/ top__DOT__rand_msg1;
        IData/*31:0*/ top__DOT__rand_msg2;
        IData/*31:0*/ top__DOT__unnamedblk2__DOT__x;
        IData/*31:0*/ top__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ top__DOT__src__DOT__msg_delay__DOT__rand_num;
        IData/*31:0*/ top__DOT__src__DOT__msg_delay__DOT__rand_delay_next;
        IData/*31:0*/ top__DOT__src__DOT__msg_delay__DOT__rand_delay;
        IData/*31:0*/ top__DOT__imul__DOT__a;
        IData/*31:0*/ top__DOT__imul__DOT__b;
        IData/*31:0*/ top__DOT__imul__DOT__next_a;
        IData/*31:0*/ top__DOT__imul__DOT__next_b;
        IData/*31:0*/ top__DOT__imul__DOT__next_ostream_msg;
        VlWide<128>/*4095:0*/ top__DOT__imul__DOT__str;
        IData/*31:0*/ top__DOT__imul__DOT__idx1;
        IData/*31:0*/ top__DOT__imul__DOT__idx0;
        IData/*31:0*/ top__DOT__imul__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ top__DOT__imul__DOT__vc_trace__DOT__len1;
        IData/*31:0*/ top__DOT__imul__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ top__DOT__imul__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ top__DOT__imul__DOT__vc_trace__DOT__storage;
        IData/*31:0*/ top__DOT__imul__DOT__vc_trace__DOT__cycles_next;
        IData/*31:0*/ top__DOT__imul__DOT__vc_trace__DOT__cycles;
        IData/*31:0*/ top__DOT__sink__DOT__sink_msg;
    };
    struct {
        IData/*31:0*/ top__DOT__sink__DOT__msg_delay__DOT__rand_num;
        IData/*31:0*/ top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next;
        IData/*31:0*/ top__DOT__sink__DOT__msg_delay__DOT__rand_delay;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ top__DOT__istream_msg;
        VlUnpacked<QData/*63:0*/, 28> top__DOT__src_msgs;
        VlUnpacked<IData/*31:0*/, 28> top__DOT__snk_msgs;
        VlUnpacked<QData/*63:0*/, 28> top__DOT__src__DOT__src__DOT__m;
        VlUnpacked<IData/*31:0*/, 28> top__DOT__sink__DOT__sink__DOT__m;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerScheduler __VtrigSched_h3cadd47d__0;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
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
