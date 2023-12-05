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
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    IData/*31:0*/ __Vtemp_4;
    IData/*31:0*/ __Vtemp_5;
    IData/*31:0*/ __Vtemp_6;
    IData/*31:0*/ __Vtemp_7;
    IData/*31:0*/ __Vtemp_8;
    IData/*31:0*/ __Vtemp_9;
    IData/*31:0*/ __Vtemp_10;
    // Body
    VL_WRITEF("Start of Testbench\n");
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            30);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__reset = 1U;
    vlSelf->__PVT__update_en = 0U;
    vlSelf->__PVT__update_val = 0U;
    vlSelf->__PVT__PC = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            36);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__update_en = 1U;
    vlSelf->__PVT__update_val = 1U;
    vlSelf->__PVT__PC = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            47);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = 1U;
    vlSelf->__PVT__update_val = 1U;
    vlSelf->__PVT__PC = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            57);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = 1U;
    vlSelf->__PVT__update_val = 1U;
    vlSelf->__PVT__PC = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    VL_WRITEF("Test Case: Loop with no branches\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            75);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 0U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__6__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__6__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__6__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__6__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__6__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__6__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk1__DOT__x = 1U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__6__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__6__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__6__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__6__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__6__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__6__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk1__DOT__x = 2U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__6__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__6__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__6__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__6__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__6__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__6__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk1__DOT__x = 3U;
    vlSelf->__PVT__my_pc = 0xcU;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__6__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__6__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__6__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__6__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__6__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__6__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk1__DOT__x = 4U;
    vlSelf->__PVT__my_pc = 0x10U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__6__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__6__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__6__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__6__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__6__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__6__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk1__DOT__x = 5U;
    vlSelf->__PVT__my_pc = 0x14U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__6__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__6__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__6__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__6__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__6__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__6__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk1__DOT__x = 6U;
    vlSelf->__PVT__my_pc = 0x18U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__6__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__6__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__6__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__6__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__6__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__6__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk1__DOT__x = 7U;
    vlSelf->__PVT__my_pc = 0x1cU;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__6__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__6__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__6__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__6__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__6__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__6__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk1__DOT__x = 8U;
    vlSelf->__PVT__my_pc = 0x20U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__6__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__6__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__6__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__6__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__6__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__6__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk1__DOT__x = 9U;
    vlSelf->__PVT__my_pc = 0x24U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__6__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__6__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__6__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__6__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__6__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__6__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk1__DOT__x = 0xaU;
    VL_WRITEF("Test Case: Loop with a single branch, always taken\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            92);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__9__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__9__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__9__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__9__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__9__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__9__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk2__DOT__x = 1U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__9__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__9__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__9__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__9__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__9__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__9__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk2__DOT__x = 2U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__9__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__9__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__9__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__9__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__9__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__9__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk2__DOT__x = 3U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__9__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__9__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__9__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__9__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__9__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__9__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk2__DOT__x = 4U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__9__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__9__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__9__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__9__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__9__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__9__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk2__DOT__x = 5U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__9__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__9__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__9__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__9__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__9__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__9__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk2__DOT__x = 6U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__9__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__9__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__9__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__9__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__9__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__9__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk2__DOT__x = 7U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__9__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__9__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__9__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__9__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__9__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__9__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk2__DOT__x = 8U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__9__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__9__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__9__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__9__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__9__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__9__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk2__DOT__x = 9U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__9__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__9__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__9__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__9__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__9__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__9__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk2__DOT__x = 0xaU;
    VL_WRITEF("Test Case: Loop with a single branch, always not taken\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            109);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__12__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__12__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__12__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__12__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__12__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__12__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk3__DOT__x = 1U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__12__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__12__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__12__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__12__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__12__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__12__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk3__DOT__x = 2U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__12__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__12__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__12__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__12__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__12__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__12__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk3__DOT__x = 3U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__12__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__12__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__12__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__12__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__12__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__12__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk3__DOT__x = 4U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__12__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__12__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__12__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__12__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__12__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__12__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk3__DOT__x = 5U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__12__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__12__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__12__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__12__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__12__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__12__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk3__DOT__x = 6U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__12__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__12__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__12__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__12__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__12__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__12__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk3__DOT__x = 7U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__12__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__12__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__12__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__12__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__12__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__12__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk3__DOT__x = 8U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__12__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__12__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__12__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__12__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__12__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__12__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk3__DOT__x = 9U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__12__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__12__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__12__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__12__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__12__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__12__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk3__DOT__x = 0xaU;
    VL_WRITEF("Test Case: Loop with a single branch, alternating between taken and not taken\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            126);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 0x10U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__15__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__15__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__15__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__15__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__15__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__15__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk4__DOT__x = 1U;
    vlSelf->__PVT__my_pc = 0x10U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__15__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__15__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__15__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__15__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__15__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__15__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk4__DOT__x = 2U;
    vlSelf->__PVT__my_pc = 0x10U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__15__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__15__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__15__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__15__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__15__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__15__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk4__DOT__x = 3U;
    vlSelf->__PVT__my_pc = 0x10U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__15__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__15__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__15__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__15__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__15__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__15__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk4__DOT__x = 4U;
    vlSelf->__PVT__my_pc = 0x10U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__15__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__15__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__15__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__15__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__15__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__15__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk4__DOT__x = 5U;
    vlSelf->__PVT__my_pc = 0x10U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__15__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__15__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__15__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__15__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__15__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__15__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk4__DOT__x = 6U;
    vlSelf->__PVT__my_pc = 0x10U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__15__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__15__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__15__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__15__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__15__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__15__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk4__DOT__x = 7U;
    vlSelf->__PVT__my_pc = 0x10U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__15__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__15__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__15__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__15__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__15__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__15__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk4__DOT__x = 8U;
    vlSelf->__PVT__my_pc = 0x10U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__15__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__15__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__15__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__15__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__15__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__15__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk4__DOT__x = 9U;
    vlSelf->__PVT__my_pc = 0x10U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__15__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__15__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__15__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__15__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__15__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__15__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk4__DOT__x = 0xaU;
    VL_WRITEF("Test Case: Loop with a single branch, with pattern ABBA\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            144);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__18__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__18__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__18__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__18__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__18__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__18__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk5__DOT__x = 1U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__18__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__18__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__18__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__18__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__18__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__18__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk5__DOT__x = 2U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__18__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__18__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__18__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__18__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__18__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__18__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk5__DOT__x = 3U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__18__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__18__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__18__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__18__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__18__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__18__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk5__DOT__x = 4U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__18__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__18__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__18__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__18__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__18__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__18__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk5__DOT__x = 5U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__18__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__18__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__18__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__18__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__18__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__18__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk5__DOT__x = 6U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__18__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__18__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__18__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__18__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__18__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__18__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk5__DOT__x = 7U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__18__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__18__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__18__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__18__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__18__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__18__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk5__DOT__x = 8U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__18__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__18__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__18__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__18__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__18__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__18__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk5__DOT__x = 9U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__18__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__18__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__18__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__18__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__18__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__18__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk5__DOT__x = 0xaU;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__18__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__18__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__18__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__18__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__18__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__18__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk5__DOT__x = 0xbU;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__18__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__18__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__18__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__18__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__18__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__18__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk5__DOT__x = 0xcU;
    VL_WRITEF("Test Case: Nested loop with no branches\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            164);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 0U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__21__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__21__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__21__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__21__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__21__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__21__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 1U;
    vlSelf->__PVT__my_pc = 1U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__21__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__21__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__21__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__21__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__21__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__21__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 2U;
    vlSelf->__PVT__my_pc = 2U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__21__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__21__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__21__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__21__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__21__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__21__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 3U;
    vlSelf->__PVT__my_pc = 3U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__21__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__21__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__21__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__21__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__21__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__21__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 4U;
    vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__x = 1U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__21__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__21__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__21__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__21__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__21__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__21__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 1U;
    vlSelf->__PVT__my_pc = 5U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__21__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__21__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__21__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__21__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__21__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__21__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 2U;
    vlSelf->__PVT__my_pc = 6U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__21__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__21__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__21__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__21__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__21__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__21__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 3U;
    vlSelf->__PVT__my_pc = 7U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__21__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__21__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__21__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__21__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__21__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__21__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 4U;
    vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__x = 2U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__21__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__21__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__21__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__21__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__21__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__21__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 1U;
    vlSelf->__PVT__my_pc = 9U;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__21__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__21__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__21__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__21__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__21__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__21__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 2U;
    vlSelf->__PVT__my_pc = 0xaU;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__21__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__21__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__21__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__21__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__21__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__21__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 3U;
    vlSelf->__PVT__my_pc = 0xbU;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__21__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__21__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__21__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__21__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__21__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__21__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 4U;
    vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__x = 3U;
    vlSelf->__PVT__my_pc = 0xcU;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__21__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__21__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__21__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__21__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__21__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__21__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 1U;
    vlSelf->__PVT__my_pc = 0xdU;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__21__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__21__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__21__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__21__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__21__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__21__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 2U;
    vlSelf->__PVT__my_pc = 0xeU;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__21__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__21__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__21__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__21__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__21__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__21__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 3U;
    vlSelf->__PVT__my_pc = 0xfU;
    vlSelf->__PVT__my_update_en = 0U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__21__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__21__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__21__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__21__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__21__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__21__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 4U;
    vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__x = 4U;
    VL_WRITEF("Test Case: Nested loop with branches\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            183);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 0U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__24__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__24__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__24__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__24__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__24__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__24__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 1U;
    vlSelf->__PVT__my_pc = 1U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__24__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__24__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__24__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__24__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__24__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__24__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 2U;
    vlSelf->__PVT__my_pc = 2U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__24__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__24__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__24__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__24__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__24__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__24__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 3U;
    vlSelf->__PVT__my_pc = 3U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__24__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__24__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__24__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__24__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__24__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__24__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 4U;
    vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__x = 1U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__24__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__24__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__24__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__24__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__24__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__24__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 1U;
    vlSelf->__PVT__my_pc = 5U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__24__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__24__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__24__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__24__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__24__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__24__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 2U;
    vlSelf->__PVT__my_pc = 6U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__24__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__24__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__24__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__24__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__24__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__24__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 3U;
    vlSelf->__PVT__my_pc = 7U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__24__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__24__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__24__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__24__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__24__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__24__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 4U;
    vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__x = 2U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__24__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__24__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__24__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__24__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__24__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__24__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 1U;
    vlSelf->__PVT__my_pc = 9U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__24__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__24__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__24__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__24__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__24__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__24__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 2U;
    vlSelf->__PVT__my_pc = 0xaU;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__24__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__24__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__24__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__24__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__24__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__24__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 3U;
    vlSelf->__PVT__my_pc = 0xbU;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__24__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__24__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__24__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__24__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__24__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__24__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 4U;
    vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__x = 3U;
    vlSelf->__PVT__my_pc = 0xcU;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__24__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__24__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__24__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__24__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__24__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__24__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 1U;
    vlSelf->__PVT__my_pc = 0xdU;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__24__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__24__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__24__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__24__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__24__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__24__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 2U;
    vlSelf->__PVT__my_pc = 0xeU;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__24__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__24__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__24__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__24__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__24__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__24__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 3U;
    vlSelf->__PVT__my_pc = 0xfU;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__24__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__24__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__24__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__24__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__24__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__24__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 4U;
    vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__x = 4U;
    VL_WRITEF("Test Case: A series of branches all taken\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            203);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 0U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__27__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__27__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__27__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__27__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__27__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__27__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk10__DOT__x = 1U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__27__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__27__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__27__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__27__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__27__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__27__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk10__DOT__x = 2U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__27__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__27__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__27__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__27__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__27__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__27__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk10__DOT__x = 3U;
    vlSelf->__PVT__my_pc = 0xcU;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__27__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__27__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__27__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__27__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__27__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__27__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk10__DOT__x = 4U;
    vlSelf->__PVT__my_pc = 0x10U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__27__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__27__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__27__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__27__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__27__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__27__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk10__DOT__x = 5U;
    vlSelf->__PVT__my_pc = 0x14U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__27__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__27__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__27__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__27__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__27__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__27__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk10__DOT__x = 6U;
    vlSelf->__PVT__my_pc = 0x18U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__27__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__27__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__27__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__27__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__27__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__27__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk10__DOT__x = 7U;
    vlSelf->__PVT__my_pc = 0x1cU;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__27__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__27__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__27__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__27__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__27__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__27__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk10__DOT__x = 8U;
    vlSelf->__PVT__my_pc = 0x20U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__27__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__27__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__27__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__27__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__27__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__27__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk10__DOT__x = 9U;
    vlSelf->__PVT__my_pc = 0x24U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__27__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__27__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__27__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__27__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__27__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__27__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk10__DOT__x = 0xaU;
    VL_WRITEF("Test Case: A series of branches all not taken\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            220);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 0U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__30__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__30__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__30__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__30__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__30__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__30__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk11__DOT__x = 1U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__30__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__30__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__30__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__30__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__30__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__30__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk11__DOT__x = 2U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__30__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__30__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__30__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__30__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__30__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__30__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk11__DOT__x = 3U;
    vlSelf->__PVT__my_pc = 0xcU;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__30__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__30__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__30__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__30__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__30__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__30__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk11__DOT__x = 4U;
    vlSelf->__PVT__my_pc = 0x10U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__30__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__30__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__30__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__30__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__30__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__30__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk11__DOT__x = 5U;
    vlSelf->__PVT__my_pc = 0x14U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__30__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__30__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__30__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__30__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__30__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__30__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk11__DOT__x = 6U;
    vlSelf->__PVT__my_pc = 0x18U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__30__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__30__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__30__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__30__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__30__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__30__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk11__DOT__x = 7U;
    vlSelf->__PVT__my_pc = 0x1cU;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__30__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__30__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__30__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__30__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__30__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__30__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk11__DOT__x = 8U;
    vlSelf->__PVT__my_pc = 0x20U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__30__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__30__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__30__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__30__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__30__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__30__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk11__DOT__x = 9U;
    vlSelf->__PVT__my_pc = 0x24U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__30__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__30__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__30__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__30__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__30__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__30__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk11__DOT__x = 0xaU;
    VL_WRITEF("Test Case: A series of branches alternating between taken and not taken\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            237);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 0U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__33__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__33__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__33__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__33__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__33__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__33__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk12__DOT__x = 1U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__33__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__33__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__33__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__33__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__33__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__33__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk12__DOT__x = 2U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__33__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__33__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__33__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__33__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__33__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__33__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk12__DOT__x = 3U;
    vlSelf->__PVT__my_pc = 0xcU;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__33__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__33__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__33__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__33__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__33__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__33__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk12__DOT__x = 4U;
    vlSelf->__PVT__my_pc = 0x10U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__33__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__33__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__33__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__33__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__33__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__33__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk12__DOT__x = 5U;
    vlSelf->__PVT__my_pc = 0x14U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__33__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__33__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__33__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__33__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__33__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__33__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk12__DOT__x = 6U;
    vlSelf->__PVT__my_pc = 0x18U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__33__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__33__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__33__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__33__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__33__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__33__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk12__DOT__x = 7U;
    vlSelf->__PVT__my_pc = 0x1cU;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__33__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__33__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__33__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__33__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__33__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__33__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk12__DOT__x = 8U;
    vlSelf->__PVT__my_pc = 0x20U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__33__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__33__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__33__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__33__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__33__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__33__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk12__DOT__x = 9U;
    vlSelf->__PVT__my_pc = 0x24U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__33__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__33__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__33__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__33__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__33__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__33__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk12__DOT__x = 0xaU;
    VL_WRITEF("Test Case: A series of branches with pattern ABAB\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            255);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 0U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__36__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__36__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__36__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 1U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__36__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__36__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__36__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 2U;
    vlSelf->__PVT__my_pc = 8U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__36__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__36__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__36__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 3U;
    vlSelf->__PVT__my_pc = 0xcU;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__36__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__36__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__36__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 4U;
    vlSelf->__PVT__my_pc = 0x10U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__36__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__36__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__36__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 5U;
    vlSelf->__PVT__my_pc = 0x14U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__36__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__36__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__36__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 6U;
    vlSelf->__PVT__my_pc = 0x18U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__36__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__36__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__36__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 7U;
    vlSelf->__PVT__my_pc = 0x1cU;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__36__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__36__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__36__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 8U;
    vlSelf->__PVT__my_pc = 0x20U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__36__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__36__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__36__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 9U;
    vlSelf->__PVT__my_pc = 0x24U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__36__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__36__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__36__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 0xaU;
    vlSelf->__PVT__my_pc = 0x28U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__36__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__36__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__36__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 0xbU;
    vlSelf->__PVT__my_pc = 0x2cU;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__36__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__36__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__36__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 0xcU;
    VL_WRITEF("Test Case: Branches with conflict in PHT\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            275);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__shift_factor = 0x10U;
    vlSelf->__PVT__my_pc = 0xcU;
    __Vtemp_1 = (vlSelf->__PVT__my_pc + vlSelf->__PVT__shift_factor);
    vlSelf->__PVT__my_pc = __Vtemp_1;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__39__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__39__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__39__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__39__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__39__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__39__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk14__DOT__x = 1U;
    __Vtemp_2 = (vlSelf->__PVT__my_pc + ((0x1fU >= 1U)
                                          ? (vlSelf->__PVT__shift_factor 
                                             << 1U)
                                          : 0U));
    vlSelf->__PVT__my_pc = __Vtemp_2;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__39__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__39__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__39__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__39__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__39__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__39__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk14__DOT__x = 2U;
    __Vtemp_3 = (vlSelf->__PVT__my_pc + ((0x1fU >= 2U)
                                          ? (vlSelf->__PVT__shift_factor 
                                             << 2U)
                                          : 0U));
    vlSelf->__PVT__my_pc = __Vtemp_3;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__39__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__39__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__39__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__39__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__39__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__39__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk14__DOT__x = 3U;
    __Vtemp_4 = (vlSelf->__PVT__my_pc + ((0x1fU >= 3U)
                                          ? (vlSelf->__PVT__shift_factor 
                                             << 3U)
                                          : 0U));
    vlSelf->__PVT__my_pc = __Vtemp_4;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__39__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__39__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__39__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__39__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__39__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__39__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk14__DOT__x = 4U;
    __Vtemp_5 = (vlSelf->__PVT__my_pc + ((0x1fU >= 4U)
                                          ? (vlSelf->__PVT__shift_factor 
                                             << 4U)
                                          : 0U));
    vlSelf->__PVT__my_pc = __Vtemp_5;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__39__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__39__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__39__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__39__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__39__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__39__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk14__DOT__x = 5U;
    __Vtemp_6 = (vlSelf->__PVT__my_pc + ((0x1fU >= 5U)
                                          ? (vlSelf->__PVT__shift_factor 
                                             << 5U)
                                          : 0U));
    vlSelf->__PVT__my_pc = __Vtemp_6;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__39__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__39__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__39__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__39__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__39__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__39__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk14__DOT__x = 6U;
    __Vtemp_7 = (vlSelf->__PVT__my_pc + ((0x1fU >= 6U)
                                          ? (vlSelf->__PVT__shift_factor 
                                             << 6U)
                                          : 0U));
    vlSelf->__PVT__my_pc = __Vtemp_7;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__39__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__39__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__39__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__39__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__39__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__39__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk14__DOT__x = 7U;
    __Vtemp_8 = (vlSelf->__PVT__my_pc + ((0x1fU >= 7U)
                                          ? (vlSelf->__PVT__shift_factor 
                                             << 7U)
                                          : 0U));
    vlSelf->__PVT__my_pc = __Vtemp_8;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__39__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__39__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__39__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__39__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__39__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__39__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk14__DOT__x = 8U;
    __Vtemp_9 = (vlSelf->__PVT__my_pc + ((0x1fU >= 8U)
                                          ? (vlSelf->__PVT__shift_factor 
                                             << 8U)
                                          : 0U));
    vlSelf->__PVT__my_pc = __Vtemp_9;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__39__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__39__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__39__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__39__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__39__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__39__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk14__DOT__x = 9U;
    __Vtemp_10 = (vlSelf->__PVT__my_pc + ((0x1fU >= 9U)
                                           ? (vlSelf->__PVT__shift_factor 
                                              << 9U)
                                           : 0U));
    vlSelf->__PVT__my_pc = __Vtemp_10;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__39__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__39__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__39__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            304);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__39__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__39__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__39__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGlobal.v", 
                                                            321);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk14__DOT__x = 0xaU;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGlobal.v", 
                                            292);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    VL_FINISH_MT("utb_BranchGlobal.v", 293, "");
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
    if (((IData)(vlSelf->__PVT__update_en) ^ (IData)(vlSelf->__Vtogcov__update_en))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__update_en = vlSelf->__PVT__update_en;
    }
    if (((IData)(vlSelf->__PVT__update_val) ^ (IData)(vlSelf->__Vtogcov__update_val))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__update_val = vlSelf->__PVT__update_val;
    }
    if (((IData)(vlSelf->__PVT__my_update_en) ^ (IData)(vlSelf->__Vtogcov__my_update_en))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__my_update_en = vlSelf->__PVT__my_update_en;
    }
    if (((IData)(vlSelf->__PVT__my_update_val) ^ (IData)(vlSelf->__Vtogcov__my_update_val))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__my_update_val = vlSelf->__PVT__my_update_val;
    }
    vlSymsp->TOP__top__DUT.__PVT__update_en = vlSelf->__PVT__update_en;
    vlSymsp->TOP__top__DUT.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT.__PVT__update_val = vlSelf->__PVT__update_val;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0U)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 1U)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 2U)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 3U)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 4U)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 5U)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 6U)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 7U)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 8U)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 9U)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xaU)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xbU)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xcU)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xdU)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xeU)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xfU)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x10U)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x11U)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x12U)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x13U)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x14U)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x15U)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x16U)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x17U)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x18U)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x19U)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1aU)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1bU)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1cU)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1dU)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1eU)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1fU)))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0U)))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 1U)))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 2U)))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 3U)))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 4U)))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 5U)))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 6U)))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 7U)))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 8U)))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 9U)))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xaU)))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xbU)))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xcU)))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xdU)))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xeU)))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xfU)))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x10U)))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x11U)))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x12U)))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x13U)))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x14U)))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x15U)))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x16U)))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x17U)))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x18U)))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x19U)))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1aU)))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1bU)))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1cU)))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1dU)))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1eU)))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1fU)))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0U)))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 1U)))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 2U)))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 3U)))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 4U)))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 5U)))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 6U)))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 7U)))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 8U)))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 9U)))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xaU)))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xbU)))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xcU)))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xdU)))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xeU)))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xfU)))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x10U)))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x11U)))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x12U)))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x13U)))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x14U)))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x15U)))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x16U)))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x17U)))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x18U)))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x19U)))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1aU)))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1bU)))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1cU)))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1dU)))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1eU)))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1fU)))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT.__PVT__PC = vlSelf->__PVT__PC;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__0\n"); );
    // Body
    vlSelf->__PVT__prediction = vlSymsp->TOP__top__DUT.__PVT__prediction;
    if (((IData)(vlSelf->__PVT__prediction) ^ (IData)(vlSelf->__Vtogcov__prediction))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prediction = vlSelf->__PVT__prediction;
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
    if (((IData)(vlSelf->__PVT__update_en) ^ (IData)(vlSelf->__Vtogcov__update_en))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__update_en = vlSelf->__PVT__update_en;
    }
    if (((IData)(vlSelf->__PVT__update_val) ^ (IData)(vlSelf->__Vtogcov__update_val))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__update_val = vlSelf->__PVT__update_val;
    }
    if (((IData)(vlSelf->__PVT__my_update_en) ^ (IData)(vlSelf->__Vtogcov__my_update_en))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__my_update_en = vlSelf->__PVT__my_update_en;
    }
    if (((IData)(vlSelf->__PVT__my_update_val) ^ (IData)(vlSelf->__Vtogcov__my_update_val))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__my_update_val = vlSelf->__PVT__my_update_val;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0U)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 1U)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 2U)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 3U)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 4U)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 5U)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 6U)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 7U)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 8U)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 9U)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xaU)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xbU)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xcU)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xdU)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xeU)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xfU)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x10U)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x11U)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x12U)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x13U)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x14U)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x15U)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x16U)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x17U)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x18U)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x19U)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1aU)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1bU)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1cU)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1dU)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1eU)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1fU)))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0U)))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 1U)))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 2U)))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 3U)))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 4U)))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 5U)))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 6U)))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 7U)))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 8U)))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 9U)))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xaU)))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xbU)))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xcU)))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xdU)))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xeU)))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xfU)))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x10U)))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x11U)))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x12U)))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x13U)))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x14U)))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x15U)))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x16U)))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x17U)))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x18U)))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x19U)))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1aU)))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1bU)))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1cU)))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1dU)))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1eU)))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1fU)))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0U)))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 1U)))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 2U)))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 3U)))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 4U)))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 5U)))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 6U)))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 7U)))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 8U)))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 9U)))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xaU)))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xbU)))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xcU)))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xdU)))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xeU)))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xfU)))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x10U)))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x11U)))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x12U)))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x13U)))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x14U)))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x15U)))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x16U)))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x17U)))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x18U)))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x19U)))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1aU)))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1bU)))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1cU)))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1dU)))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1eU)))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1fU)))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT.__PVT__PC = vlSelf->__PVT__PC;
    vlSymsp->TOP__top__DUT.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT.__PVT__update_en = vlSelf->__PVT__update_en;
    vlSymsp->TOP__top__DUT.__PVT__update_val = vlSelf->__PVT__update_val;
}
