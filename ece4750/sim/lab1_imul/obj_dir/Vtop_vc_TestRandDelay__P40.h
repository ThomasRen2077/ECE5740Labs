// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_TESTRANDDELAY__P40_H_
#define VERILATED_VTOP_VC_TESTRANDDELAY__P40_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_vc_EnResetReg__P20;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_TestRandDelay__P40 final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_EnResetReg__P20* __PVT__rand_delay_reg;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__in_val,0,0);
    VL_OUT8(__PVT__in_rdy,0,0);
    VL_OUT8(__PVT__out_val,0,0);
    VL_IN8(__PVT__out_rdy,0,0);
    CData/*0:0*/ __PVT__rand_delay_en;
    CData/*0:0*/ __PVT__zero_cycle_delay;
    CData/*0:0*/ __PVT__state_next;
    CData/*0:0*/ __PVT__state;
    CData/*0:0*/ __Vdly__state;
    VL_IN(__PVT__max_delay,31,0);
    IData/*31:0*/ __PVT__rand_num;
    IData/*31:0*/ __PVT__rand_delay_next;
    IData/*31:0*/ __PVT__rand_delay;
    IData/*31:0*/ __Vdly__rand_num;
    VL_IN64(__PVT__in_msg,63,0);
    VL_OUT64(__PVT__out_msg,63,0);

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_TestRandDelay__P40(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_TestRandDelay__P40();
    VL_UNCOPYABLE(Vtop_vc_TestRandDelay__P40);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
