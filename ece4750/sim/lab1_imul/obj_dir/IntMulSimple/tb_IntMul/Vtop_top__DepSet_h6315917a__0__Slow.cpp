// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_top.h"

VL_ATTR_COLD void Vtop_top___eval_initial__TOP__top(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top\n"); );
}

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
    vlSelf->__PVT__istream_msg_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__istream_msg_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__b = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__linetrace = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__istream_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtogcov__ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__istream_msg_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__istream_msg_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__a = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk1__DOT__x = VL_RAND_RESET_I(32);
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
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__14__str);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__15__str);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__16__str);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__17__str);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__18__str);
    vlSelf->__Vtask_append_val_rdy_str__19__val = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_append_val_rdy_str__19__rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_val_rdy_str__19__str);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__20__str);
    vlSelf->__Vtask_append_chars__21__char = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_append_chars__21__num = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__22__str);
    vlSelf->__Vtask_append_chars__23__char = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_append_chars__23__num = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__24__str);
    vlSelf->__Vtask_append_chars__25__char = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_append_chars__25__num = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->__Vtask_append_str__26__str);
    vlSelf->__Vtask_append_chars__27__char = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_append_chars__27__num = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__36__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__36__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__39__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__39__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__42__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__42__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__45__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__45__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__48__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__48__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__51__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__51__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__54__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__54__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__57__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__57__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__60__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__60__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__63__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__63__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__66__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__66__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__69__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__69__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__72__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__72__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__75__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__75__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__78__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__78__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__81__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__81__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__84__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__84__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__87__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__87__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__90__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__90__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__93__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__93__input_b = VL_RAND_RESET_I(32);
}
