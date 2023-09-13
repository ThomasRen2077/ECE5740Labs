// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop_top.h"
#include "Vtop___024unit.h"
#include "Vtop_lab1_imul_IntMulSimple.h"
#include "Vtop_vc_Trace.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
    , TOP__top{this, Verilated::catName(namep, "top")}
    , TOP__top__imul{this, Verilated::catName(namep, "top.imul")}
    , TOP__top__imul__vc_trace{this, Verilated::catName(namep, "top.imul.vc_trace")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__top = &TOP__top;
    TOP__top.__PVT__imul = &TOP__top__imul;
    TOP__top__imul.__PVT__vc_trace = &TOP__top__imul__vc_trace;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__top.__Vconfigure(true);
    TOP__top__imul.__Vconfigure(true);
    TOP__top__imul__vc_trace.__Vconfigure(true);
    // Setup scopes
    __Vscope_top.configure(this, name(), "top", "top", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__test_task.configure(this, name(), "top.test_task", "test_task", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
