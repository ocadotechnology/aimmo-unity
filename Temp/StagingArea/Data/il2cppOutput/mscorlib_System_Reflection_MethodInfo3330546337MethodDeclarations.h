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

// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberTypes3343038963.h"

// System.Void System.Reflection.MethodInfo::.ctor()
extern "C"  void MethodInfo__ctor_m1853540423 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Reflection.MethodInfo::get_MemberType()
extern "C"  int32_t MethodInfo_get_MemberType_m103695984 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MethodInfo::get_ReturnType()
extern "C"  Type_t * MethodInfo_get_ReturnType_m1038770764 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[])
extern "C"  MethodInfo_t * MethodInfo_MakeGenericMethod_m3327556920 (MethodInfo_t * __this, TypeU5BU5D_t1664964607* ___typeArguments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodInfo::GetGenericArguments()
extern "C"  TypeU5BU5D_t1664964607* MethodInfo_GetGenericArguments_m3393347888 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethod()
extern "C"  bool MethodInfo_get_IsGenericMethod_m861531298 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethodDefinition()
extern "C"  bool MethodInfo_get_IsGenericMethodDefinition_m647461435 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_ContainsGenericParameters()
extern "C"  bool MethodInfo_get_ContainsGenericParameters_m572340060 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
