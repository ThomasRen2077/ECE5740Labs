// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__in0 = 0U;
    vlSelf->top__DOT__in1 = 0U;
    vlSelf->top__DOT__fn = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathAlu.v", 
                                       37);
    vlSelf->top__DOT__in0 = 1U;
    vlSelf->top__DOT__in1 = 1U;
    vlSelf->top__DOT__fn = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathAlu.v", 
                                       43);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__out != (vlSelf->top__DOT__in0 
                                                 + vlSelf->top__DOT__in1)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Error in Addition Test. Expected %x, got %x\n",
                          32,(vlSelf->top__DOT__in0 
                              + vlSelf->top__DOT__in1),
                          32,vlSelf->top__DOT__out);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcDpathAlu.v", 47, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Addition Test Passed. Sum is %x\n",
                      32,vlSelf->top__DOT__out);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    vlSelf->top__DOT__in0 = 5U;
    vlSelf->top__DOT__in1 = 3U;
    vlSelf->top__DOT__fn = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathAlu.v", 
                                       56);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__out != (vlSelf->top__DOT__in0 
                                                 - vlSelf->top__DOT__in1)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Error in Subtraction Test. Expected %x, got %x\n",
                          32,(vlSelf->top__DOT__in0 
                              - vlSelf->top__DOT__in1),
                          32,vlSelf->top__DOT__out);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcDpathAlu.v", 60, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Subtraction Test Passed. Result is %x\n",
                      32,vlSelf->top__DOT__out);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    vlSelf->top__DOT__in0 = 0xfU;
    vlSelf->top__DOT__in1 = 5U;
    vlSelf->top__DOT__fn = 2U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathAlu.v", 
                                       69);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__out != (vlSelf->top__DOT__in0 
                                                 & vlSelf->top__DOT__in1)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Error in Bitwise AND Test. Expected %x, got %x\n",
                          32,(vlSelf->top__DOT__in0 
                              & vlSelf->top__DOT__in1),
                          32,vlSelf->top__DOT__out);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcDpathAlu.v", 73, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Bitwise AND Test Passed. Result is %x\n",
                      32,vlSelf->top__DOT__out);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    vlSelf->top__DOT__in0 = 0xfU;
    vlSelf->top__DOT__in1 = 0xf0U;
    vlSelf->top__DOT__fn = 3U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathAlu.v", 
                                       82);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__out != (vlSelf->top__DOT__in0 
                                                 | vlSelf->top__DOT__in1)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Error in Bitwise OR Test. Expected %x, got %x\n",
                          32,(vlSelf->top__DOT__in0 
                              | vlSelf->top__DOT__in1),
                          32,vlSelf->top__DOT__out);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcDpathAlu.v", 86, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Bitwise OR Test Passed. Result is %x\n",
                      32,vlSelf->top__DOT__out);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    vlSelf->top__DOT__in0 = 0xffU;
    vlSelf->top__DOT__in1 = 0xaaU;
    vlSelf->top__DOT__fn = 4U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathAlu.v", 
                                       95);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__out != (vlSelf->top__DOT__in0 
                                                 ^ vlSelf->top__DOT__in1)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Error in Bitwise XOR Test. Expected %x, got %x\n",
                          32,(vlSelf->top__DOT__in0 
                              ^ vlSelf->top__DOT__in1),
                          32,vlSelf->top__DOT__out);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcDpathAlu.v", 99, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Bitwise XOR Test Passed. Result is %x\n",
                      32,vlSelf->top__DOT__out);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    vlSelf->top__DOT__in0 = 0xfffffffeU;
    vlSelf->top__DOT__in1 = 1U;
    vlSelf->top__DOT__fn = 5U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathAlu.v", 
                                       108);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U != vlSelf->top__DOT__out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Error in Set Less Than Test. Expected 1, got %x\n",
                          32,vlSelf->top__DOT__out);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcDpathAlu.v", 112, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Set Less Than Test Passed. Result is %x\n",
                      32,vlSelf->top__DOT__out);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    vlSelf->top__DOT__in0 = 0xfffffffeU;
    vlSelf->top__DOT__in1 = 1U;
    vlSelf->top__DOT__fn = 6U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathAlu.v", 
                                       121);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0U != vlSelf->top__DOT__out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Error in Set Less Than Unsigned Test. Expected 0, got %x\n",
                          32,vlSelf->top__DOT__out);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcDpathAlu.v", 125, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Set Less Than Unsigned Test Passed. Result is %x\n",
                      32,vlSelf->top__DOT__out);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    vlSelf->top__DOT__in0 = 0xfffffff0U;
    vlSelf->top__DOT__in1 = 2U;
    vlSelf->top__DOT__fn = 7U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathAlu.v", 
                                       134);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xfffffffcU != vlSelf->top__DOT__out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Error in Shift Right Arithmetic Test. Expected FFFFFFFC, got %x\n",
                          32,vlSelf->top__DOT__out);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcDpathAlu.v", 138, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Shift Right Arithmetic Test Passed. Result is %x\n",
                      32,vlSelf->top__DOT__out);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    vlSelf->top__DOT__in0 = 0xf0000000U;
    vlSelf->top__DOT__in1 = 4U;
    vlSelf->top__DOT__fn = 8U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathAlu.v", 
                                       147);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xf000000U != vlSelf->top__DOT__out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Error in Shift Right Logical Test. Expected 0F000000, got %x\n",
                          32,vlSelf->top__DOT__out);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcDpathAlu.v", 151, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Shift Right Logical Test Passed. Result is %x\n",
                      32,vlSelf->top__DOT__out);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    vlSelf->top__DOT__in0 = 1U;
    vlSelf->top__DOT__in1 = 3U;
    vlSelf->top__DOT__fn = 9U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathAlu.v", 
                                       160);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((8U != vlSelf->top__DOT__out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Error in Shift Left Logical Test. Expected 8, got %x\n",
                          32,vlSelf->top__DOT__out);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcDpathAlu.v", 164, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Shift Left Logical Test Passed. Result is %x\n",
                      32,vlSelf->top__DOT__out);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    vlSelf->top__DOT__in0 = 4U;
    vlSelf->top__DOT__in1 = 4U;
    vlSelf->top__DOT__fn = 0xaU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathAlu.v", 
                                       173);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__out != (0xfffffffeU 
                                                 & (vlSelf->top__DOT__in0 
                                                    + vlSelf->top__DOT__in1))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Error in PC Addition Test. Expected %x, got %x\n",
                          32,(0xfffffffeU & (vlSelf->top__DOT__in0 
                                             + vlSelf->top__DOT__in1)),
                          32,vlSelf->top__DOT__out);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcDpathAlu.v", 177, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("PC Addition Test Passed. Result is %x\n",
                      32,vlSelf->top__DOT__out);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    vlSelf->top__DOT__in0 = 0xf00cU;
    vlSelf->top__DOT__in1 = 0xa000bU;
    vlSelf->top__DOT__fn = 0xbU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathAlu.v", 
                                       186);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__out != vlSelf->top__DOT__in0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Error in PC Addition Test. Expected %x, got %x\n",
                          32,vlSelf->top__DOT__in0,
                          32,vlSelf->top__DOT__out);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcDpathAlu.v", 190, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("PC Addition Test Passed. Result is %x\n",
                      32,vlSelf->top__DOT__out);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    vlSelf->top__DOT__in0 = 4U;
    vlSelf->top__DOT__in1 = 0xfffffff4U;
    vlSelf->top__DOT__fn = 0xcU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathAlu.v", 
                                       200);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__out != vlSelf->top__DOT__in1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Error in PC Addition Test. Expected %x, got %x\n",
                          32,vlSelf->top__DOT__in1,
                          32,vlSelf->top__DOT__out);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcDpathAlu.v", 204, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("PC Addition Test Passed. Result is %x\n",
                      32,vlSelf->top__DOT__out);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    vlSelf->top__DOT__in0 = 5U;
    vlSelf->top__DOT__in1 = 3U;
    vlSelf->top__DOT__fn = 0xdU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathAlu.v", 
                                       213);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0U != vlSelf->top__DOT__out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Error in Default Operation Test. Expected 0, got %10#\n",
                          32,vlSelf->top__DOT__out);
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_FINISH_MT("utb_ProcDpathAlu.v", 218, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Default Operation Test Passed. Result is %10#\n",
                      32,vlSelf->top__DOT__out);
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "utb_ProcDpathAlu.v", 
                                       226);
    VL_FINISH_MT("utb_ProcDpathAlu.v", 231, "");
    vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
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
    if ((1U & (~ ((IData)(vlSelf->top__DOT__fn) >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__fn) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__fn) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__fn))) {
                    vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__fn)))) {
                    vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__fn))) {
                if ((1U & (IData)(vlSelf->top__DOT__fn))) {
                    vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__fn)))) {
                    vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__fn))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__fn) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__fn))) {
                    vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__fn)))) {
                    vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__fn))) {
                if ((1U & (IData)(vlSelf->top__DOT__fn))) {
                    vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__fn)))) {
                    vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__fn))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__fn) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__fn) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__fn)))) {
                    vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__fn))) {
                    vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__fn))) {
                if ((1U & (IData)(vlSelf->top__DOT__fn))) {
                    vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__fn)))) {
                    vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__fn))) {
            if ((2U & (IData)(vlSelf->top__DOT__fn))) {
                vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__out = 0U;
            } else {
                vlSelf->top__DOT__out = ((1U & (IData)(vlSelf->top__DOT__fn))
                                          ? 0U : vlSelf->top__DOT__in1);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__fn) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__fn))) {
                    vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__fn)))) {
                    vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
                }
            }
        } else {
            vlSelf->top__DOT__out = ((2U & (IData)(vlSelf->top__DOT__fn))
                                      ? ((1U & (IData)(vlSelf->top__DOT__fn))
                                          ? vlSelf->top__DOT__in0
                                          : (0xfffffffeU 
                                             & (vlSelf->top__DOT__in0 
                                                + vlSelf->top__DOT__in1)))
                                      : ((1U & (IData)(vlSelf->top__DOT__fn))
                                          ? ((0x1fU 
                                              >= vlSelf->top__DOT__in1)
                                              ? (vlSelf->top__DOT__in0 
                                                 << vlSelf->top__DOT__in1)
                                              : 0U)
                                          : ((0x1fU 
                                              >= vlSelf->top__DOT__in1)
                                              ? (vlSelf->top__DOT__in0 
                                                 >> vlSelf->top__DOT__in1)
                                              : 0U)));
        }
    } else {
        vlSelf->top__DOT__out = ((4U & (IData)(vlSelf->top__DOT__fn))
                                  ? ((2U & (IData)(vlSelf->top__DOT__fn))
                                      ? ((1U & (IData)(vlSelf->top__DOT__fn))
                                          ? ((0x1fU 
                                              >= vlSelf->top__DOT__in1)
                                              ? VL_SHIFTRS_III(32,32,32, vlSelf->top__DOT__in0, vlSelf->top__DOT__in1)
                                              : (- 
                                                 (vlSelf->top__DOT__in0 
                                                  >> 0x1fU)))
                                          : ((vlSelf->top__DOT__in0 
                                              < vlSelf->top__DOT__in1)
                                              ? 1U : 0U))
                                      : ((1U & (IData)(vlSelf->top__DOT__fn))
                                          ? (VL_LTS_III(32, vlSelf->top__DOT__in0, vlSelf->top__DOT__in1)
                                              ? 1U : 0U)
                                          : (vlSelf->top__DOT__in0 
                                             ^ vlSelf->top__DOT__in1)))
                                  : ((2U & (IData)(vlSelf->top__DOT__fn))
                                      ? ((1U & (IData)(vlSelf->top__DOT__fn))
                                          ? (vlSelf->top__DOT__in0 
                                             | vlSelf->top__DOT__in1)
                                          : (vlSelf->top__DOT__in0 
                                             & vlSelf->top__DOT__in1))
                                      : ((1U & (IData)(vlSelf->top__DOT__fn))
                                          ? (vlSelf->top__DOT__in0 
                                             - vlSelf->top__DOT__in1)
                                          : (vlSelf->top__DOT__in0 
                                             + vlSelf->top__DOT__in1))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__fn) ^ (IData)(vlSelf->top__DOT____Vtogcov__fn)))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__fn = ((0xeU & (IData)(vlSelf->top__DOT____Vtogcov__fn)) 
                                           | (1U & (IData)(vlSelf->top__DOT__fn)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__fn) ^ (IData)(vlSelf->top__DOT____Vtogcov__fn)))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__fn = ((0xdU & (IData)(vlSelf->top__DOT____Vtogcov__fn)) 
                                           | (2U & (IData)(vlSelf->top__DOT__fn)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__fn) ^ (IData)(vlSelf->top__DOT____Vtogcov__fn)))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__fn = ((0xbU & (IData)(vlSelf->top__DOT____Vtogcov__fn)) 
                                           | (4U & (IData)(vlSelf->top__DOT__fn)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__fn) ^ (IData)(vlSelf->top__DOT____Vtogcov__fn)))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__fn = ((7U & (IData)(vlSelf->top__DOT____Vtogcov__fn)) 
                                           | (8U & (IData)(vlSelf->top__DOT__fn)));
    }
    vlSelf->top__DOT__ops_eq = (vlSelf->top__DOT__in0 
                                == vlSelf->top__DOT__in1);
    vlSelf->top__DOT__ops_lt = VL_LTS_III(32, vlSelf->top__DOT__in0, vlSelf->top__DOT__in1);
    vlSelf->top__DOT__ops_ltu = (vlSelf->top__DOT__in0 
                                 < vlSelf->top__DOT__in1);
    if ((1U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffffffeU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (1U & vlSelf->top__DOT__in0));
    }
    if ((2U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffffffdU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (2U & vlSelf->top__DOT__in0));
    }
    if ((4U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffffffbU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (4U & vlSelf->top__DOT__in0));
    }
    if ((8U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffffff7U 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (8U & vlSelf->top__DOT__in0));
    }
    if ((0x10U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffffffefU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x10U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x20U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffffffdfU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x20U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x40U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffffffbfU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x40U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x80U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffffff7fU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x80U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x100U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffffeffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x100U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x200U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffffdffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x200U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x400U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffffbffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x400U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x800U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffff7ffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x800U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x1000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffffefffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x1000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x2000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffffdfffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x2000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x4000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffffbfffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x4000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x8000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffff7fffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x8000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x10000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffeffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x10000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x20000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffdffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x20000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x40000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffbffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x40000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x80000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfff7ffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x80000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x100000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffefffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x100000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x200000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffdfffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x200000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x400000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffbfffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x400000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x800000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xff7fffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x800000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfeffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x1000000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfdffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x2000000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfbffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x4000000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xf7ffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x8000000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xefffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x10000000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xdfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x20000000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xbfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x40000000U 
                                               & vlSelf->top__DOT__in0));
    }
    if (((vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0x7fffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x80000000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((1U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffffffeU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (1U & vlSelf->top__DOT__in1));
    }
    if ((2U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffffffdU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (2U & vlSelf->top__DOT__in1));
    }
    if ((4U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffffffbU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (4U & vlSelf->top__DOT__in1));
    }
    if ((8U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffffff7U 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (8U & vlSelf->top__DOT__in1));
    }
    if ((0x10U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffffffefU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x10U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x20U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffffffdfU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x20U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x40U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffffffbfU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x40U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x80U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffffff7fU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x80U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x100U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffffeffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x100U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x200U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffffdffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x200U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x400U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffffbffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x400U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x800U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffff7ffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x800U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x1000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffffefffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x1000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x2000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffffdfffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x2000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x4000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffffbfffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x4000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x8000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffff7fffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x8000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x10000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffeffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x10000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x20000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffdffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x20000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x40000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffbffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x40000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x80000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfff7ffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x80000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x100000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffefffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x100000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x200000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffdfffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x200000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x400000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffbfffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x400000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x800000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xff7fffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x800000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfeffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x1000000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfdffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x2000000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfbffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x4000000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xf7ffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x8000000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xefffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x10000000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xdfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x20000000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xbfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x40000000U 
                                               & vlSelf->top__DOT__in1));
    }
    if (((vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0x7fffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x80000000U 
                                               & vlSelf->top__DOT__in1));
    }
    if (((IData)(vlSelf->top__DOT__ops_eq) ^ (IData)(vlSelf->top__DOT____Vtogcov__ops_eq))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ops_eq = vlSelf->top__DOT__ops_eq;
    }
    if (((IData)(vlSelf->top__DOT__ops_lt) ^ (IData)(vlSelf->top__DOT____Vtogcov__ops_lt))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ops_lt = vlSelf->top__DOT__ops_lt;
    }
    if (((IData)(vlSelf->top__DOT__ops_ltu) ^ (IData)(vlSelf->top__DOT____Vtogcov__ops_ltu))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ops_ltu = vlSelf->top__DOT__ops_ltu;
    }
    if ((1U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffffeU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (1U & vlSelf->top__DOT__out));
    }
    if ((2U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffffdU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (2U & vlSelf->top__DOT__out));
    }
    if ((4U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffffbU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (4U & vlSelf->top__DOT__out));
    }
    if ((8U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffff7U 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (8U & vlSelf->top__DOT__out));
    }
    if ((0x10U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffffefU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x10U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x20U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffffdfU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x20U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x40U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffffbfU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x40U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x80U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffff7fU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x80U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x100U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffeffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x100U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x200U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffdffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x200U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x400U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffbffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x400U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x800U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffff7ffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x800U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x1000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffefffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x1000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x2000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffdfffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x2000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x4000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffbfffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x4000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x8000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffff7fffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x8000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x10000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffeffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x10000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x20000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffdffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x20000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x40000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffbffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x40000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x80000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfff7ffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x80000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x100000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffefffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x100000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x200000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffdfffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x200000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x400000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffbfffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x400000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x800000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xff7fffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x800000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfeffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x1000000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfdffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x2000000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfbffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x4000000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xf7ffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x8000000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xefffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x10000000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xdfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x20000000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xbfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x40000000U 
                                               & vlSelf->top__DOT__out));
    }
    if (((vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0x7fffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x80000000U 
                                               & vlSelf->top__DOT__out));
    }
}
