// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_lab1_imul_IntMulSimple;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_top final : public VerilatedModule {
  public:
    // CELLS
    Vtop_lab1_imul_IntMulSimple* __PVT__imul;

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
        CData/*0:0*/ __Vtask_append_val_rdy_str__2__val;
        CData/*0:0*/ __Vtask_append_val_rdy_str__2__rdy;
        CData/*7:0*/ __Vtask_append_chars__4__char;
        CData/*7:0*/ __Vtask_append_chars__6__char;
        CData/*7:0*/ __Vtask_append_chars__8__char;
        CData/*7:0*/ __Vtask_append_chars__10__char;
        CData/*0:0*/ __Vtask_append_val_rdy_str__19__val;
        CData/*0:0*/ __Vtask_append_val_rdy_str__19__rdy;
        CData/*7:0*/ __Vtask_append_chars__21__char;
        CData/*7:0*/ __Vtask_append_chars__23__char;
        CData/*7:0*/ __Vtask_append_chars__25__char;
        CData/*7:0*/ __Vtask_append_chars__27__char;
        IData/*31:0*/ __PVT__ostream_msg;
        IData/*31:0*/ __PVT__istream_msg_a;
        IData/*31:0*/ __PVT__istream_msg_b;
        IData/*31:0*/ __PVT__a;
        IData/*31:0*/ __PVT__b;
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
        VlWide<128>/*4095:0*/ __Vtask_append_str__14__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__15__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__16__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__17__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__18__str;
        VlWide<128>/*4095:0*/ __Vtask_append_val_rdy_str__19__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__20__str;
        IData/*31:0*/ __Vtask_append_chars__21__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__22__str;
        IData/*31:0*/ __Vtask_append_chars__23__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__24__str;
        IData/*31:0*/ __Vtask_append_chars__25__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__26__str;
        IData/*31:0*/ __Vtask_append_chars__27__num;
        IData/*31:0*/ __Vtask_test_task__36__input_a;
        IData/*31:0*/ __Vtask_test_task__36__input_b;
        IData/*31:0*/ __Vtask_test_task__39__input_a;
        IData/*31:0*/ __Vtask_test_task__39__input_b;
        IData/*31:0*/ __Vtask_test_task__42__input_a;
        IData/*31:0*/ __Vtask_test_task__42__input_b;
        IData/*31:0*/ __Vtask_test_task__45__input_a;
        IData/*31:0*/ __Vtask_test_task__45__input_b;
        IData/*31:0*/ __Vtask_test_task__48__input_a;
        IData/*31:0*/ __Vtask_test_task__48__input_b;
        IData/*31:0*/ __Vtask_test_task__51__input_a;
        IData/*31:0*/ __Vtask_test_task__51__input_b;
        IData/*31:0*/ __Vtask_test_task__54__input_a;
    };
    struct {
        IData/*31:0*/ __Vtask_test_task__54__input_b;
        IData/*31:0*/ __Vtask_test_task__57__input_a;
        IData/*31:0*/ __Vtask_test_task__57__input_b;
        IData/*31:0*/ __Vtask_test_task__60__input_a;
        IData/*31:0*/ __Vtask_test_task__60__input_b;
        IData/*31:0*/ __Vtask_test_task__63__input_a;
        IData/*31:0*/ __Vtask_test_task__63__input_b;
        IData/*31:0*/ __Vtask_test_task__66__input_a;
        IData/*31:0*/ __Vtask_test_task__66__input_b;
        IData/*31:0*/ __Vtask_test_task__69__input_a;
        IData/*31:0*/ __Vtask_test_task__69__input_b;
        IData/*31:0*/ __Vtask_test_task__72__input_a;
        IData/*31:0*/ __Vtask_test_task__72__input_b;
        IData/*31:0*/ __Vtask_test_task__75__input_a;
        IData/*31:0*/ __Vtask_test_task__75__input_b;
        IData/*31:0*/ __Vtask_test_task__78__input_a;
        IData/*31:0*/ __Vtask_test_task__78__input_b;
        IData/*31:0*/ __Vtask_test_task__81__input_a;
        IData/*31:0*/ __Vtask_test_task__81__input_b;
        IData/*31:0*/ __Vtask_test_task__84__input_a;
        IData/*31:0*/ __Vtask_test_task__84__input_b;
        IData/*31:0*/ __Vtask_test_task__87__input_a;
        IData/*31:0*/ __Vtask_test_task__87__input_b;
        IData/*31:0*/ __Vtask_test_task__90__input_a;
        IData/*31:0*/ __Vtask_test_task__90__input_b;
        IData/*31:0*/ __Vtask_test_task__93__input_a;
        IData/*31:0*/ __Vtask_test_task__93__input_b;
        QData/*63:0*/ __PVT__istream_msg;
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
