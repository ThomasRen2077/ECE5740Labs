// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(linetrace,0,0);
    CData/*0:0*/ top__DOT__reset;
    CData/*0:0*/ top__DOT__update_en;
    CData/*0:0*/ top__DOT__update_val;
    CData/*0:0*/ top__DOT____Vtogcov__clk;
    CData/*0:0*/ top__DOT____Vtogcov__linetrace;
    CData/*0:0*/ top__DOT____Vtogcov__reset;
    CData/*0:0*/ top__DOT____Vtogcov__update_en;
    CData/*0:0*/ top__DOT____Vtogcov__update_val;
    CData/*0:0*/ top__DOT____Vtogcov__prediction;
    CData/*1:0*/ top__DOT__DUT__DOT__current_PHT;
    CData/*1:0*/ top__DOT__DUT__DOT____Vtogcov__current_PHT;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ top__DOT__DUT__DOT__GHR;
    SData/*10:0*/ top__DOT__DUT__DOT__GHR_update_value;
    SData/*10:0*/ top__DOT__DUT__DOT____Vtogcov__GHR;
    SData/*10:0*/ top__DOT__DUT__DOT____Vtogcov__GHR_update_value;
    IData/*31:0*/ top__DOT__PC;
    IData/*31:0*/ top__DOT____Vtogcov__PC;
    VlWide<128>/*4095:0*/ top__DOT__DUT__DOT__PHT;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
