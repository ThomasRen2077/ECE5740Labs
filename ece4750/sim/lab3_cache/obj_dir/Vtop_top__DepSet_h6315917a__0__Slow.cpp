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
    vlSelf->__PVT__memreq_msg_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memreq_msg_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memresp_msg_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cache_req_msg_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cache_req_msg_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cache_resp_msg_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__reg_en_M0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tarray_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tarray_wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__z6b_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__darray_write_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__darray_wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_en_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spill_one_word_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__refill_one_word_req_sent = VL_RAND_RESET_I(1);
    vlSelf->__PVT__refill_one_word_resp_received = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Spill_or_Refill_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tarray_match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__current_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spill_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__refill_req_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__refill_resp_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush_done = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__linetrace = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__memreq_msg_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__memreq_msg_data = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__memresp_msg_data = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__cache_req_msg_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__cache_req_msg_data = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__cache_resp_msg_data = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__reg_en_M0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__tarray_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__tarray_wen = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__z6b_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__darray_write_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__darray_wen = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__write_en_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__spill_one_word_done = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__refill_one_word_req_sent = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__refill_one_word_resp_received = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__Spill_or_Refill_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__tarray_match = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__current_dirty = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__spill_done = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__refill_req_done = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__refill_resp_done = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__flush = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__flush_done = VL_RAND_RESET_I(1);
}
