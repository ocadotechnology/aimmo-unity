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

// System.Reflection.MethodBase
struct MethodBase_t904190842;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Type[]
struct TypeU5BU5D_t1664964607;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeMethodHandle894824333.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_CallingConventions1097349142.h"

// System.Void System.Reflection.MethodBase::.ctor()
extern "C"  void MethodBase__ctor_m3951051358 (MethodBase_t904190842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle)
extern "C"  MethodBase_t904190842 * MethodBase_GetMethodFromHandleNoGenericCheck_m4274264088 (Il2CppObject * __this /* static, unused */, RuntimeMethodHandle_t894824333  ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromIntPtr(System.IntPtr,System.IntPtr)
extern "C"  MethodBase_t904190842 * MethodBase_GetMethodFromIntPtr_m1014299957 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, IntPtr_t ___declaringType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
extern "C"  MethodBase_t904190842 * MethodBase_GetMethodFromHandle_m3983882276 (Il2CppObject * __this /* static, unused */, RuntimeMethodHandle_t894824333  ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)
extern "C"  MethodBase_t904190842 * MethodBase_GetMethodFromHandleInternalType_m570034609 (Il2CppObject * __this /* static, unused */, IntPtr_t ___method_handle0, IntPtr_t ___type_handle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MethodBase::GetParameterCount()
extern "C"  int32_t MethodBase_GetParameterCount_m3877953436 (MethodBase_t904190842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C"  Il2CppObject * MethodBase_Invoke_m1075809207 (MethodBase_t904190842 * __this, Il2CppObject * ___obj0, ObjectU5BU5D_t3614634134* ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention()
extern "C"  int32_t MethodBase_get_CallingConvention_m2817807351 (MethodBase_t904190842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern "C"  bool MethodBase_get_IsPublic_m479656180 (MethodBase_t904190842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C"  bool MethodBase_get_IsStatic_m1015686807 (MethodBase_t904190842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
extern "C"  bool MethodBase_get_IsVirtual_m1107721718 (MethodBase_t904190842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsAbstract()
extern "C"  bool MethodBase_get_IsAbstract_m3521819231 (MethodBase_t904190842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MethodBase::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t MethodBase_get_next_table_index_m3185673846 (MethodBase_t904190842 * __this, Il2CppObject * ___obj0, int32_t ___table1, bool ___inc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodBase::GetGenericArguments()
extern "C"  TypeU5BU5D_t1664964607* MethodBase_GetGenericArguments_m1277035033 (MethodBase_t904190842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters()
extern "C"  bool MethodBase_get_ContainsGenericParameters_m1185248753 (MethodBase_t904190842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition()
extern "C"  bool MethodBase_get_IsGenericMethodDefinition_m324279468 (MethodBase_t904190842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethod()
extern "C"  bool MethodBase_get_IsGenericMethod_m2492617497 (MethodBase_t904190842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
