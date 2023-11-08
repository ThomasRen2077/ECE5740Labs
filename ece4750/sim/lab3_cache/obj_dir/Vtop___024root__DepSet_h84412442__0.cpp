// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Body
    VL_WRITEF("Start of Testbench\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheBaseCtrl.v", 
                                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 1U;
    vlSelf->top__DOT__memreq_val = 0U;
    vlSelf->top__DOT__memreq_type = 0U;
    vlSelf->top__DOT__memresp_rdy = 0U;
    vlSelf->top__DOT__cache_req_rdy = 0U;
    vlSelf->top__DOT__cache_resp_val = 0U;
    vlSelf->top__DOT__cache_resp_type = 0U;
    vlSelf->top__DOT__tarray_match = 0U;
    vlSelf->top__DOT__current_dirty = 0U;
    vlSelf->top__DOT__spill_done = 0U;
    vlSelf->top__DOT__refill_req_done = 0U;
    vlSelf->top__DOT__refill_resp_done = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_CacheBaseCtrl.v", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    vlSelf->top__DOT__memreq_val = 1U;
    vlSelf->top__DOT__memresp_rdy = 1U;
    vlSelf->top__DOT__tarray_match = 1U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_CacheBaseCtrl.v", 
                                       87);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__memreq_val = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_CacheBaseCtrl.v", 
                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__memreq_val = 1U;
    vlSelf->top__DOT__memreq_type = 1U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_CacheBaseCtrl.v", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__memreq_val = 0U;
    vlSelf->top__DOT__memreq_type = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_CacheBaseCtrl.v", 
                                       100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__memreq_val = 1U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_CacheBaseCtrl.v", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__memreq_val = 0U;
    vlSelf->top__DOT__tarray_match = 0U;
    vlSelf->top__DOT__current_dirty = 1U;
    co_await vlSelf->__VdlySched.delay(0x28ULL, nullptr, 
                                       "utb_CacheBaseCtrl.v", 
                                       108);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__spill_done = 1U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "utb_CacheBaseCtrl.v", 
                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__spill_done = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_CacheBaseCtrl.v", 
                                       125);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("utb_CacheBaseCtrl.v", 128, "");
    vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
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
    // Body
    if (vlSelf->top__DOT__tarray_match) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__tarray_match)))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__memreq_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__memreq_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_val = vlSelf->top__DOT__memreq_val;
    }
    if (((IData)(vlSelf->top__DOT__memreq_type) ^ (IData)(vlSelf->top__DOT____Vtogcov__memreq_type))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_type = vlSelf->top__DOT__memreq_type;
    }
    if (((IData)(vlSelf->top__DOT__memresp_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__memresp_rdy))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_rdy = vlSelf->top__DOT__memresp_rdy;
    }
    if (((IData)(vlSelf->top__DOT__cache_req_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__cache_req_rdy))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_rdy 
            = vlSelf->top__DOT__cache_req_rdy;
    }
    if (((IData)(vlSelf->top__DOT__cache_resp_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache_resp_val))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_val 
            = vlSelf->top__DOT__cache_resp_val;
    }
    if (((IData)(vlSelf->top__DOT__cache_resp_type) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache_resp_type))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_type 
            = vlSelf->top__DOT__cache_resp_type;
    }
    if (((IData)(vlSelf->top__DOT__tarray_match) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray_match))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray_match = vlSelf->top__DOT__tarray_match;
    }
    if (((IData)(vlSelf->top__DOT__current_dirty) ^ (IData)(vlSelf->top__DOT____Vtogcov__current_dirty))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__current_dirty 
            = vlSelf->top__DOT__current_dirty;
    }
    if (((IData)(vlSelf->top__DOT__spill_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__spill_done))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__spill_done = vlSelf->top__DOT__spill_done;
    }
    if (((IData)(vlSelf->top__DOT__refill_req_done) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__refill_req_done))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__refill_req_done 
            = vlSelf->top__DOT__refill_req_done;
    }
    if (((IData)(vlSelf->top__DOT__refill_resp_done) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__refill_resp_done))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__refill_resp_done 
            = vlSelf->top__DOT__refill_resp_done;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__memresp_rdy) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_notrdy)))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_notrdy 
            = (1U & (~ (IData)(vlSelf->top__DOT__memresp_rdy)));
    }
    vlSelf->top__DOT__tarray_wen = ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                    & ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                       & (IData)(vlSelf->top__DOT__refill_resp_done)));
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
        vlSelf->top__DOT__memresp_val = ((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                                         & (IData)(vlSelf->top__DOT__tarray_match));
        vlSelf->top__DOT__DUT__DOT__state_next = vlSelf->top__DOT__DUT__DOT__state_reg;
        if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__tarray_match)) 
                      & (IData)(vlSelf->top__DOT__current_dirty))))) {
            if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__tarray_match)) 
                          & (~ (IData)(vlSelf->top__DOT__current_dirty)))))) {
                vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & ((~ (IData)(vlSelf->top__DOT__tarray_match)) 
                       & (~ (IData)(vlSelf->top__DOT__current_dirty))))) {
                vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if (((~ (IData)(vlSelf->top__DOT__tarray_match)) 
             & (IData)(vlSelf->top__DOT__current_dirty))) {
            vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__state_next = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->top__DOT__tarray_match)) 
                          & (~ (IData)(vlSelf->top__DOT__current_dirty))))) {
            vlSelf->top__DOT__DUT__DOT__state_next = 2U;
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                      & (IData)(vlSelf->top__DOT__tarray_match))))) {
            vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        }
        if (((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
             & (IData)(vlSelf->top__DOT__tarray_match))) {
            vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->top__DOT__darray_wen = vlSelf->top__DOT__DUT__DOT__mem_req_type_M0;
        vlSelf->top__DOT__refill_one_word_resp_received = 0U;
        vlSelf->top__DOT__cache_resp_rdy = 0U;
        vlSelf->top__DOT__cache_req_val = 0U;
        vlSelf->top__DOT__refill_one_word_req_sent = 0U;
        vlSelf->top__DOT__spill_one_word_done = 0U;
    } else {
        vlSelf->top__DOT__memresp_val = 0U;
        vlSelf->top__DOT__DUT__DOT__state_next = vlSelf->top__DOT__DUT__DOT__state_reg;
        vlSelf->top__DOT__darray_wen = ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                        & (IData)(vlSelf->top__DOT__refill_resp_done));
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
            if (vlSelf->top__DOT__spill_done) {
                vlSelf->top__DOT__DUT__DOT__state_next = 2U;
            }
            vlSelf->top__DOT__refill_one_word_resp_received = 0U;
            vlSelf->top__DOT__cache_resp_rdy = 0U;
            vlSelf->top__DOT__cache_req_val = (1U & 
                                               (~ (IData)(vlSelf->top__DOT__spill_done)));
            vlSelf->top__DOT__refill_one_word_req_sent = 0U;
            vlSelf->top__DOT__spill_one_word_done = 
                ((IData)(vlSelf->top__DOT__cache_req_val) 
                 & (IData)(vlSelf->top__DOT__cache_req_rdy));
        } else {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
                if (vlSelf->top__DOT__refill_resp_done) {
                    vlSelf->top__DOT__DUT__DOT__state_next = 0U;
                }
            } else {
                vlSelf->top__DOT__DUT__DOT__state_next = 0U;
            }
            vlSelf->top__DOT__refill_one_word_resp_received 
                = ((IData)(vlSelf->top__DOT__cache_resp_val) 
                   & (IData)(vlSelf->top__DOT__cache_resp_rdy));
            vlSelf->top__DOT__cache_resp_rdy = (1U 
                                                & (~ (IData)(vlSelf->top__DOT__refill_resp_done)));
            vlSelf->top__DOT__cache_req_val = (1U & 
                                               (~ (IData)(vlSelf->top__DOT__refill_req_done)));
            vlSelf->top__DOT__refill_one_word_req_sent 
                = ((IData)(vlSelf->top__DOT__cache_req_val) 
                   & (IData)(vlSelf->top__DOT__cache_req_rdy));
            vlSelf->top__DOT__spill_one_word_done = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__spill_done)))) {
                vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
            }
            if (vlSelf->top__DOT__spill_done) {
                vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__cache_req_val) 
                 & (IData)(vlSelf->top__DOT__cache_req_rdy))) {
                vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache_req_val) 
                          & (IData)(vlSelf->top__DOT__cache_req_rdy))))) {
                vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
                if (vlSelf->top__DOT__refill_resp_done) {
                    vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__refill_resp_done)))) {
                    vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if (vlSelf->top__DOT__refill_resp_done) {
                vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
            }
            if (vlSelf->top__DOT__refill_req_done) {
                vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__refill_req_done)))) {
                vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__refill_resp_done)))) {
                vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__cache_resp_val) 
                 & (IData)(vlSelf->top__DOT__cache_resp_rdy))) {
                vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache_resp_val) 
                          & (IData)(vlSelf->top__DOT__cache_resp_rdy))))) {
                vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache_req_val) 
                          & (IData)(vlSelf->top__DOT__cache_req_rdy))))) {
                vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__cache_req_val) 
                 & (IData)(vlSelf->top__DOT__cache_req_rdy))) {
                vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    vlSelf->top__DOT__DUT__DOT__ostall_M0 = (1U & (~ (IData)(vlSelf->top__DOT__tarray_match)));
    if (((IData)(vlSelf->top__DOT__tarray_wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray_wen))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray_wen = vlSelf->top__DOT__tarray_wen;
    }
    if (((IData)(vlSelf->top__DOT__memresp_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__memresp_val))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_val = vlSelf->top__DOT__memresp_val;
    }
    if (((IData)(vlSelf->top__DOT__darray_wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__darray_wen))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__darray_wen = vlSelf->top__DOT__darray_wen;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__state_next 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__state_next)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__state_next)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__state_next 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__state_next)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__state_next)));
    }
    if (((IData)(vlSelf->top__DOT__refill_one_word_resp_received) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__refill_one_word_resp_received))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__refill_one_word_resp_received 
            = vlSelf->top__DOT__refill_one_word_resp_received;
    }
    if (((IData)(vlSelf->top__DOT__cache_resp_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache_resp_rdy))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_rdy 
            = vlSelf->top__DOT__cache_resp_rdy;
    }
    if (((IData)(vlSelf->top__DOT__refill_one_word_req_sent) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__refill_one_word_req_sent))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__refill_one_word_req_sent 
            = vlSelf->top__DOT__refill_one_word_req_sent;
    }
    if (((IData)(vlSelf->top__DOT__spill_one_word_done) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__spill_one_word_done))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__spill_one_word_done 
            = vlSelf->top__DOT__spill_one_word_done;
    }
    if (((IData)(vlSelf->top__DOT__cache_req_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__cache_req_val))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_val 
            = vlSelf->top__DOT__cache_req_val;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_M0) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M0))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M0 
            = vlSelf->top__DOT__DUT__DOT__ostall_M0;
    }
    vlSelf->top__DOT__DUT__DOT__stall_M0 = (1U & ((~ (IData)(vlSelf->top__DOT__memresp_rdy)) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_M0)));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_M0) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__memreq_rdy)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_rdy = (1U 
                                                   & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M0)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_M0) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M0))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M0 
            = vlSelf->top__DOT__DUT__DOT__stall_M0;
    }
    vlSelf->top__DOT__DUT__DOT__input_go = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M0)) 
                                            & (IData)(vlSelf->top__DOT__memreq_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__input_go) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__input_go))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__input_go 
            = vlSelf->top__DOT__DUT__DOT__input_go;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__input_go) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_Y)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_Y 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__input_go)));
    }
    vlSelf->top__DOT__DUT__DOT__stall_Y = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__input_go)) 
                                                 | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_M0)));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_Y) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_M0)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_M0 = (1U 
                                                  & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_Y)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_Y) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_Y))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_Y 
            = vlSelf->top__DOT__DUT__DOT__stall_Y;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_Y)))) {
            vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__stall_Y) {
            vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        }
        if (((0U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
             & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_Y)))) {
            vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                      & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_Y)))))) {
            if ((((0U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__stall_Y)) 
                 & (IData)(vlSelf->top__DOT__tarray_match))) {
                vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (((0U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                           & (IData)(vlSelf->top__DOT__DUT__DOT__stall_Y)) 
                          & (IData)(vlSelf->top__DOT__tarray_match))))) {
                vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    vlSelf->top__DOT__DUT__DOT__mem_req_type_M0 = (
                                                   (~ (IData)(vlSelf->top__DOT__reset)) 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__stall_Y)
                                                       ? (IData)(vlSelf->top__DOT__DUT__DOT__mem_req_type_M0)
                                                       : (IData)(vlSelf->top__DOT__memreq_type)));
    vlSelf->top__DOT__DUT__DOT__val_M0 = ((~ (IData)(vlSelf->top__DOT__reset)) 
                                          & (((0U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                              & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_Y))) 
                                             | ((~ 
                                                 (((0U 
                                                    == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                                   & (IData)(vlSelf->top__DOT__DUT__DOT__stall_Y)) 
                                                  & (IData)(vlSelf->top__DOT__tarray_match))) 
                                                & (IData)(vlSelf->top__DOT__DUT__DOT__val_M0))));
    if (vlSelf->top__DOT__reset) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__state_reg = 0U;
    } else {
        vlSelf->top__DOT__DUT__DOT__state_reg = vlSelf->top__DOT__DUT__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__mem_req_type_M0) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_type_M0))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_type_M0 
            = vlSelf->top__DOT__DUT__DOT__mem_req_type_M0;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_M0))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_M0 
            = vlSelf->top__DOT__DUT__DOT__val_M0;
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
            vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
                vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
                vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__mem_req_type_M0)))) {
            vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__mem_req_type_M0) {
            vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__state_reg) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__state_reg)))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__state_reg 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__state_reg)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__state_reg) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__state_reg)))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__state_reg 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__state_reg)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)));
    }
    vlSelf->top__DOT__Spill_or_Refill_sel = ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                             & (1U 
                                                != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)));
    vlSelf->top__DOT__tarray_en = (0U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg));
    vlSelf->top__DOT__z6b_sel = ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                 & (1U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)));
    vlSelf->top__DOT__darray_write_mux_sel = ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                              & (1U 
                                                 != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)));
    vlSelf->top__DOT__cache_req_type = ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                        & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)));
    vlSelf->top__DOT__memresp_type = ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                      & (IData)(vlSelf->top__DOT__DUT__DOT__mem_req_type_M0));
    vlSelf->top__DOT__write_en_sel = ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                      & (IData)(vlSelf->top__DOT__DUT__DOT__mem_req_type_M0));
    if (((IData)(vlSelf->top__DOT__Spill_or_Refill_sel) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__Spill_or_Refill_sel))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__Spill_or_Refill_sel 
            = vlSelf->top__DOT__Spill_or_Refill_sel;
    }
    if (((IData)(vlSelf->top__DOT__tarray_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray_en))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray_en = vlSelf->top__DOT__tarray_en;
    }
    if (((IData)(vlSelf->top__DOT__z6b_sel) ^ (IData)(vlSelf->top__DOT____Vtogcov__z6b_sel))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__z6b_sel = vlSelf->top__DOT__z6b_sel;
    }
    if (((IData)(vlSelf->top__DOT__darray_write_mux_sel) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__darray_write_mux_sel))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__darray_write_mux_sel 
            = vlSelf->top__DOT__darray_write_mux_sel;
    }
    if (((IData)(vlSelf->top__DOT__cache_req_type) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache_req_type))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_type 
            = vlSelf->top__DOT__cache_req_type;
    }
    if (((IData)(vlSelf->top__DOT__memresp_type) ^ (IData)(vlSelf->top__DOT____Vtogcov__memresp_type))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_type = vlSelf->top__DOT__memresp_type;
    }
    if (((IData)(vlSelf->top__DOT__write_en_sel) ^ (IData)(vlSelf->top__DOT____Vtogcov__write_en_sel))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__write_en_sel = vlSelf->top__DOT__write_en_sel;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    if (vlSelf->top__DOT__tarray_match) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__tarray_match)))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__memreq_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__memreq_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_val = vlSelf->top__DOT__memreq_val;
    }
    if (((IData)(vlSelf->top__DOT__memreq_type) ^ (IData)(vlSelf->top__DOT____Vtogcov__memreq_type))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_type = vlSelf->top__DOT__memreq_type;
    }
    if (((IData)(vlSelf->top__DOT__memresp_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__memresp_rdy))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_rdy = vlSelf->top__DOT__memresp_rdy;
    }
    if (((IData)(vlSelf->top__DOT__cache_req_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__cache_req_rdy))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_rdy 
            = vlSelf->top__DOT__cache_req_rdy;
    }
    if (((IData)(vlSelf->top__DOT__cache_resp_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache_resp_val))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_val 
            = vlSelf->top__DOT__cache_resp_val;
    }
    if (((IData)(vlSelf->top__DOT__cache_resp_type) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache_resp_type))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_type 
            = vlSelf->top__DOT__cache_resp_type;
    }
    if (((IData)(vlSelf->top__DOT__tarray_match) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray_match))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray_match = vlSelf->top__DOT__tarray_match;
    }
    if (((IData)(vlSelf->top__DOT__current_dirty) ^ (IData)(vlSelf->top__DOT____Vtogcov__current_dirty))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__current_dirty 
            = vlSelf->top__DOT__current_dirty;
    }
    if (((IData)(vlSelf->top__DOT__spill_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__spill_done))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__spill_done = vlSelf->top__DOT__spill_done;
    }
    if (((IData)(vlSelf->top__DOT__refill_req_done) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__refill_req_done))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__refill_req_done 
            = vlSelf->top__DOT__refill_req_done;
    }
    if (((IData)(vlSelf->top__DOT__refill_resp_done) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__refill_resp_done))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__refill_resp_done 
            = vlSelf->top__DOT__refill_resp_done;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__memresp_rdy) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_notrdy)))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_notrdy 
            = (1U & (~ (IData)(vlSelf->top__DOT__memresp_rdy)));
    }
    vlSelf->top__DOT__DUT__DOT__ostall_M0 = (1U & (~ (IData)(vlSelf->top__DOT__tarray_match)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ostall_M0) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M0))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M0 
            = vlSelf->top__DOT__DUT__DOT__ostall_M0;
    }
    vlSelf->top__DOT__DUT__DOT__stall_M0 = (1U & ((~ (IData)(vlSelf->top__DOT__memresp_rdy)) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_M0)));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_M0) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__memreq_rdy)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_rdy = (1U 
                                                   & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M0)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_M0) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M0))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M0 
            = vlSelf->top__DOT__DUT__DOT__stall_M0;
    }
    vlSelf->top__DOT__DUT__DOT__input_go = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M0)) 
                                            & (IData)(vlSelf->top__DOT__memreq_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__input_go) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__input_go))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__input_go 
            = vlSelf->top__DOT__DUT__DOT__input_go;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__input_go) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_Y)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_Y 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__input_go)));
    }
    vlSelf->top__DOT__DUT__DOT__stall_Y = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__input_go)) 
                                                 | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_M0)));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_Y) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_M0)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_M0 = (1U 
                                                  & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_Y)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_Y) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_Y))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_Y 
            = vlSelf->top__DOT__DUT__DOT__stall_Y;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__tarray_wen = ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                    & ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                       & (IData)(vlSelf->top__DOT__refill_resp_done)));
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
        vlSelf->top__DOT__memresp_val = ((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                                         & (IData)(vlSelf->top__DOT__tarray_match));
        vlSelf->top__DOT__DUT__DOT__state_next = vlSelf->top__DOT__DUT__DOT__state_reg;
        if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__tarray_match)) 
                      & (IData)(vlSelf->top__DOT__current_dirty))))) {
            if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__tarray_match)) 
                          & (~ (IData)(vlSelf->top__DOT__current_dirty)))))) {
                vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & ((~ (IData)(vlSelf->top__DOT__tarray_match)) 
                       & (~ (IData)(vlSelf->top__DOT__current_dirty))))) {
                vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if (((~ (IData)(vlSelf->top__DOT__tarray_match)) 
             & (IData)(vlSelf->top__DOT__current_dirty))) {
            vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__state_next = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->top__DOT__tarray_match)) 
                          & (~ (IData)(vlSelf->top__DOT__current_dirty))))) {
            vlSelf->top__DOT__DUT__DOT__state_next = 2U;
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                      & (IData)(vlSelf->top__DOT__tarray_match))))) {
            vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        }
        if (((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
             & (IData)(vlSelf->top__DOT__tarray_match))) {
            vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->top__DOT__darray_wen = vlSelf->top__DOT__DUT__DOT__mem_req_type_M0;
        vlSelf->top__DOT__refill_one_word_resp_received = 0U;
        vlSelf->top__DOT__cache_resp_rdy = 0U;
        vlSelf->top__DOT__cache_req_val = 0U;
        vlSelf->top__DOT__refill_one_word_req_sent = 0U;
        vlSelf->top__DOT__spill_one_word_done = 0U;
    } else {
        vlSelf->top__DOT__memresp_val = 0U;
        vlSelf->top__DOT__DUT__DOT__state_next = vlSelf->top__DOT__DUT__DOT__state_reg;
        vlSelf->top__DOT__darray_wen = ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                        & (IData)(vlSelf->top__DOT__refill_resp_done));
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
            if (vlSelf->top__DOT__spill_done) {
                vlSelf->top__DOT__DUT__DOT__state_next = 2U;
            }
            vlSelf->top__DOT__refill_one_word_resp_received = 0U;
            vlSelf->top__DOT__cache_resp_rdy = 0U;
            vlSelf->top__DOT__cache_req_val = (1U & 
                                               (~ (IData)(vlSelf->top__DOT__spill_done)));
            vlSelf->top__DOT__refill_one_word_req_sent = 0U;
            vlSelf->top__DOT__spill_one_word_done = 
                ((IData)(vlSelf->top__DOT__cache_req_val) 
                 & (IData)(vlSelf->top__DOT__cache_req_rdy));
        } else {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
                if (vlSelf->top__DOT__refill_resp_done) {
                    vlSelf->top__DOT__DUT__DOT__state_next = 0U;
                }
            } else {
                vlSelf->top__DOT__DUT__DOT__state_next = 0U;
            }
            vlSelf->top__DOT__refill_one_word_resp_received 
                = ((IData)(vlSelf->top__DOT__cache_resp_val) 
                   & (IData)(vlSelf->top__DOT__cache_resp_rdy));
            vlSelf->top__DOT__cache_resp_rdy = (1U 
                                                & (~ (IData)(vlSelf->top__DOT__refill_resp_done)));
            vlSelf->top__DOT__cache_req_val = (1U & 
                                               (~ (IData)(vlSelf->top__DOT__refill_req_done)));
            vlSelf->top__DOT__refill_one_word_req_sent 
                = ((IData)(vlSelf->top__DOT__cache_req_val) 
                   & (IData)(vlSelf->top__DOT__cache_req_rdy));
            vlSelf->top__DOT__spill_one_word_done = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__spill_done)))) {
                vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
            }
            if (vlSelf->top__DOT__spill_done) {
                vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__cache_req_val) 
                 & (IData)(vlSelf->top__DOT__cache_req_rdy))) {
                vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache_req_val) 
                          & (IData)(vlSelf->top__DOT__cache_req_rdy))))) {
                vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
                if (vlSelf->top__DOT__refill_resp_done) {
                    vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__refill_resp_done)))) {
                    vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if (vlSelf->top__DOT__refill_resp_done) {
                vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
            }
            if (vlSelf->top__DOT__refill_req_done) {
                vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__refill_req_done)))) {
                vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__refill_resp_done)))) {
                vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__cache_resp_val) 
                 & (IData)(vlSelf->top__DOT__cache_resp_rdy))) {
                vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache_resp_val) 
                          & (IData)(vlSelf->top__DOT__cache_resp_rdy))))) {
                vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache_req_val) 
                          & (IData)(vlSelf->top__DOT__cache_req_rdy))))) {
                vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__cache_req_val) 
                 & (IData)(vlSelf->top__DOT__cache_req_rdy))) {
                vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__tarray_wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray_wen))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray_wen = vlSelf->top__DOT__tarray_wen;
    }
    if (((IData)(vlSelf->top__DOT__memresp_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__memresp_val))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_val = vlSelf->top__DOT__memresp_val;
    }
    if (((IData)(vlSelf->top__DOT__darray_wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__darray_wen))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__darray_wen = vlSelf->top__DOT__darray_wen;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__state_next 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__state_next)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__state_next)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__state_next 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__state_next)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__state_next)));
    }
    if (((IData)(vlSelf->top__DOT__refill_one_word_resp_received) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__refill_one_word_resp_received))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__refill_one_word_resp_received 
            = vlSelf->top__DOT__refill_one_word_resp_received;
    }
    if (((IData)(vlSelf->top__DOT__cache_resp_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache_resp_rdy))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_rdy 
            = vlSelf->top__DOT__cache_resp_rdy;
    }
    if (((IData)(vlSelf->top__DOT__refill_one_word_req_sent) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__refill_one_word_req_sent))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__refill_one_word_req_sent 
            = vlSelf->top__DOT__refill_one_word_req_sent;
    }
    if (((IData)(vlSelf->top__DOT__spill_one_word_done) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__spill_one_word_done))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__spill_one_word_done 
            = vlSelf->top__DOT__spill_one_word_done;
    }
    if (((IData)(vlSelf->top__DOT__cache_req_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__cache_req_val))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_val 
            = vlSelf->top__DOT__cache_req_val;
    }
}
