// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_TRACE_H_
#define VERILATED_VTOP_VC_TRACE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_Trace final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    CData/*3:0*/ __PVT__level;
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__reset;
    CData/*3:0*/ __Vtogcov__level;
    IData/*31:0*/ __PVT__len0;
    IData/*31:0*/ __PVT__len1;
    IData/*31:0*/ __PVT__idx0;
    IData/*31:0*/ __PVT__idx1;
    VlWide<128>/*4095:0*/ __PVT__storage;
    IData/*31:0*/ __PVT__cycles_next;
    IData/*31:0*/ __PVT__cycles;
    IData/*31:0*/ __Vdly__cycles;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_Trace(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_Trace();
    VL_UNCOPYABLE(Vtop_vc_Trace);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
