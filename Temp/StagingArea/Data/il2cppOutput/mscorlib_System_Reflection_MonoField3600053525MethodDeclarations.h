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

// System.Reflection.MonoField
struct MonoField_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Object
struct Il2CppObject;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.Binder
struct Binder_t3404612058;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_FieldAttributes1122705193.h"
#include "mscorlib_System_RuntimeFieldHandle2331729674.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_FieldInfo255040150.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Reflection.MonoField::.ctor()
extern "C"  void MonoField__ctor_m494557655 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldAttributes System.Reflection.MonoField::get_Attributes()
extern "C"  int32_t MonoField_get_Attributes_m4138688533 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.MonoField::get_FieldHandle()
extern "C"  RuntimeFieldHandle_t2331729674  MonoField_get_FieldHandle_m4221523254 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_FieldType()
extern "C"  Type_t * MonoField_get_FieldType_m598011426 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::GetParentType(System.Boolean)
extern "C"  Type_t * MonoField_GetParentType_m2074626828 (MonoField_t * __this, bool ___declaring0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_ReflectedType()
extern "C"  Type_t * MonoField_get_ReflectedType_m2228561986 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_DeclaringType()
extern "C"  Type_t * MonoField_get_DeclaringType_m1591666235 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoField::get_Name()
extern "C"  String_t* MonoField_get_Name_m3761030246 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoField::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoField_IsDefined_m1871511958 (MonoField_t * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* MonoField_GetCustomAttributes_m4168545977 (MonoField_t * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* MonoField_GetCustomAttributes_m1051163738 (MonoField_t * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MonoField::GetFieldOffset()
extern "C"  int32_t MonoField_GetFieldOffset_m3584238032 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoField::GetValueInternal(System.Object)
extern "C"  Il2CppObject * MonoField_GetValueInternal_m1909282050 (MonoField_t * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoField::GetValue(System.Object)
extern "C"  Il2CppObject * MonoField_GetValue_m1386935585 (MonoField_t * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoField::ToString()
extern "C"  String_t* MonoField_ToString_m517029212 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)
extern "C"  void MonoField_SetValueInternal_m762249951 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___fi0, Il2CppObject * ___obj1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern "C"  void MonoField_SetValue_m1849281384 (MonoField_t * __this, Il2CppObject * ___obj0, Il2CppObject * ___val1, int32_t ___invokeAttr2, Binder_t3404612058 * ___binder3, CultureInfo_t3500843524 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoField_GetObjectData_m3571455087 (MonoField_t * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::CheckGeneric()
extern "C"  void MonoField_CheckGeneric_m1527550038 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
