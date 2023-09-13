// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab1_imul_IntMulBase.h"

VL_ATTR_COLD void Vtop_lab1_imul_IntMulBase___stl_sequent__TOP__top__imul__0(Vtop_lab1_imul_IntMulBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulBase___stl_sequent__TOP__top__imul__0\n"); );
    // Body
    vlSymsp->TOP__top__imul__Add.__PVT__in1 = vlSelf->__PVT__a;
    vlSymsp->TOP__top__imul__Add.__PVT__in0 = vlSelf->__PVT__ostream_msg;
    vlSymsp->TOP__top__imul__vc_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    if ((0U == (IData)(vlSelf->__PVT__state))) {
        if (vlSelf->__PVT__istream_val) {
            vlSelf->__PVT__nextstate = 1U;
            vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__nextstate = 0U;
            vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
    } else if ((1U == (IData)(vlSelf->__PVT__state))) {
        if ((0x20U == (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__PVT__nextstate = 2U;
            vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__nextstate = 1U;
            vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
    } else if ((2U == (IData)(vlSelf->__PVT__state))) {
        if (vlSelf->__PVT__ostream_rdy) {
            vlSelf->__PVT__nextstate = 0U;
            vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__nextstate = 2U;
            vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__nextstate = 0U;
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->TOP__top__imul__vc_trace.__PVT__clk = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vtop_lab1_imul_IntMulBase___stl_sequent__TOP__top__imul__1(Vtop_lab1_imul_IntMulBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulBase___stl_sequent__TOP__top__imul__1\n"); );
    // Body
    vlSelf->__PVT__add_result = vlSymsp->TOP__top__imul__Add.__PVT__out;
    vlSelf->__PVT__next_a = vlSelf->__PVT__a;
    vlSelf->__PVT__next_b = vlSelf->__PVT__b;
    vlSelf->__PVT__next_ostream_msg = vlSelf->__PVT__ostream_msg;
    if (((IData)(vlSelf->__PVT__istream_val) & (IData)(vlSelf->__PVT__istream_rdy))) {
        vlSelf->__PVT__next_a = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U, 0x20U);
        vlSelf->__PVT__next_b = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0U, 0x20U);
        vlSelf->__PVT__next_ostream_msg = 0U;
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x20U != (IData)(vlSelf->__PVT__counter))) {
        vlSelf->__PVT__next_a = ((0x1fU >= 1U) ? (vlSelf->__PVT__a 
                                                  << 1U)
                                  : 0U);
        vlSelf->__PVT__next_b = ((0x1fU >= 1U) ? (vlSelf->__PVT__b 
                                                  >> 1U)
                                  : 0U);
        if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0U))) {
            vlSelf->__PVT__next_ostream_msg = vlSelf->__PVT__add_result;
            vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__next_ostream_msg = vlSelf->__PVT__ostream_msg;
            vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
    }
    if (((0x20U <= (IData)(vlSelf->__PVT__counter)) 
         & (~ ((IData)(vlSelf->__PVT__ostream_val) 
               & (IData)(vlSelf->__PVT__ostream_rdy))))) {
        vlSelf->__PVT__next_ostream_val = 1U;
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__next_ostream_val = 0U;
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_lab1_imul_IntMulBase___configure_coverage(Vtop_lab1_imul_IntMulBase* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulBase___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "IntMulBase.v", 68, 11, "", "v_branch/lab1_imul_IntMulBase", "if", "68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "IntMulBase.v", 68, 12, "", "v_branch/lab1_imul_IntMulBase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "IntMulBase.v", 81, 9, "", "v_branch/lab1_imul_IntMulBase", "if", "81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "IntMulBase.v", 81, 10, "", "v_branch/lab1_imul_IntMulBase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "IntMulBase.v", 78, 12, "", "v_branch/lab1_imul_IntMulBase", "if", "78-80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "IntMulBase.v", 78, 13, "", "v_branch/lab1_imul_IntMulBase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "IntMulBase.v", 70, 12, "", "v_line/lab1_imul_IntMulBase", "elsif", "70-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "IntMulBase.v", 59, 7, "", "v_line/lab1_imul_IntMulBase", "elsif", "59,61-65,67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "IntMulBase.v", 55, 5, "", "v_branch/lab1_imul_IntMulBase", "if", "55-56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "IntMulBase.v", 55, 6, "", "v_branch/lab1_imul_IntMulBase", "else", "58,83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "IntMulBase.v", 54, 3, "", "v_line/lab1_imul_IntMulBase", "block", "54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "IntMulBase.v", 90, 13, "", "v_branch/lab1_imul_IntMulBase", "if", "90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "IntMulBase.v", 90, 14, "", "v_branch/lab1_imul_IntMulBase", "else", "91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "IntMulBase.v", 90, 11, "", "v_line/lab1_imul_IntMulBase", "case", "90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "IntMulBase.v", 92, 13, "", "v_branch/lab1_imul_IntMulBase", "if", "92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "IntMulBase.v", 92, 14, "", "v_branch/lab1_imul_IntMulBase", "else", "93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "IntMulBase.v", 92, 11, "", "v_line/lab1_imul_IntMulBase", "case", "92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "IntMulBase.v", 94, 13, "", "v_branch/lab1_imul_IntMulBase", "if", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "IntMulBase.v", 94, 14, "", "v_branch/lab1_imul_IntMulBase", "else", "95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "IntMulBase.v", 94, 11, "", "v_line/lab1_imul_IntMulBase", "case", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "IntMulBase.v", 96, 7, "", "v_line/lab1_imul_IntMulBase", "case", "96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "IntMulBase.v", 88, 3, "", "v_line/lab1_imul_IntMulBase", "block", "88-89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "IntMulBase.v", 114, 9, "", "v_branch/lab1_imul_IntMulBase", "if", "114-115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "IntMulBase.v", 114, 10, "", "v_branch/lab1_imul_IntMulBase", "else", "117-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "IntMulBase.v", 111, 12, "", "v_branch/lab1_imul_IntMulBase", "if", "111-113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "IntMulBase.v", 111, 13, "", "v_branch/lab1_imul_IntMulBase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "IntMulBase.v", 106, 7, "", "v_line/lab1_imul_IntMulBase", "elsif", "106-109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "IntMulBase.v", 122, 7, "", "v_branch/lab1_imul_IntMulBase", "if", "122-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "IntMulBase.v", 122, 8, "", "v_branch/lab1_imul_IntMulBase", "else", "125-126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "IntMulBase.v", 101, 3, "", "v_line/lab1_imul_IntMulBase", "block", "101-104");
}
