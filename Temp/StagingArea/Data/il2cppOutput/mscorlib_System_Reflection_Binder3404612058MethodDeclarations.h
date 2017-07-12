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

// System.Reflection.Binder
struct Binder_t3404612058;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2275869610;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t904190842;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t2597254495;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C"  void Binder__ctor_m1361613966 (Binder_t3404612058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C"  void Binder__cctor_m3736115807 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C"  Binder_t3404612058 * Binder_get_DefaultBinder_m965620943 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C"  bool Binder_ConvertArgs_m2999223281 (Il2CppObject * __this /* static, unused */, Binder_t3404612058 * ___binder0, ObjectU5BU5D_t3614634134* ___args1, ParameterInfoU5BU5D_t2275869610* ___pinfo2, CultureInfo_t3500843524 * ___culture3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C"  int32_t Binder_GetDerivedLevel_m1809808744 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C"  MethodBase_t904190842 * Binder_FindMostDerivedMatch_m2621831847 (Il2CppObject * __this /* static, unused */, MethodBaseU5BU5D_t2597254495* ___match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
