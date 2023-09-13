// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop___024unit;
class Vtop_top;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_top* __PVT__top;
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(linetrace,0,0);
    CData/*0:0*/ __VstlContinue;
    CData/*0:0*/ __VicoContinue;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__imul____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__imul__vc_trace____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top____PVT__ostream_val__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    CData/*0:0*/ __VnbaContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VnbaIterCount;
    VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    VlTriggerScheduler __VtrigSched_h3ebd0ccf__0;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h87bdc05d__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VpreTriggered;
    VlTriggerVec<5> __VnbaTriggered;

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
