// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab1_imul_IntMulAlt.h"

VL_ATTR_COLD void Vtop_lab1_imul_IntMulAlt___stl_sequent__TOP__top__imul__0(Vtop_lab1_imul_IntMulAlt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulAlt___stl_sequent__TOP__top__imul__0\n"); );
    // Body
    vlSymsp->TOP__top__imul__Add.__PVT__in0 = vlSelf->__PVT__ostream_msg;
    vlSymsp->TOP__top__imul__vc_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    if ((0U == (IData)(vlSelf->__PVT__state))) {
        if (vlSelf->__PVT__istream_val) {
            vlSelf->__PVT__nextstate = 1U;
            vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__nextstate = 0U;
            vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
    } else if ((1U == (IData)(vlSelf->__PVT__state))) {
        if (vlSelf->__PVT__finish) {
            vlSelf->__PVT__nextstate = 2U;
            vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__nextstate = 1U;
            vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
    } else {
        if (vlSelf->__PVT__ostream_rdy) {
            vlSelf->__PVT__nextstate = 0U;
            vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__nextstate = 2U;
            vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->TOP__top__imul__vc_trace.__PVT__clk = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vtop_lab1_imul_IntMulAlt___stl_comb__TOP__top__imul__0(Vtop_lab1_imul_IntMulAlt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulAlt___stl_comb__TOP__top__imul__0\n"); );
    // Body
    vlSelf->__Vcellinp__Add____pinNumber2 = (vlSelf->__PVT__a 
                                             << (IData)(vlSelf->__PVT__i));
    vlSymsp->TOP__top__imul__Add.__PVT__in1 = vlSelf->__Vcellinp__Add____pinNumber2;
}

VL_ATTR_COLD void Vtop_lab1_imul_IntMulAlt___stl_comb__TOP__top__imul__1(Vtop_lab1_imul_IntMulAlt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulAlt___stl_comb__TOP__top__imul__1\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h2aad60cd__0;
    // Body
    vlSelf->__PVT__add_result = vlSymsp->TOP__top__imul__Add.__PVT__out;
    vlSelf->__PVT__next_a = vlSelf->__PVT__a;
    vlSelf->__PVT__next_b = vlSelf->__PVT__b;
    vlSelf->__PVT__next_ostream_msg = vlSelf->__PVT__ostream_msg;
    vlSelf->__PVT__next_finish = vlSelf->__PVT__finish;
    if (((IData)(vlSelf->__PVT__istream_val) & (IData)(vlSelf->__PVT__istream_rdy))) {
        vlSelf->__PVT__next_a = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U, 0x20U);
        vlSelf->__PVT__next_b = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0U, 0x20U);
        vlSelf->__PVT__next_ostream_msg = 0U;
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
    } else if (vlSelf->__PVT__finish) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__i = 0U;
        {
            while (1U) {
                if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, (IData)(vlSelf->__PVT__i)))) {
                    goto __Vlabel1;
                } else {
                    vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0x1fU == (IData)(vlSelf->__PVT__i))) {
                    goto __Vlabel1;
                } else {
                    vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
                __Vtemp_h2aad60cd__0 = (0x1fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__i)));
                vlSelf->__PVT__i = __Vtemp_h2aad60cd__0;
            }
            __Vlabel1: ;
        }
        if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, (IData)(vlSelf->__PVT__i)))) {
            vlSelf->__PVT__next_ostream_msg = vlSelf->__PVT__add_result;
            vlSelf->__PVT__next_a = ((0x1fU >= ((IData)(1U) 
                                                + VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__i))))
                                      ? (vlSelf->__PVT__a 
                                         << ((IData)(1U) 
                                             + VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__i))))
                                      : 0U);
            vlSelf->__PVT__next_b = ((0x1fU >= ((IData)(1U) 
                                                + VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__i))))
                                      ? (vlSelf->__PVT__b 
                                         >> ((IData)(1U) 
                                             + VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__i))))
                                      : 0U);
            vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__next_ostream_msg = vlSelf->__PVT__ostream_msg;
            vlSelf->__PVT__next_finish = 1U;
            vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->__PVT__finish) & (~ ((IData)(vlSelf->__PVT__ostream_val) 
                                              & (IData)(vlSelf->__PVT__ostream_rdy))))) {
        vlSelf->__PVT__next_ostream_val = 1U;
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__next_ostream_val = 0U;
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_lab1_imul_IntMulAlt___configure_coverage(Vtop_lab1_imul_IntMulAlt* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulAlt___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "IntMulAlt.v", 74, 11, "", "v_branch/lab1_imul_IntMulAlt", "if", "74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "IntMulAlt.v", 74, 12, "", "v_branch/lab1_imul_IntMulAlt", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "IntMulAlt.v", 93, 9, "", "v_branch/lab1_imul_IntMulAlt", "if", "93-95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "IntMulAlt.v", 93, 10, "", "v_branch/lab1_imul_IntMulAlt", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "IntMulAlt.v", 77, 12, "", "v_line/lab1_imul_IntMulAlt", "if", "77,79-82,84,86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "IntMulAlt.v", 77, 13, "", "v_line/lab1_imul_IntMulAlt", "else", "88,90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "IntMulAlt.v", 64, 7, "", "v_line/lab1_imul_IntMulAlt", "elsif", "64,66-69,71,73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "IntMulAlt.v", 59, 5, "", "v_branch/lab1_imul_IntMulAlt", "if", "59-60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "IntMulAlt.v", 59, 6, "", "v_branch/lab1_imul_IntMulAlt", "else", "63,99");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "IntMulAlt.v", 58, 3, "", "v_line/lab1_imul_IntMulAlt", "block", "58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "IntMulAlt.v", 119, 9, "", "v_branch/lab1_imul_IntMulAlt", "if", "119");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "IntMulAlt.v", 119, 10, "", "v_branch/lab1_imul_IntMulAlt", "else", "120");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "IntMulAlt.v", 123, 9, "", "v_branch/lab1_imul_IntMulAlt", "if", "123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "IntMulAlt.v", 123, 10, "", "v_branch/lab1_imul_IntMulAlt", "else", "124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "IntMulAlt.v", 127, 9, "", "v_branch/lab1_imul_IntMulAlt", "if", "127");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "IntMulAlt.v", 127, 10, "", "v_branch/lab1_imul_IntMulAlt", "else", "128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "IntMulAlt.v", 122, 12, "", "v_line/lab1_imul_IntMulAlt", "if", "122");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "IntMulAlt.v", 122, 13, "", "v_line/lab1_imul_IntMulAlt", "else", "126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "IntMulAlt.v", 118, 7, "", "v_line/lab1_imul_IntMulAlt", "elsif", "118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "IntMulAlt.v", 117, 7, "", "v_line/lab1_imul_IntMulAlt", "block", "117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "IntMulAlt.v", 153, 11, "", "v_branch/lab1_imul_IntMulAlt", "if", "153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "IntMulAlt.v", 153, 12, "", "v_branch/lab1_imul_IntMulAlt", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "IntMulAlt.v", 155, 11, "", "v_branch/lab1_imul_IntMulAlt", "if", "155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "IntMulAlt.v", 155, 12, "", "v_branch/lab1_imul_IntMulAlt", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "IntMulAlt.v", 151, 9, "", "v_line/lab1_imul_IntMulAlt", "block", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "IntMulAlt.v", 159, 9, "", "v_branch/lab1_imul_IntMulAlt", "if", "159,161-163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "IntMulAlt.v", 159, 10, "", "v_branch/lab1_imul_IntMulAlt", "else", "166,168-169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "IntMulAlt.v", 149, 12, "", "v_branch/lab1_imul_IntMulAlt", "if", "149,151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "IntMulAlt.v", 149, 13, "", "v_branch/lab1_imul_IntMulAlt", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "IntMulAlt.v", 143, 7, "", "v_line/lab1_imul_IntMulAlt", "elsif", "143,145-147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "IntMulAlt.v", 174, 7, "", "v_branch/lab1_imul_IntMulAlt", "if", "174-175");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "IntMulAlt.v", 174, 8, "", "v_branch/lab1_imul_IntMulAlt", "else", "177-178");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "IntMulAlt.v", 135, 3, "", "v_line/lab1_imul_IntMulAlt", "block", "135,137-139,141");
}
