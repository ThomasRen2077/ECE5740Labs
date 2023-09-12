// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level = 1U;
    vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__VstlTriggered.set(1U, ((IData)(vlSelf->top__DOT__imul__DOT__shifts) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__imul__DOT__shifts__0)));
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__imul__DOT__shifts__0 
        = vlSelf->top__DOT__imul__DOT__shifts;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
    }
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
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ (IData)(vlSelf->top__DOT__istream_val)))) {
            vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__istream_val) {
            vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imul__DOT__nextstate = 1U;
        } else {
            vlSelf->top__DOT__imul__DOT__nextstate = 0U;
        }
    } else {
        vlSelf->top__DOT__imul__DOT__nextstate = ((1U 
                                                   == (IData)(vlSelf->top__DOT__imul__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__imul__DOT__finish)
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__imul__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__ostream_rdy)
                                                     ? 0U
                                                     : 2U)
                                                    : 0U));
    }
    if ((0U != (IData)(vlSelf->top__DOT__imul__DOT__state))) {
        if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__state))) {
            vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
            if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__finish)))) {
                vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
            }
            if (vlSelf->top__DOT__imul__DOT__finish) {
                vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U != (IData)(vlSelf->top__DOT__imul__DOT__state))) {
            if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__state))) {
                vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
                if (vlSelf->top__DOT__ostream_rdy) {
                    vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__ostream_rdy)))) {
                    vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U != (IData)(vlSelf->top__DOT__imul__DOT__state))) {
                vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    vlSelf->top__DOT__istream_msg = (((QData)((IData)(vlSelf->top__DOT__istream_msg_a)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__istream_msg_b)));
}

