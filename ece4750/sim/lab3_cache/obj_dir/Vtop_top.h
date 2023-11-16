// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_lab3_cache_Mux16__P20;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_top final : public VerilatedModule {
  public:
    // CELLS
    Vtop_lab3_cache_Mux16__P20* __PVT__output_mux;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(linetrace,0,0);
    CData/*3:0*/ __PVT__sel;
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__linetrace;
    CData/*3:0*/ __Vtogcov__sel;
    IData/*31:0*/ __PVT__in0;
    IData/*31:0*/ __PVT__in1;
    IData/*31:0*/ __PVT__in2;
    IData/*31:0*/ __PVT__in3;
    IData/*31:0*/ __PVT__in4;
    IData/*31:0*/ __PVT__in5;
    IData/*31:0*/ __PVT__in6;
    IData/*31:0*/ __PVT__in7;
    IData/*31:0*/ __PVT__in8;
    IData/*31:0*/ __PVT__in9;
    IData/*31:0*/ __PVT__in10;
    IData/*31:0*/ __PVT__in11;
    IData/*31:0*/ __PVT__in12;
    IData/*31:0*/ __PVT__in13;
    IData/*31:0*/ __PVT__in14;
    IData/*31:0*/ __PVT__in15;
    IData/*31:0*/ __PVT__out;
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
    Vtop_top(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_top();
    VL_UNCOPYABLE(Vtop_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
