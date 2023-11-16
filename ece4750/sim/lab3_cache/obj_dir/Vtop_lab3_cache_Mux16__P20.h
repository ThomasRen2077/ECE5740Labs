// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_LAB3_CACHE_MUX16__P20_H_
#define VERILATED_VTOP_LAB3_CACHE_MUX16__P20_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_lab3_cache_Mux16__P20 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__sel,3,0);
    CData/*3:0*/ __Vtogcov__sel;
    VL_IN(__PVT__in0,31,0);
    VL_IN(__PVT__in1,31,0);
    VL_IN(__PVT__in2,31,0);
    VL_IN(__PVT__in3,31,0);
    VL_IN(__PVT__in4,31,0);
    VL_IN(__PVT__in5,31,0);
    VL_IN(__PVT__in6,31,0);
    VL_IN(__PVT__in7,31,0);
    VL_IN(__PVT__in8,31,0);
    VL_IN(__PVT__in9,31,0);
    VL_IN(__PVT__in10,31,0);
    VL_IN(__PVT__in11,31,0);
    VL_IN(__PVT__in12,31,0);
    VL_IN(__PVT__in13,31,0);
    VL_IN(__PVT__in14,31,0);
    VL_IN(__PVT__in15,31,0);
    VL_OUT(__PVT__out,31,0);
    IData/*31:0*/ __Vtogcov__in0;
    IData/*31:0*/ __Vtogcov__in1;
    IData/*31:0*/ __Vtogcov__in2;
    IData/*31:0*/ __Vtogcov__in3;
    IData/*31:0*/ __Vtogcov__in4;
    IData/*31:0*/ __Vtogcov__in5;
    IData/*31:0*/ __Vtogcov__in6;
    IData/*31:0*/ __Vtogcov__in7;
    IData/*31:0*/ __Vtogcov__in8;
    IData/*31:0*/ __Vtogcov__in9;
    IData/*31:0*/ __Vtogcov__in10;
    IData/*31:0*/ __Vtogcov__in11;
    IData/*31:0*/ __Vtogcov__in12;
    IData/*31:0*/ __Vtogcov__in13;
    IData/*31:0*/ __Vtogcov__in14;
    IData/*31:0*/ __Vtogcov__in15;
    IData/*31:0*/ __Vtogcov__out;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_lab3_cache_Mux16__P20(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_lab3_cache_Mux16__P20();
    VL_UNCOPYABLE(Vtop_lab3_cache_Mux16__P20);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