VL_ATTR_COLD void Vtop___024root___stl_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__imul__DOT____Vcellinp__Add____pinNumber2 
        = (vlSelf->top__DOT__imul__DOT__a << (IData)(vlSelf->top__DOT__imul__DOT__shifts));
    vlSelf->top__DOT__imul__DOT__next_a = vlSelf->top__DOT__imul__DOT__a;
    vlSelf->top__DOT__imul__DOT__next_b = vlSelf->top__DOT__imul__DOT__b;
    vlSelf->top__DOT__imul__DOT__next_ostream_msg = vlSelf->top__DOT__ostream_msg;
    vlSelf->top__DOT__imul__DOT__next_ostream_val = vlSelf->top__DOT__ostream_val;
    vlSelf->top__DOT__imul__DOT__next_finish = vlSelf->top__DOT__imul__DOT__finish;
    vlSelf->top__DOT__imul__DOT__shifts = 0U;
    vlSelf->top__DOT__imul__DOT__checkone = 0U;
    if (((IData)(vlSelf->top__DOT__istream_val) & (IData)(vlSelf->top__DOT__istream_rdy))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__next_a = (IData)(
                                                      (vlSelf->top__DOT__istream_msg 
                                                       >> 0x20U));
        vlSelf->top__DOT__imul__DOT__next_b = (IData)(vlSelf->top__DOT__istream_msg);
        vlSelf->top__DOT__imul__DOT__next_ostream_msg = 0U;
        vlSelf->top__DOT__imul__DOT__next_ostream_val = 0U;
    } else if (vlSelf->top__DOT__imul__DOT__finish) {
        if (((IData)(vlSelf->top__DOT__ostream_val) 
             & (IData)(vlSelf->top__DOT__ostream_rdy))) {
            vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imul__DOT__next_ostream_val = 0U;
            vlSelf->top__DOT__imul__DOT__next_finish = 1U;
        } else {
            vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imul__DOT__next_ostream_val = 1U;
        }
    } else {
        vlSelf->top__DOT__imul__DOT__i = 0U;
        {
            while (1U) {
                if ((1U & (vlSelf->top__DOT__imul__DOT__b 
                           >> (IData)(vlSelf->top__DOT__imul__DOT__i)))) {
                    vlSelf->top__DOT__imul__DOT__checkone = 1U;
                    vlSelf->top__DOT__imul__DOT__shifts 
                        = vlSelf->top__DOT__imul__DOT__i;
                    goto __Vlabel1;
                } else {
                    vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0x1fU == (IData)(vlSelf->top__DOT__imul__DOT__i))) {
                    goto __Vlabel1;
                } else {
                    vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__imul__DOT__i = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__imul__DOT__i)));
            }
            __Vlabel1: ;
        }
        if (vlSelf->top__DOT__imul__DOT__checkone) {
            vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                = (vlSelf->top__DOT__ostream_msg + vlSelf->top__DOT__imul__DOT____Vcellinp__Add____pinNumber2);
            if ((0x1fU >= ((IData)(1U) + (IData)(vlSelf->top__DOT__imul__DOT__shifts)))) {
                vlSelf->top__DOT__imul__DOT__next_a 
                    = (vlSelf->top__DOT__imul__DOT__a 
                       << ((IData)(1U) + (IData)(vlSelf->top__DOT__imul__DOT__shifts)));
                vlSelf->top__DOT__imul__DOT__next_b 
                    = (vlSelf->top__DOT__imul__DOT__b 
                       >> ((IData)(1U) + (IData)(vlSelf->top__DOT__imul__DOT__shifts)));
            } else {
                vlSelf->top__DOT__imul__DOT__next_a = 0U;
                vlSelf->top__DOT__imul__DOT__next_b = 0U;
            }
            vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                = vlSelf->top__DOT__ostream_msg;
            vlSelf->top__DOT__imul__DOT__next_finish = 1U;
            vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->top__DOT__imul__DOT__next_ostream_val = 0U;
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "tb_IntMul.v", 45, 3, ".top", "v_line/top", "block", "45-47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "tb_IntMul.v", 72, 7, ".top", "v_branch/top", "if", "72-73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "tb_IntMul.v", 72, 8, ".top", "v_branch/top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "tb_IntMul.v", 70, 5, ".top", "v_line/top", "block", "70-71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "tb_IntMul.v", 116, 5, ".top", "v_line/top", "block", "116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "tb_IntMul.v", 120, 5, ".top", "v_branch/top", "if", "120");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "tb_IntMul.v", 120, 6, ".top", "v_branch/top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "tb_IntMul.v", 150, 5, ".top", "v_line/top", "block", "150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "tb_IntMul.v", 184, 5, ".top", "v_line/top", "block", "184");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "tb_IntMul.v", 218, 5, ".top", "v_line/top", "block", "218");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "tb_IntMul.v", 259, 5, ".top", "v_line/top", "block", "259-260");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "tb_IntMul.v", 372, 5, ".top", "v_line/top", "block", "372");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "tb_IntMul.v", 378, 5, ".top", "v_branch/top", "if", "378");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "tb_IntMul.v", 378, 6, ".top", "v_branch/top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "IntMulAlt.v", 88, 12, ".top.imul", "v_branch/lab1_imul_IntMulAlt", "if", "88-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "IntMulAlt.v", 88, 13, ".top.imul", "v_branch/lab1_imul_IntMulAlt", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "IntMulAlt.v", 79, 12, ".top.imul", "v_line/lab1_imul_IntMulAlt", "elsif", "79-84,86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "IntMulAlt.v", 70, 7, ".top.imul", "v_line/lab1_imul_IntMulAlt", "elsif", "70-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "IntMulAlt.v", 61, 5, ".top.imul", "v_branch/lab1_imul_IntMulAlt", "if", "61-67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "IntMulAlt.v", 61, 6, ".top.imul", "v_branch/lab1_imul_IntMulAlt", "else", "69,92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "IntMulAlt.v", 60, 3, ".top.imul", "v_line/lab1_imul_IntMulAlt", "block", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "IntMulAlt.v", 99, 13, ".top.imul", "v_branch/lab1_imul_IntMulAlt", "if", "99");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "IntMulAlt.v", 99, 14, ".top.imul", "v_branch/lab1_imul_IntMulAlt", "else", "100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "IntMulAlt.v", 99, 11, ".top.imul", "v_line/lab1_imul_IntMulAlt", "case", "99");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "IntMulAlt.v", 101, 13, ".top.imul", "v_branch/lab1_imul_IntMulAlt", "if", "101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "IntMulAlt.v", 101, 14, ".top.imul", "v_branch/lab1_imul_IntMulAlt", "else", "102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "IntMulAlt.v", 101, 11, ".top.imul", "v_line/lab1_imul_IntMulAlt", "case", "101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "IntMulAlt.v", 103, 13, ".top.imul", "v_branch/lab1_imul_IntMulAlt", "if", "103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "IntMulAlt.v", 103, 14, ".top.imul", "v_branch/lab1_imul_IntMulAlt", "else", "104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "IntMulAlt.v", 103, 11, ".top.imul", "v_line/lab1_imul_IntMulAlt", "case", "103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "IntMulAlt.v", 105, 7, ".top.imul", "v_line/lab1_imul_IntMulAlt", "case", "105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "IntMulAlt.v", 97, 3, ".top.imul", "v_line/lab1_imul_IntMulAlt", "block", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "IntMulAlt.v", 128, 11, ".top.imul", "v_branch/lab1_imul_IntMulAlt", "if", "128-131");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "IntMulAlt.v", 128, 12, ".top.imul", "v_branch/lab1_imul_IntMulAlt", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "IntMulAlt.v", 134, 11, ".top.imul", "v_branch/lab1_imul_IntMulAlt", "if", "134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "IntMulAlt.v", 134, 12, ".top.imul", "v_branch/lab1_imul_IntMulAlt", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "IntMulAlt.v", 127, 9, ".top.imul", "v_line/lab1_imul_IntMulAlt", "block", "127");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "IntMulAlt.v", 136, 9, ".top.imul", "v_branch/lab1_imul_IntMulAlt", "if", "136-139");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "IntMulAlt.v", 136, 10, ".top.imul", "v_branch/lab1_imul_IntMulAlt", "else", "141-143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "IntMulAlt.v", 147, 12, ".top.imul", "v_line/lab1_imul_IntMulAlt", "if", "147-148");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "IntMulAlt.v", 147, 13, ".top.imul", "v_line/lab1_imul_IntMulAlt", "else", "150-152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "IntMulAlt.v", 125, 12, ".top.imul", "v_line/lab1_imul_IntMulAlt", "elsif", "125,127,145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "IntMulAlt.v", 119, 7, ".top.imul", "v_line/lab1_imul_IntMulAlt", "elsif", "119-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "IntMulAlt.v", 110, 3, ".top.imul", "v_line/lab1_imul_IntMulAlt", "block", "110-117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../vc/trace.v", 44, 25, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../vc/trace.v", 45, 25, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../vc/trace.v", 62, 3, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "62-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../vc/trace.v", 71, 3, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "71-72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../vc/trace.v", 89, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "89-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../vc/trace.v", 95, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "95-97,99-100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../vc/trace.v", 80, 8, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "80,85-86,88,93,95,103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../vc/trace.v", 123, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "123-126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../vc/trace.v", 113, 8, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "113,118,120-121,129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../vc/trace.v", 149, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "149-153,155-156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../vc/trace.v", 139, 8, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "139,145-147,149,159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../vc/trace.v", 178, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "178-179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../vc/trace.v", 184, 10, ".top.imul.vc_trace", "v_line/vc_Trace", "if", "184-185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../vc/trace.v", 184, 11, ".top.imul.vc_trace", "v_line/vc_Trace", "else", "186-188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../vc/trace.v", 182, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "elsif", "182-183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../vc/trace.v", 169, 8, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "169,175,177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../vc/trace.v", 209, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "209-210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../vc/trace.v", 223, 10, ".top.imul.vc_trace", "v_line/vc_Trace", "if", "223-225");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../vc/trace.v", 223, 11, ".top.imul.vc_trace", "v_line/vc_Trace", "else", "227-229");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../vc/trace.v", 219, 10, ".top.imul.vc_trace", "v_line/vc_Trace", "elsif", "219-221");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../vc/trace.v", 216, 10, ".top.imul.vc_trace", "v_line/vc_Trace", "elsif", "216-217");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../vc/trace.v", 213, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "elsif", "213-214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../vc/trace.v", 199, 8, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "199,206,208");
}
