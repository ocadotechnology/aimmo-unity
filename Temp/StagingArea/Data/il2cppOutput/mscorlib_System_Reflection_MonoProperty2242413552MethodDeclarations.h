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

// System.Reflection.MonoProperty
struct MonoProperty_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t152480188;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2275869610;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t1423755509;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t3404612058;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PInfo957350482.h"
#include "mscorlib_System_Reflection_PropertyAttributes883448530.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Reflection.MonoProperty::.ctor()
extern "C"  void MonoProperty__ctor_m945517100 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
extern "C"  void MonoProperty_CachePropertyInfo_m1437316683 (MonoProperty_t * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
extern "C"  int32_t MonoProperty_get_Attributes_m2589593297 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
extern "C"  bool MonoProperty_get_CanRead_m1173212369 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
extern "C"  bool MonoProperty_get_CanWrite_m2124922514 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_PropertyType()
extern "C"  Type_t * MonoProperty_get_PropertyType_m1921201152 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
extern "C"  Type_t * MonoProperty_get_ReflectedType_m903353661 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
extern "C"  Type_t * MonoProperty_get_DeclaringType_m4236036432 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::get_Name()
extern "C"  String_t* MonoProperty_get_Name_m1248249317 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.MonoProperty::GetAccessors(System.Boolean)
extern "C"  MethodInfoU5BU5D_t152480188* MonoProperty_GetAccessors_m3704698731 (MonoProperty_t * __this, bool ___nonPublic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
extern "C"  MethodInfo_t * MonoProperty_GetGetMethod_m1100580870 (MonoProperty_t * __this, bool ___nonPublic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
extern "C"  ParameterInfoU5BU5D_t2275869610* MonoProperty_GetIndexParameters_m832800404 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
extern "C"  MethodInfo_t * MonoProperty_GetSetMethod_m436306154 (MonoProperty_t * __this, bool ___nonPublic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoProperty_IsDefined_m2473061021 (MonoProperty_t * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* MonoProperty_GetCustomAttributes_m1497967922 (MonoProperty_t * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* MonoProperty_GetCustomAttributes_m1756234231 (MonoProperty_t * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::CreateGetterDelegate(System.Reflection.MethodInfo)
extern "C"  GetterAdapter_t1423755509 * MonoProperty_CreateGetterDelegate_m2961258839 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
extern "C"  Il2CppObject * MonoProperty_GetValue_m3088777694 (MonoProperty_t * __this, Il2CppObject * ___obj0, ObjectU5BU5D_t3614634134* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * MonoProperty_GetValue_m2150318626 (MonoProperty_t * __this, Il2CppObject * ___obj0, int32_t ___invokeAttr1, Binder_t3404612058 * ___binder2, ObjectU5BU5D_t3614634134* ___index3, CultureInfo_t3500843524 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  void MonoProperty_SetValue_m1423050605 (MonoProperty_t * __this, Il2CppObject * ___obj0, Il2CppObject * ___value1, int32_t ___invokeAttr2, Binder_t3404612058 * ___binder3, ObjectU5BU5D_t3614634134* ___index4, CultureInfo_t3500843524 * ___culture5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::ToString()
extern "C"  String_t* MonoProperty_ToString_m1379465861 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetOptionalCustomModifiers()
extern "C"  TypeU5BU5D_t1664964607* MonoProperty_GetOptionalCustomModifiers_m3827844355 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetRequiredCustomModifiers()
extern "C"  TypeU5BU5D_t1664964607* MonoProperty_GetRequiredCustomModifiers_m576853384 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoProperty_GetObjectData_m2540252220 (MonoProperty_t * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
