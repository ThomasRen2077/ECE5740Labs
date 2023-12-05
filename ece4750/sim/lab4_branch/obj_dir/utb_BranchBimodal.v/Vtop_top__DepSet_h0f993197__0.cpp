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

VlCoroutine Vtop_top___eval_initial__TOP__top__0__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top__0__0\n"); );
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
    IData/*31:0*/ __Vtemp_11;
    IData/*31:0*/ __Vtemp_12;
    IData/*31:0*/ __Vtemp_13;
    IData/*31:0*/ __Vtemp_14;
    IData/*31:0*/ __Vtemp_15;
    IData/*31:0*/ __Vtemp_16;
    IData/*31:0*/ __Vtemp_17;
    IData/*31:0*/ __Vtemp_18;
    IData/*31:0*/ __Vtemp_19;
    IData/*31:0*/ __Vtemp_20;
    IData/*31:0*/ __Vtemp_21;
    IData/*31:0*/ __Vtemp_22;
    IData/*31:0*/ __Vtemp_23;
    IData/*31:0*/ __Vtemp_24;
    IData/*31:0*/ __Vtemp_25;
    IData/*31:0*/ __Vtemp_26;
    IData/*31:0*/ __Vtemp_27;
    IData/*31:0*/ __Vtemp_28;
    IData/*31:0*/ __Vtemp_29;
    IData/*31:0*/ __Vtemp_30;
    IData/*31:0*/ __Vtemp_31;
    IData/*31:0*/ __Vtemp_32;
    IData/*31:0*/ __Vtemp_33;
    IData/*31:0*/ __Vtemp_34;
    IData/*31:0*/ __Vtemp_35;
    IData/*31:0*/ __Vtemp_36;
    IData/*31:0*/ __Vtemp_37;
    IData/*31:0*/ __Vtemp_38;
    IData/*31:0*/ __Vtemp_39;
    IData/*31:0*/ __Vtemp_40;
    IData/*31:0*/ __Vtemp_41;
    IData/*31:0*/ __Vtemp_42;
    IData/*31:0*/ __Vtemp_43;
    IData/*31:0*/ __Vtemp_44;
    IData/*31:0*/ __Vtemp_45;
    IData/*31:0*/ __Vtemp_46;
    IData/*31:0*/ __Vtemp_47;
    IData/*31:0*/ __Vtemp_48;
    IData/*31:0*/ __Vtemp_49;
    IData/*31:0*/ __Vtemp_50;
    IData/*31:0*/ __Vtemp_51;
    IData/*31:0*/ __Vtemp_52;
    IData/*31:0*/ __Vtemp_53;
    IData/*31:0*/ __Vtemp_54;
    IData/*31:0*/ __Vtemp_55;
    IData/*31:0*/ __Vtemp_56;
    IData/*31:0*/ __Vtemp_57;
    IData/*31:0*/ __Vtemp_58;
    IData/*31:0*/ __Vtemp_59;
    IData/*31:0*/ __Vtemp_60;
    IData/*31:0*/ __Vtemp_61;
    IData/*31:0*/ __Vtemp_62;
    IData/*31:0*/ __Vtemp_63;
    IData/*31:0*/ __Vtemp_64;
    IData/*31:0*/ __Vtemp_65;
    IData/*31:0*/ __Vtemp_66;
    IData/*31:0*/ __Vtemp_67;
    IData/*31:0*/ __Vtemp_68;
    IData/*31:0*/ __Vtemp_69;
    IData/*31:0*/ __Vtemp_70;
    IData/*31:0*/ __Vtemp_71;
    IData/*31:0*/ __Vtemp_72;
    IData/*31:0*/ __Vtemp_73;
    IData/*31:0*/ __Vtemp_74;
    IData/*31:0*/ __Vtemp_75;
    IData/*31:0*/ __Vtemp_76;
    IData/*31:0*/ __Vtemp_77;
    IData/*31:0*/ __Vtemp_78;
    IData/*31:0*/ __Vtemp_79;
    IData/*31:0*/ __Vtemp_80;
    IData/*31:0*/ __Vtemp_81;
    IData/*31:0*/ __Vtemp_82;
    IData/*31:0*/ __Vtemp_83;
    IData/*31:0*/ __Vtemp_84;
    IData/*31:0*/ __Vtemp_85;
    IData/*31:0*/ __Vtemp_86;
    IData/*31:0*/ __Vtemp_87;
    IData/*31:0*/ __Vtemp_88;
    IData/*31:0*/ __Vtemp_89;
    IData/*31:0*/ __Vtemp_90;
    IData/*31:0*/ __Vtemp_91;
    // Body
    VL_WRITEF("Start of Testbench\n");
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchBimodal.v", 
                                            30);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__reset = 1U;
    vlSelf->__PVT__update_en = 0U;
    vlSelf->__PVT__update_val = 0U;
    vlSelf->__PVT__PC = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchBimodal.v", 
                                            36);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                            "utb_BranchBimodal.v", 
                                            47);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                            "utb_BranchBimodal.v", 
                                            57);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                            "utb_BranchBimodal.v", 
                                            75);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk1__DOT__x = 0xaU;
    VL_WRITEF("Test Case: Loop with a single branch, always taken\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchBimodal.v", 
                                            92);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk2__DOT__x = 0xaU;
    VL_WRITEF("Test Case: Loop with a single branch, always not taken\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchBimodal.v", 
                                            109);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk3__DOT__x = 0xaU;
    VL_WRITEF("Test Case: Loop with a single branch, alternating between taken and not taken\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchBimodal.v", 
                                            126);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk4__DOT__x = 0xaU;
    VL_WRITEF("Test Case: Loop with a single branch, with pattern ABBA\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchBimodal.v", 
                                            144);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk5__DOT__x = 0xcU;
    VL_WRITEF("Test Case: Nested loop with no branches\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchBimodal.v", 
                                            164);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y = 4U;
    vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk6__DOT__x = 4U;
    VL_WRITEF("Test Case: Nested loop with branches\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchBimodal.v", 
                                            183);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y = 4U;
    vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk8__DOT__x = 4U;
    VL_WRITEF("Test Case: A series of branches all taken\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchBimodal.v", 
                                            203);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk10__DOT__x = 0xaU;
    VL_WRITEF("Test Case: A series of branches all not taken\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchBimodal.v", 
                                            220);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk11__DOT__x = 0xaU;
    VL_WRITEF("Test Case: A series of branches alternating between taken and not taken\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchBimodal.v", 
                                            237);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk12__DOT__x = 0xaU;
    VL_WRITEF("Test Case: A series of branches with pattern ABAB\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchBimodal.v", 
                                            255);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 0U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 1U;
    vlSelf->__PVT__my_pc = 4U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 4U;
    vlSelf->__PVT__my_pc = 0x10U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 5U;
    vlSelf->__PVT__my_pc = 0x14U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 8U;
    vlSelf->__PVT__my_pc = 0x20U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 9U;
    vlSelf->__PVT__my_pc = 0x24U;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__36__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__36__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__36__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk13__DOT__x = 0xcU;
    VL_WRITEF("Test Case: Branches with conflict in PHT\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchBimodal.v", 
                                            273);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 0xcU;
    vlSelf->__PVT__shift_factor = 0x10U;
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
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
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk14__DOT__x = 0xaU;
    VL_WRITEF("Test Case: Loop with N-branches, all taken\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchBimodal.v", 
                                            291);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_11 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_11;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 1U;
    __Vtemp_12 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_12;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 2U;
    __Vtemp_13 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_13;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 3U;
    __Vtemp_14 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_14;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 4U;
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__x = 1U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_15 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_15;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 1U;
    __Vtemp_16 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_16;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 2U;
    __Vtemp_17 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_17;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 3U;
    __Vtemp_18 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_18;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 4U;
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__x = 2U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_19 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_19;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 1U;
    __Vtemp_20 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_20;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 2U;
    __Vtemp_21 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_21;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 3U;
    __Vtemp_22 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_22;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 4U;
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__x = 3U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_23 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_23;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 1U;
    __Vtemp_24 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_24;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 2U;
    __Vtemp_25 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_25;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 3U;
    __Vtemp_26 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_26;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 4U;
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__x = 4U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_27 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_27;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 1U;
    __Vtemp_28 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_28;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 2U;
    __Vtemp_29 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_29;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 3U;
    __Vtemp_30 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_30;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 4U;
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__x = 5U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_31 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_31;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 1U;
    __Vtemp_32 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_32;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 2U;
    __Vtemp_33 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_33;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 3U;
    __Vtemp_34 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_34;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 4U;
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__x = 6U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_35 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_35;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 1U;
    __Vtemp_36 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_36;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 2U;
    __Vtemp_37 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_37;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 3U;
    __Vtemp_38 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_38;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 4U;
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__x = 7U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_39 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_39;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 1U;
    __Vtemp_40 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_40;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 2U;
    __Vtemp_41 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_41;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 3U;
    __Vtemp_42 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_42;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 4U;
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__x = 8U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_43 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_43;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 1U;
    __Vtemp_44 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_44;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 2U;
    __Vtemp_45 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_45;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 3U;
    __Vtemp_46 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_46;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 4U;
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__x = 9U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_47 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_47;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 1U;
    __Vtemp_48 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_48;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 2U;
    __Vtemp_49 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_49;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 3U;
    __Vtemp_50 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_50;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSelf->__Vtask_test_task__42__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__42__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__42__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__42__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__42__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__42__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y = 4U;
    vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk15__DOT__x = 0xaU;
    VL_WRITEF("Test Case: Loop with N-branches, all not taken\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchBimodal.v", 
                                            312);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_51 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_51;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 1U;
    __Vtemp_52 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_52;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 2U;
    __Vtemp_53 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_53;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 3U;
    __Vtemp_54 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_54;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 4U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__x = 1U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_55 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_55;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 1U;
    __Vtemp_56 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_56;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 2U;
    __Vtemp_57 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_57;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 3U;
    __Vtemp_58 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_58;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 4U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__x = 2U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_59 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_59;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 1U;
    __Vtemp_60 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_60;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 2U;
    __Vtemp_61 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_61;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 3U;
    __Vtemp_62 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_62;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 4U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__x = 3U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_63 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_63;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 1U;
    __Vtemp_64 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_64;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 2U;
    __Vtemp_65 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_65;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 3U;
    __Vtemp_66 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_66;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 4U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__x = 4U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_67 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_67;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 1U;
    __Vtemp_68 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_68;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 2U;
    __Vtemp_69 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_69;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 3U;
    __Vtemp_70 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_70;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 4U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__x = 5U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_71 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_71;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 1U;
    __Vtemp_72 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_72;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 2U;
    __Vtemp_73 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_73;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 3U;
    __Vtemp_74 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_74;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 4U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__x = 6U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_75 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_75;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 1U;
    __Vtemp_76 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_76;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 2U;
    __Vtemp_77 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_77;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 3U;
    __Vtemp_78 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_78;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 4U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__x = 7U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_79 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_79;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 1U;
    __Vtemp_80 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_80;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 2U;
    __Vtemp_81 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_81;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 3U;
    __Vtemp_82 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_82;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 4U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__x = 8U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_83 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_83;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 1U;
    __Vtemp_84 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_84;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 2U;
    __Vtemp_85 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_85;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 3U;
    __Vtemp_86 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_86;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 4U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__x = 9U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_87 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_87;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 1U;
    __Vtemp_88 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_88;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 2U;
    __Vtemp_89 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_89;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 3U;
    __Vtemp_90 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_90;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSelf->__Vtask_test_task__45__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__45__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__45__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__45__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__45__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__45__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y = 4U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk17__DOT__x = 0xaU;
    VL_WRITEF("Test Case: Loop with N-branches, alternating between taken and not taken\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchBimodal.v", 
                                            333);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_91 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_91;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchBimodal.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__48__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__48__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__48__PC_f;
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
                                                            "utb_BranchBimodal.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
}
