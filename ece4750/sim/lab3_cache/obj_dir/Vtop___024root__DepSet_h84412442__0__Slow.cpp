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
    vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[591].fetch_add(1, std::memory_order_relaxed);
    if ((1U & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result)) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = (0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result);
    }
    vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__word_en_mux__DOT____Vtogcov__in0)))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word_en_mux__DOT____Vtogcov__in0 
            = (1U | (IData)(vlSelf->top__DOT__DUT__DOT__word_en_mux__DOT____Vtogcov__in0));
    }
    vlSymsp->__Vcoverage[1211].fetch_add(1, std::memory_order_relaxed);
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

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                if ((3U != (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                    if ((4U != (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                        if ((5U != (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                            if ((6U != (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                if ((7U != (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                    if ((8U != (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                        if ((9U == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                            vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((9U != (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                            if ((0xaU 
                                                 != (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                                if (
                                                    (0xbU 
                                                     != (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                                    if (
                                                        (0xcU 
                                                         == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                                        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
                                                    }
                                                    if (
                                                        (0xcU 
                                                         != (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                                        if (
                                                            (0xdU 
                                                             == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                                            vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                        if (
                                                            (0xdU 
                                                             != (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                                            if (
                                                                (0xeU 
                                                                 == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                                                vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                            if (
                                                                (0xeU 
                                                                 != (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                                                if (
                                                                    (0xfU 
                                                                     == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                                                    vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                                if (
                                                                    (0xfU 
                                                                     != (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                                                    vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                if (
                                                    (0xbU 
                                                     == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                                    vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                            if ((0xaU 
                                                 == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                                vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                    }
                                    if ((8U == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((7U == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                    vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((6U == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                                vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((5U == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                            vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((4U == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((3U == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                    vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
                vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
            vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
            = vlSelf->top__DOT__DUT__DOT__data_array
            [(0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                       >> 6U))][0U];
    } else {
        vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
            = ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))
                ? vlSelf->top__DOT__DUT__DOT__data_array
               [(0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                          >> 6U))][1U] : ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))
                                           ? vlSelf->top__DOT__DUT__DOT__data_array
                                          [(0x1fU & 
                                            (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                             >> 6U))][2U]
                                           : ((3U == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))
                                               ? vlSelf->top__DOT__DUT__DOT__data_array
                                              [(0x1fU 
                                                & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                   >> 6U))][3U]
                                               : ((4U 
                                                   == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))
                                                   ? 
                                                  vlSelf->top__DOT__DUT__DOT__data_array
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                      >> 6U))][4U]
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))
                                                    ? 
                                                   vlSelf->top__DOT__DUT__DOT__data_array
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                       >> 6U))][5U]
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))
                                                     ? 
                                                    vlSelf->top__DOT__DUT__DOT__data_array
                                                    [
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                        >> 6U))][6U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))
                                                      ? 
                                                     vlSelf->top__DOT__DUT__DOT__data_array
                                                     [
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                         >> 6U))][7U]
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))
                                                       ? 
                                                      vlSelf->top__DOT__DUT__DOT__data_array
                                                      [
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                          >> 6U))][8U]
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))
                                                        ? 
                                                       vlSelf->top__DOT__DUT__DOT__data_array
                                                       [
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                           >> 6U))][9U]
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))
                                                         ? 
                                                        vlSelf->top__DOT__DUT__DOT__data_array
                                                        [
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                            >> 6U))][0xaU]
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))
                                                          ? 
                                                         vlSelf->top__DOT__DUT__DOT__data_array
                                                         [
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                             >> 6U))][0xbU]
                                                          : 
                                                         ((0xcU 
                                                           == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))
                                                           ? 
                                                          vlSelf->top__DOT__DUT__DOT__data_array
                                                          [
                                                          (0x1fU 
                                                           & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                              >> 6U))][0xcU]
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))
                                                            ? 
                                                           vlSelf->top__DOT__DUT__DOT__data_array
                                                           [
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                               >> 6U))][0xdU]
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))
                                                             ? 
                                                            vlSelf->top__DOT__DUT__DOT__data_array
                                                            [
                                                            (0x1fU 
                                                             & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                                >> 6U))][0xeU]
                                                             : 
                                                            ((0xfU 
                                                              == (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))
                                                              ? 
                                                             vlSelf->top__DOT__DUT__DOT__data_array
                                                             [
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                                 >> 6U))][0xfU]
                                                              : 0U)))))))))))))));
    }
    if ((0x10U <= (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x10U > (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x10U <= (IData)(vlSelf->top__DOT__DUT__DOT__refill_req_counter))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x10U > (IData)(vlSelf->top__DOT__DUT__DOT__refill_req_counter))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x10U <= (IData)(vlSelf->top__DOT__DUT__DOT__refill_resp_counter))) {
        vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x10U > (IData)(vlSelf->top__DOT__DUT__DOT__refill_resp_counter))) {
        vlSymsp->__Vcoverage[590].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__z6b_sel) {
        if (vlSelf->top__DOT__z6b_sel) {
            vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                = (0xffffffc0U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0);
        } else {
            vlSelf->top__DOT__DUT__DOT__z6b_mux_result = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__z6b_sel)))) {
            vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
            = vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__z6b_sel)))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__Spill_or_Refill_sel)))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__darray_write_mux_sel) {
        if (vlSelf->top__DOT__darray_write_mux_sel) {
            vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__write_data[0U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[0U];
            vlSelf->top__DOT__DUT__DOT__write_data[1U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[1U];
            vlSelf->top__DOT__DUT__DOT__write_data[2U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[2U];
            vlSelf->top__DOT__DUT__DOT__write_data[3U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[3U];
            vlSelf->top__DOT__DUT__DOT__write_data[4U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[4U];
            vlSelf->top__DOT__DUT__DOT__write_data[5U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[5U];
            vlSelf->top__DOT__DUT__DOT__write_data[6U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[6U];
            vlSelf->top__DOT__DUT__DOT__write_data[7U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[7U];
            vlSelf->top__DOT__DUT__DOT__write_data[8U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[8U];
            vlSelf->top__DOT__DUT__DOT__write_data[9U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[9U];
            vlSelf->top__DOT__DUT__DOT__write_data[0xaU] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[0xaU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xbU] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[0xbU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xcU] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[0xcU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xdU] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[0xdU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xeU] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[0xeU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xfU] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[0xfU];
        } else {
            vlSelf->top__DOT__DUT__DOT__write_data[0U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            vlSelf->top__DOT__DUT__DOT__write_data[1U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            vlSelf->top__DOT__DUT__DOT__write_data[2U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            vlSelf->top__DOT__DUT__DOT__write_data[3U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            vlSelf->top__DOT__DUT__DOT__write_data[4U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            vlSelf->top__DOT__DUT__DOT__write_data[5U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            vlSelf->top__DOT__DUT__DOT__write_data[6U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            vlSelf->top__DOT__DUT__DOT__write_data[7U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            vlSelf->top__DOT__DUT__DOT__write_data[8U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            vlSelf->top__DOT__DUT__DOT__write_data[9U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            vlSelf->top__DOT__DUT__DOT__write_data[0xaU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xbU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xcU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xdU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xeU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xfU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__darray_write_mux_sel)))) {
            vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__write_data[0U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[1U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[2U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[3U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[4U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[5U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[6U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[7U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[8U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[9U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[0xaU] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[0xbU] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[0xcU] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[0xdU] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[0xeU] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[0xfU] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__darray_write_mux_sel)))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__write_en_sel) {
        if (vlSelf->top__DOT__write_en_sel) {
            vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__write_word_enable 
                = (0xffffU & ((IData)(1U) << (0xfU 
                                              & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                 >> 2U))));
        } else {
            vlSelf->top__DOT__DUT__DOT__write_word_enable = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__write_en_sel)))) {
            vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__write_word_enable = 0xffffU;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__write_en_sel)))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                  >> 5U)))) {
        if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                      >> 4U)))) {
            if ((8U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)) {
                if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                              >> 2U)))) {
                    vlSymsp->__Vcoverage[1196].fetch_add(1, std::memory_order_relaxed);
                }
                if ((4U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)) {
                    vlSymsp->__Vcoverage[1197].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                          >> 3U)))) {
                if ((4U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)) {
                    vlSymsp->__Vcoverage[1195].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                              >> 2U)))) {
                    vlSymsp->__Vcoverage[1194].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((0x10U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)) {
            if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                          >> 3U)))) {
                if ((4U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)) {
                    vlSymsp->__Vcoverage[1199].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                              >> 2U)))) {
                    vlSymsp->__Vcoverage[1198].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((8U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)) {
                if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                              >> 2U)))) {
                    vlSymsp->__Vcoverage[1200].fetch_add(1, std::memory_order_relaxed);
                }
                if ((4U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)) {
                    vlSymsp->__Vcoverage[1201].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
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
    if (((IData)(vlSelf->top__DOT__reg_en_M0) ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_M0))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_M0 = vlSelf->top__DOT__reg_en_M0;
    }
    if (((IData)(vlSelf->top__DOT__tarray_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray_en))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray_en = vlSelf->top__DOT__tarray_en;
    }
    if (((IData)(vlSelf->top__DOT__tarray_wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray_wen))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray_wen = vlSelf->top__DOT__tarray_wen;
    }
    if (((IData)(vlSelf->top__DOT__z6b_sel) ^ (IData)(vlSelf->top__DOT____Vtogcov__z6b_sel))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__z6b_sel = vlSelf->top__DOT__z6b_sel;
    }
    if (((IData)(vlSelf->top__DOT__darray_write_mux_sel) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__darray_write_mux_sel))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__darray_write_mux_sel 
            = vlSelf->top__DOT__darray_write_mux_sel;
    }
    if (((IData)(vlSelf->top__DOT__darray_wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__darray_wen))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__darray_wen = vlSelf->top__DOT__darray_wen;
    }
    if (((IData)(vlSelf->top__DOT__write_en_sel) ^ (IData)(vlSelf->top__DOT____Vtogcov__write_en_sel))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__write_en_sel = vlSelf->top__DOT__write_en_sel;
    }
    if (((IData)(vlSelf->top__DOT__spill_one_word_done) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__spill_one_word_done))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__spill_one_word_done 
            = vlSelf->top__DOT__spill_one_word_done;
    }
    if (((IData)(vlSelf->top__DOT__refill_one_word_req_sent) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__refill_one_word_req_sent))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__refill_one_word_req_sent 
            = vlSelf->top__DOT__refill_one_word_req_sent;
    }
    if (((IData)(vlSelf->top__DOT__refill_one_word_resp_received) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__refill_one_word_resp_received))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__refill_one_word_resp_received 
            = vlSelf->top__DOT__refill_one_word_resp_received;
    }
    if (((IData)(vlSelf->top__DOT__Spill_or_Refill_sel) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__Spill_or_Refill_sel))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__Spill_or_Refill_sel 
            = vlSelf->top__DOT__Spill_or_Refill_sel;
    }
    if (((IData)(vlSelf->top__DOT__flush) ^ (IData)(vlSelf->top__DOT____Vtogcov__flush))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__flush = vlSelf->top__DOT__flush;
    }
    if (((IData)(vlSelf->top__DOT__tarray_en) & vlSelf->top__DOT__DUT__DOT__valid_array
         [(0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                    >> 6U))])) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        if (((vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
              >> 0xbU) == vlSelf->top__DOT__DUT__DOT__tag_array
             [(0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                        >> 6U))])) {
            vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        }
        if (((vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
              >> 0xbU) != vlSelf->top__DOT__DUT__DOT__tag_array
             [(0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                        >> 6U))])) {
            vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__tarray_en) 
                  & vlSelf->top__DOT__DUT__DOT__valid_array
                  [(0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                             >> 6U))])))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->top__DOT__spill_done = (0x10U <= (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter));
    vlSelf->top__DOT__refill_req_done = (0x10U <= (IData)(vlSelf->top__DOT__DUT__DOT__refill_req_counter));
    vlSelf->top__DOT__refill_resp_done = (0x10U <= (IData)(vlSelf->top__DOT__DUT__DOT__refill_resp_counter));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__spill_counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_counter)))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_counter 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_counter)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__spill_counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_counter)))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_counter 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_counter)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__spill_counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_counter)))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_counter 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_counter)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__spill_counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_counter)))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_counter 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_counter)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__spill_counter) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_counter)))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_counter 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_counter)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__spill_counter)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__refill_req_counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_req_counter)))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_req_counter 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_req_counter)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__refill_req_counter)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__refill_req_counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_req_counter)))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_req_counter 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_req_counter)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__refill_req_counter)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__refill_req_counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_req_counter)))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_req_counter 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_req_counter)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__refill_req_counter)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__refill_req_counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_req_counter)))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_req_counter 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_req_counter)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__refill_req_counter)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__refill_req_counter) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_req_counter)))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_req_counter 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_req_counter)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__refill_req_counter)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__refill_resp_counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_resp_counter)))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_resp_counter 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_resp_counter)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__refill_resp_counter)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__refill_resp_counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_resp_counter)))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_resp_counter 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_resp_counter)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__refill_resp_counter)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__refill_resp_counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_resp_counter)))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_resp_counter 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_resp_counter)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__refill_resp_counter)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__refill_resp_counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_resp_counter)))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_resp_counter 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_resp_counter)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__refill_resp_counter)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__refill_resp_counter) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_resp_counter)))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_resp_counter 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_resp_counter)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__refill_resp_counter)));
    }
    vlSelf->top__DOT__current_dirty = (((IData)(vlSelf->top__DOT__tarray_en) 
                                        & vlSelf->top__DOT__DUT__DOT__valid_array
                                        [(0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                   >> 6U))]) 
                                       & vlSelf->top__DOT__DUT__DOT__dirty_array
                                       [(0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                  >> 6U))]);
    vlSelf->top__DOT__tarray_match = (((IData)(vlSelf->top__DOT__tarray_en) 
                                       & vlSelf->top__DOT__DUT__DOT__valid_array
                                       [(0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                  >> 6U))]) 
                                      & ((vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                          >> 0xbU) 
                                         == vlSelf->top__DOT__DUT__DOT__tag_array
                                         [(0x1fU & 
                                           (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                            >> 6U))]));
    if ((1U & ((0xffffU & ((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                   >> 2U)))) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)))) {
        vlSymsp->__Vcoverage[608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)) 
               | (1U & ((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                >> 2U)))));
    }
    if ((1U & ((0x7fffU & (((IData)(1U) << (0xfU & 
                                            (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                             >> 2U))) 
                           >> 1U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write) 
                                      >> 1U)))) {
        vlSymsp->__Vcoverage[609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)) 
               | (2U & ((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                >> 2U)))));
    }
    if ((1U & ((0x3fffU & (((IData)(1U) << (0xfU & 
                                            (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                             >> 2U))) 
                           >> 2U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write) 
                                      >> 2U)))) {
        vlSymsp->__Vcoverage[610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)) 
               | (4U & ((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                >> 2U)))));
    }
    if ((1U & ((0x1fffU & (((IData)(1U) << (0xfU & 
                                            (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                             >> 2U))) 
                           >> 3U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write) 
                                      >> 3U)))) {
        vlSymsp->__Vcoverage[611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)) 
               | (8U & ((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                >> 2U)))));
    }
    if ((1U & ((0xfffU & (((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                   >> 2U))) 
                          >> 4U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write) 
                                     >> 4U)))) {
        vlSymsp->__Vcoverage[612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)) 
               | (0x10U & ((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                   >> 2U)))));
    }
    if ((1U & ((0x7ffU & (((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                   >> 2U))) 
                          >> 5U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write) 
                                     >> 5U)))) {
        vlSymsp->__Vcoverage[613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)) 
               | (0x20U & ((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                   >> 2U)))));
    }
    if ((1U & ((0x3ffU & (((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                   >> 2U))) 
                          >> 6U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write) 
                                     >> 6U)))) {
        vlSymsp->__Vcoverage[614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)) 
               | (0x40U & ((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                   >> 2U)))));
    }
    if ((1U & ((0x1ffU & (((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                   >> 2U))) 
                          >> 7U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write) 
                                     >> 7U)))) {
        vlSymsp->__Vcoverage[615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)) 
               | (0x80U & ((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                   >> 2U)))));
    }
    if ((1U & ((0xffU & (((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                  >> 2U))) 
                         >> 8U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write) 
                                    >> 8U)))) {
        vlSymsp->__Vcoverage[616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)) 
               | (0x100U & ((IData)(1U) << (0xfU & 
                                            (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                             >> 2U)))));
    }
    if ((1U & ((0x7fU & (((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                  >> 2U))) 
                         >> 9U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write) 
                                    >> 9U)))) {
        vlSymsp->__Vcoverage[617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)) 
               | (0x200U & ((IData)(1U) << (0xfU & 
                                            (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                             >> 2U)))));
    }
    if ((1U & ((0x3fU & (((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                  >> 2U))) 
                         >> 0xaU)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write) 
                                      >> 0xaU)))) {
        vlSymsp->__Vcoverage[618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)) 
               | (0x400U & ((IData)(1U) << (0xfU & 
                                            (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                             >> 2U)))));
    }
    if ((1U & ((0x1fU & (((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                  >> 2U))) 
                         >> 0xbU)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write) 
                                      >> 0xbU)))) {
        vlSymsp->__Vcoverage[619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)) 
               | (0x800U & ((IData)(1U) << (0xfU & 
                                            (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                             >> 2U)))));
    }
    if ((1U & ((0xfU & (((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                 >> 2U))) 
                        >> 0xcU)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write) 
                                     >> 0xcU)))) {
        vlSymsp->__Vcoverage[620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)) 
               | (0x1000U & ((IData)(1U) << (0xfU & 
                                             (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                              >> 2U)))));
    }
    if ((1U & ((7U & (((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                               >> 2U))) 
                      >> 0xdU)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write) 
                                   >> 0xdU)))) {
        vlSymsp->__Vcoverage[621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)) 
               | (0x2000U & ((IData)(1U) << (0xfU & 
                                             (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                              >> 2U)))));
    }
    if ((1U & ((3U & (((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                               >> 2U))) 
                      >> 0xeU)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write) 
                                   >> 0xeU)))) {
        vlSymsp->__Vcoverage[622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)) 
               | (0x4000U & ((IData)(1U) << (0xfU & 
                                             (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                              >> 2U)))));
    }
    if ((1U & ((1U & (((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                               >> 2U))) 
                      >> 0xfU)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write) 
                                   >> 0xfU)))) {
        vlSymsp->__Vcoverage[623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__offset_write)) 
               | (0x8000U & ((IData)(1U) << (0xfU & 
                                             (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                              >> 2U)))));
    }
    if ((1U & ((0x7fffffe0U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                               >> 1U)) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
                                          >> 1U)))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = (0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result);
    }
    if ((1U & ((0x3ffffff0U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                               >> 2U)) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
                                          >> 2U)))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = (0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result);
    }
    if ((1U & ((0x1ffffff8U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                               >> 3U)) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
                                          >> 3U)))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = (0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result);
    }
    if ((1U & ((0xffffffcU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                              >> 4U)) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
                                         >> 4U)))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = (0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result);
    }
    if ((1U & ((0x7fffffeU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                              >> 5U)) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
                                         >> 5U)))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = (0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result);
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if (((vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_result) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((1U & (vlSelf->top__DOT__memreq_msg_addr ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (1U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((2U & (vlSelf->top__DOT__memreq_msg_addr ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (2U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((4U & (vlSelf->top__DOT__memreq_msg_addr ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (4U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((8U & (vlSelf->top__DOT__memreq_msg_addr ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (8U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__memreq_msg_addr 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x10U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__memreq_msg_addr 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x20U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__memreq_msg_addr 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x40U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__memreq_msg_addr 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x80U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__memreq_msg_addr 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x100U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__memreq_msg_addr 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x200U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__memreq_msg_addr 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x400U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__memreq_msg_addr 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x800U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__memreq_msg_addr 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__memreq_msg_addr 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__memreq_msg_addr 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__memreq_msg_addr 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__memreq_msg_addr 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__memreq_msg_addr 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__memreq_msg_addr 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__memreq_msg_addr 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__memreq_msg_addr 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__memreq_msg_addr 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__memreq_msg_addr 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__memreq_msg_addr 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__memreq_msg_addr 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__memreq_msg_addr 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__memreq_msg_addr 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__memreq_msg_addr 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__memreq_msg_addr 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__memreq_msg_addr 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__memreq_msg_addr 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if (((vlSelf->top__DOT__memreq_msg_addr ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((1U & (vlSelf->top__DOT__memreq_msg_data ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (1U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((2U & (vlSelf->top__DOT__memreq_msg_data ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (2U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((4U & (vlSelf->top__DOT__memreq_msg_data ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (4U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((8U & (vlSelf->top__DOT__memreq_msg_data ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (8U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x10U & (vlSelf->top__DOT__memreq_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x10U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x20U & (vlSelf->top__DOT__memreq_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x20U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x40U & (vlSelf->top__DOT__memreq_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x40U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x80U & (vlSelf->top__DOT__memreq_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x80U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x100U & (vlSelf->top__DOT__memreq_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x100U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x200U & (vlSelf->top__DOT__memreq_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x200U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x400U & (vlSelf->top__DOT__memreq_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x400U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x800U & (vlSelf->top__DOT__memreq_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x800U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__memreq_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x1000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__memreq_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x2000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__memreq_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x4000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__memreq_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x8000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__memreq_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x10000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__memreq_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x20000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__memreq_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x40000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__memreq_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x80000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__memreq_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x100000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__memreq_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x200000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__memreq_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x400000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__memreq_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x800000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__memreq_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__memreq_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__memreq_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__memreq_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__memreq_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__memreq_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__memreq_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if (((vlSelf->top__DOT__memreq_msg_data ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((1U & (vlSelf->top__DOT__cache_resp_msg_data 
               ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (1U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((2U & (vlSelf->top__DOT__cache_resp_msg_data 
               ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (2U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((4U & (vlSelf->top__DOT__cache_resp_msg_data 
               ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (4U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((8U & (vlSelf->top__DOT__cache_resp_msg_data 
               ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (8U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x10U & (vlSelf->top__DOT__cache_resp_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x20U & (vlSelf->top__DOT__cache_resp_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x40U & (vlSelf->top__DOT__cache_resp_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x80U & (vlSelf->top__DOT__cache_resp_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x100U & (vlSelf->top__DOT__cache_resp_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x100U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x200U & (vlSelf->top__DOT__cache_resp_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x200U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x400U & (vlSelf->top__DOT__cache_resp_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x400U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x800U & (vlSelf->top__DOT__cache_resp_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x800U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache_resp_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x1000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache_resp_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x2000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache_resp_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x4000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache_resp_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x8000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache_resp_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache_resp_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache_resp_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache_resp_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache_resp_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x100000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache_resp_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x200000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache_resp_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x400000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache_resp_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x800000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache_resp_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache_resp_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache_resp_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache_resp_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache_resp_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache_resp_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache_resp_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if (((vlSelf->top__DOT__cache_resp_msg_data ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (1U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (2U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (4U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (8U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if (((vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_addr_M0) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (1U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (2U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (4U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (8U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if (((vlSelf->top__DOT__DUT__DOT__cache_request_data_M0 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__cache_request_data_M0) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__cache_request_data_M0));
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0U])) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[1U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [1U])) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[1U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [1U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[2U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [2U])) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[2U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [2U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[3U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [3U])) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[3U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [3U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[4U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [4U])) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[4U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [4U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[5U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [5U])) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[5U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [5U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[6U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [6U])) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[6U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [6U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[7U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [7U])) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[7U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [7U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[8U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [8U])) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[8U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [8U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[9U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [9U])) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[9U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [9U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0xaU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0xaU])) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0xaU] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0xaU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0xbU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0xbU])) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0xbU] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0xbU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0xcU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0xcU])) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0xcU] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0xcU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0xdU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0xdU])) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0xdU] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0xdU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0xeU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0xeU])) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0xeU] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0xeU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0xfU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0xfU])) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0xfU] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0xfU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0x10U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0x10U])) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0x10U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0x10U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0x11U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0x11U])) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0x11U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0x11U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0x12U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0x12U])) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0x12U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0x12U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0x13U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0x13U])) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0x13U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0x13U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0x14U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0x14U])) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0x14U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0x14U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0x15U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0x15U])) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0x15U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0x15U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0x16U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0x16U])) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0x16U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0x16U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0x17U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0x17U])) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0x17U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0x17U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0x18U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0x18U])) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0x18U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0x18U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0x19U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0x19U])) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0x19U] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0x19U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0x1aU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0x1aU])) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0x1aU] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0x1aU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0x1bU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0x1bU])) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0x1bU] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0x1bU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0x1cU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0x1cU])) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0x1cU] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0x1cU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0x1dU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0x1dU])) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0x1dU] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0x1dU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0x1eU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0x1eU])) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0x1eU] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0x1eU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__dirty_array[0x1fU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array
         [0x1fU])) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty_array[0x1fU] 
            = vlSelf->top__DOT__DUT__DOT__dirty_array
            [0x1fU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0U])) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[1U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [1U])) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[1U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [1U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[2U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [2U])) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[2U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [2U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[3U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [3U])) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[3U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [3U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[4U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [4U])) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[4U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [4U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[5U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [5U])) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[5U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [5U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[6U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [6U])) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[6U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [6U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[7U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [7U])) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[7U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [7U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[8U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [8U])) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[8U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [8U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[9U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [9U])) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[9U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [9U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0xaU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0xaU])) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0xaU] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0xaU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0xbU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0xbU])) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0xbU] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0xbU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0xcU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0xcU])) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0xcU] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0xcU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0xdU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0xdU])) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0xdU] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0xdU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0xeU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0xeU])) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0xeU] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0xeU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0xfU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0xfU])) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0xfU] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0xfU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0x10U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0x10U])) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0x10U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0x10U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0x11U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0x11U])) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0x11U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0x11U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0x12U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0x12U])) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0x12U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0x12U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0x13U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0x13U])) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0x13U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0x13U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0x14U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0x14U])) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0x14U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0x14U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0x15U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0x15U])) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0x15U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0x15U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0x16U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0x16U])) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0x16U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0x16U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0x17U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0x17U])) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0x17U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0x17U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0x18U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0x18U])) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0x18U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0x18U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0x19U] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0x19U])) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0x19U] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0x19U];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0x1aU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0x1aU])) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0x1aU] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0x1aU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0x1bU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0x1bU])) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0x1bU] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0x1bU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0x1cU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0x1cU])) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0x1cU] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0x1cU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0x1dU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0x1dU])) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0x1dU] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0x1dU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0x1eU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0x1eU])) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0x1eU] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0x1eU];
    }
    if ((vlSelf->top__DOT__DUT__DOT__valid_array[0x1fU] 
         ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array
         [0x1fU])) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid_array[0x1fU] 
            = vlSelf->top__DOT__DUT__DOT__valid_array
            [0x1fU];
    }
    vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
        = ((vlSelf->top__DOT__DUT__DOT__tag_array[(0x1fU 
                                                   & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                      >> 6U))] 
            << 0xbU) | (0x7c0U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0));
    vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
        = vlSelf->top__DOT__DUT__DOT__data_array[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                     >> 6U))][0U];
    vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
        = vlSelf->top__DOT__DUT__DOT__data_array[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                     >> 6U))][1U];
    vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
        = vlSelf->top__DOT__DUT__DOT__data_array[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                     >> 6U))][2U];
    vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
        = vlSelf->top__DOT__DUT__DOT__data_array[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                     >> 6U))][3U];
    vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
        = vlSelf->top__DOT__DUT__DOT__data_array[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                     >> 6U))][4U];
    vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
        = vlSelf->top__DOT__DUT__DOT__data_array[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                     >> 6U))][5U];
    vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
        = vlSelf->top__DOT__DUT__DOT__data_array[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                     >> 6U))][6U];
    vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
        = vlSelf->top__DOT__DUT__DOT__data_array[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                     >> 6U))][7U];
    vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
        = vlSelf->top__DOT__DUT__DOT__data_array[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                     >> 6U))][8U];
    vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
        = vlSelf->top__DOT__DUT__DOT__data_array[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                     >> 6U))][9U];
    vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
        = vlSelf->top__DOT__DUT__DOT__data_array[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                     >> 6U))][0xaU];
    vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
        = vlSelf->top__DOT__DUT__DOT__data_array[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                     >> 6U))][0xbU];
    vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
        = vlSelf->top__DOT__DUT__DOT__data_array[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                     >> 6U))][0xcU];
    vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
        = vlSelf->top__DOT__DUT__DOT__data_array[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                     >> 6U))][0xdU];
    vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
        = vlSelf->top__DOT__DUT__DOT__data_array[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                     >> 6U))][0xeU];
    vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
        = vlSelf->top__DOT__DUT__DOT__data_array[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                     >> 6U))][0xfU];
    if (((IData)(vlSelf->top__DOT__spill_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__spill_done))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__spill_done = vlSelf->top__DOT__spill_done;
    }
    if (((IData)(vlSelf->top__DOT__refill_req_done) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__refill_req_done))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__refill_req_done 
            = vlSelf->top__DOT__refill_req_done;
    }
    if (((IData)(vlSelf->top__DOT__refill_resp_done) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__refill_resp_done))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__refill_resp_done 
            = vlSelf->top__DOT__refill_resp_done;
    }
    if (((IData)(vlSelf->top__DOT__current_dirty) ^ (IData)(vlSelf->top__DOT____Vtogcov__current_dirty))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__current_dirty 
            = vlSelf->top__DOT__current_dirty;
    }
    if (((IData)(vlSelf->top__DOT__tarray_match) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray_match))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray_match = vlSelf->top__DOT__tarray_match;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
               ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (1U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
               ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (2U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
               ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (4U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
               ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (8U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                  ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                  ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                  ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                  ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                   ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                   ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                   ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                   ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                    ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                    ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                    ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                    ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                     ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                     ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                     ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                     ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                      ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                      ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                      ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                      ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                       ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                       ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                       ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                       ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                        ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                        ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
                        ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if (((vlSelf->top__DOT__DUT__DOT__cache_to_mem_data 
          ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__cache_to_mem_data));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (1U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (2U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (4U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (8U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if (((vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    vlSelf->top__DOT__DUT__DOT__refill_addr = (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                                               + (0x3cU 
                                                  & ((IData)(vlSelf->top__DOT__DUT__DOT__refill_req_counter) 
                                                     << 2U)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (1U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (2U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (4U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (8U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    if (((vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_initial_addr) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__spill_initial_addr));
    }
    vlSelf->top__DOT__DUT__DOT__spill_addr = (vlSelf->top__DOT__DUT__DOT__spill_initial_addr 
                                              + (0x3cU 
                                                 & ((IData)(vlSelf->top__DOT__DUT__DOT__spill_counter) 
                                                    << 2U)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (1U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (2U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (4U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (8U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x20U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)) {
        if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                      >> 4U)))) {
            if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                          >> 3U)))) {
                if ((4U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)) {
                    vlSymsp->__Vcoverage[1203].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                              >> 2U)))) {
                    vlSymsp->__Vcoverage[1202].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((8U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)) {
                if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                              >> 2U)))) {
                    vlSymsp->__Vcoverage[1204].fetch_add(1, std::memory_order_relaxed);
                }
                if ((4U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)) {
                    vlSymsp->__Vcoverage[1205].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((0x10U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)) {
            if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                          >> 3U)))) {
                if ((4U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)) {
                    vlSymsp->__Vcoverage[1207].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                              >> 2U)))) {
                    vlSymsp->__Vcoverage[1206].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((8U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)) {
                if ((4U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)) {
                    vlSymsp->__Vcoverage[1209].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__memresp_msg_data 
                        = vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU];
                } else {
                    vlSelf->top__DOT__memresp_msg_data 
                        = vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU];
                }
                if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                              >> 2U)))) {
                    vlSymsp->__Vcoverage[1208].fetch_add(1, std::memory_order_relaxed);
                }
            } else {
                vlSelf->top__DOT__memresp_msg_data 
                    = ((4U & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]
                        : vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]);
            }
        } else {
            vlSelf->top__DOT__memresp_msg_data = ((8U 
                                                   & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)
                                                   ? 
                                                  ((4U 
                                                    & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)
                                                    ? 
                                                   vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]
                                                    : 
                                                   vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU])
                                                   : 
                                                  ((4U 
                                                    & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)
                                                    ? 
                                                   vlSelf->top__DOT__DUT__DOT__data_array_output[9U]
                                                    : 
                                                   vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
        }
    } else {
        vlSelf->top__DOT__memresp_msg_data = ((0x10U 
                                               & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)
                                               ? ((8U 
                                                   & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)
                                                   ? 
                                                  ((4U 
                                                    & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)
                                                    ? 
                                                   vlSelf->top__DOT__DUT__DOT__data_array_output[7U]
                                                    : 
                                                   vlSelf->top__DOT__DUT__DOT__data_array_output[6U])
                                                   : 
                                                  ((4U 
                                                    & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)
                                                    ? 
                                                   vlSelf->top__DOT__DUT__DOT__data_array_output[5U]
                                                    : 
                                                   vlSelf->top__DOT__DUT__DOT__data_array_output[4U]))
                                               : ((8U 
                                                   & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)
                                                   ? 
                                                  ((4U 
                                                    & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)
                                                    ? 
                                                   vlSelf->top__DOT__DUT__DOT__data_array_output[3U]
                                                    : 
                                                   vlSelf->top__DOT__DUT__DOT__data_array_output[2U])
                                                   : 
                                                  ((4U 
                                                    & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)
                                                    ? 
                                                   vlSelf->top__DOT__DUT__DOT__data_array_output[1U]
                                                    : 
                                                   vlSelf->top__DOT__DUT__DOT__data_array_output[0U])));
    }
    if (vlSelf->top__DOT__Spill_or_Refill_sel) {
        if (vlSelf->top__DOT__Spill_or_Refill_sel) {
            vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__Spill_or_Refill_sel)))) {
            vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__data_array_output[0U] 
          ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (1U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (2U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (4U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (8U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__data_array_output[1U] 
          ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (1U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (2U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (4U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (8U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    vlSelf->top__DOT__cache_req_msg_addr = ((IData)(vlSelf->top__DOT__Spill_or_Refill_sel)
                                             ? ((IData)(vlSelf->top__DOT__Spill_or_Refill_sel)
                                                 ? vlSelf->top__DOT__DUT__DOT__refill_addr
                                                 : 0U)
                                             : vlSelf->top__DOT__DUT__DOT__spill_addr);
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__data_array_output[2U] 
          ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (1U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (2U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (4U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (8U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__data_array_output[3U] 
          ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[3U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (1U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (2U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (4U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (8U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__data_array_output[4U] 
          ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[4U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (1U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (2U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (4U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (8U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__data_array_output[5U] 
          ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[5U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (1U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (2U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (4U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (8U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__data_array_output[6U] 
          ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[6U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (1U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (2U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (4U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (8U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__data_array_output[7U] 
          ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[7U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (1U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (2U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (4U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (8U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__data_array_output[8U] 
          ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[8U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (1U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (2U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (4U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (8U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__data_array_output[9U] 
          ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[9U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (1U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (2U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (4U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (8U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU] 
          ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xaU]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (1U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (2U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (4U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (8U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU] 
          ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xbU]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (1U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (2U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (4U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (8U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[1096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU] 
          ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xcU]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (1U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (2U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (4U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (8U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[1128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU] 
          ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xdU]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (1U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (2U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (4U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (8U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[1160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU] 
          ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xeU]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (1U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (2U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (4U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
               ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (8U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                  ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                   ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                    ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                     ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                      ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                       ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
                        ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[1192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU] 
          ^ vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__data_array_output[0xfU]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (1U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (2U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (4U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (8U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if (((vlSelf->top__DOT__DUT__DOT__refill_addr ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (1U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (2U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (4U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (8U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__spill_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if (((vlSelf->top__DOT__DUT__DOT__spill_addr ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__spill_addr) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__spill_addr));
    }
    if ((1U & (vlSelf->top__DOT__memresp_msg_data ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (1U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((2U & (vlSelf->top__DOT__memresp_msg_data ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (2U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((4U & (vlSelf->top__DOT__memresp_msg_data ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (4U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((8U & (vlSelf->top__DOT__memresp_msg_data ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (8U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x10U & (vlSelf->top__DOT__memresp_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x10U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x20U & (vlSelf->top__DOT__memresp_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x20U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x40U & (vlSelf->top__DOT__memresp_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x40U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x80U & (vlSelf->top__DOT__memresp_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x80U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x100U & (vlSelf->top__DOT__memresp_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x100U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x200U & (vlSelf->top__DOT__memresp_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x200U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x400U & (vlSelf->top__DOT__memresp_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x400U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x800U & (vlSelf->top__DOT__memresp_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x800U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__memresp_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x1000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__memresp_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x2000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__memresp_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x4000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__memresp_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x8000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__memresp_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x10000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__memresp_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x20000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__memresp_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x40000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__memresp_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x80000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__memresp_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x100000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__memresp_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x200000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__memresp_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x400000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__memresp_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x800000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__memresp_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__memresp_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__memresp_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__memresp_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__memresp_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__memresp_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__memresp_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if (((vlSelf->top__DOT__memresp_msg_data ^ vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__memresp_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__memresp_msg_data));
    }
    if ((1U & (vlSelf->top__DOT__cache_req_msg_addr 
               ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (1U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((2U & (vlSelf->top__DOT__cache_req_msg_addr 
               ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (2U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((4U & (vlSelf->top__DOT__cache_req_msg_addr 
               ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (4U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((8U & (vlSelf->top__DOT__cache_req_msg_addr 
               ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (8U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__cache_req_msg_addr 
                  ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x10U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__cache_req_msg_addr 
                  ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x20U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__cache_req_msg_addr 
                  ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x40U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__cache_req_msg_addr 
                  ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x80U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__cache_req_msg_addr 
                   ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x100U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__cache_req_msg_addr 
                   ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x200U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__cache_req_msg_addr 
                   ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x400U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__cache_req_msg_addr 
                   ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x800U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache_req_msg_addr 
                    ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache_req_msg_addr 
                    ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache_req_msg_addr 
                    ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache_req_msg_addr 
                    ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache_req_msg_addr 
                     ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache_req_msg_addr 
                     ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache_req_msg_addr 
                     ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache_req_msg_addr 
                     ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache_req_msg_addr 
                      ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache_req_msg_addr 
                      ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache_req_msg_addr 
                      ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache_req_msg_addr 
                      ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache_req_msg_addr 
                       ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache_req_msg_addr 
                       ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache_req_msg_addr 
                       ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache_req_msg_addr 
                       ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache_req_msg_addr 
                        ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache_req_msg_addr 
                        ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache_req_msg_addr 
                        ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if (((vlSelf->top__DOT__cache_req_msg_addr ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
}
