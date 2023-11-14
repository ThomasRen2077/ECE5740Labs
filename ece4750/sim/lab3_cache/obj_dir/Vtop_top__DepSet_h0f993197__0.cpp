// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_top.h"

void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();

VL_INLINE_OPT VlCoroutine Vtop_top___eval_initial__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top__0\n"); );
    // Body
    VL_WRITEF("Start of Testbench\n");
    vlSelf->__PVT__reset = 1U;
    vlSelf->__PVT__memreq_msg_addr = 0U;
    vlSelf->__PVT__memreq_msg_data = 0U;
    vlSelf->__PVT__cache_resp_msg_data = 0U;
    vlSelf->__PVT__reg_en_M0 = 0U;
    vlSelf->__PVT__tarray_en = 0U;
    vlSelf->__PVT__tarray_wen = 0U;
    vlSelf->__PVT__z6b_sel = 0U;
    vlSelf->__PVT__darray_write_mux_sel = 0U;
    vlSelf->__PVT__darray_wen = 0U;
    vlSelf->__PVT__write_en_sel = 0U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    vlSelf->__PVT__Spill_or_Refill_sel = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            79);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_CacheBaseDpath.v", 
                                                            81);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__memreq_msg_addr = 0xffffffffU;
    vlSelf->__PVT__memreq_msg_data = 0xffffffffU;
    vlSelf->__PVT__cache_resp_msg_data = 0U;
    vlSelf->__PVT__reg_en_M0 = 1U;
    vlSelf->__PVT__tarray_en = 0U;
    vlSelf->__PVT__tarray_wen = 0U;
    vlSelf->__PVT__z6b_sel = 0U;
    vlSelf->__PVT__darray_write_mux_sel = 0U;
    vlSelf->__PVT__darray_wen = 0U;
    vlSelf->__PVT__write_en_sel = 0U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    vlSelf->__PVT__Spill_or_Refill_sel = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            101);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__memreq_msg_addr = 0U;
    vlSelf->__PVT__memreq_msg_data = 0U;
    vlSelf->__PVT__reg_en_M0 = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            107);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__tarray_wen = 1U;
    vlSelf->__PVT__darray_wen = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            112);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__tarray_wen = 0U;
    vlSelf->__PVT__darray_wen = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            116);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xffffffffU != vlSelf->__PVT__memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Error in Write CacheLine Test. Expected ffffffff, got %x\n",
                          32,vlSelf->__PVT__memresp_msg_data);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_CacheBaseDpath.v", 119, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Write CacheLine Test Test Passed. Result is %x\n",
                      32,vlSelf->__PVT__memresp_msg_data);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    vlSelf->__PVT__reg_en_M0 = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            129);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__reg_en_M0 = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            139);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__memreq_msg_addr = 0xaaffffffU;
    vlSelf->__PVT__memreq_msg_data = 0U;
    vlSelf->__PVT__cache_resp_msg_data = 0U;
    vlSelf->__PVT__reg_en_M0 = 1U;
    vlSelf->__PVT__tarray_en = 1U;
    vlSelf->__PVT__tarray_wen = 0U;
    vlSelf->__PVT__z6b_sel = 0U;
    vlSelf->__PVT__darray_write_mux_sel = 0U;
    vlSelf->__PVT__darray_wen = 0U;
    vlSelf->__PVT__write_en_sel = 0U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    vlSelf->__PVT__Spill_or_Refill_sel = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            157);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__memreq_msg_addr = 0xffffffffU;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            163);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__memreq_msg_addr = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY(vlSelf->__PVT__tarray_match)) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Tag Match Test Passed. Result is %b\n",
                          1,vlSelf->__PVT__tarray_match);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Error in Tag Match Test. Expected 1, got %b\n",
                      1,vlSelf->__PVT__tarray_match);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheBaseDpath.v", 168, "");
        }
    }
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            173);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__reg_en_M0 = 0U;
    vlSelf->__PVT__tarray_en = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            180);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__memreq_msg_addr = 0xffffffffU;
    vlSelf->__PVT__memreq_msg_data = 0xaaaaaaaaU;
    vlSelf->__PVT__cache_resp_msg_data = 0U;
    vlSelf->__PVT__reg_en_M0 = 1U;
    vlSelf->__PVT__tarray_en = 1U;
    vlSelf->__PVT__tarray_wen = 0U;
    vlSelf->__PVT__z6b_sel = 0U;
    vlSelf->__PVT__darray_write_mux_sel = 0U;
    vlSelf->__PVT__darray_wen = 0U;
    vlSelf->__PVT__write_en_sel = 0U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    vlSelf->__PVT__Spill_or_Refill_sel = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            200);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__darray_wen = 1U;
    vlSelf->__PVT__write_en_sel = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY(vlSelf->__PVT__tarray_match)) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Tag Match Test Passed. Result is %b\n",
                          1,vlSelf->__PVT__tarray_match);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Error in Tag Match Test. Expected 1, got %b\n",
                      1,vlSelf->__PVT__tarray_match);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheBaseDpath.v", 206, "");
        }
    }
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            213);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY(vlSelf->__PVT__current_dirty)) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Current Dirty Test Passed. Result is %b\n",
                          1,vlSelf->__PVT__current_dirty);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Error in Current Dirty Test. Expected 1, got %b\n",
                      1,vlSelf->__PVT__current_dirty);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheBaseDpath.v", 216, "");
        }
    }
    vlSelf->__PVT__darray_wen = 0U;
    vlSelf->__PVT__write_en_sel = 0U;
    vlSelf->__PVT__memreq_msg_addr = 0U;
    vlSelf->__PVT__memreq_msg_data = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            227);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__reg_en_M0 = 0U;
    vlSelf->__PVT__tarray_en = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            232);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__memreq_msg_addr = 0xffffffU;
    vlSelf->__PVT__memreq_msg_data = 0U;
    vlSelf->__PVT__reg_en_M0 = 1U;
    vlSelf->__PVT__tarray_en = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            237);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            238);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    vlSelf->__PVT__reg_en_M0 = 0U;
    vlSelf->__PVT__tarray_en = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            242);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            245);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            247);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            250);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            252);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            255);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            257);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            260);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            262);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            265);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            267);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            270);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            272);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            275);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            277);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            280);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            282);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            285);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            287);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            290);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            292);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            295);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            297);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            300);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            302);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            305);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            307);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            310);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            312);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            315);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            317);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY(vlSelf->__PVT__spill_done)) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Spill Done Test Passed. Result is %b\n",
                          1,vlSelf->__PVT__spill_done);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Error in Spill Done Test. Expected 1, got %b\n",
                      1,vlSelf->__PVT__spill_done);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheBaseDpath.v", 322, "");
        }
    }
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            334);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 1U;
    vlSelf->__PVT__z6b_sel = 1U;
    vlSelf->__PVT__Spill_or_Refill_sel = 1U;
    vlSelf->__PVT__darray_write_mux_sel = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            339);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            342);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            344);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            347);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            349);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            352);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            354);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            357);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            359);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            362);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            364);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            367);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            369);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            372);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            374);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            377);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            379);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            382);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            384);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            387);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            389);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            392);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            394);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            397);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            399);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            402);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            404);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            407);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            409);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            412);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            414);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_req_sent = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY(vlSelf->__PVT__refill_req_done)) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Refill Request Done Test Passed. Result is %b\n",
                          1,vlSelf->__PVT__refill_req_done);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Error in Refill Request Done Test. Expected 1, got %b\n",
                      1,vlSelf->__PVT__refill_req_done);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheBaseDpath.v", 419, "");
        }
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0xcULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            424);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 1U;
    vlSelf->__PVT__cache_resp_msg_data = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            427);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xcULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            430);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 1U;
    vlSelf->__PVT__cache_resp_msg_data = 2U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            433);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xcULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            436);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 1U;
    vlSelf->__PVT__cache_resp_msg_data = 3U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            439);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xcULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            442);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 1U;
    vlSelf->__PVT__cache_resp_msg_data = 4U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            445);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xcULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            448);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 1U;
    vlSelf->__PVT__cache_resp_msg_data = 5U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            451);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xcULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            454);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 1U;
    vlSelf->__PVT__cache_resp_msg_data = 6U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            457);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xcULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            460);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 1U;
    vlSelf->__PVT__cache_resp_msg_data = 7U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            463);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xcULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            466);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 1U;
    vlSelf->__PVT__cache_resp_msg_data = 8U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            469);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xcULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            472);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 1U;
    vlSelf->__PVT__cache_resp_msg_data = 9U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            475);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xcULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            478);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 1U;
    vlSelf->__PVT__cache_resp_msg_data = 0xaU;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            481);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xcULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            484);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 1U;
    vlSelf->__PVT__cache_resp_msg_data = 0xbU;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            487);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xcULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            490);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 1U;
    vlSelf->__PVT__cache_resp_msg_data = 0xcU;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            493);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xcULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            496);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 1U;
    vlSelf->__PVT__cache_resp_msg_data = 0xdU;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            499);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xcULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            502);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 1U;
    vlSelf->__PVT__cache_resp_msg_data = 0xeU;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            505);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xcULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            508);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 1U;
    vlSelf->__PVT__cache_resp_msg_data = 0xfU;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            511);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xcULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            514);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__refill_one_word_resp_received = 1U;
    vlSelf->__PVT__cache_resp_msg_data = 0xfffffff0U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            521);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY(vlSelf->__PVT__refill_resp_done)) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Refill Response Done Test Passed. Result is %b\n",
                          1,vlSelf->__PVT__refill_resp_done);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Error in Refill Response Done Test. Expected 1, got %b\n",
                      1,vlSelf->__PVT__refill_resp_done);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheBaseDpath.v", 524, "");
        }
    }
    vlSelf->__PVT__refill_one_word_resp_received = 0U;
    vlSelf->__PVT__tarray_wen = 1U;
    vlSelf->__PVT__darray_wen = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            533);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xfffffff0U != vlSelf->__PVT__memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Error in Memory Response Data Test. Expected fffffff0, got %x\n",
                          32,vlSelf->__PVT__memresp_msg_data);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_CacheBaseDpath.v", 537, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Memory Response Data Test Passed. Result is %x\n",
                      32,vlSelf->__PVT__memresp_msg_data);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    vlSelf->__PVT__tarray_wen = 0U;
    vlSelf->__PVT__darray_wen = 0U;
    vlSelf->__PVT__flush = 1U;
    vlSelf->__PVT__Spill_or_Refill_sel = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x40ULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            548);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            550);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            553);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            555);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            558);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            560);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            563);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            565);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            568);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            570);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            573);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            575);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            578);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            580);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            583);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            585);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            588);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            590);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            593);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            595);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            598);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            600);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            603);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            605);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            608);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            610);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            613);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            615);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            618);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            620);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(4ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            623);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(2ULL, nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            625);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__PVT__spill_one_word_done = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xc8ULL, 
                                            nullptr, 
                                            "utb_CacheBaseDpath.v", 
                                            629);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
    VL_FINISH_MT("utb_CacheBaseDpath.v", 630, "");
    vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 1U;
}

