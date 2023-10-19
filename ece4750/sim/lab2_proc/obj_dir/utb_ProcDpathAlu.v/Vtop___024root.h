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
    VL_IN8(clk,0,0);
    VL_IN8(linetrace,0,0);
    CData/*3:0*/ top__DOT__fn;
    CData/*0:0*/ top__DOT__ops_eq;
    CData/*0:0*/ top__DOT__ops_lt;
    CData/*0:0*/ top__DOT__ops_ltu;
    CData/*0:0*/ top__DOT____Vtogcov__clk;
    CData/*0:0*/ top__DOT____Vtogcov__linetrace;
    CData/*3:0*/ top__DOT____Vtogcov__fn;
    CData/*0:0*/ top__DOT____Vtogcov__ops_eq;
    CData/*0:0*/ top__DOT____Vtogcov__ops_lt;
    CData/*0:0*/ top__DOT____Vtogcov__ops_ltu;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top__DOT__in0;
    IData/*31:0*/ top__DOT__in1;
    IData/*31:0*/ top__DOT__out;
    IData/*31:0*/ top__DOT____Vtogcov__in0;
    IData/*31:0*/ top__DOT____Vtogcov__in1;
    IData/*31:0*/ top__DOT____Vtogcov__out;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

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
