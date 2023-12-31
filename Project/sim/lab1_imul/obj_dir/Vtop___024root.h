// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop___024unit;
class Vtop___024unit__03a__03adriver;
class Vtop___024unit__03a__03adriver__Vclpkg;
class Vtop___024unit__03a__03agenerator;
class Vtop___024unit__03a__03agenerator__Vclpkg;
class Vtop___024unit__03a__03atransaction__Vclpkg;
class Vtop_iml_interface;
class Vtop_std;
class Vtop_std__03a__03amailbox__Tz1;
class Vtop_std__03a__03amailbox__Tz1__Vclpkg;
class Vtop_std__03a__03aprocess__Vclpkg;
class Vtop_std__03a__03asemaphore__Vclpkg;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;
    Vtop_std* __PVT__std;
    Vtop_iml_interface* __PVT__top__DOT__iml_if;
    Vtop___024unit__03a__03atransaction__Vclpkg* __024unit__03a__03atransaction__Vclpkg;
    Vtop___024unit__03a__03agenerator__Vclpkg* __024unit__03a__03agenerator__Vclpkg;
    Vtop___024unit__03a__03adriver__Vclpkg* __024unit__03a__03adriver__Vclpkg;
    Vtop_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    Vtop_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    Vtop_std__03a__03amailbox__Tz1__Vclpkg* std__03a__03amailbox__Tz1__Vclpkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(linetrace,0,0);
        CData/*0:0*/ top__DOT____Vcellout__imul__ostream_val;
        CData/*0:0*/ top__DOT____Vcellout__imul__istream_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT____Vtogcov__linetrace;
        CData/*0:0*/ top__DOT__imul__DOT__a_mux_sel;
        CData/*0:0*/ top__DOT__imul__DOT__b_mux_sel;
        CData/*0:0*/ top__DOT__imul__DOT__result_mux_sel;
        CData/*0:0*/ top__DOT__imul__DOT__result_reg_en;
        CData/*0:0*/ top__DOT__imul__DOT__add_mux_sel;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__reset;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__istream_val;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__istream_rdy;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__ostream_val;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__ostream_rdy;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__a_mux_sel;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__b_mux_sel;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__result_mux_sel;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__result_reg_en;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__add_mux_sel;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__b_lsb;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__is_b_zero;
        CData/*3:0*/ top__DOT__imul__DOT__dpath__DOT__calc_shamt_out;
        CData/*3:0*/ top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out;
        CData/*1:0*/ top__DOT__imul__DOT__ctrl__DOT__state_reg;
        CData/*1:0*/ top__DOT__imul__DOT__ctrl__DOT__state_next;
        CData/*0:0*/ top__DOT__imul__DOT__ctrl__DOT__istream_go;
        CData/*0:0*/ top__DOT__imul__DOT__ctrl__DOT__ostream_go;
        CData/*1:0*/ top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_reg;
        CData/*1:0*/ top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next;
        CData/*0:0*/ top__DOT__imul__DOT__ctrl__DOT____Vtogcov__istream_go;
        CData/*0:0*/ top__DOT__imul__DOT__ctrl__DOT____Vtogcov__ostream_go;
        CData/*0:0*/ top__DOT__imul__DOT__ctrl__DOT____Vtogcov__do_sh;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__iml_if__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top__DOT____Vcellout__imul__ostream_msg;
        IData/*31:0*/ top__DOT__imul__DOT____Vtogcov__ostream_msg;
        IData/*31:0*/ top__DOT__imul__DOT____Vtogcov__product;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT__rshifter_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT__b_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT__b_reg_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT__lshifter_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT__a_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT__a_reg_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT__add_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT__result_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT__result_reg_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT__add_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out;
        IData/*31:0*/ top__DOT__imul__DOT__dpath__DOT__result_mux__DOT____Vtogcov__in1;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ top__DOT__imul__DOT____Vtogcov__istream_msg;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlDynamicTriggerScheduler __VdynSched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;
    VlClassRef<Vtop___024unit__03a__03adriver> top__DOT__drv;
    VlClassRef<Vtop___024unit__03a__03agenerator> top__DOT__gen;

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
