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

// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Type[]
struct TypeU5BU5D_t1664964607;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberTypes3343038963.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Reflection.PropertyInfo::.ctor()
extern "C"  void PropertyInfo__ctor_m1808219471 (PropertyInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Reflection.PropertyInfo::get_MemberType()
extern "C"  int32_t PropertyInfo_get_MemberType_m1634143880 (PropertyInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[])
extern "C"  Il2CppObject * PropertyInfo_GetValue_m3655964945 (PropertyInfo_t * __this, Il2CppObject * ___obj0, ObjectU5BU5D_t3614634134* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[])
extern "C"  void PropertyInfo_SetValue_m2961483868 (PropertyInfo_t * __this, Il2CppObject * ___obj0, Il2CppObject * ___value1, ObjectU5BU5D_t3614634134* ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.PropertyInfo::GetOptionalCustomModifiers()
extern "C"  TypeU5BU5D_t1664964607* PropertyInfo_GetOptionalCustomModifiers_m747937176 (PropertyInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.PropertyInfo::GetRequiredCustomModifiers()
extern "C"  TypeU5BU5D_t1664964607* PropertyInfo_GetRequiredCustomModifiers_m2291294773 (PropertyInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
