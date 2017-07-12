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

// System.Reflection.Emit.FieldBuilder
struct FieldBuilder_t2784804005;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t3404612058;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t4270021860;
// System.Exception
struct Exception_t1927440687;
// System.Reflection.Module
struct Module_t4282841206;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_FieldAttributes1122705193.h"
#include "mscorlib_System_RuntimeFieldHandle2331729674.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"

// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::get_Attributes()
extern "C"  int32_t FieldBuilder_get_Attributes_m2174064290 (FieldBuilder_t2784804005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_DeclaringType()
extern "C"  Type_t * FieldBuilder_get_DeclaringType_m726107228 (FieldBuilder_t2784804005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.Emit.FieldBuilder::get_FieldHandle()
extern "C"  RuntimeFieldHandle_t2331729674  FieldBuilder_get_FieldHandle_m1845846823 (FieldBuilder_t2784804005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_FieldType()
extern "C"  Type_t * FieldBuilder_get_FieldType_m2267463269 (FieldBuilder_t2784804005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.FieldBuilder::get_Name()
extern "C"  String_t* FieldBuilder_get_Name_m2243491233 (FieldBuilder_t2784804005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_ReflectedType()
extern "C"  Type_t * FieldBuilder_get_ReflectedType_m3707619461 (FieldBuilder_t2784804005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* FieldBuilder_GetCustomAttributes_m1557425540 (FieldBuilder_t2784804005 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* FieldBuilder_GetCustomAttributes_m291168515 (FieldBuilder_t2784804005 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.FieldBuilder::GetValue(System.Object)
extern "C"  Il2CppObject * FieldBuilder_GetValue_m1323554150 (FieldBuilder_t2784804005 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.FieldBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool FieldBuilder_IsDefined_m2730324893 (FieldBuilder_t2784804005 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.FieldBuilder::GetFieldOffset()
extern "C"  int32_t FieldBuilder_GetFieldOffset_m618194385 (FieldBuilder_t2784804005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.FieldBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern "C"  void FieldBuilder_SetValue_m3109503557 (FieldBuilder_t2784804005 * __this, Il2CppObject * ___obj0, Il2CppObject * ___val1, int32_t ___invokeAttr2, Binder_t3404612058 * ___binder3, CultureInfo_t3500843524 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::get_UMarshal()
extern "C"  UnmanagedMarshal_t4270021860 * FieldBuilder_get_UMarshal_m3138919472 (FieldBuilder_t2784804005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.FieldBuilder::CreateNotSupportedException()
extern "C"  Exception_t1927440687 * FieldBuilder_CreateNotSupportedException_m3999938861 (FieldBuilder_t2784804005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.FieldBuilder::get_Module()
extern "C"  Module_t4282841206 * FieldBuilder_get_Module_m1920701714 (FieldBuilder_t2784804005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
