// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_lab1_imul_IntMulBase;
class Vtop_vc_TestRandDelaySink__P20_PB1c;
class Vtop_vc_TestRandDelaySource__pi1;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_top final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_TestRandDelaySource__pi1* __PVT__src;
    Vtop_lab1_imul_IntMulBase* __PVT__imul;
    Vtop_vc_TestRandDelaySink__P20_PB1c* __PVT__sink;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(linetrace,0,0);
        CData/*0:0*/ __PVT__reset;
        CData/*0:0*/ __PVT__istream_val;
        CData/*0:0*/ __PVT__istream_rdy;
        CData/*0:0*/ __PVT__ostream_rdy;
        CData/*0:0*/ __PVT__ostream_val;
        CData/*0:0*/ __PVT__src_done;
        CData/*0:0*/ __PVT__snk_done;
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
        IData/*31:0*/ __PVT__a;
        IData/*31:0*/ __PVT__b;
        IData/*31:0*/ __PVT__test_case__Vstatic__unnamedblk1__DOT__idx;
        IData/*31:0*/ __PVT__rand_msg1;
        IData/*31:0*/ __PVT__rand_msg2;
        IData/*31:0*/ __PVT__unnamedblk2__DOT__x;
        IData/*31:0*/ __PVT__unnamedblk3__DOT__i;
        IData/*31:0*/ __Vlvbound_hb53baddf__0;
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
        IData/*31:0*/ __Vtask_test_case__23__snk_msg;
        IData/*31:0*/ __Vtask_test_case__24__snk_msg;
        IData/*31:0*/ __Vtask_test_case__25__snk_msg;
        IData/*31:0*/ __Vtask_test_case__26__snk_msg;
        IData/*31:0*/ __Vtask_test_case__27__snk_msg;
        IData/*31:0*/ __Vtask_test_case__28__snk_msg;
        IData/*31:0*/ __Vtask_test_case__29__snk_msg;
        IData/*31:0*/ __Vtask_test_case__30__snk_msg;
        IData/*31:0*/ __Vtask_test_case__31__snk_msg;
        IData/*31:0*/ __Vtask_test_case__32__snk_msg;
        IData/*31:0*/ __Vtask_test_case__33__snk_msg;
        IData/*31:0*/ __Vtask_test_case__34__snk_msg;
        IData/*31:0*/ __Vtask_test_case__35__snk_msg;
    };
    struct {
        IData/*31:0*/ __Vtask_test_case__36__snk_msg;
        IData/*31:0*/ __Vtask_test_case__37__snk_msg;
        IData/*31:0*/ __Vtask_test_case__38__snk_msg;
        IData/*31:0*/ __Vtask_test_case__39__snk_msg;
        IData/*31:0*/ __Vtask_test_case__40__snk_msg;
        IData/*31:0*/ __Vtask_test_case__41__snk_msg;
        IData/*31:0*/ __Vtask_test_case__42__snk_msg;
        IData/*31:0*/ __Vtask_test_case__43__snk_msg;
        IData/*31:0*/ __Vtask_test_case__44__snk_msg;
        IData/*31:0*/ __Vtask_test_case__45__snk_msg;
        IData/*31:0*/ __Vtask_test_case__46__snk_msg;
        QData/*63:0*/ __PVT__istream_msg;
        QData/*63:0*/ __Vlvbound_h0f8c36ff__0;
        QData/*63:0*/ __Vtask_test_case__23__src_msg;
        QData/*63:0*/ __Vtask_test_case__24__src_msg;
        QData/*63:0*/ __Vtask_test_case__25__src_msg;
        QData/*63:0*/ __Vtask_test_case__26__src_msg;
        QData/*63:0*/ __Vtask_test_case__27__src_msg;
        QData/*63:0*/ __Vtask_test_case__28__src_msg;
        QData/*63:0*/ __Vtask_test_case__29__src_msg;
        QData/*63:0*/ __Vtask_test_case__30__src_msg;
        QData/*63:0*/ __Vtask_test_case__31__src_msg;
        QData/*63:0*/ __Vtask_test_case__32__src_msg;
        QData/*63:0*/ __Vtask_test_case__33__src_msg;
        QData/*63:0*/ __Vtask_test_case__34__src_msg;
        QData/*63:0*/ __Vtask_test_case__35__src_msg;
        QData/*63:0*/ __Vtask_test_case__36__src_msg;
        QData/*63:0*/ __Vtask_test_case__37__src_msg;
        QData/*63:0*/ __Vtask_test_case__38__src_msg;
        QData/*63:0*/ __Vtask_test_case__39__src_msg;
        QData/*63:0*/ __Vtask_test_case__40__src_msg;
        QData/*63:0*/ __Vtask_test_case__41__src_msg;
        QData/*63:0*/ __Vtask_test_case__42__src_msg;
        QData/*63:0*/ __Vtask_test_case__43__src_msg;
        QData/*63:0*/ __Vtask_test_case__44__src_msg;
        QData/*63:0*/ __Vtask_test_case__45__src_msg;
        QData/*63:0*/ __Vtask_test_case__46__src_msg;
        VlUnpacked<QData/*63:0*/, 28> __PVT__src_msgs;
        VlUnpacked<IData/*31:0*/, 28> __PVT__snk_msgs;
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
