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

VlCoroutine Vtop_top___eval_initial__TOP__top__0__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top__0__1\n"); );
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
    IData/*31:0*/ __Vtemp_92;
    IData/*31:0*/ __Vtemp_93;
    IData/*31:0*/ __Vtemp_94;
    IData/*31:0*/ __Vtemp_95;
    IData/*31:0*/ __Vtemp_96;
    IData/*31:0*/ __Vtemp_97;
    IData/*31:0*/ __Vtemp_98;
    IData/*31:0*/ __Vtemp_99;
    IData/*31:0*/ __Vtemp_100;
    IData/*31:0*/ __Vtemp_101;
    IData/*31:0*/ __Vtemp_102;
    IData/*31:0*/ __Vtemp_103;
    IData/*31:0*/ __Vtemp_104;
    IData/*31:0*/ __Vtemp_105;
    IData/*31:0*/ __Vtemp_106;
    IData/*31:0*/ __Vtemp_107;
    IData/*31:0*/ __Vtemp_108;
    IData/*31:0*/ __Vtemp_109;
    IData/*31:0*/ __Vtemp_110;
    IData/*31:0*/ __Vtemp_111;
    IData/*31:0*/ __Vtemp_112;
    IData/*31:0*/ __Vtemp_113;
    IData/*31:0*/ __Vtemp_114;
    IData/*31:0*/ __Vtemp_115;
    IData/*31:0*/ __Vtemp_116;
    IData/*31:0*/ __Vtemp_117;
    IData/*31:0*/ __Vtemp_118;
    IData/*31:0*/ __Vtemp_119;
    // Body
    __Vtemp_1 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_1;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    __Vtemp_2 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_2;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    __Vtemp_3 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_3;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__x = 1U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_4 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_4;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    __Vtemp_5 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_5;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    __Vtemp_6 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_6;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    __Vtemp_7 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_7;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__x = 2U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_8 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_8;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    __Vtemp_9 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_9;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    __Vtemp_10 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_10;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    __Vtemp_11 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_11;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__x = 3U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_12 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_12;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    __Vtemp_13 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_13;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    __Vtemp_14 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_14;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    __Vtemp_15 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_15;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__x = 4U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_16 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_16;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    __Vtemp_17 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_17;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    __Vtemp_18 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_18;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    __Vtemp_19 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_19;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__x = 5U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_20 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_20;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    __Vtemp_21 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_21;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    __Vtemp_22 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_22;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    __Vtemp_23 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_23;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__x = 6U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_24 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_24;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    __Vtemp_25 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_25;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    __Vtemp_26 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_26;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    __Vtemp_27 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_27;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__x = 7U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_28 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_28;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    __Vtemp_29 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_29;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    __Vtemp_30 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_30;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    __Vtemp_31 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_31;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__x = 8U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_32 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_32;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    __Vtemp_33 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_33;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    __Vtemp_34 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_34;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    __Vtemp_35 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_35;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__x = 9U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_36 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_36;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    __Vtemp_37 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_37;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    __Vtemp_38 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_38;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    __Vtemp_39 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_39;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__48__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__48__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__48__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
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
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk19__DOT__x = 0xaU;
    VL_WRITEF("Test Case: Loop with N-branches with pattern AAAB\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGShare.v", 
                                            355);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_40 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_40;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    __Vtemp_41 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_41;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    __Vtemp_42 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_42;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    __Vtemp_43 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_43;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    __Vtemp_44 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_44;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    __Vtemp_45 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_45;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    __Vtemp_46 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_46;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    __Vtemp_47 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_47;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__x = 1U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_48 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_48;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    __Vtemp_49 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_49;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    __Vtemp_50 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_50;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    __Vtemp_51 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_51;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    __Vtemp_52 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_52;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    __Vtemp_53 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_53;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    __Vtemp_54 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_54;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    __Vtemp_55 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_55;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__x = 2U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_56 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_56;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    __Vtemp_57 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_57;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    __Vtemp_58 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_58;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    __Vtemp_59 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_59;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    __Vtemp_60 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_60;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    __Vtemp_61 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_61;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    __Vtemp_62 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_62;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    __Vtemp_63 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_63;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__x = 3U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_64 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_64;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    __Vtemp_65 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_65;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    __Vtemp_66 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_66;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    __Vtemp_67 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_67;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    __Vtemp_68 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_68;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    __Vtemp_69 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_69;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    __Vtemp_70 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_70;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    __Vtemp_71 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_71;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__x = 4U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_72 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_72;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    __Vtemp_73 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_73;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    __Vtemp_74 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_74;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    __Vtemp_75 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_75;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    __Vtemp_76 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_76;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    __Vtemp_77 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_77;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    __Vtemp_78 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_78;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    __Vtemp_79 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_79;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__x = 5U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_80 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_80;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    __Vtemp_81 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_81;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    __Vtemp_82 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_82;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    __Vtemp_83 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_83;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    __Vtemp_84 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_84;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    __Vtemp_85 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_85;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    __Vtemp_86 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_86;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    __Vtemp_87 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_87;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__x = 6U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_88 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_88;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    __Vtemp_89 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_89;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    __Vtemp_90 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_90;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    __Vtemp_91 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_91;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    __Vtemp_92 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_92;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    __Vtemp_93 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_93;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    __Vtemp_94 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_94;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    __Vtemp_95 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_95;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__x = 7U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_96 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_96;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    __Vtemp_97 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_97;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    __Vtemp_98 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_98;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    __Vtemp_99 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_99;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    __Vtemp_100 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_100;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    __Vtemp_101 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_101;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    __Vtemp_102 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_102;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    __Vtemp_103 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_103;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__x = 8U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_104 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_104;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    __Vtemp_105 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_105;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    __Vtemp_106 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_106;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    __Vtemp_107 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_107;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    __Vtemp_108 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_108;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    __Vtemp_109 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_109;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    __Vtemp_110 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_110;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    __Vtemp_111 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_111;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__x = 9U;
    vlSelf->__PVT__my_pc = 0U;
    __Vtemp_112 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_112;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    __Vtemp_113 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_113;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    __Vtemp_114 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_114;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    __Vtemp_115 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_115;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    __Vtemp_116 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_116;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    __Vtemp_117 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_117;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    __Vtemp_118 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_118;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    __Vtemp_119 = ((IData)(4U) + vlSelf->__PVT__my_pc);
    vlSelf->__PVT__my_pc = __Vtemp_119;
    vlSelf->__PVT__my_update_en = 1U;
    vlSelf->__PVT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_task__51__update_val_f = vlSelf->__PVT__my_update_val;
    vlSelf->__Vtask_test_task__51__update_en_f = vlSelf->__PVT__my_update_en;
    vlSelf->__Vtask_test_task__51__PC_f = vlSelf->__PVT__my_pc;
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            388);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSelf->__PVT__update_en = vlSelf->__Vtask_test_task__51__update_en_f;
    vlSelf->__PVT__update_val = vlSelf->__Vtask_test_task__51__update_val_f;
    vlSelf->__PVT__PC = vlSelf->__Vtask_test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__PVT__prediction) 
                       != (IData)(vlSelf->__PVT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                          1,vlSelf->__PVT__prediction);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->__PVT__PC,1,(IData)(vlSelf->__PVT__update_val),
                      1,vlSelf->__PVT__prediction);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60f9ed__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "utb_BranchGShare.v", 
                                                            405);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk21__DOT__x = 0xaU;
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "utb_BranchGShare.v", 
                                            376);
    vlSymsp->TOP.__Vm_traceActivity[6U] = 1U;
    VL_FINISH_MT("utb_BranchGShare.v", 377, "");
    vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
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

VL_INLINE_OPT void Vtop_top___act_comb__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_comb__TOP__top__1\n"); );
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

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__1\n"); );
    // Body
    vlSelf->__PVT__prediction = vlSymsp->TOP__top__DUT.__PVT__prediction;
    if (((IData)(vlSelf->__PVT__prediction) ^ (IData)(vlSelf->__Vtogcov__prediction))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prediction = vlSelf->__PVT__prediction;
    }
}