VL_INLINE_OPT void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__0\n"); );
    // Body
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->__Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__linetrace = vlSelf->linetrace;
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->clk;
    }
    vlSymsp->TOP__top__DUT.__PVT__clk = vlSelf->clk;
}

VL_INLINE_OPT void Vtop_top___act_comb__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_comb__TOP__top__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    if (((IData)(vlSelf->__PVT__reg_en_M0) ^ (IData)(vlSelf->__Vtogcov__reg_en_M0))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_M0 = vlSelf->__PVT__reg_en_M0;
    }
    if (((IData)(vlSelf->__PVT__tarray_en) ^ (IData)(vlSelf->__Vtogcov__tarray_en))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_en = vlSelf->__PVT__tarray_en;
    }
    if (((IData)(vlSelf->__PVT__tarray_wen) ^ (IData)(vlSelf->__Vtogcov__tarray_wen))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_wen = vlSelf->__PVT__tarray_wen;
    }
    if (((IData)(vlSelf->__PVT__z6b_sel) ^ (IData)(vlSelf->__Vtogcov__z6b_sel))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__z6b_sel = vlSelf->__PVT__z6b_sel;
    }
    if (((IData)(vlSelf->__PVT__darray_write_mux_sel) 
         ^ (IData)(vlSelf->__Vtogcov__darray_write_mux_sel))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__darray_write_mux_sel = vlSelf->__PVT__darray_write_mux_sel;
    }
    if (((IData)(vlSelf->__PVT__darray_wen) ^ (IData)(vlSelf->__Vtogcov__darray_wen))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__darray_wen = vlSelf->__PVT__darray_wen;
    }
    if (((IData)(vlSelf->__PVT__write_en_sel) ^ (IData)(vlSelf->__Vtogcov__write_en_sel))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en_sel = vlSelf->__PVT__write_en_sel;
    }
    if (((IData)(vlSelf->__PVT__spill_one_word_done) 
         ^ (IData)(vlSelf->__Vtogcov__spill_one_word_done))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__spill_one_word_done = vlSelf->__PVT__spill_one_word_done;
    }
    if (((IData)(vlSelf->__PVT__refill_one_word_req_sent) 
         ^ (IData)(vlSelf->__Vtogcov__refill_one_word_req_sent))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__refill_one_word_req_sent 
            = vlSelf->__PVT__refill_one_word_req_sent;
    }
    if (((IData)(vlSelf->__PVT__refill_one_word_resp_received) 
         ^ (IData)(vlSelf->__Vtogcov__refill_one_word_resp_received))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__refill_one_word_resp_received 
            = vlSelf->__PVT__refill_one_word_resp_received;
    }
    if (((IData)(vlSelf->__PVT__Spill_or_Refill_sel) 
         ^ (IData)(vlSelf->__Vtogcov__Spill_or_Refill_sel))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__Spill_or_Refill_sel = vlSelf->__PVT__Spill_or_Refill_sel;
    }
    if (((IData)(vlSelf->__PVT__flush) ^ (IData)(vlSelf->__Vtogcov__flush))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__flush = vlSelf->__PVT__flush;
    }
    vlSymsp->TOP__top__DUT.__PVT__refill_one_word_resp_received 
        = vlSelf->__PVT__refill_one_word_resp_received;
    vlSymsp->TOP__top__DUT.__PVT__refill_one_word_req_sent 
        = vlSelf->__PVT__refill_one_word_req_sent;
    vlSymsp->TOP__top__DUT.__PVT__spill_one_word_done 
        = vlSelf->__PVT__spill_one_word_done;
    vlSymsp->TOP__top__DUT.__PVT__darray_wen = vlSelf->__PVT__darray_wen;
    vlSymsp->TOP__top__DUT.__PVT__tarray_wen = vlSelf->__PVT__tarray_wen;
    vlSymsp->TOP__top__DUT.__PVT__reg_en_M0 = vlSelf->__PVT__reg_en_M0;
    vlSymsp->TOP__top__DUT.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT.__PVT__darray_write_mux_sel 
        = vlSelf->__PVT__darray_write_mux_sel;
    vlSymsp->TOP__top__DUT.__PVT__tarray_en = vlSelf->__PVT__tarray_en;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0U)))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 1U)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 2U)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 3U)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 4U)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 5U)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 6U)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 7U)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 8U)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 9U)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT.__PVT__write_en_sel = vlSelf->__PVT__write_en_sel;
    vlSymsp->TOP__top__DUT.__PVT__cache_resp_msg_data 
        = vlSelf->__PVT__cache_resp_msg_data;
    vlSymsp->TOP__top__DUT.__PVT__memreq_msg_data = vlSelf->__PVT__memreq_msg_data;
    vlSymsp->TOP__top__DUT.__PVT__memreq_msg_addr = vlSelf->__PVT__memreq_msg_addr;
    vlSymsp->TOP__top__DUT.__PVT__Spill_or_Refill_sel 
        = vlSelf->__PVT__Spill_or_Refill_sel;
    vlSymsp->TOP__top__DUT.__PVT__z6b_sel = vlSelf->__PVT__z6b_sel;
    vlSymsp->TOP__top__DUT.__PVT__flush = vlSelf->__PVT__flush;
}

