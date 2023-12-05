// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_LAB4_BRANCH_BRANCHGSHARE_H_
#define VERILATED_VTOP_LAB4_BRANCH_BRANCHGSHARE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_lab4_branch_BranchGshare final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__update_en,0,0);
    VL_IN8(__PVT__update_val,0,0);
    VL_OUT8(__PVT__prediction,0,0);
    CData/*1:0*/ __PVT__current_PHT;
    CData/*0:0*/ __PVT__GHR_update_value;
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__reset;
    CData/*0:0*/ __Vtogcov__update_en;
    CData/*0:0*/ __Vtogcov__update_val;
    CData/*0:0*/ __Vtogcov__prediction;
    CData/*1:0*/ __Vtogcov__current_PHT;
    CData/*0:0*/ __Vtogcov__GHR_update_value;
    SData/*10:0*/ __PVT__GHR;
    SData/*10:0*/ __PVT__PC_factor;
    SData/*10:0*/ __PVT__PHT_index;
    SData/*10:0*/ __Vtogcov__GHR;
    SData/*10:0*/ __Vtogcov__PC_factor;
    SData/*10:0*/ __Vtogcov__PHT_index;
    SData/*10:0*/ __Vdly__GHR;
    VL_IN(__PVT__PC,31,0);
    VlWide<128>/*4095:0*/ __PVT__PHT;
    IData/*31:0*/ __Vtogcov__PC;
    VlWide<128>/*4095:0*/ __Vdly__PHT;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_lab4_branch_BranchGshare(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_lab4_branch_BranchGshare();
    VL_UNCOPYABLE(Vtop_lab4_branch_BranchGshare);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
