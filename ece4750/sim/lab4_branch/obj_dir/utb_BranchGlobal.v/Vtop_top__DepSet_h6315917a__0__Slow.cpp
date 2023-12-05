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
    vlSelf->__PVT__update_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__update_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__prediction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__counter = VL_RAND_RESET_I(6);
    vlSelf->__PVT__correct_counter = VL_RAND_RESET_I(6);
    vlSelf->__PVT__my_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_update_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_update_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__shift_factor = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__linetrace = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__update_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__update_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__PC = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__prediction = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__counter = VL_RAND_RESET_I(6);
    vlSelf->__Vtogcov__correct_counter = VL_RAND_RESET_I(6);
    vlSelf->__Vtogcov__my_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__my_update_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__my_update_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__shift_factor = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk1__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk2__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk3__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk4__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk5__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk6__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk8__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk10__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk11__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk12__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk13__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk14__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__6__PC_f = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__6__update_en_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__6__update_val_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__9__PC_f = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__9__update_en_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__9__update_val_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__12__PC_f = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__12__update_en_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__12__update_val_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__15__PC_f = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__15__update_en_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__15__update_val_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__18__PC_f = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__18__update_en_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__18__update_val_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__21__PC_f = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__21__update_en_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__21__update_val_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__24__PC_f = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__24__update_en_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__24__update_val_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__27__PC_f = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__27__update_en_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__27__update_val_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__30__PC_f = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__30__update_en_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__30__update_val_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__33__PC_f = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__33__update_en_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__33__update_val_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__36__PC_f = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__36__update_en_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__36__update_val_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__39__PC_f = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_test_task__39__update_en_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_test_task__39__update_val_f = VL_RAND_RESET_I(1);
}
