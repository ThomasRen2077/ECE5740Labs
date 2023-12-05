// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_lab4_branch_BranchGlobal;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_top final : public VerilatedModule {
  public:
    // CELLS
    Vtop_lab4_branch_BranchGlobal* __PVT__DUT;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(linetrace,0,0);
        CData/*0:0*/ __PVT__reset;
        CData/*0:0*/ __PVT__update_en;
        CData/*0:0*/ __PVT__update_val;
        CData/*0:0*/ __PVT__prediction;
        CData/*5:0*/ __PVT__counter;
        CData/*5:0*/ __PVT__correct_counter;
        CData/*0:0*/ __PVT__my_update_en;
        CData/*0:0*/ __PVT__my_update_val;
        CData/*0:0*/ __Vtogcov__clk;
        CData/*0:0*/ __Vtogcov__linetrace;
        CData/*0:0*/ __Vtogcov__reset;
        CData/*0:0*/ __Vtogcov__update_en;
        CData/*0:0*/ __Vtogcov__update_val;
        CData/*0:0*/ __Vtogcov__prediction;
        CData/*5:0*/ __Vtogcov__counter;
        CData/*5:0*/ __Vtogcov__correct_counter;
        CData/*0:0*/ __Vtogcov__my_update_en;
        CData/*0:0*/ __Vtogcov__my_update_val;
        CData/*0:0*/ __Vtask_test_task__6__update_en_f;
        CData/*0:0*/ __Vtask_test_task__6__update_val_f;
        CData/*0:0*/ __Vtask_test_task__9__update_en_f;
        CData/*0:0*/ __Vtask_test_task__9__update_val_f;
        CData/*0:0*/ __Vtask_test_task__12__update_en_f;
        CData/*0:0*/ __Vtask_test_task__12__update_val_f;
        CData/*0:0*/ __Vtask_test_task__15__update_en_f;
        CData/*0:0*/ __Vtask_test_task__15__update_val_f;
        CData/*0:0*/ __Vtask_test_task__18__update_en_f;
        CData/*0:0*/ __Vtask_test_task__18__update_val_f;
        CData/*0:0*/ __Vtask_test_task__21__update_en_f;
        CData/*0:0*/ __Vtask_test_task__21__update_val_f;
        CData/*0:0*/ __Vtask_test_task__24__update_en_f;
        CData/*0:0*/ __Vtask_test_task__24__update_val_f;
        CData/*0:0*/ __Vtask_test_task__27__update_en_f;
        CData/*0:0*/ __Vtask_test_task__27__update_val_f;
        CData/*0:0*/ __Vtask_test_task__30__update_en_f;
        CData/*0:0*/ __Vtask_test_task__30__update_val_f;
        CData/*0:0*/ __Vtask_test_task__33__update_en_f;
        CData/*0:0*/ __Vtask_test_task__33__update_val_f;
        CData/*0:0*/ __Vtask_test_task__36__update_en_f;
        CData/*0:0*/ __Vtask_test_task__36__update_val_f;
        CData/*0:0*/ __Vtask_test_task__39__update_en_f;
        CData/*0:0*/ __Vtask_test_task__39__update_val_f;
        IData/*31:0*/ __PVT__PC;
        IData/*31:0*/ __PVT__my_pc;
        IData/*31:0*/ __PVT__shift_factor;
        IData/*31:0*/ __Vtogcov__PC;
        IData/*31:0*/ __Vtogcov__my_pc;
        IData/*31:0*/ __Vtogcov__shift_factor;
        IData/*31:0*/ __PVT__unnamedblk1__DOT__x;
        IData/*31:0*/ __PVT__unnamedblk2__DOT__x;
        IData/*31:0*/ __PVT__unnamedblk3__DOT__x;
        IData/*31:0*/ __PVT__unnamedblk4__DOT__x;
        IData/*31:0*/ __PVT__unnamedblk5__DOT__x;
        IData/*31:0*/ __PVT__unnamedblk6__DOT__x;
        IData/*31:0*/ __PVT__unnamedblk6__DOT__unnamedblk7__DOT__y;
        IData/*31:0*/ __PVT__unnamedblk8__DOT__x;
        IData/*31:0*/ __PVT__unnamedblk8__DOT__unnamedblk9__DOT__y;
        IData/*31:0*/ __PVT__unnamedblk10__DOT__x;
        IData/*31:0*/ __PVT__unnamedblk11__DOT__x;
        IData/*31:0*/ __PVT__unnamedblk12__DOT__x;
        IData/*31:0*/ __PVT__unnamedblk13__DOT__x;
        IData/*31:0*/ __PVT__unnamedblk14__DOT__x;
    };
    struct {
        IData/*31:0*/ __Vtask_test_task__6__PC_f;
        IData/*31:0*/ __Vtask_test_task__9__PC_f;
        IData/*31:0*/ __Vtask_test_task__12__PC_f;
        IData/*31:0*/ __Vtask_test_task__15__PC_f;
        IData/*31:0*/ __Vtask_test_task__18__PC_f;
        IData/*31:0*/ __Vtask_test_task__21__PC_f;
        IData/*31:0*/ __Vtask_test_task__24__PC_f;
        IData/*31:0*/ __Vtask_test_task__27__PC_f;
        IData/*31:0*/ __Vtask_test_task__30__PC_f;
        IData/*31:0*/ __Vtask_test_task__33__PC_f;
        IData/*31:0*/ __Vtask_test_task__36__PC_f;
        IData/*31:0*/ __Vtask_test_task__39__PC_f;
    };

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
