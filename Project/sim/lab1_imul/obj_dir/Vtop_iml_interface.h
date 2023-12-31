// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_IML_INTERFACE_H_
#define VERILATED_VTOP_IML_INTERFACE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_iml_interface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clk;
    CData/*0:0*/ reset;
    CData/*0:0*/ istream_val;
    CData/*0:0*/ istream_rdy;
    CData/*0:0*/ ostream_rdy;
    CData/*0:0*/ __Vdlyvval__clk__v0;
    CData/*0:0*/ __Vdlyvset__clk__v0;
    QData/*63:0*/ istream_msg;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_iml_interface(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_iml_interface();
    VL_UNCOPYABLE(Vtop_iml_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};

std::string VL_TO_STRING(const Vtop_iml_interface* obj);

#endif  // guard
