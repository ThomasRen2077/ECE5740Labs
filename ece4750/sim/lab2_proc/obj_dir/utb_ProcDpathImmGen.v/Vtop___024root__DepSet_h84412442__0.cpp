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
    vlSelf->top__DOT__imm_type = 0U;
    vlSelf->top__DOT__inst = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathImmGen.v", 
                                       33);
    vlSelf->top__DOT__imm_type = 0U;
    vlSelf->top__DOT__inst = 0xffffffU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathImmGen.v", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xfU == vlSelf->top__DOT__imm))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("I-type instruction. Got: %x\n",
                          32,vlSelf->top__DOT__imm);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Test failed: I-type instruction. Expected: 0000000f, Got: %x\n",
                      32,vlSelf->top__DOT__imm);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcDpathImmGen.v", 42, "");
        }
    }
    vlSelf->top__DOT__imm_type = 1U;
    vlSelf->top__DOT__inst = 0xf00ffffU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathImmGen.v", 
                                       48);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xffU == vlSelf->top__DOT__imm))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("S-type instruction. Got: %x\n",
                          32,vlSelf->top__DOT__imm);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Test failed: S-type instruction. Expected: 000000ff, Got: %x\n",
                      32,vlSelf->top__DOT__imm);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcDpathImmGen.v", 52, "");
        }
    }
    vlSelf->top__DOT__imm_type = 2U;
    vlSelf->top__DOT__inst = 0xffffU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathImmGen.v", 
                                       58);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x81eU == vlSelf->top__DOT__imm))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("B-type instruction. Got: %x\n",
                          32,vlSelf->top__DOT__imm);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Test failed: B-type instruction. Expected: 0000081e, Got: %x\n",
                      32,vlSelf->top__DOT__imm);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcDpathImmGen.v", 62, "");
        }
    }
    vlSelf->top__DOT__imm_type = 3U;
    vlSelf->top__DOT__inst = 0xfffff000U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathImmGen.v", 
                                       68);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xfffff000U == vlSelf->top__DOT__imm))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("U-type instruction. Got: %x\n",
                          32,vlSelf->top__DOT__imm);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Test failed: U-type instruction. Expected: fffff000, Got: %x\n",
                      32,vlSelf->top__DOT__imm);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcDpathImmGen.v", 72, "");
        }
    }
    vlSelf->top__DOT__imm_type = 4U;
    vlSelf->top__DOT__inst = 0x7fffffffU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathImmGen.v", 
                                       78);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xffffeU == vlSelf->top__DOT__imm))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("J-type instruction. Got: %x\n",
                          32,vlSelf->top__DOT__imm);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Test failed: J-type instruction. Expected: 000ffffe, Got: %x\n",
                      32,vlSelf->top__DOT__imm);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcDpathImmGen.v", 82, "");
        }
    }
    vlSelf->top__DOT__imm_type = 5U;
    vlSelf->top__DOT__inst = 0xf0000fffU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathImmGen.v", 
                                       88);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0U == vlSelf->top__DOT__imm))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("I-type variant instruction. Got: %x\n",
                          32,vlSelf->top__DOT__imm);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Test failed: I-type variant instruction. Expected: 00000000, Got: %x\n",
                      32,vlSelf->top__DOT__imm);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcDpathImmGen.v", 92, "");
        }
    }
    vlSelf->top__DOT__imm_type = 6U;
    vlSelf->top__DOT__inst = 0xffffffffU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathImmGen.v", 
                                       98);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0U == vlSelf->top__DOT__imm))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Default case instruction. Got: %x\n",
                          32,vlSelf->top__DOT__imm);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Test failed: Default case. Expected: Undefined (X or similar), Got: %x\n",
                      32,vlSelf->top__DOT__imm);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_ProcDpathImmGen.v", 102, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathImmGen.v", 
                                       106);
    VL_FINISH_MT("utb_ProcDpathImmGen.v", 110, "");
    vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->top__DOT__imm_type) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__imm_type) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__imm_type))) {
                vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__imm_type)))) {
                vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__imm_type))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__imm_type)))) {
                vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__imm_type))) {
                vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__imm_type))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__imm_type) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__imm_type)))) {
                vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__imm_type))) {
                vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__imm_type))) {
            vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imm = 0U;
        } else {
            vlSelf->top__DOT__imm = ((1U & (IData)(vlSelf->top__DOT__imm_type))
                                      ? (0x1fU & (vlSelf->top__DOT__inst 
                                                  >> 0x14U))
                                      : (((- (IData)(
                                                     (vlSelf->top__DOT__inst 
                                                      >> 0x1fU))) 
                                          << 0x14U) 
                                         | ((0xff000U 
                                             & vlSelf->top__DOT__inst) 
                                            | ((0x800U 
                                                & (vlSelf->top__DOT__inst 
                                                   >> 9U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->top__DOT__inst 
                                                        >> 0x14U)))))));
        }
    } else {
        vlSelf->top__DOT__imm = ((2U & (IData)(vlSelf->top__DOT__imm_type))
                                  ? ((1U & (IData)(vlSelf->top__DOT__imm_type))
                                      ? (0xfffff000U 
                                         & vlSelf->top__DOT__inst)
                                      : (((- (IData)(
                                                     (vlSelf->top__DOT__inst 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0x800U 
                                             & (vlSelf->top__DOT__inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->top__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 7U))))))
                                  : ((1U & (IData)(vlSelf->top__DOT__imm_type))
                                      ? (((- (IData)(
                                                     (vlSelf->top__DOT__inst 
                                                      >> 0x1fU))) 
                                          << 0xbU) 
                                         | ((0x7e0U 
                                             & (vlSelf->top__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->top__DOT__inst 
                                                  >> 7U))))
                                      : (((- (IData)(
                                                     (vlSelf->top__DOT__inst 
                                                      >> 0x1fU))) 
                                          << 0xbU) 
                                         | (0x7ffU 
                                            & (vlSelf->top__DOT__inst 
                                               >> 0x14U)))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_type) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type)))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type = ((6U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__imm_type)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->top__DOT__imm_type)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imm_type) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type)))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type = ((5U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__imm_type)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->top__DOT__imm_type)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imm_type) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type = ((3U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__imm_type)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->top__DOT__imm_type)));
    }
    if ((1U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffffeU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (1U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((2U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffffdU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (2U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((4U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffffbU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (4U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((8U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffff7U 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (8U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x10U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffffefU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x10U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x20U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffffdfU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x20U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x40U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffffbfU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x40U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x80U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffff7fU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x80U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x100U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffeffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x100U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x200U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffdffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x200U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x400U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffbffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x400U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x800U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffff7ffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x800U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x1000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffefffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x1000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x2000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffdfffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x2000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x4000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffbfffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x4000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x8000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffff7fffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x8000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x10000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffeffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x10000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x20000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffdffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x20000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x40000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffbffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x40000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x80000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfff7ffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x80000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x100000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffefffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x100000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x200000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffdfffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x200000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x400000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffbfffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x400000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x800000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xff7fffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x800000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x1000000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfeffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x1000000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x2000000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfdffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x2000000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x4000000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfbffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x4000000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x8000000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xf7ffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x8000000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x10000000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xefffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x10000000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x20000000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xdfffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x20000000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x40000000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xbfffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x40000000U 
                                                & vlSelf->top__DOT__inst));
    }
    if (((vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0x7fffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x80000000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((1U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffeU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (1U & vlSelf->top__DOT__imm));
    }
    if ((2U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffdU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (2U & vlSelf->top__DOT__imm));
    }
    if ((4U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffbU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (4U & vlSelf->top__DOT__imm));
    }
    if ((8U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffff7U 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (8U & vlSelf->top__DOT__imm));
    }
    if ((0x10U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffefU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x10U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x20U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffdfU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x20U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x40U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffbfU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x40U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x80U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffff7fU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x80U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x100U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffeffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x100U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x200U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffdffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x200U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x400U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffbffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x400U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x800U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffff7ffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x800U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x1000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffefffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x1000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x2000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffdfffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x2000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x4000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffbfffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x4000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x8000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffff7fffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x8000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x10000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffeffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x10000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x20000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffdffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x20000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x40000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffbffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x40000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x80000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfff7ffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x80000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x100000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffefffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x100000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x200000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffdfffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x200000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x400000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffbfffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x400000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x800000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xff7fffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x800000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfeffffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x1000000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfdffffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x2000000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfbffffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x4000000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xf7ffffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x8000000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xefffffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x10000000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xdfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x20000000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xbfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x40000000U 
                                               & vlSelf->top__DOT__imm));
    }
    if (((vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0x7fffffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x80000000U 
                                               & vlSelf->top__DOT__imm));
    }
}
