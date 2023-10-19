// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Body
    VL_WRITEF("Start of Testbench\n");
    vlSelf->top__DOT__imem_reqstream_rdy = 0U;
    vlSelf->top__DOT__imem_respstream_val = 0U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 0U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 0U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 0U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0U;
    vlSelf->top__DOT__br_cond_eq_X = 0U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    vlSelf->top__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 1U;
    vlSelf->top__DOT__mngr2proc_val = 1U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 1U;
    vlSelf->top__DOT__inst_D = 0xffffffffU;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    vlSelf->top__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       109);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x13U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       128);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 1U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0xfc002173U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       141);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xcU == (IData)(vlSelf->top__DOT__alu_fn_X)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("alu_fn_X is correct.  Expected: c, Actual: %x\n",
                          4,vlSelf->top__DOT__alu_fn_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("alu_fn_X is incorrect.  Expected: c, Actual: %x\n",
                      4,vlSelf->top__DOT__alu_fn_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 146, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       150);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x7c011073U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       165);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       166);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xbU == (IData)(vlSelf->top__DOT__alu_fn_X)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("alu_fn_X is correct.  Expected: b, Actual: %x\n",
                          4,vlSelf->top__DOT__alu_fn_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("alu_fn_X is incorrect.  Expected: b, Actual: %x\n",
                      4,vlSelf->top__DOT__alu_fn_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 170, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       174);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       176);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x2081b3U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       189);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       190);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0U == (IData)(vlSelf->top__DOT__alu_fn_X)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("alu_fn_X is correct.  Expected: 0, Actual: %x\n",
                          4,vlSelf->top__DOT__alu_fn_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("alu_fn_X is incorrect.  Expected: 0, Actual: %x\n",
                      4,vlSelf->top__DOT__alu_fn_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 194, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       198);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       200);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x402081b3U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       213);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       214);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U == (IData)(vlSelf->top__DOT__alu_fn_X)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("alu_fn_X is correct.  Expected: 1, Actual: %x\n",
                          4,vlSelf->top__DOT__alu_fn_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("alu_fn_X is incorrect.  Expected: 1, Actual: %x\n",
                      4,vlSelf->top__DOT__alu_fn_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 218, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       224);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x22081b3U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       237);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       238);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0U == (IData)(vlSelf->top__DOT__alu_fn_X)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("alu_fn_X is correct.  Expected: x, Actual: %x\n",
                          4,vlSelf->top__DOT__alu_fn_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("alu_fn_X is incorrect.  Expected: x, Actual: %x\n",
                      4,vlSelf->top__DOT__alu_fn_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 242, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       244);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       245);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 1U;
    vlSelf->top__DOT__inst_D = 0x13U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       249);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       251);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x20f1b3U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       264);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       265);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((2U == (IData)(vlSelf->top__DOT__alu_fn_X)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("alu_fn_X is correct.  Expected: 2, Actual: %x\n",
                          4,vlSelf->top__DOT__alu_fn_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("alu_fn_X is incorrect.  Expected: 2, Actual: %x\n",
                      4,vlSelf->top__DOT__alu_fn_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 269, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       272);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x20e1b3U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       287);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       288);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((3U == (IData)(vlSelf->top__DOT__alu_fn_X)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("alu_fn_X is correct.  Expected: 3, Actual: %x\n",
                          4,vlSelf->top__DOT__alu_fn_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("alu_fn_X is incorrect.  Expected: 3, Actual: %x\n",
                      4,vlSelf->top__DOT__alu_fn_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 292, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       295);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       297);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x20c1b3U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       310);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       311);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((4U == (IData)(vlSelf->top__DOT__alu_fn_X)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("alu_fn_X is correct.  Expected: 4, Actual: %x\n",
                          4,vlSelf->top__DOT__alu_fn_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("alu_fn_X is incorrect.  Expected: 4, Actual: %x\n",
                      4,vlSelf->top__DOT__alu_fn_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 315, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       318);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       320);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x20a1b3U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       333);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       334);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((5U == (IData)(vlSelf->top__DOT__alu_fn_X)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("alu_fn_X is correct.  Expected: 5, Actual: %x\n",
                          4,vlSelf->top__DOT__alu_fn_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("alu_fn_X is incorrect.  Expected: 5, Actual: %x\n",
                      4,vlSelf->top__DOT__alu_fn_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 338, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       341);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       343);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x20b1b3U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       356);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       357);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((6U == (IData)(vlSelf->top__DOT__alu_fn_X)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("alu_fn_X is correct.  Expected: 6, Actual: %x\n",
                          4,vlSelf->top__DOT__alu_fn_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("alu_fn_X is incorrect.  Expected: 6, Actual: %x\n",
                      4,vlSelf->top__DOT__alu_fn_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 361, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       364);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       366);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x4020d1b3U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       379);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((7U == (IData)(vlSelf->top__DOT__alu_fn_X)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("alu_fn_X is correct.  Expected: 7, Actual: %x\n",
                          4,vlSelf->top__DOT__alu_fn_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("alu_fn_X is incorrect.  Expected: 7, Actual: %x\n",
                      4,vlSelf->top__DOT__alu_fn_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 384, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       387);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       389);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x20d1b3U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       402);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       403);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((8U == (IData)(vlSelf->top__DOT__alu_fn_X)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("alu_fn_X is correct.  Expected: 8, Actual: %x\n",
                          4,vlSelf->top__DOT__alu_fn_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("alu_fn_X is incorrect.  Expected: 8, Actual: %x\n",
                      4,vlSelf->top__DOT__alu_fn_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 407, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       410);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       412);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x2091b3U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       425);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       426);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((9U == (IData)(vlSelf->top__DOT__alu_fn_X)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("alu_fn_X is correct.  Expected: 9, Actual: %x\n",
                          4,vlSelf->top__DOT__alu_fn_X);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("alu_fn_X is incorrect.  Expected: 9, Actual: %x\n",
                      4,vlSelf->top__DOT__alu_fn_X);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 430, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       433);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       435);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x308193U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       448);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       449);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == (IData)(vlSelf->top__DOT__imm_type_D)) 
                       & (0U == (IData)(vlSelf->top__DOT__alu_fn_X))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("imm_type_D and alu_fn_X is correct. Expected: 0, 0, Actual: %x, %x\n",
                          3,vlSelf->top__DOT__imm_type_D,
                          4,(IData)(vlSelf->top__DOT__alu_fn_X));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("imm_type_D or alu_fn_X is incorrect.Expected: 0, 0, Actual: %x, %x\n",
                      3,vlSelf->top__DOT__imm_type_D,
                      4,(IData)(vlSelf->top__DOT__alu_fn_X));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 453, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       456);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0xf0e193U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       471);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       472);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == (IData)(vlSelf->top__DOT__imm_type_D)) 
                       & (3U == (IData)(vlSelf->top__DOT__alu_fn_X))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("imm_type_D and alu_fn_X is correct. Expected: 0, 3, Actual: %x, %x\n",
                          3,vlSelf->top__DOT__imm_type_D,
                          4,(IData)(vlSelf->top__DOT__alu_fn_X));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("imm_type_D or alu_fn_X is incorrect.Expected: 0, 3, Actual: %x, %x\n",
                      3,vlSelf->top__DOT__imm_type_D,
                      4,(IData)(vlSelf->top__DOT__alu_fn_X));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 476, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       479);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       481);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0xff00f193U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       494);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       495);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == (IData)(vlSelf->top__DOT__imm_type_D)) 
                       & (2U == (IData)(vlSelf->top__DOT__alu_fn_X))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("imm_type_D and alu_fn_X is correct. Expected: 0, 2, Actual: %x, %x\n",
                          3,vlSelf->top__DOT__imm_type_D,
                          4,(IData)(vlSelf->top__DOT__alu_fn_X));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("imm_type_D or alu_fn_X is incorrect.Expected: 0, 2, Actual: %x, %x\n",
                      3,vlSelf->top__DOT__imm_type_D,
                      4,(IData)(vlSelf->top__DOT__alu_fn_X));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 499, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       502);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       504);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x500c193U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       517);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       518);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == (IData)(vlSelf->top__DOT__imm_type_D)) 
                       & (4U == (IData)(vlSelf->top__DOT__alu_fn_X))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("imm_type_D and alu_fn_X is correct. Expected: 0, 4, Actual: %x, %x\n",
                          3,vlSelf->top__DOT__imm_type_D,
                          4,(IData)(vlSelf->top__DOT__alu_fn_X));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("imm_type_D or alu_fn_X is incorrect.Expected: 0, 4, Actual: %x, %x\n",
                      3,vlSelf->top__DOT__imm_type_D,
                      4,(IData)(vlSelf->top__DOT__alu_fn_X));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 522, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       525);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       527);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x90a193U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       540);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       541);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == (IData)(vlSelf->top__DOT__imm_type_D)) 
                       & (5U == (IData)(vlSelf->top__DOT__alu_fn_X))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("imm_type_D and alu_fn_X is correct. Expected: 0, 5, Actual: %x, %x\n",
                          3,vlSelf->top__DOT__imm_type_D,
                          4,(IData)(vlSelf->top__DOT__alu_fn_X));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("imm_type_D or alu_fn_X is incorrect.Expected: 0, 5, Actual: %x, %x\n",
                      3,vlSelf->top__DOT__imm_type_D,
                      4,(IData)(vlSelf->top__DOT__alu_fn_X));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 545, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       548);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       550);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x80b193U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       563);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       564);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == (IData)(vlSelf->top__DOT__imm_type_D)) 
                       & (6U == (IData)(vlSelf->top__DOT__alu_fn_X))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("imm_type_D and alu_fn_X is correct. Expected: 0, 6, Actual: %x, %x\n",
                          3,vlSelf->top__DOT__imm_type_D,
                          4,(IData)(vlSelf->top__DOT__alu_fn_X));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("imm_type_D or alu_fn_X is incorrect.Expected: 0, 6, Actual: %x, %x\n",
                      3,vlSelf->top__DOT__imm_type_D,
                      4,(IData)(vlSelf->top__DOT__alu_fn_X));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 568, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       571);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       573);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x4020d193U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       586);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       587);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((5U == (IData)(vlSelf->top__DOT__imm_type_D)) 
                       & (7U == (IData)(vlSelf->top__DOT__alu_fn_X))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("imm_type_D and alu_fn_X is correct. Expected: 5, 7, Actual: %x, %x\n",
                          3,vlSelf->top__DOT__imm_type_D,
                          4,(IData)(vlSelf->top__DOT__alu_fn_X));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("imm_type_D or alu_fn_X is incorrect.Expected: 5, 7, Actual: %x, %x\n",
                      3,vlSelf->top__DOT__imm_type_D,
                      4,(IData)(vlSelf->top__DOT__alu_fn_X));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 591, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       594);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       596);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x20d193U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       609);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       610);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((5U == (IData)(vlSelf->top__DOT__imm_type_D)) 
                       & (8U == (IData)(vlSelf->top__DOT__alu_fn_X))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("imm_type_D and alu_fn_X is correct. Expected: 5, 8, Actual: %x, %x\n",
                          3,vlSelf->top__DOT__imm_type_D,
                          4,(IData)(vlSelf->top__DOT__alu_fn_X));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("imm_type_D or alu_fn_X is incorrect.Expected: 5, 8, Actual: %x, %x\n",
                      3,vlSelf->top__DOT__imm_type_D,
                      4,(IData)(vlSelf->top__DOT__alu_fn_X));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 614, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       617);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       619);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x209193U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       632);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       633);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((5U == (IData)(vlSelf->top__DOT__imm_type_D)) 
                       & (9U == (IData)(vlSelf->top__DOT__alu_fn_X))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("imm_type_D and alu_fn_X is correct. Expected: 5, 9, Actual: %x, %x\n",
                          3,vlSelf->top__DOT__imm_type_D,
                          4,(IData)(vlSelf->top__DOT__alu_fn_X));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("imm_type_D or alu_fn_X is incorrect.Expected: 5, 9, Actual: %x, %x\n",
                      3,vlSelf->top__DOT__imm_type_D,
                      4,(IData)(vlSelf->top__DOT__alu_fn_X));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 637, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       640);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       642);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x1011b7U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       655);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       656);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((3U == (IData)(vlSelf->top__DOT__imm_type_D)) 
                       & (0xcU == (IData)(vlSelf->top__DOT__alu_fn_X))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("imm_type_D and alu_fn_X is correct. Expected: 3, c, Actual: %x, %x\n",
                          3,vlSelf->top__DOT__imm_type_D,
                          4,(IData)(vlSelf->top__DOT__alu_fn_X));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("imm_type_D or alu_fn_X is incorrect.Expected: 3, c, Actual: %x, %x\n",
                      3,vlSelf->top__DOT__imm_type_D,
                      4,(IData)(vlSelf->top__DOT__alu_fn_X));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 660, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       663);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       665);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x20197U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       678);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       679);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((3U == (IData)(vlSelf->top__DOT__imm_type_D)) 
                       & (0U == (IData)(vlSelf->top__DOT__alu_fn_X))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("imm_type_D and alu_fn_X is correct. Expected: 3, 0, Actual: %x, %x\n",
                          3,vlSelf->top__DOT__imm_type_D,
                          4,(IData)(vlSelf->top__DOT__alu_fn_X));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("imm_type_D or alu_fn_X is incorrect.Expected: 3, 0, Actual: %x, %x\n",
                      3,vlSelf->top__DOT__imm_type_D,
                      4,(IData)(vlSelf->top__DOT__alu_fn_X));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 683, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       686);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       688);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 1U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x12183U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       701);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       702);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY(vlSelf->top__DOT__dmem_reqstream_msg_type)) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("dmem_reqstream_msg_type is incorrect. Expected: 0, Actual: %x\n",
                          1,vlSelf->top__DOT__dmem_reqstream_msg_type);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcAltCtrl.v", 706, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("dmem_reqstream_msg_type is correct. Expected: 0, Actual: %x\n",
                      1,vlSelf->top__DOT__dmem_reqstream_msg_type);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       709);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       711);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 1U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x312023U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       724);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       725);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(vlSelf->top__DOT__dmem_reqstream_msg_type)) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("dmem_reqstream_msg_type is correct. Expected: 1, Actual: %x\n",
                          1,vlSelf->top__DOT__dmem_reqstream_msg_type);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("dmem_reqstream_msg_type is incorrect. Expected: 1, Actual: %x\n",
                      1,vlSelf->top__DOT__dmem_reqstream_msg_type);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 729, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       732);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 1U;
    vlSelf->top__DOT__inst_D = 0x13U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       737);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       739);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x14001efU;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VtrigSched_h3d404911__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       752);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((2U == (IData)(vlSelf->top__DOT__pc_sel_F)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_sel_F is correct. Expected: 2, Actual: %x\n",
                          2,vlSelf->top__DOT__pc_sel_F);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_sel_F is incorrect. Expected: 2, Actual: %x\n",
                      2,vlSelf->top__DOT__pc_sel_F);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 756, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       758);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       759);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__inst_D = 0x13U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       762);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       764);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x88081e7U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       777);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404911__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       778);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((3U == (IData)(vlSelf->top__DOT__pc_sel_F)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_sel_F is correct. Expected: 3, Actual: %x\n",
                          2,vlSelf->top__DOT__pc_sel_F);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_sel_F is incorrect. Expected: 3, Actual: %x\n",
                      2,vlSelf->top__DOT__pc_sel_F);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 782, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       784);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       785);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__inst_D = 0x13U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       788);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       790);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x208a63U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       803);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404911__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       804);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U == (IData)(vlSelf->top__DOT__pc_sel_F)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_sel_F is correct. Expected: 1, Actual: %x\n",
                          2,vlSelf->top__DOT__pc_sel_F);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_sel_F is incorrect. Expected: 1, Actual: %x\n",
                      2,vlSelf->top__DOT__pc_sel_F);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 808, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       810);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       811);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__inst_D = 0x13U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       814);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       816);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x20da63U;
    vlSelf->top__DOT__br_cond_eq_X = 0U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       829);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404911__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       830);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U == (IData)(vlSelf->top__DOT__pc_sel_F)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_sel_F is correct. Expected: 1, Actual: %x\n",
                          2,vlSelf->top__DOT__pc_sel_F);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_sel_F is incorrect. Expected: 1, Actual: %x\n",
                      2,vlSelf->top__DOT__pc_sel_F);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 834, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       836);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       837);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__inst_D = 0x13U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       840);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       842);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x20fa63U;
    vlSelf->top__DOT__br_cond_eq_X = 0U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       855);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404911__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       856);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U == (IData)(vlSelf->top__DOT__pc_sel_F)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_sel_F is correct. Expected: 1, Actual: %x\n",
                          2,vlSelf->top__DOT__pc_sel_F);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_sel_F is incorrect. Expected: 1, Actual: %x\n",
                      2,vlSelf->top__DOT__pc_sel_F);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 860, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       862);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       863);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__inst_D = 0x13U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       866);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       868);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x20ca63U;
    vlSelf->top__DOT__br_cond_eq_X = 0U;
    vlSelf->top__DOT__br_cond_lt_X = 1U;
    vlSelf->top__DOT__br_cond_ltu_X = 1U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       881);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404911__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       882);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U == (IData)(vlSelf->top__DOT__pc_sel_F)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_sel_F is correct. Expected: 1, Actual: %x\n",
                          2,vlSelf->top__DOT__pc_sel_F);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_sel_F is incorrect. Expected: 1, Actual: %x\n",
                      2,vlSelf->top__DOT__pc_sel_F);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 886, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       888);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       889);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__inst_D = 0x13U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       892);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       894);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x116a63U;
    vlSelf->top__DOT__br_cond_eq_X = 0U;
    vlSelf->top__DOT__br_cond_lt_X = 1U;
    vlSelf->top__DOT__br_cond_ltu_X = 1U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       907);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404911__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       908);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U == (IData)(vlSelf->top__DOT__pc_sel_F)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_sel_F is correct. Expected: 1, Actual: %x\n",
                          2,vlSelf->top__DOT__pc_sel_F);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_sel_F is incorrect. Expected: 1, Actual: %x\n",
                      2,vlSelf->top__DOT__pc_sel_F);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 912, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       914);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       915);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__inst_D = 0x13U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       918);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       920);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x209a63U;
    vlSelf->top__DOT__br_cond_eq_X = 0U;
    vlSelf->top__DOT__br_cond_lt_X = 1U;
    vlSelf->top__DOT__br_cond_ltu_X = 1U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       933);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404911__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       934);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U == (IData)(vlSelf->top__DOT__pc_sel_F)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pc_sel_F is correct. Expected: 1, Actual: %x\n",
                          2,vlSelf->top__DOT__pc_sel_F);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pc_sel_F is incorrect. Expected: 1, Actual: %x\n",
                      2,vlSelf->top__DOT__pc_sel_F);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 938, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       940);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       941);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__inst_D = 0x13U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       944);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       946);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x100b7U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       959);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       960);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x2008113U;
    co_await vlSelf->__VtrigSched_h3d404911__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       963);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U == (IData)(vlSelf->top__DOT__op1_byp_sel_D)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op1_byp_sel_D is correct.  Expected: 1, Actual: %x\n",
                          2,vlSelf->top__DOT__op1_byp_sel_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op1_byp_sel_D is incorrect.  Expected: 1, Actual: %x\n",
                      2,vlSelf->top__DOT__op1_byp_sel_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 967, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       969);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       970);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__inst_D = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       973);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       975);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x20137U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       988);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       989);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x208133U;
    co_await vlSelf->__VtrigSched_h3d404911__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       992);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U == (IData)(vlSelf->top__DOT__op2_byp_sel_D)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("op2_byp_sel_D is correct.  Expected: 1, Actual: %x\n",
                          2,vlSelf->top__DOT__op2_byp_sel_D);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("op2_byp_sel_D is incorrect.  Expected: 1, Actual: %x\n",
                      2,vlSelf->top__DOT__op2_byp_sel_D);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 996, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       998);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       999);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__inst_D = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1002);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1004);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 1U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0xa103U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1017);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1018);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x2010113U;
    co_await vlSelf->__VtrigSched_h3d404911__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1021);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY(vlSelf->top__DOT__reg_en_D)) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("reg_en_D is incorrect.  Expected: 0, Actual: %b\n",
                          1,vlSelf->top__DOT__reg_en_D);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("reg_en_D is correct.  Expected: 0, Actual: %b\n",
                      1,vlSelf->top__DOT__reg_en_D);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1027);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1028);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__inst_D = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1032);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1034);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 0U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x12183U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1047);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1048);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__inst_D = 0x13U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1050);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(vlSelf->top__DOT__DUT__DOT__stall_X)) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("reg_en_X is correct.  Expected: 0, Actual: %b\n",
                          1,(1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("reg_en_X is incorrect.  Expected: 0, Actual: %b\n",
                      1,(1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 1054, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1056);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1057);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1059);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1060);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1066);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1068);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 0U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 0U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x22081b3U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1081);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__inst_D = 0x13U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1083);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY(vlSelf->top__DOT__reg_en_D)) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("reg_en_D is incorrect.  Expected: 0, Actual: %b\n",
                          1,vlSelf->top__DOT__reg_en_D);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcAltCtrl.v", 1087, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("reg_en_D is correct.  Expected: 0, Actual: %b\n",
                      1,vlSelf->top__DOT__reg_en_D);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1089);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1090);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1093);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1095);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 1U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 0U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0x7c019073U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1108);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__inst_D = 0x13U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(vlSelf->top__DOT__DUT__DOT__stall_W)) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("reg_en_W is correct.  Expected: 0, Actual: %b\n",
                          1,(1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("reg_en_W is incorrect.  Expected: 0, Actual: %b\n",
                      1,(1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcAltCtrl.v", 1115, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1117);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1122);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 1U;
    vlSelf->top__DOT__mngr2proc_val = 0U;
    vlSelf->top__DOT__proc2mngr_rdy = 0U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 0U;
    vlSelf->top__DOT__inst_D = 0xfc002173U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY(vlSelf->top__DOT__reg_en_D)) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("reg_en_D is incorrect.  Expected: 0, Actual: %b\n",
                          1,vlSelf->top__DOT__reg_en_D);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcAltCtrl.v", 1140, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("reg_en_D is correct.  Expected: 0, Actual: %b\n",
                      1,vlSelf->top__DOT__reg_en_D);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1143);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__inst_D = 0x13U;
    vlSelf->top__DOT__mngr2proc_val = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1153);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 1U;
    vlSelf->top__DOT__mngr2proc_val = 1U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 1U;
    vlSelf->top__DOT__inst_D = 0x7c111073U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    vlSelf->top__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1168);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1170);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 1U;
    vlSelf->top__DOT__mngr2proc_val = 1U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 1U;
    vlSelf->top__DOT__inst_D = 0xfc102173U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    vlSelf->top__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1185);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_ProcAltCtrl.v", 
                                                       1187);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    vlSelf->top__DOT__imem_respstream_val = 1U;
    vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    vlSelf->top__DOT__dmem_respstream_val = 1U;
    vlSelf->top__DOT__mngr2proc_val = 1U;
    vlSelf->top__DOT__proc2mngr_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_reqstream_rdy = 1U;
    vlSelf->top__DOT__IntMulAlt_respstream_val = 1U;
    vlSelf->top__DOT__inst_D = 0xf1402173U;
    vlSelf->top__DOT__br_cond_eq_X = 1U;
    vlSelf->top__DOT__br_cond_lt_X = 0U;
    vlSelf->top__DOT__br_cond_ltu_X = 0U;
    vlSelf->top__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_ProcAltCtrl.v", 
                                       1205);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("utb_ProcAltCtrl.v", 1207, "");
    vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_hb10c38c5__0;
    top__DOT__DUT__DOT____VdfgTmp_hb10c38c5__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h3c243d67__0;
    top__DOT__DUT__DOT____VdfgTmp_h3c243d67__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0;
    top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0;
    top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_hd3c00747__0;
    top__DOT__DUT__DOT____VdfgTmp_hd3c00747__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0;
    top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0 = 0;
    // Body
    if ((1U & (~ ((((((((0x13U == vlSelf->top__DOT__inst_D) 
                        | (0x2073U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                       | (0x1073U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x33U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                     | (0x40000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) 
                    | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                   | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                  | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)))))) {
        if ((1U & (~ ((((((((0x4033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__inst_D)) 
                            | (0x2033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__inst_D))) 
                           | (0x3033U == (0xfe00707fU 
                                          & vlSelf->top__DOT__inst_D))) 
                          | (0x40005033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) 
                         | (0x5033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) 
                        | (0x1033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__inst_D))) 
                       | (0x13U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x6013U == (0x707fU & vlSelf->top__DOT__inst_D)))))) {
            if ((1U & (~ ((((((((0x7013U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D)) 
                                | (0x4013U == (0x707fU 
                                               & vlSelf->top__DOT__inst_D))) 
                               | (0x2013U == (0x707fU 
                                              & vlSelf->top__DOT__inst_D))) 
                              | (0x3013U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) 
                             | (0x40005013U == (0xfe00707fU 
                                                & vlSelf->top__DOT__inst_D))) 
                            | (0x5013U == (0xfe00707fU 
                                           & vlSelf->top__DOT__inst_D))) 
                           | (0x1013U == (0xfe00707fU 
                                          & vlSelf->top__DOT__inst_D))) 
                          | (0x37U == (0x7fU & vlSelf->top__DOT__inst_D)))))) {
                if (((((((((0x17U == (0x7fU & vlSelf->top__DOT__inst_D)) 
                           | (0x2003U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                          | (0x2023U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                         | (0x6fU == (0x7fU & vlSelf->top__DOT__inst_D))) 
                        | (0x67U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                       | (0x1063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x63U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                     | (0x4063U == (0x707fU & vlSelf->top__DOT__inst_D)))) {
                    if ((0x17U != (0x7fU & vlSelf->top__DOT__inst_D))) {
                        if ((0x2003U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                            if ((0x2023U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x2023U != (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                if ((0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x6fU != (0x7fU 
                                               & vlSelf->top__DOT__inst_D))) {
                                    if ((0x67U == (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x67U != (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))) {
                                        if ((0x1063U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0x1063U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                            if ((0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                                vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            if ((0x63U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                                vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x2003U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x17U == (0x7fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ ((((((((0x17U == (0x7fU 
                                               & vlSelf->top__DOT__inst_D)) 
                                    | (0x2003U == (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                   | (0x2023U == (0x707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst_D))) 
                                 | (0x67U == (0x707fU 
                                              & vlSelf->top__DOT__inst_D))) 
                                | (0x1063U == (0x707fU 
                                               & vlSelf->top__DOT__inst_D))) 
                               | (0x63U == (0x707fU 
                                            & vlSelf->top__DOT__inst_D))) 
                              | (0x4063U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D)))))) {
                    if ((0x6063U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((0x6063U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                        if ((0x5063U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0x5063U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                            if ((0x7063U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x7063U != (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if (((((((((0x7013U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                       | (0x4013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x2013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                     | (0x3013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlSelf->top__DOT__inst_D))) 
                   | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                  | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                 | (0x37U == (0x7fU & vlSelf->top__DOT__inst_D)))) {
                if ((0x7013U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                    if ((0x4013U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                        if ((0x2013U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                            if ((0x3013U != (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                if ((0x40005013U != 
                                     (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                                    if ((0x5013U != 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__inst_D))) {
                                        if ((0x1013U 
                                             != (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0x1013U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x5013U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x40005013U == 
                                     (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x3013U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x2013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x4013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x7013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if (((((((((0x4033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                   | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                  | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                 | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
               | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
              | (0x13U == (0x707fU & vlSelf->top__DOT__inst_D))) 
             | (0x6013U == (0x707fU & vlSelf->top__DOT__inst_D)))) {
            if ((0x4033U != (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                if ((0x2033U != (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                    if ((0x3033U != (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                        if ((0x40005033U != (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                            if ((0x5033U != (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                if ((0x1033U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    if ((0x13U != (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x13U == (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x1033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x5033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x40005033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((((((((0x13U == vlSelf->top__DOT__inst_D) 
               | (0x2073U == (0x707fU & vlSelf->top__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->top__DOT__inst_D))) 
             | (0x33U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
            | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
           | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
          | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
         | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)))) {
        if ((0x13U != vlSelf->top__DOT__inst_D)) {
            if ((0x2073U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                if ((0x1073U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                    if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((0x33U != (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                        if ((0x40000033U != (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                            if ((0x2000033U == (0xfe00707fU 
                                                & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x2000033U != (0xfe00707fU 
                                                & vlSelf->top__DOT__inst_D))) {
                                if ((0x7033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x7033U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((0x40000033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((0x1073U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x2073U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x13U == vlSelf->top__DOT__inst_D)) {
            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__op2_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
        } else if ((0x2073U == (0x707fU & vlSelf->top__DOT__inst_D))) {
            vlSelf->top__DOT__op2_sel_D = 2U;
            vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0xcU;
        } else {
            vlSelf->top__DOT__op2_sel_D = 0U;
            if ((0x1073U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0xbU;
            } else if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 1U;
            } else if ((0x2000033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
            } else {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D 
                    = ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))
                        ? 2U : 3U);
            }
        }
        vlSelf->top__DOT__DUT__DOT__rf_wen_D = ((0x13U 
                                                 != vlSelf->top__DOT__inst_D) 
                                                & ((0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D)) 
                                                   | (0x1073U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D))));
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
        vlSelf->top__DOT__imm_type_D = 0U;
        vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
        vlSelf->top__DOT__DUT__DOT__rs1_en_D = ((0x13U 
                                                 != vlSelf->top__DOT__inst_D) 
                                                & (0x2073U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__inst_D)));
        vlSelf->top__DOT__DUT__DOT__rs2_en_D = ((0x13U 
                                                 != vlSelf->top__DOT__inst_D) 
                                                & ((0x2073U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D)) 
                                                   & (0x1073U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D))));
    } else {
        vlSelf->top__DOT__DUT__DOT__rf_wen_D = ((((
                                                   (((((0x4033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       | (0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (((((((((0x7013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)) 
                                                          | (0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x40005013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x5013U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (((((((((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__inst_D)) 
                                                             | (0x2003U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            | (0x2023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__inst_D))) 
                                                           | (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x63U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      & ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__inst_D)) 
                                                         | ((0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D)) 
                                                            | ((0x2023U 
                                                                != 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D)) 
                                                               & ((0x6fU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->top__DOT__inst_D)) 
                                                                  | (0x67U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->top__DOT__inst_D)))))))));
        if (((((((((0x4033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                   | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                  | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                 | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
               | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
              | (0x13U == (0x707fU & vlSelf->top__DOT__inst_D))) 
             | (0x6013U == (0x707fU & vlSelf->top__DOT__inst_D)))) {
            vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
            if ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__op2_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 4U;
            } else if ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__op2_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 5U;
            } else if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__op2_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 6U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__op2_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 7U;
            } else if ((0x5033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__op2_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 8U;
            } else if ((0x1033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__op2_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 9U;
            } else {
                vlSelf->top__DOT__op2_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D 
                    = ((0x13U == (0x707fU & vlSelf->top__DOT__inst_D))
                        ? 0U : 3U);
            }
            vlSelf->top__DOT__imm_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__rs2_en_D = 
                ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                 | ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                    | ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                       | ((0x40005033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__inst_D)) 
                          | ((0x5033U == (0xfe00707fU 
                                          & vlSelf->top__DOT__inst_D)) 
                             | (0x1033U == (0xfe00707fU 
                                            & vlSelf->top__DOT__inst_D)))))));
        } else {
            if (((((((((0x7013U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                       | (0x4013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x2013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                     | (0x3013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlSelf->top__DOT__inst_D))) 
                   | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                  | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                 | (0x37U == (0x7fU & vlSelf->top__DOT__inst_D)))) {
                vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__op2_sel_D = 1U;
                if ((0x7013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 2U;
                } else if ((0x4013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 4U;
                } else if ((0x2013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 5U;
                } else if ((0x3013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 6U;
                } else if ((0x40005013U == (0xfe00707fU 
                                            & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 5U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 7U;
                } else if ((0x5013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 5U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 8U;
                } else if ((0x1013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 5U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 9U;
                } else {
                    vlSelf->top__DOT__imm_type_D = 3U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0xcU;
                }
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
            } else if (((((((((0x17U == (0x7fU & vlSelf->top__DOT__inst_D)) 
                              | (0x2003U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) 
                             | (0x2023U == (0x707fU 
                                            & vlSelf->top__DOT__inst_D))) 
                            | (0x6fU == (0x7fU & vlSelf->top__DOT__inst_D))) 
                           | (0x67U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                          | (0x1063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                         | (0x63U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                        | (0x4063U == (0x707fU & vlSelf->top__DOT__inst_D)))) {
                if ((0x17U == (0x7fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                    vlSelf->top__DOT__op2_sel_D = 1U;
                    vlSelf->top__DOT__imm_type_D = 3U;
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
                } else if ((0x2003U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 1U;
                    vlSelf->top__DOT__op2_sel_D = 1U;
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
                } else if ((0x2023U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 2U;
                    vlSelf->top__DOT__op2_sel_D = 1U;
                    vlSelf->top__DOT__imm_type_D = 1U;
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
                } else {
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                    if ((0x6fU == (0x7fU & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__op2_sel_D = 0U;
                        vlSelf->top__DOT__imm_type_D = 4U;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 7U;
                    } else if ((0x67U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__imm_type_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0xaU;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 8U;
                    } else {
                        vlSelf->top__DOT__op2_sel_D = 0U;
                        vlSelf->top__DOT__imm_type_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D 
                            = ((0x1063U == (0x707fU 
                                            & vlSelf->top__DOT__inst_D))
                                ? 1U : ((0x63U == (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))
                                         ? 2U : 3U));
                    }
                }
            } else {
                vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__op2_sel_D = 0U;
                if ((0x6063U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 2U;
                    vlSelf->top__DOT__DUT__DOT__br_type_D = 4U;
                } else if ((0x5063U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 2U;
                    vlSelf->top__DOT__DUT__DOT__br_type_D = 5U;
                } else if ((0x7063U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 2U;
                    vlSelf->top__DOT__DUT__DOT__br_type_D = 6U;
                } else {
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
                }
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
            }
            vlSelf->top__DOT__DUT__DOT__rs2_en_D = 
                ((~ ((((((((0x7013U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                           | (0x4013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                          | (0x2013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                         | (0x3013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                        | (0x40005013U == (0xfe00707fU 
                                           & vlSelf->top__DOT__inst_D))) 
                       | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                     | (0x37U == (0x7fU & vlSelf->top__DOT__inst_D)))) 
                 & (((((((((0x17U == (0x7fU & vlSelf->top__DOT__inst_D)) 
                           | (0x2003U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                          | (0x2023U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                         | (0x6fU == (0x7fU & vlSelf->top__DOT__inst_D))) 
                        | (0x67U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                       | (0x1063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x63U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                     | (0x4063U == (0x707fU & vlSelf->top__DOT__inst_D)))
                     ? ((0x17U != (0x7fU & vlSelf->top__DOT__inst_D)) 
                        & ((0x2003U != (0x707fU & vlSelf->top__DOT__inst_D)) 
                           & ((0x2023U == (0x707fU 
                                           & vlSelf->top__DOT__inst_D)) 
                              | ((0x6fU != (0x7fU & vlSelf->top__DOT__inst_D)) 
                                 & (0x67U != (0x707fU 
                                              & vlSelf->top__DOT__inst_D))))))
                     : ((0x6063U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                        | ((0x5063U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                           | (0x7063U == (0x707fU & vlSelf->top__DOT__inst_D))))));
        }
        vlSelf->top__DOT__DUT__DOT__rs1_en_D = ((((
                                                   (((((0x4033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       | (0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (((((((((0x7013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)) 
                                                          | (0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x40005013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x5013U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (((((((((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__inst_D)) 
                                                             | (0x2003U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            | (0x2023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__inst_D))) 
                                                           | (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x63U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__inst_D)))
                                                       ? 
                                                      ((0x17U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       & ((0x2003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)) 
                                                          | ((0x2023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D)) 
                                                             | (0x6fU 
                                                                != 
                                                                (0x7fU 
                                                                 & vlSelf->top__DOT__inst_D)))))
                                                       : 
                                                      ((0x6063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       | ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)) 
                                                          | (0x7063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D)))))));
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__imem_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy 
            = vlSelf->top__DOT__imem_reqstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_val))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_val 
            = vlSelf->top__DOT__imem_respstream_val;
    }
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy 
            = vlSelf->top__DOT__dmem_reqstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__dmem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_val))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_val 
            = vlSelf->top__DOT__dmem_respstream_val;
    }
    if (((IData)(vlSelf->top__DOT__mngr2proc_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_val))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_val 
            = vlSelf->top__DOT__mngr2proc_val;
    }
    if (((IData)(vlSelf->top__DOT__proc2mngr_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_rdy 
            = vlSelf->top__DOT__proc2mngr_rdy;
    }
    if (((IData)(vlSelf->top__DOT__IntMulAlt_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__IntMulAlt_reqstream_rdy))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__IntMulAlt_reqstream_rdy 
            = vlSelf->top__DOT__IntMulAlt_reqstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__IntMulAlt_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__IntMulAlt_respstream_val))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__IntMulAlt_respstream_val 
            = vlSelf->top__DOT__IntMulAlt_respstream_val;
    }
    if (((IData)(vlSelf->top__DOT__br_cond_eq_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_eq_X))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_eq_X = vlSelf->top__DOT__br_cond_eq_X;
    }
    if (((IData)(vlSelf->top__DOT__br_cond_lt_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_lt_X))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_lt_X = vlSelf->top__DOT__br_cond_lt_X;
    }
    if (((IData)(vlSelf->top__DOT__br_cond_ltu_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_ltu_X))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_ltu_X 
            = vlSelf->top__DOT__br_cond_ltu_X;
    }
    vlSelf->top__DOT__op1_sel_D = ((~ ((((((((0x13U 
                                              == vlSelf->top__DOT__inst_D) 
                                             | (0x2073U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                            | (0x1073U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                           | (0x33U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                          | (0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                         | (0x2000033U 
                                            == (0xfe00707fU 
                                                & vlSelf->top__DOT__inst_D))) 
                                        | (0x7033U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__inst_D))) 
                                       | (0x6033U == 
                                          (0xfe00707fU 
                                           & vlSelf->top__DOT__inst_D)))) 
                                   & ((~ ((((((((0x4033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D)) 
                                                | (0x2033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x3033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (0x40005033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                             | (0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                            | (0x1033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                           | (0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                          | (0x6013U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_D)))) 
                                      & ((~ (((((((
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D)) 
                                                   | (0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x3013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (0x40005013U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x5013U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (0x1013U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                             | (0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__inst_D)))) 
                                         & (((((((((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__inst_D)) 
                                                   | (0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x1063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                             | (0x4063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                            & (0x17U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__inst_D))))));
    vlSelf->top__DOT__DUT__DOT__inst_val_D = ((((((
                                                   (((0x13U 
                                                      == vlSelf->top__DOT__inst_D) 
                                                     | (0x2073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x1073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x33U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x40000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x6033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (((((((((0x4033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D)) 
                                                        | (0x2033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x3033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x1033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (((((((((0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D)) 
                                                           | (0x4013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x2013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x40005013U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x5013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x1013U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (((((((((0x17U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->top__DOT__inst_D)) 
                                                              | (0x2003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__inst_D))) 
                                                             | (0x2023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            | (0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->top__DOT__inst_D))) 
                                                           | (0x67U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x1063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x63U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | ((0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)) 
                                                          | ((0x5063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D)) 
                                                             | (0x7063U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D))))))));
    vlSelf->top__DOT__DUT__DOT__wb_result_sel_D = (
                                                   (~ 
                                                    ((((((((0x13U 
                                                            == vlSelf->top__DOT__inst_D) 
                                                           | (0x2073U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x1073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x33U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x40000033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x2000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x7033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x6033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D)))) 
                                                   & ((~ 
                                                       ((((((((0x4033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__inst_D)) 
                                                              | (0x2033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->top__DOT__inst_D))) 
                                                             | (0x3033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            | (0x40005033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__inst_D))) 
                                                           | (0x5033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x1033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x13U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x6013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)))) 
                                                      & ((~ 
                                                          ((((((((0x7013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__inst_D)) 
                                                                 | (0x4013U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top__DOT__inst_D))) 
                                                                | (0x2013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__inst_D))) 
                                                               | (0x3013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__inst_D))) 
                                                              | (0x40005013U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->top__DOT__inst_D))) 
                                                             | (0x5013U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            | (0x1013U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__inst_D))) 
                                                           | (0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__inst_D)))) 
                                                         & (((((((((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->top__DOT__inst_D)) 
                                                                   | (0x2003U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->top__DOT__inst_D))) 
                                                                  | (0x2023U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->top__DOT__inst_D))) 
                                                                 | (0x6fU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->top__DOT__inst_D))) 
                                                                | (0x67U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__inst_D))) 
                                                               | (0x1063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__inst_D))) 
                                                              | (0x63U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__inst_D))) 
                                                             | (0x4063U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            & ((0x17U 
                                                                != 
                                                                (0x7fU 
                                                                 & vlSelf->top__DOT__inst_D)) 
                                                               & (0x2003U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__inst_D)))))));
    vlSelf->top__DOT__DUT__DOT__csrw_D = (((((((((0x13U 
                                                  == vlSelf->top__DOT__inst_D) 
                                                 | (0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (0x1073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (0x40000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                             | (0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                            | (0x7033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                           | (0x6033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                          & ((0x13U 
                                              != vlSelf->top__DOT__inst_D) 
                                             & ((0x2073U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__inst_D)) 
                                                & (0x1073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__inst_D)))));
    if ((1U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffeU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (1U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((2U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffdU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (2U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((4U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffbU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (4U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((8U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffff7U 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (8U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffefU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffdfU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffbfU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x80U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffff7fU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x100U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffeffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x100U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x200U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffdffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x200U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x400U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffbffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x400U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x800U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffff7ffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x800U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffefffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x1000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffdfffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x2000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffbfffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x4000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffff7fffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x8000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffeffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffdffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffbffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfff7ffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffefffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x100000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffdfffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x200000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffbfffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x400000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xff7fffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x800000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfeffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x1000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfdffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x2000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfbffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x4000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xf7ffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x8000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xefffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xdfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xbfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if (((vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0x7fffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    vlSelf->top__DOT__DUT__DOT__ostall_F = ((~ (IData)(vlSelf->top__DOT__imem_respstream_val)) 
                                            & (IData)(vlSelf->top__DOT__DUT__DOT__val_F));
    vlSelf->top__DOT__DUT__DOT__pc_redirect_X = (1U 
                                                 & (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                     & (1U 
                                                        == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                     ? 
                                                    (~ (IData)(vlSelf->top__DOT__br_cond_eq_X))
                                                     : 
                                                    (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                      & (2U 
                                                         == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                      ? (IData)(vlSelf->top__DOT__br_cond_eq_X)
                                                      : 
                                                     (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                       & (3U 
                                                          == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                       ? (IData)(vlSelf->top__DOT__br_cond_lt_X)
                                                       : 
                                                      (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                        & (4U 
                                                           == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                        ? (IData)(vlSelf->top__DOT__br_cond_ltu_X)
                                                        : 
                                                       (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                         & (5U 
                                                            == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                         ? 
                                                        (~ (IData)(vlSelf->top__DOT__br_cond_lt_X))
                                                         : 
                                                        (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                          & (6U 
                                                             == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                          ? 
                                                         (~ (IData)(vlSelf->top__DOT__br_cond_ltu_X))
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                          & (8U 
                                                             == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X))))))))));
    vlSelf->top__DOT__DUT__DOT__ostall_IntMulAlt_D 
        = ((~ (IData)(vlSelf->top__DOT__IntMulAlt_reqstream_rdy)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__val_D));
    vlSelf->top__DOT__DUT__DOT__csrr_D = (((((((((0x13U 
                                                  == vlSelf->top__DOT__inst_D) 
                                                 | (0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (0x1073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (0x40000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                             | (0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                            | (0x7033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                           | (0x6033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                          & ((0x13U 
                                              != vlSelf->top__DOT__inst_D) 
                                             & (0x2073U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))));
    vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
           & ((~ (IData)(vlSelf->top__DOT__dmem_reqstream_rdy)) 
              & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))));
    vlSelf->top__DOT__DUT__DOT__ostall_IntMulAlt_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
           & ((~ (IData)(vlSelf->top__DOT__IntMulAlt_respstream_val)) 
              & (1U == (IData)(vlSelf->top__DOT__ex_result_sel_X))));
    vlSelf->top__DOT__DUT__DOT__ostall_M = ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
                                            & ((~ (IData)(vlSelf->top__DOT__dmem_respstream_val)) 
                                               & (0U 
                                                  != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M))));
    vlSelf->top__DOT__DUT__DOT__ostall_W = ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
                                            & ((~ (IData)(vlSelf->top__DOT__proc2mngr_rdy)) 
                                               & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W)));
    if (((IData)(vlSelf->top__DOT__op1_sel_D) ^ (IData)(vlSelf->top__DOT____Vtogcov__op1_sel_D))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op1_sel_D = vlSelf->top__DOT__op1_sel_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__inst_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_val_D))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_val_D 
            = vlSelf->top__DOT__DUT__DOT__inst_val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_D))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_D 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_D))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_D 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_sel_D = ((2U 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->top__DOT__op2_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_sel_D = ((1U 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->top__DOT__op2_sel_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type_D = (
                                                   (6U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__imm_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type_D = (
                                                   (5U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__imm_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type_D = (
                                                   (3U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->top__DOT__imm_type_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
                  & (0x7c1U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
                  & (0x7c0U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrw_D))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrw_D 
            = vlSelf->top__DOT__DUT__DOT__csrw_D;
    }
    vlSelf->top__DOT__DUT__DOT__stats_en_wen_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
         & (0x7c1U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__stats_en_wen_D = 1U;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
         & (0x7c0U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_F))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_F 
            = vlSelf->top__DOT__DUT__DOT__ostall_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_X))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_X 
            = vlSelf->top__DOT__DUT__DOT__pc_redirect_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_IntMulAlt_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_IntMulAlt_D))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_IntMulAlt_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_IntMulAlt_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
         & (7U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__pc_sel_D = 2U;
    } else {
        vlSelf->top__DOT__DUT__DOT__pc_sel_D = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                  & (7U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)))))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (((7U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_D))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_D 
            = (7U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    }
    vlSelf->top__DOT__DUT__DOT__pc_redirect_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                                 & (7U 
                                                    == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    if (vlSelf->top__DOT__DUT__DOT__pc_redirect_X) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__pc_sel_F = vlSelf->top__DOT__DUT__DOT__pc_sel_X;
    } else {
        vlSelf->top__DOT__pc_sel_F = ((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D)
                                       ? (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)
                                       : 0U);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
                  & (0xfc0U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
                  & (0xfc1U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
                  & (0xf14U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_D))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_D 
            = vlSelf->top__DOT__DUT__DOT__csrr_D;
    }
    vlSelf->top__DOT__csrr_sel_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         & (0xfc1U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__csrr_sel_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         & (0xf14U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__csrr_sel_D = 2U;
    }
    vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         & (0xfc0U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_dmem_reqstream_X))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_dmem_reqstream_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_IntMulAlt_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_IntMulAlt_X))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_IntMulAlt_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_IntMulAlt_X;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_X = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X) 
                                            | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_IntMulAlt_X));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M 
            = vlSelf->top__DOT__DUT__DOT__ostall_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rs1_en_D))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rs1_en_D 
            = vlSelf->top__DOT__DUT__DOT__rs1_en_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__rf_wen_W) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__rf_waddr_W)) 
                    & (0U != (IData)(vlSelf->top__DOT__rf_waddr_W))))));
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M))))));
    top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
                                                  & ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
                                                        & (((0x1fU 
                                                             & (vlSelf->top__DOT__inst_D 
                                                                >> 0xfU)) 
                                                            == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)) 
                                                           & (0U 
                                                              != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X))))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rs2_en_D))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rs2_en_D 
            = vlSelf->top__DOT__DUT__DOT__rs2_en_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__rf_wen_W) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__rf_waddr_W)) 
                    & (0U != (IData)(vlSelf->top__DOT__rf_waddr_W))))));
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M))))));
    top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
                                                  & ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
                                                        & (((0x1fU 
                                                             & (vlSelf->top__DOT__inst_D 
                                                                >> 0x14U)) 
                                                            == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)) 
                                                           & (0U 
                                                              != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X))))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_W))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_W 
            = vlSelf->top__DOT__DUT__DOT__ostall_W;
    }
    vlSelf->top__DOT__DUT__DOT__stall_W = ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
                                           & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_W));
    top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_M) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_W));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_D))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_D 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_D))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_D 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X)))) {
        if (vlSelf->top__DOT__DUT__DOT__pc_redirect_D) {
            vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D)))) {
            vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_D))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_D 
            = vlSelf->top__DOT__DUT__DOT__pc_redirect_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__csrr_sel_D = (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__csrr_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__csrr_sel_D = (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__csrr_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__mngr2proc_rdy_D))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mngr2proc_rdy_D 
            = vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
           & ((~ (IData)(vlSelf->top__DOT__mngr2proc_val)) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_X))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0) 
           & (1U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs1_D 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0) 
           & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0) 
           & (1U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs2_D 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0) 
           & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_W)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_W = (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_W))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_W 
            = vlSelf->top__DOT__DUT__DOT__stall_W;
    }
    vlSelf->top__DOT__commit_inst = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W)) 
                                     & (IData)(vlSelf->top__DOT__DUT__DOT__val_W));
    vlSelf->top__DOT__DUT__DOT__stall_M = ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
                                           & (IData)(top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0));
    top__DOT__DUT__DOT____VdfgTmp_hd3c00747__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_X) 
                                                  | (IData)(top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0));
    if ((1U & ((IData)(vlSelf->top__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc_sel_F = ((2U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->top__DOT__pc_sel_F)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc_sel_F = ((1U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->top__DOT__pc_sel_F)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_mngr2proc_D))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_mngr2proc_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
         & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__op1_byp_sel_D = 1U;
    } else {
        vlSelf->top__DOT__op1_byp_sel_D = (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing))
                                            ? 2U : 
                                           (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                             & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing))
                                             ? 3U : 0U));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing))))) {
        if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
             & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing))) {
            vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                      & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing))))) {
            if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                 & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing))) {
                vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                          & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing))))) {
                vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_load_use_X_rs1_D))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_load_use_X_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs1_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
         & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__op2_byp_sel_D = 1U;
    } else {
        vlSelf->top__DOT__op2_byp_sel_D = (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing))
                                            ? 2U : 
                                           (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                             & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing))
                                             ? 3U : 0U));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing))))) {
        if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
             & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing))) {
            vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                      & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing))))) {
            if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                 & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing))) {
                vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                          & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing))))) {
                vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_load_use_X_rs2_D))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_load_use_X_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs2_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_hazard_D = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs1_D) 
                                                   | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs2_D));
    if (((IData)(vlSelf->top__DOT__commit_inst) ^ (IData)(vlSelf->top__DOT____Vtogcov__commit_inst))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__commit_inst = vlSelf->top__DOT__commit_inst;
    }
    vlSelf->top__DOT__proc2mngr_val = ((IData)(vlSelf->top__DOT__commit_inst) 
                                       & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_M) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_M)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_M = (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M 
            = vlSelf->top__DOT__DUT__DOT__stall_M;
    }
    vlSelf->top__DOT__DUT__DOT__next_val_M = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M)) 
                                              & (IData)(vlSelf->top__DOT__DUT__DOT__val_M));
    vlSelf->top__DOT__DUT__DOT__stall_X = ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                           & (IData)(top__DOT__DUT__DOT____VdfgTmp_hd3c00747__0));
    if ((1U & ((IData)(vlSelf->top__DOT__op1_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op1_byp_sel_D)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op1_byp_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__op1_byp_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__op1_byp_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__op1_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op1_byp_sel_D)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op1_byp_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__op1_byp_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__op1_byp_sel_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__op2_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_byp_sel_D)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_byp_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__op2_byp_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__op2_byp_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__op2_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_byp_sel_D)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_byp_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__op2_byp_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__op2_byp_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_hazard_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D) 
                                               | ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_IntMulAlt_D) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D))));
    if (((IData)(vlSelf->top__DOT__proc2mngr_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_val))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_val 
            = vlSelf->top__DOT__proc2mngr_val;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_M))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_M 
            = vlSelf->top__DOT__DUT__DOT__next_val_M;
    }
    vlSelf->top__DOT__dmem_respstream_rdy = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_M) 
                                             & (0U 
                                                != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M)));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__IntMulAlt_respstream_rdy)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__IntMulAlt_respstream_rdy 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_X))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_X 
            = vlSelf->top__DOT__DUT__DOT__stall_X;
    }
    vlSelf->top__DOT__DUT__DOT__next_val_X = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X)) 
                                              & (IData)(vlSelf->top__DOT__DUT__DOT__val_X));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_D;
    }
    top__DOT__DUT__DOT____VdfgTmp_h3c243d67__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_D) 
                                                  | (IData)(top__DOT__DUT__DOT____VdfgTmp_hd3c00747__0));
    if (((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy 
            = vlSelf->top__DOT__dmem_respstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_X))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_X 
            = vlSelf->top__DOT__DUT__DOT__next_val_X;
    }
    vlSelf->top__DOT__dmem_reqstream_val = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_X) 
                                            & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__osquash_X = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_X) 
                                             & (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X));
    vlSelf->top__DOT__DUT__DOT__stall_F = ((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
                                           & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_F) 
                                              | (IData)(top__DOT__DUT__DOT____VdfgTmp_h3c243d67__0)));
    vlSelf->top__DOT__DUT__DOT__stall_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                           & (IData)(top__DOT__DUT__DOT____VdfgTmp_h3c243d67__0));
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_val))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_val 
            = vlSelf->top__DOT__dmem_reqstream_val;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__osquash_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_X))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_X 
            = vlSelf->top__DOT__DUT__DOT__osquash_X;
    }
    vlSelf->top__DOT__DUT__DOT__squash_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & (IData)(vlSelf->top__DOT__DUT__DOT__osquash_X));
    vlSelf->top__DOT__imem_respstream_drop = ((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
                                              & ((7U 
                                                  == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)) 
                                                 | (IData)(vlSelf->top__DOT__DUT__DOT__osquash_X)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_F))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_F 
            = vlSelf->top__DOT__DUT__DOT__stall_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_D))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_D 
            = vlSelf->top__DOT__DUT__DOT__stall_D;
    }
    top__DOT__DUT__DOT____VdfgTmp_hb10c38c5__0 = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_D)) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__val_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__squash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__squash_D))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__squash_D 
            = vlSelf->top__DOT__DUT__DOT__squash_D;
    }
    vlSelf->top__DOT__reg_en_D = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_D)) 
                                        | (IData)(vlSelf->top__DOT__DUT__DOT__squash_D)));
    if (((IData)(vlSelf->top__DOT__imem_respstream_drop) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_drop))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_drop 
            = vlSelf->top__DOT__imem_respstream_drop;
    }
    vlSelf->top__DOT__DUT__DOT__next_val_F = ((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
                                              & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_F)) 
                                                 & (~ (IData)(vlSelf->top__DOT__imem_respstream_drop))));
    vlSelf->top__DOT__imem_respstream_rdy = (1U & (
                                                   (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_F)) 
                                                   | (IData)(vlSelf->top__DOT__imem_respstream_drop)));
    vlSelf->top__DOT__mngr2proc_rdy = ((IData)(top__DOT__DUT__DOT____VdfgTmp_hb10c38c5__0) 
                                       & (IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D));
    vlSelf->top__DOT__IntMulAlt_reqstream_val = ((IData)(top__DOT__DUT__DOT____VdfgTmp_hb10c38c5__0) 
                                                 & (1U 
                                                    == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D)));
    vlSelf->top__DOT__DUT__DOT__next_val_D = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__squash_D)) 
                                              & (IData)(top__DOT__DUT__DOT____VdfgTmp_hb10c38c5__0));
    if (((IData)(vlSelf->top__DOT__reg_en_D) ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_D = vlSelf->top__DOT__reg_en_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_F))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_F 
            = vlSelf->top__DOT__DUT__DOT__next_val_F;
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_rdy))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_rdy 
            = vlSelf->top__DOT__imem_respstream_rdy;
    }
    vlSelf->top__DOT__imem_reqstream_val = ((~ (IData)(vlSelf->top__DOT__reset)) 
                                            & (IData)(vlSelf->top__DOT__imem_respstream_rdy));
    if (((IData)(vlSelf->top__DOT__mngr2proc_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_rdy 
            = vlSelf->top__DOT__mngr2proc_rdy;
    }
    if (((IData)(vlSelf->top__DOT__IntMulAlt_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__IntMulAlt_reqstream_val))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__IntMulAlt_reqstream_val 
            = vlSelf->top__DOT__IntMulAlt_reqstream_val;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_D))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_D 
            = vlSelf->top__DOT__DUT__DOT__next_val_D;
    }
    if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_val 
            = vlSelf->top__DOT__imem_reqstream_val;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->top__DOT__reset) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__val_F = 0U;
        vlSelf->top__DOT__DUT__DOT__val_M = 0U;
        vlSelf->top__DOT__DUT__DOT__val_W = 0U;
        vlSelf->top__DOT__DUT__DOT__val_D = 0U;
        vlSelf->top__DOT__DUT__DOT__val_X = 0U;
    } else {
        if (vlSelf->top__DOT__imem_respstream_rdy) {
            vlSelf->top__DOT__DUT__DOT__val_F = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M)))) {
            vlSelf->top__DOT__DUT__DOT__val_M = vlSelf->top__DOT__DUT__DOT__next_val_X;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W)))) {
            vlSelf->top__DOT__DUT__DOT__val_W = vlSelf->top__DOT__DUT__DOT__next_val_M;
        }
        if (vlSelf->top__DOT__reg_en_D) {
            vlSelf->top__DOT__DUT__DOT__val_D = vlSelf->top__DOT__DUT__DOT__next_val_F;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X)))) {
            vlSelf->top__DOT__DUT__DOT__val_X = vlSelf->top__DOT__DUT__DOT__next_val_D;
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        if (vlSelf->top__DOT__reg_en_D) {
            vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__reg_en_D)))) {
            vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__imem_respstream_rdy) {
            vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imem_respstream_rdy)))) {
            vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__stall_W) {
            vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W)))) {
            vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W 
                = vlSelf->top__DOT__DUT__DOT__stats_en_wen_M;
            vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W 
                = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_M;
            vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W 
                = vlSelf->top__DOT__DUT__DOT__rf_wen_M;
            vlSelf->top__DOT__rf_waddr_W = vlSelf->top__DOT__DUT__DOT__rf_waddr_M;
            vlSelf->top__DOT__DUT__DOT__inst_W = vlSelf->top__DOT__DUT__DOT__inst_M;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M)))) {
            vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__wb_result_sel_M = vlSelf->top__DOT__DUT__DOT__wb_result_sel_X;
            vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M 
                = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X;
            vlSelf->top__DOT__DUT__DOT__stats_en_wen_M 
                = vlSelf->top__DOT__DUT__DOT__stats_en_wen_X;
            vlSelf->top__DOT__DUT__DOT__proc2mngr_val_M 
                = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_X;
            vlSelf->top__DOT__DUT__DOT__rf_wen_M = vlSelf->top__DOT__DUT__DOT__rf_wen_X;
            vlSelf->top__DOT__DUT__DOT__rf_waddr_M 
                = vlSelf->top__DOT__DUT__DOT__rf_waddr_X;
            vlSelf->top__DOT__DUT__DOT__inst_M = vlSelf->top__DOT__DUT__DOT__inst_X;
        }
        if (vlSelf->top__DOT__DUT__DOT__stall_M) {
            vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__stall_X) {
            vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X)))) {
            vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__alu_fn_X = vlSelf->top__DOT__DUT__DOT__alu_fn_D;
            vlSelf->top__DOT__ex_result_sel_X = vlSelf->top__DOT__DUT__DOT__ex_result_sel_D;
            vlSelf->top__DOT__DUT__DOT__br_type_X = vlSelf->top__DOT__DUT__DOT__br_type_D;
            vlSelf->top__DOT__DUT__DOT__wb_result_sel_X 
                = vlSelf->top__DOT__DUT__DOT__wb_result_sel_D;
            vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X 
                = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D;
            vlSelf->top__DOT__DUT__DOT__stats_en_wen_X 
                = vlSelf->top__DOT__DUT__DOT__stats_en_wen_D;
            vlSelf->top__DOT__DUT__DOT__proc2mngr_val_X 
                = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D;
            vlSelf->top__DOT__DUT__DOT__rf_wen_X = vlSelf->top__DOT__DUT__DOT__rf_wen_D;
            vlSelf->top__DOT__DUT__DOT__rf_waddr_X 
                = (0x1fU & (vlSelf->top__DOT__inst_D 
                            >> 7U));
            vlSelf->top__DOT__DUT__DOT__inst_X = vlSelf->top__DOT__inst_D;
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xeU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xdU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((0xbU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__alu_fn_X = ((7U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__alu_fn_X)) 
                                                 | (8U 
                                                    & (IData)(vlSelf->top__DOT__alu_fn_X)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_F))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_F 
            = vlSelf->top__DOT__DUT__DOT__val_F;
    }
    if (((IData)(vlSelf->top__DOT__wb_result_sel_M) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_result_sel_M))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__wb_result_sel_M 
            = vlSelf->top__DOT__wb_result_sel_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_pending_W))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ex_result_sel_X 
            = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)) 
               | (1U & (IData)(vlSelf->top__DOT__ex_result_sel_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ex_result_sel_X 
            = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__ex_result_sel_X)) 
               | (2U & (IData)(vlSelf->top__DOT__ex_result_sel_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_X)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_M))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_M 
            = vlSelf->top__DOT__DUT__DOT__val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_W))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_W 
            = vlSelf->top__DOT__DUT__DOT__val_W;
    }
    vlSelf->top__DOT__stats_en_wen_W = ((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_pending_W) 
                                        & (IData)(vlSelf->top__DOT__DUT__DOT__val_W));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_W))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_W 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_D))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_D 
            = vlSelf->top__DOT__DUT__DOT__val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_pending_W))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W;
    }
    vlSelf->top__DOT__rf_wen_W = ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_pending_W) 
                                  & (IData)(vlSelf->top__DOT__DUT__DOT__val_W));
    if ((1U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1eU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1dU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x1bU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0x17U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__rf_waddr_W) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_waddr_W = (
                                                   (0xfU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__rf_waddr_W)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->top__DOT__rf_waddr_W)));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                  & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                      & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
            if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                 & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                          & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                     & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                    vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                              & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                  & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                      & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                          & (8U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))))) {
                                vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
                            }
                            if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                 & (8U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                                vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                             & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                            vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                         & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
                        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
        }
        if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
             & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
            vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
         & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__pc_sel_X = 1U;
    } else {
        vlSelf->top__DOT__DUT__DOT__pc_sel_X = (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                 & (2U 
                                                    == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                 ? 1U
                                                 : 
                                                (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                  & (3U 
                                                     == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                  ? 1U
                                                  : 
                                                 (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                   & (4U 
                                                      == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                   ? 1U
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                    & (5U 
                                                       == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                    ? 1U
                                                    : 
                                                   (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                     & (6U 
                                                        == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                     ? 1U
                                                     : 
                                                    (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                      & (8U 
                                                         == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                      ? 3U
                                                      : 0U))))));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_X))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_X 
            = vlSelf->top__DOT__DUT__DOT__val_X;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_W ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_W) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__inst_W));
    }
    if (((IData)(vlSelf->top__DOT__stats_en_wen_W) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__stats_en_wen_W))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__stats_en_wen_W 
            = vlSelf->top__DOT__stats_en_wen_W;
    }
    if (((IData)(vlSelf->top__DOT__rf_wen_W) ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_wen_W))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rf_wen_W = vlSelf->top__DOT__rf_wen_W;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X)))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X)))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_X)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_X))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_X 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_M))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_M 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_M))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_M 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_M))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_M 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_M;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_M)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)));
    }
    if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
    }
    if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    }
    vlSelf->top__DOT__dmem_reqstream_msg_type = (2U 
                                                 == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_M ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__inst_M));
    }
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_msg_type) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_type))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg_type 
            = vlSelf->top__DOT__dmem_reqstream_msg_type;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_X))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_X 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_X))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_X 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_X))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_X 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_X;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_X)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_X ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__inst_X));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_hb10c38c5__0;
    top__DOT__DUT__DOT____VdfgTmp_hb10c38c5__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h3c243d67__0;
    top__DOT__DUT__DOT____VdfgTmp_h3c243d67__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0;
    top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0;
    top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_hd3c00747__0;
    top__DOT__DUT__DOT____VdfgTmp_hd3c00747__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0;
    top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0 = 0;
    // Body
    if ((1U & (~ ((((((((0x13U == vlSelf->top__DOT__inst_D) 
                        | (0x2073U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                       | (0x1073U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x33U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                     | (0x40000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) 
                    | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                   | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                  | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)))))) {
        if ((1U & (~ ((((((((0x4033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__inst_D)) 
                            | (0x2033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__inst_D))) 
                           | (0x3033U == (0xfe00707fU 
                                          & vlSelf->top__DOT__inst_D))) 
                          | (0x40005033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) 
                         | (0x5033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) 
                        | (0x1033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__inst_D))) 
                       | (0x13U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x6013U == (0x707fU & vlSelf->top__DOT__inst_D)))))) {
            if ((1U & (~ ((((((((0x7013U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D)) 
                                | (0x4013U == (0x707fU 
                                               & vlSelf->top__DOT__inst_D))) 
                               | (0x2013U == (0x707fU 
                                              & vlSelf->top__DOT__inst_D))) 
                              | (0x3013U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) 
                             | (0x40005013U == (0xfe00707fU 
                                                & vlSelf->top__DOT__inst_D))) 
                            | (0x5013U == (0xfe00707fU 
                                           & vlSelf->top__DOT__inst_D))) 
                           | (0x1013U == (0xfe00707fU 
                                          & vlSelf->top__DOT__inst_D))) 
                          | (0x37U == (0x7fU & vlSelf->top__DOT__inst_D)))))) {
                if (((((((((0x17U == (0x7fU & vlSelf->top__DOT__inst_D)) 
                           | (0x2003U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                          | (0x2023U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                         | (0x6fU == (0x7fU & vlSelf->top__DOT__inst_D))) 
                        | (0x67U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                       | (0x1063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x63U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                     | (0x4063U == (0x707fU & vlSelf->top__DOT__inst_D)))) {
                    if ((0x17U != (0x7fU & vlSelf->top__DOT__inst_D))) {
                        if ((0x2003U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                            if ((0x2023U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x2023U != (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                if ((0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x6fU != (0x7fU 
                                               & vlSelf->top__DOT__inst_D))) {
                                    if ((0x67U == (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x67U != (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))) {
                                        if ((0x1063U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0x1063U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                            if ((0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                                vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            if ((0x63U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                                vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x2003U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x17U == (0x7fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ ((((((((0x17U == (0x7fU 
                                               & vlSelf->top__DOT__inst_D)) 
                                    | (0x2003U == (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                   | (0x2023U == (0x707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst_D))) 
                                 | (0x67U == (0x707fU 
                                              & vlSelf->top__DOT__inst_D))) 
                                | (0x1063U == (0x707fU 
                                               & vlSelf->top__DOT__inst_D))) 
                               | (0x63U == (0x707fU 
                                            & vlSelf->top__DOT__inst_D))) 
                              | (0x4063U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D)))))) {
                    if ((0x6063U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((0x6063U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                        if ((0x5063U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0x5063U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                            if ((0x7063U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x7063U != (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if (((((((((0x7013U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                       | (0x4013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x2013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                     | (0x3013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlSelf->top__DOT__inst_D))) 
                   | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                  | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                 | (0x37U == (0x7fU & vlSelf->top__DOT__inst_D)))) {
                if ((0x7013U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                    if ((0x4013U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                        if ((0x2013U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                            if ((0x3013U != (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                if ((0x40005013U != 
                                     (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                                    if ((0x5013U != 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__inst_D))) {
                                        if ((0x1013U 
                                             != (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0x1013U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x5013U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x40005013U == 
                                     (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x3013U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x2013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x4013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x7013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if (((((((((0x4033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                   | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                  | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                 | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
               | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
              | (0x13U == (0x707fU & vlSelf->top__DOT__inst_D))) 
             | (0x6013U == (0x707fU & vlSelf->top__DOT__inst_D)))) {
            if ((0x4033U != (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                if ((0x2033U != (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                    if ((0x3033U != (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                        if ((0x40005033U != (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                            if ((0x5033U != (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                if ((0x1033U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    if ((0x13U != (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x13U == (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x1033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x5033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x40005033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((((((((0x13U == vlSelf->top__DOT__inst_D) 
               | (0x2073U == (0x707fU & vlSelf->top__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->top__DOT__inst_D))) 
             | (0x33U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
            | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
           | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
          | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
         | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)))) {
        if ((0x13U != vlSelf->top__DOT__inst_D)) {
            if ((0x2073U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                if ((0x1073U != (0x707fU & vlSelf->top__DOT__inst_D))) {
                    if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((0x33U != (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                        if ((0x40000033U != (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                            if ((0x2000033U == (0xfe00707fU 
                                                & vlSelf->top__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x2000033U != (0xfe00707fU 
                                                & vlSelf->top__DOT__inst_D))) {
                                if ((0x7033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x7033U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((0x40000033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((0x1073U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x2073U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x13U == vlSelf->top__DOT__inst_D)) {
            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__op2_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
        } else if ((0x2073U == (0x707fU & vlSelf->top__DOT__inst_D))) {
            vlSelf->top__DOT__op2_sel_D = 2U;
            vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0xcU;
            vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
        } else {
            vlSelf->top__DOT__op2_sel_D = 0U;
            if ((0x1073U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0xbU;
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
            } else if ((0x2000033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
            } else {
                vlSelf->top__DOT__DUT__DOT__alu_fn_D 
                    = ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))
                        ? 2U : 3U);
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
            }
        }
        vlSelf->top__DOT__imm_type_D = 0U;
        vlSelf->top__DOT__DUT__DOT__rs1_en_D = ((0x13U 
                                                 != vlSelf->top__DOT__inst_D) 
                                                & (0x2073U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__inst_D)));
        vlSelf->top__DOT__DUT__DOT__rs2_en_D = ((0x13U 
                                                 != vlSelf->top__DOT__inst_D) 
                                                & ((0x2073U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D)) 
                                                   & (0x1073U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D))));
        vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
        vlSelf->top__DOT__DUT__DOT__rf_wen_D = ((0x13U 
                                                 != vlSelf->top__DOT__inst_D) 
                                                & ((0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D)) 
                                                   | (0x1073U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D))));
    } else {
        if (((((((((0x4033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                   | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                  | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                 | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
               | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
              | (0x13U == (0x707fU & vlSelf->top__DOT__inst_D))) 
             | (0x6013U == (0x707fU & vlSelf->top__DOT__inst_D)))) {
            if ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__op2_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 4U;
            } else if ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__op2_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 5U;
            } else if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__op2_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 6U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__op2_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 7U;
            } else if ((0x5033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__op2_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 8U;
            } else if ((0x1033U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) {
                vlSelf->top__DOT__op2_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 9U;
            } else {
                vlSelf->top__DOT__op2_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__alu_fn_D 
                    = ((0x13U == (0x707fU & vlSelf->top__DOT__inst_D))
                        ? 0U : 3U);
            }
            vlSelf->top__DOT__imm_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__rs2_en_D = 
                ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                 | ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                    | ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst_D)) 
                       | ((0x40005033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__inst_D)) 
                          | ((0x5033U == (0xfe00707fU 
                                          & vlSelf->top__DOT__inst_D)) 
                             | (0x1033U == (0xfe00707fU 
                                            & vlSelf->top__DOT__inst_D)))))));
            vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
        } else {
            if (((((((((0x7013U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                       | (0x4013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x2013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                     | (0x3013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlSelf->top__DOT__inst_D))) 
                   | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                  | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                 | (0x37U == (0x7fU & vlSelf->top__DOT__inst_D)))) {
                vlSelf->top__DOT__op2_sel_D = 1U;
                if ((0x7013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 2U;
                } else if ((0x4013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 4U;
                } else if ((0x2013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 5U;
                } else if ((0x3013U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 6U;
                } else if ((0x40005013U == (0xfe00707fU 
                                            & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 5U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 7U;
                } else if ((0x5013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 5U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 8U;
                } else if ((0x1013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 5U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 9U;
                } else {
                    vlSelf->top__DOT__imm_type_D = 3U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0xcU;
                }
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
            } else if (((((((((0x17U == (0x7fU & vlSelf->top__DOT__inst_D)) 
                              | (0x2003U == (0x707fU 
                                             & vlSelf->top__DOT__inst_D))) 
                             | (0x2023U == (0x707fU 
                                            & vlSelf->top__DOT__inst_D))) 
                            | (0x6fU == (0x7fU & vlSelf->top__DOT__inst_D))) 
                           | (0x67U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                          | (0x1063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                         | (0x63U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                        | (0x4063U == (0x707fU & vlSelf->top__DOT__inst_D)))) {
                if ((0x17U == (0x7fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__op2_sel_D = 1U;
                    vlSelf->top__DOT__imm_type_D = 3U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                } else if ((0x2003U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__op2_sel_D = 1U;
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 1U;
                } else if ((0x2023U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__op2_sel_D = 1U;
                    vlSelf->top__DOT__imm_type_D = 1U;
                    vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 2U;
                } else {
                    if ((0x6fU == (0x7fU & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__op2_sel_D = 0U;
                        vlSelf->top__DOT__imm_type_D = 4U;
                        vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 7U;
                    } else if ((0x67U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                        vlSelf->top__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__imm_type_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0xaU;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D = 8U;
                    } else {
                        vlSelf->top__DOT__op2_sel_D = 0U;
                        vlSelf->top__DOT__imm_type_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__br_type_D 
                            = ((0x1063U == (0x707fU 
                                            & vlSelf->top__DOT__inst_D))
                                ? 1U : ((0x63U == (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))
                                         ? 2U : 3U));
                    }
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
                }
            } else {
                vlSelf->top__DOT__op2_sel_D = 0U;
                if ((0x6063U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 2U;
                    vlSelf->top__DOT__DUT__DOT__br_type_D = 4U;
                } else if ((0x5063U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 2U;
                    vlSelf->top__DOT__DUT__DOT__br_type_D = 5U;
                } else if ((0x7063U == (0x707fU & vlSelf->top__DOT__inst_D))) {
                    vlSelf->top__DOT__imm_type_D = 2U;
                    vlSelf->top__DOT__DUT__DOT__br_type_D = 6U;
                } else {
                    vlSelf->top__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__br_type_D = 0U;
                }
                vlSelf->top__DOT__DUT__DOT__alu_fn_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D = 0U;
            }
            vlSelf->top__DOT__DUT__DOT__rs2_en_D = 
                ((~ ((((((((0x7013U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                           | (0x4013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                          | (0x2013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                         | (0x3013U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                        | (0x40005013U == (0xfe00707fU 
                                           & vlSelf->top__DOT__inst_D))) 
                       | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__inst_D))) 
                     | (0x37U == (0x7fU & vlSelf->top__DOT__inst_D)))) 
                 & (((((((((0x17U == (0x7fU & vlSelf->top__DOT__inst_D)) 
                           | (0x2003U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                          | (0x2023U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                         | (0x6fU == (0x7fU & vlSelf->top__DOT__inst_D))) 
                        | (0x67U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                       | (0x1063U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                      | (0x63U == (0x707fU & vlSelf->top__DOT__inst_D))) 
                     | (0x4063U == (0x707fU & vlSelf->top__DOT__inst_D)))
                     ? ((0x17U != (0x7fU & vlSelf->top__DOT__inst_D)) 
                        & ((0x2003U != (0x707fU & vlSelf->top__DOT__inst_D)) 
                           & ((0x2023U == (0x707fU 
                                           & vlSelf->top__DOT__inst_D)) 
                              | ((0x6fU != (0x7fU & vlSelf->top__DOT__inst_D)) 
                                 & (0x67U != (0x707fU 
                                              & vlSelf->top__DOT__inst_D))))))
                     : ((0x6063U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                        | ((0x5063U == (0x707fU & vlSelf->top__DOT__inst_D)) 
                           | (0x7063U == (0x707fU & vlSelf->top__DOT__inst_D))))));
        }
        vlSelf->top__DOT__DUT__DOT__rs1_en_D = ((((
                                                   (((((0x4033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       | (0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (((((((((0x7013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)) 
                                                          | (0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x40005013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x5013U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (((((((((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__inst_D)) 
                                                             | (0x2003U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            | (0x2023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__inst_D))) 
                                                           | (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x63U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__inst_D)))
                                                       ? 
                                                      ((0x17U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       & ((0x2003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)) 
                                                          | ((0x2023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D)) 
                                                             | (0x6fU 
                                                                != 
                                                                (0x7fU 
                                                                 & vlSelf->top__DOT__inst_D)))))
                                                       : 
                                                      ((0x6063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       | ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)) 
                                                          | (0x7063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D)))))));
        vlSelf->top__DOT__DUT__DOT__rf_wen_D = ((((
                                                   (((((0x4033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D)) 
                                                       | (0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (((((((((0x7013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)) 
                                                          | (0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x40005013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x5013U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (((((((((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__inst_D)) 
                                                             | (0x2003U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            | (0x2023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__inst_D))) 
                                                           | (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x63U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      & ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__inst_D)) 
                                                         | ((0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D)) 
                                                            | ((0x2023U 
                                                                != 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D)) 
                                                               & ((0x6fU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->top__DOT__inst_D)) 
                                                                  | (0x67U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->top__DOT__inst_D)))))))));
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__imem_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy 
            = vlSelf->top__DOT__imem_reqstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_val))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_val 
            = vlSelf->top__DOT__imem_respstream_val;
    }
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy 
            = vlSelf->top__DOT__dmem_reqstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__dmem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_val))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_val 
            = vlSelf->top__DOT__dmem_respstream_val;
    }
    if (((IData)(vlSelf->top__DOT__mngr2proc_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_val))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_val 
            = vlSelf->top__DOT__mngr2proc_val;
    }
    if (((IData)(vlSelf->top__DOT__proc2mngr_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_rdy 
            = vlSelf->top__DOT__proc2mngr_rdy;
    }
    if (((IData)(vlSelf->top__DOT__IntMulAlt_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__IntMulAlt_reqstream_rdy))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__IntMulAlt_reqstream_rdy 
            = vlSelf->top__DOT__IntMulAlt_reqstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__IntMulAlt_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__IntMulAlt_respstream_val))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__IntMulAlt_respstream_val 
            = vlSelf->top__DOT__IntMulAlt_respstream_val;
    }
    if (((IData)(vlSelf->top__DOT__br_cond_eq_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_eq_X))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_eq_X = vlSelf->top__DOT__br_cond_eq_X;
    }
    if (((IData)(vlSelf->top__DOT__br_cond_lt_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_lt_X))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_lt_X = vlSelf->top__DOT__br_cond_lt_X;
    }
    if (((IData)(vlSelf->top__DOT__br_cond_ltu_X) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_cond_ltu_X))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__br_cond_ltu_X 
            = vlSelf->top__DOT__br_cond_ltu_X;
    }
    vlSelf->top__DOT__op1_sel_D = ((~ ((((((((0x13U 
                                              == vlSelf->top__DOT__inst_D) 
                                             | (0x2073U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                            | (0x1073U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                           | (0x33U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                          | (0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                         | (0x2000033U 
                                            == (0xfe00707fU 
                                                & vlSelf->top__DOT__inst_D))) 
                                        | (0x7033U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__inst_D))) 
                                       | (0x6033U == 
                                          (0xfe00707fU 
                                           & vlSelf->top__DOT__inst_D)))) 
                                   & ((~ ((((((((0x4033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D)) 
                                                | (0x2033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x3033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (0x40005033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                             | (0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                            | (0x1033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                           | (0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                          | (0x6013U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_D)))) 
                                      & ((~ (((((((
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D)) 
                                                   | (0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x3013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (0x40005013U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x5013U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (0x1013U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                             | (0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__inst_D)))) 
                                         & (((((((((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__inst_D)) 
                                                   | (0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x1063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                             | (0x4063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                            & (0x17U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__inst_D))))));
    vlSelf->top__DOT__DUT__DOT__inst_val_D = ((((((
                                                   (((0x13U 
                                                      == vlSelf->top__DOT__inst_D) 
                                                     | (0x2073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x1073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x33U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x40000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x6033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (((((((((0x4033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D)) 
                                                        | (0x2033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x3033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (0x1033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__inst_D))) 
                                                   | (0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_D))) 
                                                  | (0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_D))) 
                                                 | (((((((((0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D)) 
                                                           | (0x4013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x2013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x40005013U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x5013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x1013U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__inst_D))) 
                                                    | (((((((((0x17U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->top__DOT__inst_D)) 
                                                              | (0x2003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__inst_D))) 
                                                             | (0x2023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            | (0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->top__DOT__inst_D))) 
                                                           | (0x67U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x1063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x63U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | ((0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)) 
                                                          | ((0x5063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D)) 
                                                             | (0x7063U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D))))))));
    vlSelf->top__DOT__DUT__DOT__csrw_D = (((((((((0x13U 
                                                  == vlSelf->top__DOT__inst_D) 
                                                 | (0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (0x1073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (0x40000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                             | (0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                            | (0x7033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                           | (0x6033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                          & ((0x13U 
                                              != vlSelf->top__DOT__inst_D) 
                                             & ((0x2073U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__inst_D)) 
                                                & (0x1073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__inst_D)))));
    if ((1U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffeU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (1U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((2U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffdU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (2U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((4U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffffbU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (4U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((8U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffff7U 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (8U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffefU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffdfU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffffbfU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x80U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffff7fU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x100U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffeffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x100U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x200U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffdffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x200U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x400U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffffbffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x400U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x800U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffff7ffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x800U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffefffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x1000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffdfffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x2000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffffbfffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x4000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffff7fffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x8000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffeffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffdffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfffbffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfff7ffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffefffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x100000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffdfffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x200000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xffbfffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x400000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xff7fffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x800000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfeffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x1000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfdffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x2000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xfbffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x4000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xf7ffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x8000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xefffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x10000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xdfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x20000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0xbfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x40000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    if (((vlSelf->top__DOT__inst_D ^ vlSelf->top__DOT____Vtogcov__inst_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst_D = ((0x7fffffffU 
                                                & vlSelf->top__DOT____Vtogcov__inst_D) 
                                               | (0x80000000U 
                                                  & vlSelf->top__DOT__inst_D));
    }
    vlSelf->top__DOT__DUT__DOT__csrr_D = (((((((((0x13U 
                                                  == vlSelf->top__DOT__inst_D) 
                                                 | (0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_D))) 
                                                | (0x1073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__inst_D))) 
                                               | (0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                              | (0x40000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                             | (0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__inst_D))) 
                                            | (0x7033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__inst_D))) 
                                           | (0x6033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__inst_D))) 
                                          & ((0x13U 
                                              != vlSelf->top__DOT__inst_D) 
                                             & (0x2073U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__inst_D))));
    vlSelf->top__DOT__DUT__DOT__ostall_F = ((~ (IData)(vlSelf->top__DOT__imem_respstream_val)) 
                                            & (IData)(vlSelf->top__DOT__DUT__DOT__val_F));
    vlSelf->top__DOT__DUT__DOT__ostall_W = ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
                                            & ((~ (IData)(vlSelf->top__DOT__proc2mngr_rdy)) 
                                               & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W)));
    vlSelf->top__DOT__DUT__DOT__ostall_IntMulAlt_D 
        = ((~ (IData)(vlSelf->top__DOT__IntMulAlt_reqstream_rdy)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__val_D));
    vlSelf->top__DOT__DUT__DOT__pc_redirect_X = (1U 
                                                 & (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                     & (1U 
                                                        == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                     ? 
                                                    (~ (IData)(vlSelf->top__DOT__br_cond_eq_X))
                                                     : 
                                                    (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                      & (2U 
                                                         == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                      ? (IData)(vlSelf->top__DOT__br_cond_eq_X)
                                                      : 
                                                     (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                       & (3U 
                                                          == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                       ? (IData)(vlSelf->top__DOT__br_cond_lt_X)
                                                       : 
                                                      (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                        & (4U 
                                                           == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                        ? (IData)(vlSelf->top__DOT__br_cond_ltu_X)
                                                        : 
                                                       (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                         & (5U 
                                                            == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                         ? 
                                                        (~ (IData)(vlSelf->top__DOT__br_cond_lt_X))
                                                         : 
                                                        (((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                          & (6U 
                                                             == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X)))
                                                          ? 
                                                         (~ (IData)(vlSelf->top__DOT__br_cond_ltu_X))
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                          & (8U 
                                                             == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_X))))))))));
    vlSelf->top__DOT__DUT__DOT__ostall_IntMulAlt_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
           & ((~ (IData)(vlSelf->top__DOT__IntMulAlt_respstream_val)) 
              & (1U == (IData)(vlSelf->top__DOT__ex_result_sel_X))));
    vlSelf->top__DOT__DUT__DOT__ostall_M = ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
                                            & ((~ (IData)(vlSelf->top__DOT__dmem_respstream_val)) 
                                               & (0U 
                                                  != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M))));
    vlSelf->top__DOT__DUT__DOT__wb_result_sel_D = (
                                                   (~ 
                                                    ((((((((0x13U 
                                                            == vlSelf->top__DOT__inst_D) 
                                                           | (0x2073U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x1073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x33U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x40000033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__inst_D))) 
                                                       | (0x2000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__inst_D))) 
                                                      | (0x7033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__inst_D))) 
                                                     | (0x6033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__inst_D)))) 
                                                   & ((~ 
                                                       ((((((((0x4033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__inst_D)) 
                                                              | (0x2033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->top__DOT__inst_D))) 
                                                             | (0x3033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            | (0x40005033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__inst_D))) 
                                                           | (0x5033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__inst_D))) 
                                                          | (0x1033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__inst_D))) 
                                                         | (0x13U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_D))) 
                                                        | (0x6013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_D)))) 
                                                      & ((~ 
                                                          ((((((((0x7013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__inst_D)) 
                                                                 | (0x4013U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top__DOT__inst_D))) 
                                                                | (0x2013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__inst_D))) 
                                                               | (0x3013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__inst_D))) 
                                                              | (0x40005013U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->top__DOT__inst_D))) 
                                                             | (0x5013U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            | (0x1013U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__inst_D))) 
                                                           | (0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__inst_D)))) 
                                                         & (((((((((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->top__DOT__inst_D)) 
                                                                   | (0x2003U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->top__DOT__inst_D))) 
                                                                  | (0x2023U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->top__DOT__inst_D))) 
                                                                 | (0x6fU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->top__DOT__inst_D))) 
                                                                | (0x67U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__inst_D))) 
                                                               | (0x1063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__inst_D))) 
                                                              | (0x63U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__inst_D))) 
                                                             | (0x4063U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_D))) 
                                                            & ((0x17U 
                                                                != 
                                                                (0x7fU 
                                                                 & vlSelf->top__DOT__inst_D)) 
                                                               & (0x2003U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__inst_D)))))));
    vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
           & ((~ (IData)(vlSelf->top__DOT__dmem_reqstream_rdy)) 
              & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))));
    if (((IData)(vlSelf->top__DOT__op1_sel_D) ^ (IData)(vlSelf->top__DOT____Vtogcov__op1_sel_D))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op1_sel_D = vlSelf->top__DOT__op1_sel_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__inst_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_val_D))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_val_D 
            = vlSelf->top__DOT__DUT__DOT__inst_val_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_sel_D = ((2U 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->top__DOT__op2_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_sel_D = ((1U 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__op2_sel_D)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->top__DOT__op2_sel_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type_D = (
                                                   (6U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__imm_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type_D = (
                                                   (5U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__imm_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type_D = (
                                                   (3U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__imm_type_D)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->top__DOT__imm_type_D)));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
                  & (0x7c1U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
                  & (0x7c0U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrw_D))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrw_D 
            = vlSelf->top__DOT__DUT__DOT__csrw_D;
    }
    vlSelf->top__DOT__DUT__DOT__stats_en_wen_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
         & (0x7c1U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__stats_en_wen_D = 1U;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrw_D) 
         & (0x7c0U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
                  & (0xfc0U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
                  & (0xfc1U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
                  & (0xf14U == (vlSelf->top__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_D))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_D 
            = vlSelf->top__DOT__DUT__DOT__csrr_D;
    }
    vlSelf->top__DOT__csrr_sel_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         & (0xfc1U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__csrr_sel_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         & (0xf14U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__csrr_sel_D = 2U;
    }
    vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__csrr_D) 
         & (0xfc0U == (vlSelf->top__DOT__inst_D >> 0x14U)))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rs1_en_D))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rs1_en_D 
            = vlSelf->top__DOT__DUT__DOT__rs1_en_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__rf_wen_W) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__rf_waddr_W)) 
                    & (0U != (IData)(vlSelf->top__DOT__rf_waddr_W))))));
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M))))));
    top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__rs1_en_D) 
                                                  & ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
                                                        & (((0x1fU 
                                                             & (vlSelf->top__DOT__inst_D 
                                                                >> 0xfU)) 
                                                            == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)) 
                                                           & (0U 
                                                              != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X))))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rs2_en_D))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rs2_en_D 
            = vlSelf->top__DOT__DUT__DOT__rs2_en_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__rf_wen_W) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__rf_waddr_W)) 
                    & (0U != (IData)(vlSelf->top__DOT__rf_waddr_W))))));
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_M) 
                 & (((0x1fU & (vlSelf->top__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_M))))));
    top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__rs2_en_D) 
                                                  & ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_X) 
                                                        & (((0x1fU 
                                                             & (vlSelf->top__DOT__inst_D 
                                                                >> 0x14U)) 
                                                            == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X)) 
                                                           & (0U 
                                                              != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_X))))));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_D)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
         & (7U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__pc_sel_D = 2U;
    } else {
        vlSelf->top__DOT__DUT__DOT__pc_sel_D = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                  & (7U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)))))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (((7U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_D))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_D 
            = (7U == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_type_D)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    }
    vlSelf->top__DOT__DUT__DOT__pc_redirect_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                                 & (7U 
                                                    == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_F))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_F 
            = vlSelf->top__DOT__DUT__DOT__ostall_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_W))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_W 
            = vlSelf->top__DOT__DUT__DOT__ostall_W;
    }
    vlSelf->top__DOT__DUT__DOT__stall_W = ((IData)(vlSelf->top__DOT__DUT__DOT__val_W) 
                                           & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_W));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_IntMulAlt_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_IntMulAlt_D))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_IntMulAlt_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_IntMulAlt_D;
    }
    if (vlSelf->top__DOT__DUT__DOT__pc_redirect_X) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__pc_sel_F = vlSelf->top__DOT__DUT__DOT__pc_sel_X;
    } else {
        vlSelf->top__DOT__pc_sel_F = ((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D)
                                       ? (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)
                                       : 0U);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_X))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_X 
            = vlSelf->top__DOT__DUT__DOT__pc_redirect_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_IntMulAlt_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_IntMulAlt_X))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_IntMulAlt_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_IntMulAlt_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M 
            = vlSelf->top__DOT__DUT__DOT__ostall_M;
    }
    top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_M) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_W));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_D))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_D 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_dmem_reqstream_X))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_dmem_reqstream_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_X = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_dmem_reqstream_X) 
                                            | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_IntMulAlt_X));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_D))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_D 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_D))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_D 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_D))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_val_D 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_val_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__csrr_sel_D = (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__csrr_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__csrr_sel_D = (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__csrr_sel_D)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__csrr_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__mngr2proc_rdy_D))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mngr2proc_rdy_D 
            = vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
           & ((~ (IData)(vlSelf->top__DOT__mngr2proc_val)) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0) 
           & (1U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs1_D 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h3d0a317b__0) 
           & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0) 
           & (1U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs2_D 
        = ((IData)(top__DOT__DUT__DOT____VdfgTmp_h06acbb32__0) 
           & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X)))) {
        if (vlSelf->top__DOT__DUT__DOT__pc_redirect_D) {
            vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D)))) {
            vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_D))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_redirect_D 
            = vlSelf->top__DOT__DUT__DOT__pc_redirect_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_D)));
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_W) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_W)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_W = (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_W))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_W 
            = vlSelf->top__DOT__DUT__DOT__stall_W;
    }
    vlSelf->top__DOT__commit_inst = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_W)) 
                                     & (IData)(vlSelf->top__DOT__DUT__DOT__val_W));
    vlSelf->top__DOT__DUT__DOT__stall_M = ((IData)(vlSelf->top__DOT__DUT__DOT__val_M) 
                                           & (IData)(top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_X))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_X 
            = vlSelf->top__DOT__DUT__DOT__ostall_X;
    }
    top__DOT__DUT__DOT____VdfgTmp_hd3c00747__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_X) 
                                                  | (IData)(top__DOT__DUT__DOT____VdfgTmp_hb97078a9__0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_mngr2proc_D))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_mngr2proc_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
         & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__op1_byp_sel_D = 1U;
    } else {
        vlSelf->top__DOT__op1_byp_sel_D = (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing))
                                            ? 2U : 
                                           (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                             & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing))
                                             ? 3U : 0U));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing))))) {
        if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
             & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing))) {
            vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                      & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing))))) {
            if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                 & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing))) {
                vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                          & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing))))) {
                vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_load_use_X_rs1_D))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_load_use_X_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs1_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
         & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__op2_byp_sel_D = 1U;
    } else {
        vlSelf->top__DOT__op2_byp_sel_D = (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing))
                                            ? 2U : 
                                           (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                             & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing))
                                             ? 3U : 0U));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing))))) {
        if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
             & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing))) {
            vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                      & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing))))) {
            if (((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                 & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing))) {
                vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                          & (IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing))))) {
                vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_load_use_X_rs2_D))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_load_use_X_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs2_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_hazard_D = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs1_D) 
                                                   | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_load_use_X_rs2_D));
    if ((1U & ((IData)(vlSelf->top__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc_sel_F = ((2U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->top__DOT__pc_sel_F)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc_sel_F = ((1U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__pc_sel_F)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->top__DOT__pc_sel_F)));
    }
    if (((IData)(vlSelf->top__DOT__commit_inst) ^ (IData)(vlSelf->top__DOT____Vtogcov__commit_inst))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__commit_inst = vlSelf->top__DOT__commit_inst;
    }
    vlSelf->top__DOT__proc2mngr_val = ((IData)(vlSelf->top__DOT__commit_inst) 
                                       & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_val_W));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_M) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_M)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_M = (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M 
            = vlSelf->top__DOT__DUT__DOT__stall_M;
    }
    vlSelf->top__DOT__DUT__DOT__next_val_M = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M)) 
                                              & (IData)(vlSelf->top__DOT__DUT__DOT__val_M));
    vlSelf->top__DOT__DUT__DOT__stall_X = ((IData)(vlSelf->top__DOT__DUT__DOT__val_X) 
                                           & (IData)(top__DOT__DUT__DOT____VdfgTmp_hd3c00747__0));
    if ((1U & ((IData)(vlSelf->top__DOT__op1_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op1_byp_sel_D)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op1_byp_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__op1_byp_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__op1_byp_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__op1_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op1_byp_sel_D)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op1_byp_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__op1_byp_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__op1_byp_sel_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__op2_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_byp_sel_D)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_byp_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__op2_byp_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__op2_byp_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__op2_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__op2_byp_sel_D)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__op2_byp_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__op2_byp_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__op2_byp_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_hazard_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_hazard_D;
    }
    vlSelf->top__DOT__DUT__DOT__ostall_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_mngr2proc_D) 
                                               | ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_IntMulAlt_D) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_hazard_D))));
    if (((IData)(vlSelf->top__DOT__proc2mngr_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_val))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_val 
            = vlSelf->top__DOT__proc2mngr_val;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_M))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_M 
            = vlSelf->top__DOT__DUT__DOT__next_val_M;
    }
    vlSelf->top__DOT__dmem_respstream_rdy = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_M) 
                                             & (0U 
                                                != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_M)));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_X) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__IntMulAlt_respstream_rdy)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__IntMulAlt_respstream_rdy 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_X))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_X 
            = vlSelf->top__DOT__DUT__DOT__stall_X;
    }
    vlSelf->top__DOT__DUT__DOT__next_val_X = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_X)) 
                                              & (IData)(vlSelf->top__DOT__DUT__DOT__val_X));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_D 
            = vlSelf->top__DOT__DUT__DOT__ostall_D;
    }
    top__DOT__DUT__DOT____VdfgTmp_h3c243d67__0 = ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_D) 
                                                  | (IData)(top__DOT__DUT__DOT____VdfgTmp_hd3c00747__0));
    if (((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy 
            = vlSelf->top__DOT__dmem_respstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_X))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_X 
            = vlSelf->top__DOT__DUT__DOT__next_val_X;
    }
    vlSelf->top__DOT__dmem_reqstream_val = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_X) 
                                            & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__osquash_X = ((IData)(vlSelf->top__DOT__DUT__DOT__next_val_X) 
                                             & (IData)(vlSelf->top__DOT__DUT__DOT__pc_redirect_X));
    vlSelf->top__DOT__DUT__DOT__stall_F = ((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
                                           & ((IData)(vlSelf->top__DOT__DUT__DOT__ostall_F) 
                                              | (IData)(top__DOT__DUT__DOT____VdfgTmp_h3c243d67__0)));
    vlSelf->top__DOT__DUT__DOT__stall_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                           & (IData)(top__DOT__DUT__DOT____VdfgTmp_h3c243d67__0));
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_val))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_val 
            = vlSelf->top__DOT__dmem_reqstream_val;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__osquash_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_X))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__osquash_X 
            = vlSelf->top__DOT__DUT__DOT__osquash_X;
    }
    vlSelf->top__DOT__DUT__DOT__squash_D = ((IData)(vlSelf->top__DOT__DUT__DOT__val_D) 
                                            & (IData)(vlSelf->top__DOT__DUT__DOT__osquash_X));
    vlSelf->top__DOT__imem_respstream_drop = ((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
                                              & ((7U 
                                                  == (IData)(vlSelf->top__DOT__DUT__DOT__br_type_D)) 
                                                 | (IData)(vlSelf->top__DOT__DUT__DOT__osquash_X)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_F))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_F 
            = vlSelf->top__DOT__DUT__DOT__stall_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_D))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_D 
            = vlSelf->top__DOT__DUT__DOT__stall_D;
    }
    top__DOT__DUT__DOT____VdfgTmp_hb10c38c5__0 = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_D)) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__val_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__squash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__squash_D))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__squash_D 
            = vlSelf->top__DOT__DUT__DOT__squash_D;
    }
    vlSelf->top__DOT__reg_en_D = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_D)) 
                                        | (IData)(vlSelf->top__DOT__DUT__DOT__squash_D)));
    if (((IData)(vlSelf->top__DOT__imem_respstream_drop) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_drop))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_drop 
            = vlSelf->top__DOT__imem_respstream_drop;
    }
    vlSelf->top__DOT__DUT__DOT__next_val_F = ((IData)(vlSelf->top__DOT__DUT__DOT__val_F) 
                                              & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_F)) 
                                                 & (~ (IData)(vlSelf->top__DOT__imem_respstream_drop))));
    vlSelf->top__DOT__imem_respstream_rdy = (1U & (
                                                   (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_F)) 
                                                   | (IData)(vlSelf->top__DOT__imem_respstream_drop)));
    vlSelf->top__DOT__mngr2proc_rdy = ((IData)(top__DOT__DUT__DOT____VdfgTmp_hb10c38c5__0) 
                                       & (IData)(vlSelf->top__DOT__DUT__DOT__mngr2proc_rdy_D));
    vlSelf->top__DOT__IntMulAlt_reqstream_val = ((IData)(top__DOT__DUT__DOT____VdfgTmp_hb10c38c5__0) 
                                                 & (1U 
                                                    == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D)));
    vlSelf->top__DOT__DUT__DOT__next_val_D = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__squash_D)) 
                                              & (IData)(top__DOT__DUT__DOT____VdfgTmp_hb10c38c5__0));
    if (((IData)(vlSelf->top__DOT__reg_en_D) ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_D = vlSelf->top__DOT__reg_en_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_F))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_F 
            = vlSelf->top__DOT__DUT__DOT__next_val_F;
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_rdy))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_rdy 
            = vlSelf->top__DOT__imem_respstream_rdy;
    }
    vlSelf->top__DOT__imem_reqstream_val = ((~ (IData)(vlSelf->top__DOT__reset)) 
                                            & (IData)(vlSelf->top__DOT__imem_respstream_rdy));
    if (((IData)(vlSelf->top__DOT__mngr2proc_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_rdy 
            = vlSelf->top__DOT__mngr2proc_rdy;
    }
    if (((IData)(vlSelf->top__DOT__IntMulAlt_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__IntMulAlt_reqstream_val))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__IntMulAlt_reqstream_val 
            = vlSelf->top__DOT__IntMulAlt_reqstream_val;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__next_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_D))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__next_val_D 
            = vlSelf->top__DOT__DUT__DOT__next_val_D;
    }
    if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_val 
            = vlSelf->top__DOT__imem_reqstream_val;
    }
}
