// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_TESTRANDDELAYSOURCE__PI1_H_
#define VERILATED_VTOP_VC_TESTRANDDELAYSOURCE__PI1_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_vc_TestRandDelay__P40;
class Vtop_vc_TestSource__P40_PB1c;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_TestRandDelaySource__pi1 final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_TestSource__P40_PB1c* __PVT__src;
    Vtop_vc_TestRandDelay__P40* __PVT__msg_delay;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT8(__PVT__val,0,0);
    VL_IN8(__PVT__rdy,0,0);
    VL_OUT8(__PVT__done,0,0);
    CData/*0:0*/ __PVT__src_val;
    CData/*0:0*/ __PVT__src_rdy;
    VL_IN(__PVT__max_delay,31,0);
    VL_OUT64(__PVT__msg,63,0);
    QData/*63:0*/ __PVT__src_msg;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_TestRandDelaySource__pi1(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_TestRandDelaySource__pi1();
    VL_UNCOPYABLE(Vtop_vc_TestRandDelaySource__pi1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
