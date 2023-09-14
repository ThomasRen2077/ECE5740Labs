// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_top.h"

VL_ATTR_COLD void Vtop_top___ctor_var_reset(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->linetrace = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__istream_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ostream_msg = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 28; ++__Vi0) {
        vlSelf->__PVT__src_msgs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 28; ++__Vi0) {
        vlSelf->__PVT__snk_msgs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__src_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__snk_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rand_msg1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rand_msg2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk2__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk3__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vlvbound_h0f8c36ff__0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vlvbound_hb53baddf__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_append_val_rdy_str__2__val = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_append_val_rdy_str__2__rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_val_rdy_str__2__str);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__3__str);
    vlSelf->__Vtask_append_chars__4__char = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_append_chars__4__num = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__5__str);
    vlSelf->__Vtask_append_chars__6__char = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_append_chars__6__num = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__7__str);
    vlSelf->__Vtask_append_chars__8__char = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_append_chars__8__num = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__9__str);
    vlSelf->__Vtask_append_chars__10__char = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_append_chars__10__num = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__11__str);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__12__str);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__13__str);
    vlSelf->__Vtask_append_val_rdy_str__14__val = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_append_val_rdy_str__14__rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_val_rdy_str__14__str);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__15__str);
    vlSelf->__Vtask_append_chars__16__char = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_append_chars__16__num = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__17__str);
    vlSelf->__Vtask_append_chars__18__char = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_append_chars__18__num = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__19__str);
    vlSelf->__Vtask_append_chars__20__char = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_append_chars__20__num = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__21__str);
    vlSelf->__Vtask_append_chars__22__char = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_append_chars__22__num = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__23__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__23__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__24__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__24__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__25__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__25__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__26__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__26__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__27__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__27__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__28__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__28__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__29__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__29__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__30__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__30__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__31__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__31__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__32__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__32__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__33__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__33__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__34__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__34__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__35__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__35__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__36__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__36__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__37__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__37__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__38__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__38__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__39__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__39__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__40__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__40__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__41__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__41__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__42__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__42__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__43__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__43__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__44__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__44__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__45__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__45__snk_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_case__46__src_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_test_case__46__snk_msg = VL_RAND_RESET_I(32);
}