VL_INLINE_OPT void Vtop_top___act_comb__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_comb__TOP__top__1\n"); );
    // Body
    vlSelf->__PVT__current_dirty = vlSymsp->TOP__top__DUT.__PVT__current_dirty;
    vlSelf->__PVT__tarray_match = vlSymsp->TOP__top__DUT.__PVT__tarray_match;
    if (((IData)(vlSelf->__PVT__current_dirty) ^ (IData)(vlSelf->__Vtogcov__current_dirty))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__current_dirty = vlSelf->__PVT__current_dirty;
    }
    if (((IData)(vlSelf->__PVT__tarray_match) ^ (IData)(vlSelf->__Vtogcov__tarray_match))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_match = vlSelf->__PVT__tarray_match;
    }
}

VL_INLINE_OPT void Vtop_top___act_comb__TOP__top__2(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_comb__TOP__top__2\n"); );
    // Body
    vlSelf->__PVT__spill_done = vlSymsp->TOP__top__DUT.__PVT__spill_done;
    vlSelf->__PVT__cache_req_msg_data = vlSymsp->TOP__top__DUT.__PVT__cache_req_msg_data;
    if (((IData)(vlSelf->__PVT__spill_done) ^ (IData)(vlSelf->__Vtogcov__spill_done))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__spill_done = vlSelf->__PVT__spill_done;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_top___act_comb__TOP__top__3(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_comb__TOP__top__3\n"); );
    // Body
    vlSelf->__PVT__cache_req_msg_addr = vlSymsp->TOP__top__DUT.__PVT__cache_req_msg_addr;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0U)))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 1U)))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 2U)))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 3U)))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 4U)))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 5U)))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 6U)))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 7U)))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 8U)))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 9U)))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__0\n"); );
    // Body
    vlSelf->__PVT__refill_resp_done = vlSymsp->TOP__top__DUT.__PVT__refill_resp_done;
    vlSelf->__PVT__refill_req_done = vlSymsp->TOP__top__DUT.__PVT__refill_req_done;
    vlSelf->__PVT__flush_done = vlSymsp->TOP__top__DUT.__PVT__flush_done;
    if (((IData)(vlSelf->__PVT__refill_resp_done) ^ (IData)(vlSelf->__Vtogcov__refill_resp_done))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__refill_resp_done = vlSelf->__PVT__refill_resp_done;
    }
    if (((IData)(vlSelf->__PVT__refill_req_done) ^ (IData)(vlSelf->__Vtogcov__refill_req_done))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__refill_req_done = vlSelf->__PVT__refill_req_done;
    }
    if (((IData)(vlSelf->__PVT__flush_done) ^ (IData)(vlSelf->__Vtogcov__flush_done))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__flush_done = vlSelf->__PVT__flush_done;
    }
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    if (((IData)(vlSelf->__PVT__reg_en_M0) ^ (IData)(vlSelf->__Vtogcov__reg_en_M0))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_M0 = vlSelf->__PVT__reg_en_M0;
    }
    if (((IData)(vlSelf->__PVT__tarray_en) ^ (IData)(vlSelf->__Vtogcov__tarray_en))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_en = vlSelf->__PVT__tarray_en;
    }
    if (((IData)(vlSelf->__PVT__tarray_wen) ^ (IData)(vlSelf->__Vtogcov__tarray_wen))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_wen = vlSelf->__PVT__tarray_wen;
    }
    if (((IData)(vlSelf->__PVT__z6b_sel) ^ (IData)(vlSelf->__Vtogcov__z6b_sel))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__z6b_sel = vlSelf->__PVT__z6b_sel;
    }
    if (((IData)(vlSelf->__PVT__darray_write_mux_sel) 
         ^ (IData)(vlSelf->__Vtogcov__darray_write_mux_sel))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__darray_write_mux_sel = vlSelf->__PVT__darray_write_mux_sel;
    }
    if (((IData)(vlSelf->__PVT__darray_wen) ^ (IData)(vlSelf->__Vtogcov__darray_wen))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__darray_wen = vlSelf->__PVT__darray_wen;
    }
    if (((IData)(vlSelf->__PVT__write_en_sel) ^ (IData)(vlSelf->__Vtogcov__write_en_sel))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en_sel = vlSelf->__PVT__write_en_sel;
    }
    if (((IData)(vlSelf->__PVT__spill_one_word_done) 
         ^ (IData)(vlSelf->__Vtogcov__spill_one_word_done))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__spill_one_word_done = vlSelf->__PVT__spill_one_word_done;
    }
    if (((IData)(vlSelf->__PVT__refill_one_word_req_sent) 
         ^ (IData)(vlSelf->__Vtogcov__refill_one_word_req_sent))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__refill_one_word_req_sent 
            = vlSelf->__PVT__refill_one_word_req_sent;
    }
    if (((IData)(vlSelf->__PVT__refill_one_word_resp_received) 
         ^ (IData)(vlSelf->__Vtogcov__refill_one_word_resp_received))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__refill_one_word_resp_received 
            = vlSelf->__PVT__refill_one_word_resp_received;
    }
    if (((IData)(vlSelf->__PVT__Spill_or_Refill_sel) 
         ^ (IData)(vlSelf->__Vtogcov__Spill_or_Refill_sel))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__Spill_or_Refill_sel = vlSelf->__PVT__Spill_or_Refill_sel;
    }
    if (((IData)(vlSelf->__PVT__flush) ^ (IData)(vlSelf->__Vtogcov__flush))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__flush = vlSelf->__PVT__flush;
    }
    vlSymsp->TOP__top__DUT.__PVT__reg_en_M0 = vlSelf->__PVT__reg_en_M0;
    vlSymsp->TOP__top__DUT.__PVT__darray_write_mux_sel 
        = vlSelf->__PVT__darray_write_mux_sel;
    vlSymsp->TOP__top__DUT.__PVT__tarray_en = vlSelf->__PVT__tarray_en;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0U)))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 1U)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 2U)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 3U)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 4U)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 5U)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 6U)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 7U)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 8U)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 9U)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT.__PVT__write_en_sel = vlSelf->__PVT__write_en_sel;
    vlSymsp->TOP__top__DUT.__PVT__memreq_msg_data = vlSelf->__PVT__memreq_msg_data;
    vlSymsp->TOP__top__DUT.__PVT__memreq_msg_addr = vlSelf->__PVT__memreq_msg_addr;
    vlSymsp->TOP__top__DUT.__PVT__Spill_or_Refill_sel 
        = vlSelf->__PVT__Spill_or_Refill_sel;
    vlSymsp->TOP__top__DUT.__PVT__z6b_sel = vlSelf->__PVT__z6b_sel;
    vlSymsp->TOP__top__DUT.__PVT__refill_one_word_resp_received 
        = vlSelf->__PVT__refill_one_word_resp_received;
    vlSymsp->TOP__top__DUT.__PVT__cache_resp_msg_data 
        = vlSelf->__PVT__cache_resp_msg_data;
    vlSymsp->TOP__top__DUT.__PVT__refill_one_word_req_sent 
        = vlSelf->__PVT__refill_one_word_req_sent;
    vlSymsp->TOP__top__DUT.__PVT__spill_one_word_done 
        = vlSelf->__PVT__spill_one_word_done;
    vlSymsp->TOP__top__DUT.__PVT__tarray_wen = vlSelf->__PVT__tarray_wen;
    vlSymsp->TOP__top__DUT.__PVT__darray_wen = vlSelf->__PVT__darray_wen;
    vlSymsp->TOP__top__DUT.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT.__PVT__flush = vlSelf->__PVT__flush;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__1\n"); );
    // Body
    vlSelf->__PVT__current_dirty = vlSymsp->TOP__top__DUT.__PVT__current_dirty;
    vlSelf->__PVT__tarray_match = vlSymsp->TOP__top__DUT.__PVT__tarray_match;
    if (((IData)(vlSelf->__PVT__current_dirty) ^ (IData)(vlSelf->__Vtogcov__current_dirty))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__current_dirty = vlSelf->__PVT__current_dirty;
    }
    if (((IData)(vlSelf->__PVT__tarray_match) ^ (IData)(vlSelf->__Vtogcov__tarray_match))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_match = vlSelf->__PVT__tarray_match;
    }
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__2(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__2\n"); );
    // Body
    vlSelf->__PVT__spill_done = vlSymsp->TOP__top__DUT.__PVT__spill_done;
    vlSelf->__PVT__cache_req_msg_data = vlSymsp->TOP__top__DUT.__PVT__cache_req_msg_data;
    if (((IData)(vlSelf->__PVT__spill_done) ^ (IData)(vlSelf->__Vtogcov__spill_done))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__spill_done = vlSelf->__PVT__spill_done;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__3(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__3\n"); );
    // Body
    vlSelf->__PVT__memresp_msg_data = vlSymsp->TOP__top__DUT.__PVT__memresp_msg_data;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__4(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__4\n"); );
    // Body
    vlSelf->__PVT__cache_req_msg_addr = vlSymsp->TOP__top__DUT.__PVT__cache_req_msg_addr;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0U)))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 1U)))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 2U)))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 3U)))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 4U)))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 5U)))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 6U)))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 7U)))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 8U)))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 9U)))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1fU)));
    }
}
