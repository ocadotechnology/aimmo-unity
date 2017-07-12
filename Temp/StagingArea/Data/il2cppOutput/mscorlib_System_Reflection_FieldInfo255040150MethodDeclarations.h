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

// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Object
struct Il2CppObject;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t4270021860;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberTypes3343038963.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_RuntimeFieldHandle2331729674.h"

// System.Void System.Reflection.FieldInfo::.ctor()
extern "C"  void FieldInfo__ctor_m1952545900 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Reflection.FieldInfo::get_MemberType()
extern "C"  int32_t FieldInfo_get_MemberType_m4190511717 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
extern "C"  bool FieldInfo_get_IsLiteral_m267898096 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
extern "C"  bool FieldInfo_get_IsStatic_m1411173225 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized()
extern "C"  bool FieldInfo_get_IsNotSerialized_m2322769148 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern "C"  void FieldInfo_SetValue_m2504255891 (FieldInfo_t * __this, Il2CppObject * ___obj0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)
extern "C"  FieldInfo_t * FieldInfo_internal_from_handle_type_m3419926447 (Il2CppObject * __this /* static, unused */, IntPtr_t ___field_handle0, IntPtr_t ___type_handle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.FieldInfo::GetFieldFromHandle(System.RuntimeFieldHandle)
extern "C"  FieldInfo_t * FieldInfo_GetFieldFromHandle_m1587354836 (Il2CppObject * __this /* static, unused */, RuntimeFieldHandle_t2331729674  ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.FieldInfo::GetFieldOffset()
extern "C"  int32_t FieldInfo_GetFieldOffset_m375239709 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::GetUnmanagedMarshal()
extern "C"  UnmanagedMarshal_t4270021860 * FieldInfo_GetUnmanagedMarshal_m3869098058 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::get_UMarshal()
extern "C"  UnmanagedMarshal_t4270021860 * FieldInfo_get_UMarshal_m1934544188 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.FieldInfo::GetPseudoCustomAttributes()
extern "C"  ObjectU5BU5D_t3614634134* FieldInfo_GetPseudoCustomAttributes_m2500972355 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
