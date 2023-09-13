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
    vlSelf->__Vtask_test_task__31__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__31__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__34__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__34__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__37__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__37__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__40__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__40__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__43__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__43__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__46__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__46__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__49__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__49__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__52__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__52__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__55__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__55__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__58__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__58__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__61__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__61__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__64__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__64__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__67__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__67__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__70__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__70__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__73__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__73__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__76__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__76__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__79__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__79__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__82__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__82__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__85__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__85__input_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__88__input_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__88__input_b = VL_RAND_RESET_I(32);
}
