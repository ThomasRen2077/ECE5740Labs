// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop_top.h"
#include "Vtop___024unit.h"
#include "Vtop_lab1_imul_IntMulBase.h"
#include "Vtop_vc_TestRandDelaySource__pi1.h"
#include "Vtop_vc_TestRandDelaySink__P20_PB1c.h"
#include "Vtop_vc_Trace.h"
#include "Vtop_vc_TestSource__P40_PB1c.h"
#include "Vtop_vc_TestRandDelay__P40.h"
#include "Vtop_vc_SimpleAdder__P20.h"
#include "Vtop_vc_TestRandDelay__P20.h"
#include "Vtop_vc_TestSink__P20_PB1c.h"
#include "Vtop_vc_EnResetReg__P5_PBz1.h"
#include "Vtop_vc_EnResetReg__P20.h"

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
    , TOP__top__imul__Add{this, Verilated::catName(namep, "top.imul.Add")}
    , TOP__top__imul__vc_trace{this, Verilated::catName(namep, "top.imul.vc_trace")}
    , TOP__top__sink{this, Verilated::catName(namep, "top.sink")}
    , TOP__top__sink__msg_delay{this, Verilated::catName(namep, "top.sink.msg_delay")}
    , TOP__top__sink__msg_delay__rand_delay_reg{this, Verilated::catName(namep, "top.sink.msg_delay.rand_delay_reg")}
    , TOP__top__sink__sink{this, Verilated::catName(namep, "top.sink.sink")}
    , TOP__top__sink__sink__index_reg{this, Verilated::catName(namep, "top.sink.sink.index_reg")}
    , TOP__top__src{this, Verilated::catName(namep, "top.src")}
    , TOP__top__src__msg_delay{this, Verilated::catName(namep, "top.src.msg_delay")}
    , TOP__top__src__msg_delay__rand_delay_reg{this, Verilated::catName(namep, "top.src.msg_delay.rand_delay_reg")}
    , TOP__top__src__src{this, Verilated::catName(namep, "top.src.src")}
    , TOP__top__src__src__index_reg{this, Verilated::catName(namep, "top.src.src.index_reg")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__top = &TOP__top;
    TOP__top.__PVT__imul = &TOP__top__imul;
    TOP__top__imul.__PVT__Add = &TOP__top__imul__Add;
    TOP__top__imul.__PVT__vc_trace = &TOP__top__imul__vc_trace;
    TOP__top.__PVT__sink = &TOP__top__sink;
    TOP__top__sink.__PVT__msg_delay = &TOP__top__sink__msg_delay;
    TOP__top__sink__msg_delay.__PVT__rand_delay_reg = &TOP__top__sink__msg_delay__rand_delay_reg;
    TOP__top__sink.__PVT__sink = &TOP__top__sink__sink;
    TOP__top__sink__sink.__PVT__index_reg = &TOP__top__sink__sink__index_reg;
    TOP__top.__PVT__src = &TOP__top__src;
    TOP__top__src.__PVT__msg_delay = &TOP__top__src__msg_delay;
    TOP__top__src__msg_delay.__PVT__rand_delay_reg = &TOP__top__src__msg_delay__rand_delay_reg;
    TOP__top__src.__PVT__src = &TOP__top__src__src;
    TOP__top__src__src.__PVT__index_reg = &TOP__top__src__src__index_reg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__top.__Vconfigure(true);
    TOP__top__imul.__Vconfigure(true);
    TOP__top__imul__Add.__Vconfigure(true);
    TOP__top__imul__vc_trace.__Vconfigure(true);
    TOP__top__sink.__Vconfigure(true);
    TOP__top__sink__msg_delay.__Vconfigure(true);
    TOP__top__sink__msg_delay__rand_delay_reg.__Vconfigure(true);
    TOP__top__sink__sink.__Vconfigure(true);
    TOP__top__sink__sink__index_reg.__Vconfigure(true);
    TOP__top__src.__Vconfigure(true);
    TOP__top__src__msg_delay.__Vconfigure(true);
    TOP__top__src__msg_delay__rand_delay_reg.__Vconfigure(false);
    TOP__top__src__src.__Vconfigure(true);
    TOP__top__src__src__index_reg.__Vconfigure(false);
    // Setup scopes
    __Vscope_top.configure(this, name(), "top", "top", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
