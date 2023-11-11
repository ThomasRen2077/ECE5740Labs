// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__val_M0)))) {
            vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__val_M0) {
            vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        }
        if (((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
             & (IData)(vlSelf->top__DOT__tarray_match))) {
            vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                      & (IData)(vlSelf->top__DOT__tarray_match))))) {
            vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        }
        if (((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
             & (IData)(vlSelf->top__DOT__DUT__DOT__mem_req_type_M0))) {
            vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
            if ((1U & (~ (IData)(vlSelf->top__DOT__tarray_match)))) {
                vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
            }
            if (vlSelf->top__DOT__tarray_match) {
                vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                      & (IData)(vlSelf->top__DOT__DUT__DOT__mem_req_type_M0))))) {
            vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                       & (~ (IData)(vlSelf->top__DOT__tarray_match))) 
                      & (IData)(vlSelf->top__DOT__current_dirty))))) {
            if ((((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                  & (~ (IData)(vlSelf->top__DOT__tarray_match))) 
                 & (~ (IData)(vlSelf->top__DOT__current_dirty)))) {
                vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                           & (~ (IData)(vlSelf->top__DOT__tarray_match))) 
                          & (~ (IData)(vlSelf->top__DOT__current_dirty)))))) {
                vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
              & (~ (IData)(vlSelf->top__DOT__tarray_match))) 
             & (IData)(vlSelf->top__DOT__current_dirty))) {
            vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__DUT__DOT__state_next 
                = ((((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                     & (~ (IData)(vlSelf->top__DOT__tarray_match))) 
                    & (~ (IData)(vlSelf->top__DOT__current_dirty)))
                    ? 2U : (IData)(vlSelf->top__DOT__DUT__DOT__state_reg));
        }
        vlSelf->top__DOT__darray_wen = (((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                                         & (IData)(vlSelf->top__DOT__DUT__DOT__mem_req_type_M0)) 
                                        & (IData)(vlSelf->top__DOT__tarray_match));
        vlSelf->top__DOT__refill_one_word_resp_received = 0U;
        vlSelf->top__DOT__cache_resp_rdy = 0U;
        vlSelf->top__DOT__cache_req_val = 0U;
        vlSelf->top__DOT__refill_one_word_req_sent = 0U;
        vlSelf->top__DOT__spill_one_word_done = 0U;
    } else {
        vlSelf->top__DOT__darray_wen = ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                        & (IData)(vlSelf->top__DOT__refill_resp_done));
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
            vlSelf->top__DOT__DUT__DOT__state_next 
                = (((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                    & (IData)(vlSelf->top__DOT__spill_done))
                    ? 2U : (IData)(vlSelf->top__DOT__DUT__DOT__state_reg));
            vlSelf->top__DOT__refill_one_word_resp_received = 0U;
            vlSelf->top__DOT__cache_resp_rdy = 0U;
            vlSelf->top__DOT__cache_req_val = (1U & 
                                               (~ (IData)(vlSelf->top__DOT__spill_done)));
            vlSelf->top__DOT__refill_one_word_req_sent = 0U;
            vlSelf->top__DOT__spill_one_word_done = 
                ((IData)(vlSelf->top__DOT__cache_req_val) 
                 & (IData)(vlSelf->top__DOT__cache_req_rdy));
        } else {
            vlSelf->top__DOT__DUT__DOT__state_next 
                = ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))
                    ? (((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                        & (IData)(vlSelf->top__DOT__refill_resp_done))
                        ? 0U : (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))
                    : 0U);
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
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
                vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
                vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
                if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                              & (IData)(vlSelf->top__DOT__refill_resp_done))))) {
                    vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
                }
                if (((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                     & (IData)(vlSelf->top__DOT__refill_resp_done))) {
                    vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
                }
            }
            vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
            if ((1U & (~ (IData)(vlSelf->top__DOT__refill_req_done)))) {
                vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
            }
            if (vlSelf->top__DOT__refill_resp_done) {
                vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__refill_resp_done)))) {
                vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
            }
            if (vlSelf->top__DOT__refill_req_done) {
                vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__cache_resp_val) 
                 & (IData)(vlSelf->top__DOT__cache_resp_rdy))) {
                vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache_resp_val) 
                          & (IData)(vlSelf->top__DOT__cache_resp_rdy))))) {
                vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache_req_val) 
                          & (IData)(vlSelf->top__DOT__cache_req_rdy))))) {
                vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__cache_req_val) 
                 & (IData)(vlSelf->top__DOT__cache_req_rdy))) {
                vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg))) {
            vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
            if (vlSelf->top__DOT__spill_done) {
                vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__spill_done)))) {
                vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                 & (IData)(vlSelf->top__DOT__spill_done))) {
                vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                          & (IData)(vlSelf->top__DOT__spill_done))))) {
                vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__cache_req_val) 
                 & (IData)(vlSelf->top__DOT__cache_req_rdy))) {
                vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache_req_val) 
                          & (IData)(vlSelf->top__DOT__cache_req_rdy))))) {
                vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (vlSelf->top__DOT__tarray_match) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__tarray_match)))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
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
    if (((IData)(vlSelf->top__DOT__flush_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__flush_done))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__flush_done = vlSelf->top__DOT__flush_done;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__val_M0))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__val_M0 
            = vlSelf->top__DOT__DUT__DOT__val_M0;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__mem_req_type_M0) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_type_M0))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_type_M0 
            = vlSelf->top__DOT__DUT__DOT__mem_req_type_M0;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__memresp_rdy) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_notrdy)))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_notrdy 
            = (1U & (~ (IData)(vlSelf->top__DOT__memresp_rdy)));
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
    vlSelf->top__DOT__z6b_sel = ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                 & (1U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)));
    vlSelf->top__DOT__darray_write_mux_sel = ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                              & (1U 
                                                 != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)));
    vlSelf->top__DOT__cache_req_type = ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                        & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)));
    vlSelf->top__DOT__tarray_wen = ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                    & ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                       & (IData)(vlSelf->top__DOT__refill_resp_done)));
    vlSelf->top__DOT__tarray_en = ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                   & (IData)(vlSelf->top__DOT__DUT__DOT__val_M0));
    vlSelf->top__DOT__memresp_type = ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                      & ((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                                         & (IData)(vlSelf->top__DOT__DUT__DOT__mem_req_type_M0)));
    vlSelf->top__DOT__memresp_val = ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                                        & (IData)(vlSelf->top__DOT__tarray_match)));
    vlSelf->top__DOT__write_en_sel = ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__state_reg)) 
                                      & (((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                                          & (IData)(vlSelf->top__DOT__DUT__DOT__mem_req_type_M0)) 
                                         & (IData)(vlSelf->top__DOT__tarray_match)));
    vlSelf->top__DOT__DUT__DOT__ostall_M0 = (1U & (~ (IData)(vlSelf->top__DOT__tarray_match)));
    if (((IData)(vlSelf->top__DOT__Spill_or_Refill_sel) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__Spill_or_Refill_sel))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__Spill_or_Refill_sel 
            = vlSelf->top__DOT__Spill_or_Refill_sel;
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
    if (((IData)(vlSelf->top__DOT__tarray_wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray_wen))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray_wen = vlSelf->top__DOT__tarray_wen;
    }
    if (((IData)(vlSelf->top__DOT__tarray_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray_en))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray_en = vlSelf->top__DOT__tarray_en;
    }
    if (((IData)(vlSelf->top__DOT__memresp_type) ^ (IData)(vlSelf->top__DOT____Vtogcov__memresp_type))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_type = vlSelf->top__DOT__memresp_type;
    }
    if (((IData)(vlSelf->top__DOT__memresp_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__memresp_val))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_val = vlSelf->top__DOT__memresp_val;
    }
    if (((IData)(vlSelf->top__DOT__write_en_sel) ^ (IData)(vlSelf->top__DOT____Vtogcov__write_en_sel))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__write_en_sel = vlSelf->top__DOT__write_en_sel;
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
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M0 
            = vlSelf->top__DOT__DUT__DOT__ostall_M0;
    }
    vlSelf->top__DOT__DUT__DOT__stall_M0 = ((IData)(vlSelf->top__DOT__DUT__DOT__val_M0) 
                                            & ((~ (IData)(vlSelf->top__DOT__memresp_rdy)) 
                                               | (IData)(vlSelf->top__DOT__DUT__DOT__ostall_M0)));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__stall_M0) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__memreq_rdy)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_rdy = (1U 
                                                   & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M0)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stall_M0) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M0))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
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
                                                 | (IData)(vlSelf->top__DOT__DUT__DOT__stall_M0)));
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

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "utb_CacheBaseCtrl.v", 8, 26, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "utb_CacheBaseCtrl.v", 8, 43, ".top", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "utb_CacheBaseCtrl.v", 10, 17, ".top", "v_toggle/top", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "utb_CacheBaseCtrl.v", 13, 17, ".top", "v_toggle/top", "memreq_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "utb_CacheBaseCtrl.v", 14, 17, ".top", "v_toggle/top", "memreq_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "utb_CacheBaseCtrl.v", 15, 17, ".top", "v_toggle/top", "memreq_type", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "utb_CacheBaseCtrl.v", 17, 17, ".top", "v_toggle/top", "memresp_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "utb_CacheBaseCtrl.v", 18, 17, ".top", "v_toggle/top", "memresp_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "utb_CacheBaseCtrl.v", 19, 17, ".top", "v_toggle/top", "memresp_type", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "utb_CacheBaseCtrl.v", 22, 17, ".top", "v_toggle/top", "cache_req_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "utb_CacheBaseCtrl.v", 23, 17, ".top", "v_toggle/top", "cache_req_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "utb_CacheBaseCtrl.v", 24, 17, ".top", "v_toggle/top", "cache_req_type", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "utb_CacheBaseCtrl.v", 26, 17, ".top", "v_toggle/top", "cache_resp_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "utb_CacheBaseCtrl.v", 27, 17, ".top", "v_toggle/top", "cache_resp_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "utb_CacheBaseCtrl.v", 28, 17, ".top", "v_toggle/top", "cache_resp_type", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "utb_CacheBaseCtrl.v", 33, 16, ".top", "v_toggle/top", "reg_en_M0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "utb_CacheBaseCtrl.v", 34, 16, ".top", "v_toggle/top", "tarray_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "utb_CacheBaseCtrl.v", 35, 16, ".top", "v_toggle/top", "tarray_wen", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "utb_CacheBaseCtrl.v", 36, 16, ".top", "v_toggle/top", "z6b_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "utb_CacheBaseCtrl.v", 37, 16, ".top", "v_toggle/top", "darray_write_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "utb_CacheBaseCtrl.v", 38, 16, ".top", "v_toggle/top", "darray_wen", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "utb_CacheBaseCtrl.v", 39, 16, ".top", "v_toggle/top", "write_en_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "utb_CacheBaseCtrl.v", 40, 16, ".top", "v_toggle/top", "spill_one_word_done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "utb_CacheBaseCtrl.v", 41, 16, ".top", "v_toggle/top", "refill_one_word_req_sent", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "utb_CacheBaseCtrl.v", 42, 16, ".top", "v_toggle/top", "refill_one_word_resp_received", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "utb_CacheBaseCtrl.v", 43, 16, ".top", "v_toggle/top", "Spill_or_Refill_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "utb_CacheBaseCtrl.v", 46, 16, ".top", "v_toggle/top", "tarray_match", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "utb_CacheBaseCtrl.v", 47, 16, ".top", "v_toggle/top", "current_dirty", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "utb_CacheBaseCtrl.v", 48, 16, ".top", "v_toggle/top", "spill_done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "utb_CacheBaseCtrl.v", 49, 16, ".top", "v_toggle/top", "refill_req_done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "utb_CacheBaseCtrl.v", 50, 16, ".top", "v_toggle/top", "refill_resp_done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "utb_CacheBaseCtrl.v", 53, 16, ".top", "v_toggle/top", "flush_done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "utb_CacheBaseCtrl.v", 62, 3, ".top", "v_line/top", "block", "62,64,66-78,81-84,86-88,91-92,96-99,101-104,106-107,111-112,114-117,119-120,122-123,125-126,128-131,133-136,139-142,144-145,148-150,152-156,158-159,162-165,167-170,173-176,178-179,200,203");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "CacheBaseCtrl.v", 8, 24, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "CacheBaseCtrl.v", 9, 24, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "CacheBaseCtrl.v", 12, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "memreq_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "CacheBaseCtrl.v", 13, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "memreq_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "CacheBaseCtrl.v", 14, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "memreq_type", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "CacheBaseCtrl.v", 17, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "memresp_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "CacheBaseCtrl.v", 18, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "memresp_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "CacheBaseCtrl.v", 19, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "memresp_type", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "CacheBaseCtrl.v", 22, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "cache_req_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "CacheBaseCtrl.v", 23, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "cache_req_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "CacheBaseCtrl.v", 24, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "cache_req_type", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "CacheBaseCtrl.v", 27, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "cache_resp_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "CacheBaseCtrl.v", 28, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "cache_resp_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "CacheBaseCtrl.v", 29, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "cache_resp_type", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "CacheBaseCtrl.v", 32, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "reg_en_M0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "CacheBaseCtrl.v", 33, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "tarray_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "CacheBaseCtrl.v", 34, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "tarray_wen", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "CacheBaseCtrl.v", 35, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "z6b_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "CacheBaseCtrl.v", 36, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "darray_write_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "CacheBaseCtrl.v", 37, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "darray_wen", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "CacheBaseCtrl.v", 38, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "write_en_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "CacheBaseCtrl.v", 39, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "spill_one_word_done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "CacheBaseCtrl.v", 40, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "refill_one_word_req_sent", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "CacheBaseCtrl.v", 41, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "refill_one_word_resp_received", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "CacheBaseCtrl.v", 42, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "Spill_or_Refill_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "CacheBaseCtrl.v", 46, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "tarray_match", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "CacheBaseCtrl.v", 47, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "current_dirty", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "CacheBaseCtrl.v", 48, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "spill_done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "CacheBaseCtrl.v", 49, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "refill_req_done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "CacheBaseCtrl.v", 50, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "refill_resp_done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "CacheBaseCtrl.v", 54, 23, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "flush_done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "CacheBaseCtrl.v", 64, 9, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "input_go", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "CacheBaseCtrl.v", 67, 9, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "ostall_Y", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "CacheBaseCtrl.v", 70, 9, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "stall_Y", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "CacheBaseCtrl.v", 78, 9, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "val_M0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "CacheBaseCtrl.v", 87, 12, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "if", "87-88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "CacheBaseCtrl.v", 87, 13, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "else", "90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "CacheBaseCtrl.v", 85, 7, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "elsif", "85-86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "CacheBaseCtrl.v", 81, 5, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "81-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "CacheBaseCtrl.v", 81, 6, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "CacheBaseCtrl.v", 80, 3, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "block", "80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "CacheBaseCtrl.v", 95, 9, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "mem_req_type_M0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "CacheBaseCtrl.v", 101, 7, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "101-102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "CacheBaseCtrl.v", 101, 8, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "104-105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "CacheBaseCtrl.v", 97, 5, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "CacheBaseCtrl.v", 97, 6, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "CacheBaseCtrl.v", 96, 3, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "block", "96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "CacheBaseCtrl.v", 119, 17, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "state_reg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "CacheBaseCtrl.v", 119, 17, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "state_reg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "CacheBaseCtrl.v", 120, 17, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "state_next[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "CacheBaseCtrl.v", 120, 17, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "state_next[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "CacheBaseCtrl.v", 123, 9, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "123-124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "CacheBaseCtrl.v", 123, 10, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "CacheBaseCtrl.v", 122, 5, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "block", "122");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "CacheBaseCtrl.v", 135, 38, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "if", "135-136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "CacheBaseCtrl.v", 135, 39, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "else", "138");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "CacheBaseCtrl.v", 133, 33, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "elsif", "133-134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "CacheBaseCtrl.v", 133, 27, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "case", "133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "CacheBaseCtrl.v", 139, 33, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "139-140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "CacheBaseCtrl.v", 139, 34, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "142");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "CacheBaseCtrl.v", 139, 28, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "case", "139");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "CacheBaseCtrl.v", 143, 33, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "143-144");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "CacheBaseCtrl.v", 143, 34, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "146");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "CacheBaseCtrl.v", 143, 29, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "case", "143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "CacheBaseCtrl.v", 148, 17, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "case", "148");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "CacheBaseCtrl.v", 131, 9, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "block", "131-132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "CacheBaseCtrl.v", 158, 17, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "158-159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "CacheBaseCtrl.v", 158, 18, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "161-162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "CacheBaseCtrl.v", 179, 21, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "179-181");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "CacheBaseCtrl.v", 179, 22, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "183-185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "CacheBaseCtrl.v", 178, 17, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "178,187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "CacheBaseCtrl.v", 178, 18, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "189-192");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "CacheBaseCtrl.v", 195, 17, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "195-196");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "CacheBaseCtrl.v", 195, 18, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "198-199");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "CacheBaseCtrl.v", 212, 17, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "212-213");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "CacheBaseCtrl.v", 212, 18, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "215-216");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "CacheBaseCtrl.v", 225, 17, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "225-226");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "CacheBaseCtrl.v", 225, 18, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "228");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "CacheBaseCtrl.v", 242, 17, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "242-243");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "CacheBaseCtrl.v", 242, 18, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "245-246");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "CacheBaseCtrl.v", 252, 17, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "252-253");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "CacheBaseCtrl.v", 252, 18, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "255-256");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "CacheBaseCtrl.v", 262, 17, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "262-263");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "CacheBaseCtrl.v", 262, 18, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "CacheBaseCtrl.v", 268, 17, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "268-269");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "CacheBaseCtrl.v", 268, 18, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "271");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "CacheBaseCtrl.v", 277, 17, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "277-278");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "CacheBaseCtrl.v", 277, 18, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "280-281");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "CacheBaseCtrl.v", 287, 17, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "287-288");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "CacheBaseCtrl.v", 287, 18, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "290-291");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "CacheBaseCtrl.v", 205, 18, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "if", "205,207-210,219-220,222-223,230-234");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "CacheBaseCtrl.v", 205, 19, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "else", "238,240,249-250,259-260,273,275,284-285");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "CacheBaseCtrl.v", 157, 13, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "elsif", "157,164-166,168-169,171-172,174-175,202");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "CacheBaseCtrl.v", 156, 9, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "block", "156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "CacheBaseCtrl.v", 299, 11, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "ostall_M0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "CacheBaseCtrl.v", 300, 11, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "ostall_notrdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "CacheBaseCtrl.v", 301, 11, ".top.DUT", "v_toggle/lab3_cache_CacheBaseCtrl", "stall_M0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "CacheBaseCtrl.v", 304, 9, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "if", "304-305");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "CacheBaseCtrl.v", 304, 10, ".top.DUT", "v_branch/lab3_cache_CacheBaseCtrl", "else", "307-308");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "CacheBaseCtrl.v", 303, 5, ".top.DUT", "v_line/lab3_cache_CacheBaseCtrl", "block", "303");
}
