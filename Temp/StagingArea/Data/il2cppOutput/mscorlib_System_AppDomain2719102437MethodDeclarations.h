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

// System.AppDomain
struct AppDomain_t2719102437;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;
// System.Runtime.Remoting.Contexts.Context
struct Context_t502196753;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_Policy_Evidence1407710183.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context502196753.h"
#include "mscorlib_System_Object2689449295.h"

// System.String System.AppDomain::getFriendlyName()
extern "C"  String_t* AppDomain_getFriendlyName_m3264018353 (AppDomain_t2719102437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C"  AppDomain_t2719102437 * AppDomain_getCurDomain_m591611373 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C"  AppDomain_t2719102437 * AppDomain_get_CurrentDomain_m3432767403 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C"  Assembly_t4268412390 * AppDomain_LoadAssembly_m1537679648 (AppDomain_t2719102437 * __this, String_t* ___assemblyRef0, Evidence_t1407710183 * ___securityEvidence1, bool ___refOnly2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C"  Assembly_t4268412390 * AppDomain_Load_m3276140461 (AppDomain_t2719102437 * __this, String_t* ___assemblyString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C"  Assembly_t4268412390 * AppDomain_Load_m119378364 (AppDomain_t2719102437 * __this, String_t* ___assemblyString0, Evidence_t1407710183 * ___assemblySecurity1, bool ___refonly2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalSetContext(System.Runtime.Remoting.Contexts.Context)
extern "C"  Context_t502196753 * AppDomain_InternalSetContext_m1264487503 (Il2CppObject * __this /* static, unused */, Context_t502196753 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C"  Context_t502196753 * AppDomain_InternalGetContext_m2631190946 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C"  Context_t502196753 * AppDomain_InternalGetDefaultContext_m978759799 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C"  String_t* AppDomain_InternalGetProcessGuid_m1278588156 (Il2CppObject * __this /* static, unused */, String_t* ___newguid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C"  String_t* AppDomain_GetProcessGuid_m2969006389 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C"  String_t* AppDomain_ToString_m3523588193 (AppDomain_t2719102437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::DoTypeResolve(System.Object)
extern "C"  Assembly_t4268412390 * AppDomain_DoTypeResolve_m381738210 (AppDomain_t2719102437 * __this, Il2CppObject * ___name_or_tb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
