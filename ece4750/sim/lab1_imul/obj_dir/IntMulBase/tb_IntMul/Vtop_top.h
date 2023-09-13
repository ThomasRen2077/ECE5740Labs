// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_lab1_imul_IntMulBase;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_top final : public VerilatedModule {
  public:
    // CELLS
    Vtop_lab1_imul_IntMulBase* __PVT__imul;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ __PVT__ostream_val;
        VL_IN8(linetrace,0,0);
        CData/*0:0*/ __PVT__reset;
        CData/*0:0*/ __PVT__istream_val;
        CData/*0:0*/ __PVT__istream_rdy;
        CData/*0:0*/ __PVT__ostream_rdy;
        CData/*0:0*/ __Vtogcov__clk;
        CData/*0:0*/ __Vtogcov__linetrace;
        CData/*0:0*/ __Vtogcov__reset;
        CData/*0:0*/ __Vtogcov__istream_val;
        CData/*0:0*/ __Vtogcov__istream_rdy;
        CData/*0:0*/ __Vtogcov__ostream_rdy;
        CData/*0:0*/ __Vtogcov__ostream_val;
        CData/*0:0*/ __Vtask_append_val_rdy_str__2__val;
        CData/*0:0*/ __Vtask_append_val_rdy_str__2__rdy;
        CData/*7:0*/ __Vtask_append_chars__4__char;
        CData/*7:0*/ __Vtask_append_chars__6__char;
        CData/*7:0*/ __Vtask_append_chars__8__char;
        CData/*7:0*/ __Vtask_append_chars__10__char;
        CData/*0:0*/ __Vtask_append_val_rdy_str__14__val;
        CData/*0:0*/ __Vtask_append_val_rdy_str__14__rdy;
        CData/*7:0*/ __Vtask_append_chars__16__char;
        CData/*7:0*/ __Vtask_append_chars__18__char;
        CData/*7:0*/ __Vtask_append_chars__20__char;
        CData/*7:0*/ __Vtask_append_chars__22__char;
        IData/*31:0*/ __PVT__ostream_msg;
        IData/*31:0*/ __PVT__istream_msg_a;
        IData/*31:0*/ __PVT__istream_msg_b;
        IData/*31:0*/ __PVT__a;
        IData/*31:0*/ __PVT__b;
        IData/*31:0*/ __Vtogcov__ostream_msg;
        IData/*31:0*/ __Vtogcov__istream_msg_a;
        IData/*31:0*/ __Vtogcov__istream_msg_b;
        IData/*31:0*/ __Vtogcov__a;
        IData/*31:0*/ __Vtogcov__b;
        IData/*31:0*/ __PVT__unnamedblk1__DOT__x;
        VlWide<128>/*4095:0*/ __Vtask_append_val_rdy_str__2__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__3__str;
        IData/*31:0*/ __Vtask_append_chars__4__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__5__str;
        IData/*31:0*/ __Vtask_append_chars__6__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__7__str;
        IData/*31:0*/ __Vtask_append_chars__8__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__9__str;
        IData/*31:0*/ __Vtask_append_chars__10__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__11__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__12__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__13__str;
        VlWide<128>/*4095:0*/ __Vtask_append_val_rdy_str__14__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__15__str;
        IData/*31:0*/ __Vtask_append_chars__16__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__17__str;
        IData/*31:0*/ __Vtask_append_chars__18__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__19__str;
        IData/*31:0*/ __Vtask_append_chars__20__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__21__str;
        IData/*31:0*/ __Vtask_append_chars__22__num;
        IData/*31:0*/ __Vtask_test_task__31__input_a;
        IData/*31:0*/ __Vtask_test_task__31__input_b;
        IData/*31:0*/ __Vtask_test_task__34__input_a;
        IData/*31:0*/ __Vtask_test_task__34__input_b;
        IData/*31:0*/ __Vtask_test_task__37__input_a;
        IData/*31:0*/ __Vtask_test_task__37__input_b;
    };
    struct {
        IData/*31:0*/ __Vtask_test_task__40__input_a;
        IData/*31:0*/ __Vtask_test_task__40__input_b;
        IData/*31:0*/ __Vtask_test_task__43__input_a;
        IData/*31:0*/ __Vtask_test_task__43__input_b;
        IData/*31:0*/ __Vtask_test_task__46__input_a;
        IData/*31:0*/ __Vtask_test_task__46__input_b;
        IData/*31:0*/ __Vtask_test_task__49__input_a;
        IData/*31:0*/ __Vtask_test_task__49__input_b;
        IData/*31:0*/ __Vtask_test_task__52__input_a;
        IData/*31:0*/ __Vtask_test_task__52__input_b;
        IData/*31:0*/ __Vtask_test_task__55__input_a;
        IData/*31:0*/ __Vtask_test_task__55__input_b;
        IData/*31:0*/ __Vtask_test_task__58__input_a;
        IData/*31:0*/ __Vtask_test_task__58__input_b;
        IData/*31:0*/ __Vtask_test_task__61__input_a;
        IData/*31:0*/ __Vtask_test_task__61__input_b;
        IData/*31:0*/ __Vtask_test_task__64__input_a;
        IData/*31:0*/ __Vtask_test_task__64__input_b;
        IData/*31:0*/ __Vtask_test_task__67__input_a;
        IData/*31:0*/ __Vtask_test_task__67__input_b;
        IData/*31:0*/ __Vtask_test_task__70__input_a;
        IData/*31:0*/ __Vtask_test_task__70__input_b;
        IData/*31:0*/ __Vtask_test_task__73__input_a;
        IData/*31:0*/ __Vtask_test_task__73__input_b;
        IData/*31:0*/ __Vtask_test_task__76__input_a;
        IData/*31:0*/ __Vtask_test_task__76__input_b;
        IData/*31:0*/ __Vtask_test_task__79__input_a;
        IData/*31:0*/ __Vtask_test_task__79__input_b;
        IData/*31:0*/ __Vtask_test_task__82__input_a;
        IData/*31:0*/ __Vtask_test_task__82__input_b;
        IData/*31:0*/ __Vtask_test_task__85__input_a;
        IData/*31:0*/ __Vtask_test_task__85__input_b;
        IData/*31:0*/ __Vtask_test_task__88__input_a;
        IData/*31:0*/ __Vtask_test_task__88__input_b;
        QData/*63:0*/ __PVT__istream_msg;
        QData/*63:0*/ __Vtogcov__istream_msg;
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
