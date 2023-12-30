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
    vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
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
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__state))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ (IData)(vlSelf->top__DOT__istream_val)))) {
            vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__istream_val) {
            vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imul__DOT__nextstate = 1U;
        } else {
            vlSelf->top__DOT__imul__DOT__nextstate = 0U;
        }
    } else {
        vlSelf->top__DOT__imul__DOT__nextstate = ((1U 
                                                   == (IData)(vlSelf->top__DOT__imul__DOT__state))
                                                   ? 
                                                  ((0x20U 
                                                    == (IData)(vlSelf->top__DOT__imul__DOT__counter))
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__ostream_rdy)
                                                    ? 0U
                                                    : 2U));
    }
    if ((0U != (IData)(vlSelf->top__DOT__imul__DOT__state))) {
        if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__state))) {
            vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
            if ((0x20U != (IData)(vlSelf->top__DOT__imul__DOT__counter))) {
                vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0x20U == (IData)(vlSelf->top__DOT__imul__DOT__counter))) {
                vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U != (IData)(vlSelf->top__DOT__imul__DOT__state))) {
            vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
            if (vlSelf->top__DOT__ostream_rdy) {
                vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__ostream_rdy)))) {
                vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->top__DOT__istream_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_val = vlSelf->top__DOT__istream_val;
    }
    if (((IData)(vlSelf->top__DOT__istream_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_rdy))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_rdy = vlSelf->top__DOT__istream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__ostream_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_rdy))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_rdy = vlSelf->top__DOT__ostream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__ostream_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_val))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_val = vlSelf->top__DOT__ostream_val;
    }
    if (((IData)(vlSelf->top__DOT__istream_val_f) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_val_f))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_val_f 
            = vlSelf->top__DOT__istream_val_f;
    }
    if (((IData)(vlSelf->top__DOT__ostream_rdy_f) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_rdy_f))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_rdy_f 
            = vlSelf->top__DOT__ostream_rdy_f;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__istream_val) 
                  & (IData)(vlSelf->top__DOT__istream_rdy))))) {
        if ((0x20U == (IData)(vlSelf->top__DOT__imul__DOT__counter))) {
            vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0x20U != (IData)(vlSelf->top__DOT__imul__DOT__counter))) {
            vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
            if ((1U & vlSelf->top__DOT__imul__DOT__b)) {
                vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ vlSelf->top__DOT__imul__DOT__b))) {
                vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((0x20U <= (IData)(vlSelf->top__DOT__imul__DOT__counter)) 
         & (~ ((IData)(vlSelf->top__DOT__ostream_val) 
               & (IData)(vlSelf->top__DOT__ostream_rdy))))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((0x20U <= (IData)(vlSelf->top__DOT__imul__DOT__counter)) 
                  & (~ ((IData)(vlSelf->top__DOT__ostream_val) 
                        & (IData)(vlSelf->top__DOT__ostream_rdy))))))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__state 
            = ((2U & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__state 
            = ((1U & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__state)));
    }
    vlSelf->top__DOT__imul__DOT__next_ostream_val = 
        ((0x20U <= (IData)(vlSelf->top__DOT__imul__DOT__counter)) 
         & (~ ((IData)(vlSelf->top__DOT__ostream_val) 
               & (IData)(vlSelf->top__DOT__ostream_rdy))));
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__counter 
            = ((0x3eU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__counter)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__counter 
            = ((0x3dU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__counter)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imul__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__counter 
            = ((0x3bU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)) 
               | (4U & (IData)(vlSelf->top__DOT__imul__DOT__counter)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__imul__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__counter 
            = ((0x37U & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)) 
               | (8U & (IData)(vlSelf->top__DOT__imul__DOT__counter)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__imul__DOT__counter) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__counter 
            = ((0x2fU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)) 
               | (0x10U & (IData)(vlSelf->top__DOT__imul__DOT__counter)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__imul__DOT__counter) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__counter 
            = ((0x1fU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__counter)) 
               | (0x20U & (IData)(vlSelf->top__DOT__imul__DOT__counter)));
    }
    if ((1U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (1U & vlSelf->top__DOT__ostream_msg));
    }
    if ((2U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (2U & vlSelf->top__DOT__ostream_msg));
    }
    if ((4U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (4U & vlSelf->top__DOT__ostream_msg));
    }
    if ((8U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (8U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffffefU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x10U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x20U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x40U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x80U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x100U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x200U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x400U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x800U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffefffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x1000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x2000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x4000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x8000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__ostream_msg 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x10000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__ostream_msg 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x20000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__ostream_msg 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x40000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__ostream_msg 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x80000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__ostream_msg 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffefffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x100000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__ostream_msg 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x200000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__ostream_msg 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x400000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__ostream_msg 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x800000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__ostream_msg 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x1000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__ostream_msg 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x2000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__ostream_msg 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x4000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__ostream_msg 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x8000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__ostream_msg 
                        ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xefffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x10000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__ostream_msg 
                        ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x20000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__ostream_msg 
                        ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x40000000U & vlSelf->top__DOT__ostream_msg));
    }
    if (((vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x80000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((1U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (1U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((2U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (2U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((4U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (4U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((8U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (8U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x80U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x100U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x100U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x200U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x200U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x400U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x400U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x800U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x800U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x1000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x1000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x2000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x2000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x4000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x4000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x8000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x8000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x80000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x100000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x100000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x200000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x200000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x400000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x400000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x800000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x800000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x1000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x1000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x2000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x2000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x4000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x4000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x8000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x8000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if (((vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((1U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (1U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((2U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (2U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((4U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (4U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((8U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (8U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x80U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x100U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x100U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x200U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x200U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x400U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x400U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x800U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x800U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x1000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x1000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x2000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x2000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x4000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x4000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x8000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x8000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x80000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x100000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x100000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x200000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x200000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x400000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x400000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x800000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x800000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x1000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x1000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x2000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x2000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x4000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x4000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x8000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x8000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if (((vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (1U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (2U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (4U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (8U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x10U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x20U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x40U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x80U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x100U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x200U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x400U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x800U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x1000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x2000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x4000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x8000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x10000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x20000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x40000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x80000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x100000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x200000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x400000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x800000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x1000000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x2000000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x4000000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x8000000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__a 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x10000000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__a 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x20000000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__a 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x40000000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if (((vlSelf->top__DOT__imul__DOT__a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a = 
            ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__a) 
             | (0x80000000U & vlSelf->top__DOT__imul__DOT__a));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (1U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (2U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (4U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (8U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x10U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x20U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x40U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x80U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x100U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x200U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x400U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x800U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x1000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x2000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x4000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x8000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x10000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x20000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x40000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x80000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x100000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x200000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x400000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x800000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x1000000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x2000000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x4000000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x8000000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__b 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x10000000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__b 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x20000000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__b 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x40000000U & vlSelf->top__DOT__imul__DOT__b));
    }
    if (((vlSelf->top__DOT__imul__DOT__b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b = 
            ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__b) 
             | (0x80000000U & vlSelf->top__DOT__imul__DOT__b));
    }
    vlSelf->top__DOT__imul__DOT__add_result = (vlSelf->top__DOT__imul__DOT__a 
                                               + vlSelf->top__DOT__ostream_msg);
    vlSelf->top__DOT__istream_msg = (((QData)((IData)(vlSelf->top__DOT__istream_msg_a)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__istream_msg_b)));
    if (((IData)(vlSelf->top__DOT__imul__DOT__next_ostream_val) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_val))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_val 
            = vlSelf->top__DOT__imul__DOT__next_ostream_val;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__nextstate) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate)))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate 
            = ((2U & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__nextstate)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__nextstate) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate)))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate 
            = ((1U & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__nextstate)));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__add_result 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (1U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__add_result 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (2U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__add_result 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (4U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__add_result 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (8U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__add_result 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__add_result 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__add_result 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__add_result 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__add_result 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__add_result 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__add_result 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__add_result 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__add_result 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__add_result 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__add_result 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__add_result 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__add_result 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__add_result 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__add_result 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__add_result 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__add_result 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__add_result 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__add_result 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__add_result 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__add_result 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__add_result 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__add_result 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__add_result 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__add_result 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__add_result 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__add_result 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    if (((vlSelf->top__DOT__imul__DOT__add_result ^ vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_result 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__add_result) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__add_result));
    }
    vlSelf->top__DOT__imul__DOT__next_ostream_msg = vlSelf->top__DOT__ostream_msg;
    if ((1U & ((IData)(vlSelf->top__DOT__istream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_msg)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__istream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__istream_msg ^ vlSelf->top__DOT____Vtogcov__istream_msg) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    vlSelf->top__DOT__imul__DOT__next_b = vlSelf->top__DOT__imul__DOT__b;
    vlSelf->top__DOT__imul__DOT__next_a = vlSelf->top__DOT__imul__DOT__a;
    if (((IData)(vlSelf->top__DOT__istream_val) & (IData)(vlSelf->top__DOT__istream_rdy))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__next_ostream_msg = 0U;
        vlSelf->top__DOT__imul__DOT__next_b = (IData)(vlSelf->top__DOT__istream_msg);
        vlSelf->top__DOT__imul__DOT__next_a = (IData)(
                                                      (vlSelf->top__DOT__istream_msg 
                                                       >> 0x20U));
    } else if ((0x20U != (IData)(vlSelf->top__DOT__imul__DOT__counter))) {
        vlSelf->top__DOT__imul__DOT__next_ostream_msg 
            = ((1U & vlSelf->top__DOT__imul__DOT__b)
                ? vlSelf->top__DOT__imul__DOT__add_result
                : vlSelf->top__DOT__ostream_msg);
        vlSelf->top__DOT__imul__DOT__next_b = (vlSelf->top__DOT__imul__DOT__b 
                                               >> 1U);
        vlSelf->top__DOT__imul__DOT__next_a = (vlSelf->top__DOT__imul__DOT__a 
                                               << 1U);
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (1U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (2U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (4U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (8U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if (((vlSelf->top__DOT__imul__DOT__next_ostream_msg 
          ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__next_b 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (1U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__next_b 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (2U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__next_b 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (4U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__next_b 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (8U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__next_b 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__next_b 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__next_b 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__next_b 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__next_b 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__next_b 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__next_b 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__next_b 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__next_b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__next_b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__next_b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__next_b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__next_b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__next_b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__next_b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__next_b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__next_b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__next_b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__next_b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__next_b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if (((vlSelf->top__DOT__imul__DOT__next_b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__next_a 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (1U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__next_a 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (2U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__next_a 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (4U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__next_a 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (8U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__next_a 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__next_a 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__next_a 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__next_a 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__next_a 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__next_a 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__next_a 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__next_a 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__next_a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__next_a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__next_a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__next_a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__next_a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__next_a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__next_a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__next_a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__next_a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__next_a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__next_a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__next_a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if (((vlSelf->top__DOT__imul__DOT__next_a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../lab1_imul/tb_IntMul.v", 20, 26, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "../lab1_imul/tb_IntMul.v", 20, 43, ".top", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "../lab1_imul/tb_IntMul.v", 23, 16, ".top", "v_toggle/top", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "../lab1_imul/tb_IntMul.v", 25, 16, ".top", "v_toggle/top", "istream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "../lab1_imul/tb_IntMul.v", 26, 16, ".top", "v_toggle/top", "istream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "../lab1_imul/tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "../lab1_imul/tb_IntMul.v", 29, 16, ".top", "v_toggle/top", "ostream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "../lab1_imul/tb_IntMul.v", 30, 16, ".top", "v_toggle/top", "ostream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../lab1_imul/tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "../lab1_imul/tb_IntMul.v", 34, 16, ".top", "v_toggle/top", "istream_val_f", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "../lab1_imul/tb_IntMul.v", 35, 16, ".top", "v_toggle/top", "ostream_rdy_f", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "../lab1_imul/tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "../lab1_imul/tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "../lab1_imul/tb_IntMul.v", 41, 3, ".top", "v_line/top", "block", "41-43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "../lab1_imul/tb_IntMul.v", 101, 5, ".top", "v_line/top", "block", "101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "../lab1_imul/tb_IntMul.v", 105, 5, ".top", "v_branch/top", "if", "105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "../lab1_imul/tb_IntMul.v", 105, 6, ".top", "v_branch/top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "../lab1_imul/tb_IntMul.v", 135, 5, ".top", "v_line/top", "block", "135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "../lab1_imul/tb_IntMul.v", 169, 5, ".top", "v_line/top", "block", "169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "../lab1_imul/tb_IntMul.v", 203, 5, ".top", "v_line/top", "block", "203");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "../lab1_imul/tb_IntMul.v", 241, 5, ".top", "v_line/top", "block", "241-242");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "../lab1_imul/tb_IntMul.v", 275, 5, ".top", "v_line/top", "block", "275");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "../lab1_imul/tb_IntMul.v", 281, 5, ".top", "v_branch/top", "if", "281");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "../lab1_imul/tb_IntMul.v", 281, 6, ".top", "v_branch/top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../lab1_imul/IntMulBase.v", 10, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "../lab1_imul/IntMulBase.v", 11, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "../lab1_imul/IntMulBase.v", 13, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "../lab1_imul/IntMulBase.v", 14, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "../lab1_imul/IntMulBase.v", 15, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "istream_msg[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "../lab1_imul/IntMulBase.v", 17, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "../lab1_imul/IntMulBase.v", 18, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../lab1_imul/IntMulBase.v", 19, 23, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "ostream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "../lab1_imul/IntMulBase.v", 25, 13, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "state[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "../lab1_imul/IntMulBase.v", 25, 13, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "state[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "../lab1_imul/IntMulBase.v", 25, 20, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "nextstate[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "../lab1_imul/IntMulBase.v", 25, 20, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "nextstate[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "../lab1_imul/IntMulBase.v", 27, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "../lab1_imul/IntMulBase.v", 28, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "../lab1_imul/IntMulBase.v", 29, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "counter[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "../lab1_imul/IntMulBase.v", 29, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "counter[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "../lab1_imul/IntMulBase.v", 29, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "counter[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "../lab1_imul/IntMulBase.v", 29, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "counter[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "../lab1_imul/IntMulBase.v", 29, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "counter[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "../lab1_imul/IntMulBase.v", 29, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "counter[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "../lab1_imul/IntMulBase.v", 30, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "../lab1_imul/IntMulBase.v", 31, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "../lab1_imul/IntMulBase.v", 32, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "../lab1_imul/IntMulBase.v", 33, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "next_ostream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "../lab1_imul/IntMulBase.v", 35, 16, ".top.imul", "v_toggle/lab1_imul_IntMulBase", "add_result[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "../lab1_imul/IntMulBase.v", 54, 11, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "../lab1_imul/IntMulBase.v", 54, 12, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "../lab1_imul/IntMulBase.v", 67, 9, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "67-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "../lab1_imul/IntMulBase.v", 67, 10, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "../lab1_imul/IntMulBase.v", 56, 12, ".top.imul", "v_line/lab1_imul_IntMulBase", "if", "56-62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "../lab1_imul/IntMulBase.v", 56, 13, ".top.imul", "v_line/lab1_imul_IntMulBase", "else", "64-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "../lab1_imul/IntMulBase.v", 45, 7, ".top.imul", "v_line/lab1_imul_IntMulBase", "elsif", "45,47-51,53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "../lab1_imul/IntMulBase.v", 41, 5, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "41-42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "../lab1_imul/IntMulBase.v", 41, 6, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "44,72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "../lab1_imul/IntMulBase.v", 40, 3, ".top.imul", "v_line/lab1_imul_IntMulBase", "block", "40");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "../lab1_imul/IntMulBase.v", 78, 9, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "../lab1_imul/IntMulBase.v", 78, 10, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "../lab1_imul/IntMulBase.v", 82, 9, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "../lab1_imul/IntMulBase.v", 82, 10, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "../lab1_imul/IntMulBase.v", 86, 9, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "../lab1_imul/IntMulBase.v", 86, 10, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "87");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "../lab1_imul/IntMulBase.v", 81, 12, ".top.imul", "v_line/lab1_imul_IntMulBase", "if", "81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "../lab1_imul/IntMulBase.v", 81, 13, ".top.imul", "v_line/lab1_imul_IntMulBase", "else", "85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "../lab1_imul/IntMulBase.v", 77, 7, ".top.imul", "v_line/lab1_imul_IntMulBase", "elsif", "77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "../lab1_imul/IntMulBase.v", 76, 7, ".top.imul", "v_line/lab1_imul_IntMulBase", "block", "76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "../lab1_imul/IntMulBase.v", 105, 9, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "105-106");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "../lab1_imul/IntMulBase.v", 105, 10, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "108-109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "../lab1_imul/IntMulBase.v", 102, 12, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "102-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "../lab1_imul/IntMulBase.v", 102, 13, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "../lab1_imul/IntMulBase.v", 97, 7, ".top.imul", "v_line/lab1_imul_IntMulBase", "elsif", "97-100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "../lab1_imul/IntMulBase.v", 113, 7, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "113-114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "../lab1_imul/IntMulBase.v", 113, 8, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "116-117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "../lab1_imul/IntMulBase.v", 92, 3, ".top.imul", "v_line/lab1_imul_IntMulBase", "block", "92-95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.Add", "v_toggle/vc_SimpleAdder__P20", "out[31]", "");
}
