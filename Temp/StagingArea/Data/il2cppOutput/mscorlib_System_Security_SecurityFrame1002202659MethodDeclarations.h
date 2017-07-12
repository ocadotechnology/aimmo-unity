#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.RuntimeSecurityFrame
struct RuntimeSecurityFrame_t1629715161;
// System.Array
struct Il2CppArray;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.AppDomain
struct AppDomain_t2719102437;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Security.SecurityFrame
struct SecurityFrame_t1002202659;
struct SecurityFrame_t1002202659_marshaled_pinvoke;
struct SecurityFrame_t1002202659_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityFrame1002202659.h"
#include "mscorlib_System_Security_RuntimeSecurityFrame1629715161.h"

// System.Void System.Security.SecurityFrame::.ctor(System.Security.RuntimeSecurityFrame)
extern "C"  void SecurityFrame__ctor_m3738328608 (SecurityFrame_t1002202659 * __this, RuntimeSecurityFrame_t1629715161 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Security.SecurityFrame::_GetSecurityStack(System.Int32)
extern "C"  Il2CppArray * SecurityFrame__GetSecurityStack_m2546928721 (Il2CppObject * __this /* static, unused */, int32_t ___skip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityFrame::InitFromRuntimeFrame(System.Security.RuntimeSecurityFrame)
extern "C"  void SecurityFrame_InitFromRuntimeFrame_m45195821 (SecurityFrame_t1002202659 * __this, RuntimeSecurityFrame_t1629715161 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Security.SecurityFrame::get_Assembly()
extern "C"  Assembly_t4268412390 * SecurityFrame_get_Assembly_m2816566490 (SecurityFrame_t1002202659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Security.SecurityFrame::get_Domain()
extern "C"  AppDomain_t2719102437 * SecurityFrame_get_Domain_m3219347572 (SecurityFrame_t1002202659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityFrame::ToString()
extern "C"  String_t* SecurityFrame_ToString_m1282306399 (SecurityFrame_t1002202659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityFrame::GetStack(System.Int32)
extern "C"  ArrayList_t4252133567 * SecurityFrame_GetStack_m300982985 (Il2CppObject * __this /* static, unused */, int32_t ___skipFrames0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SecurityFrame_t1002202659;
struct SecurityFrame_t1002202659_marshaled_pinvoke;

extern "C" void SecurityFrame_t1002202659_marshal_pinvoke(const SecurityFrame_t1002202659& unmarshaled, SecurityFrame_t1002202659_marshaled_pinvoke& marshaled);
extern "C" void SecurityFrame_t1002202659_marshal_pinvoke_back(const SecurityFrame_t1002202659_marshaled_pinvoke& marshaled, SecurityFrame_t1002202659& unmarshaled);
extern "C" void SecurityFrame_t1002202659_marshal_pinvoke_cleanup(SecurityFrame_t1002202659_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SecurityFrame_t1002202659;
struct SecurityFrame_t1002202659_marshaled_com;

extern "C" void SecurityFrame_t1002202659_marshal_com(const SecurityFrame_t1002202659& unmarshaled, SecurityFrame_t1002202659_marshaled_com& marshaled);
extern "C" void SecurityFrame_t1002202659_marshal_com_back(const SecurityFrame_t1002202659_marshaled_com& marshaled, SecurityFrame_t1002202659& unmarshaled);
extern "C" void SecurityFrame_t1002202659_marshal_com_cleanup(SecurityFrame_t1002202659_marshaled_com& marshaled);
