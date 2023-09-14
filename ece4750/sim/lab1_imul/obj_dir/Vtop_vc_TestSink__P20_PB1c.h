// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_TESTSINK__P20_PB1C_H_
#define VERILATED_VTOP_VC_TESTSINK__P20_PB1C_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_vc_EnResetReg__P5_PBz1;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_TestSink__P20_PB1c final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_EnResetReg__P5_PBz1* __PVT__index_reg;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__val,0,0);
    VL_OUT8(__PVT__rdy,0,0);
    VL_OUT8(__PVT__done,0,0);
    CData/*0:0*/ __PVT__index_en;
    CData/*4:0*/ __PVT__index_next;
    CData/*4:0*/ __PVT__index;
    CData/*0:0*/ __PVT__reset_reg;
    CData/*0:0*/ __PVT__done_next;
    CData/*0:0*/ __PVT__go;
    CData/*0:0*/ __PVT__failed;
    CData/*3:0*/ __PVT__verbose;
    CData/*0:0*/ __Vdly__reset_reg;
    CData/*0:0*/ __Vdly__done;
    CData/*0:0*/ __Vdly__failed;
    VL_IN(__PVT__msg,31,0);
    IData/*31:0*/ __PVT__m_curr;
    VlUnpacked<IData/*31:0*/, 28> __PVT__m;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_TestSink__P20_PB1c(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_TestSink__P20_PB1c();
    VL_UNCOPYABLE(Vtop_vc_TestSink__P20_PB1c);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
