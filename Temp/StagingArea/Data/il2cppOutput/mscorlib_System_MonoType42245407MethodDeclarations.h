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

// System.Type
struct Type_t;
// System.MonoType
struct MonoType_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Reflection.Binder
struct Binder_t3404612058;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t963192633;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1996683371;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.String
struct String_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t125053523;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t152480188;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1736152084;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Reflection.Module
struct Module_t4282841206;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Reflection.MethodBase
struct MethodBase_t904190842;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes2229518203.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Reflection_CallingConventions1097349142.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Reflection_MemberTypes3343038963.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Reflection_MethodBase904190842.h"

// System.Reflection.TypeAttributes System.MonoType::get_attributes(System.Type)
extern "C"  int32_t MonoType_get_attributes_m1493788675 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetDefaultConstructor()
extern "C"  ConstructorInfo_t2851816542 * MonoType_GetDefaultConstructor_m925465120 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.MonoType::GetAttributeFlagsImpl()
extern "C"  int32_t MonoType_GetAttributeFlagsImpl_m250699879 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t2851816542 * MonoType_GetConstructorImpl_m1703214172 (MonoType_t * __this, int32_t ___bindingAttr0, Binder_t3404612058 * ___binder1, int32_t ___callConvention2, TypeU5BU5D_t1664964607* ___types3, ParameterModifierU5BU5D_t963192633* ___modifiers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)
extern "C"  ConstructorInfoU5BU5D_t1996683371* MonoType_GetConstructors_internal_m2709619723 (MonoType_t * __this, int32_t ___bindingAttr0, Type_t * ___reflected_type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t1996683371* MonoType_GetConstructors_m3402398036 (MonoType_t * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * MonoType_InternalGetEvent_m532443236 (MonoType_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * MonoType_GetEvent_m4160342003 (MonoType_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * MonoType_GetField_m341239795 (MonoType_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields_internal(System.Reflection.BindingFlags,System.Type)
extern "C"  FieldInfoU5BU5D_t125053523* MonoType_GetFields_internal_m2022019979 (MonoType_t * __this, int32_t ___bindingAttr0, Type_t * ___reflected_type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t125053523* MonoType_GetFields_m2030623572 (MonoType_t * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetInterfaces()
extern "C"  TypeU5BU5D_t1664964607* MonoType_GetInterfaces_m1917126622 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C"  MethodInfoU5BU5D_t152480188* MonoType_GetMethodsByName_m1854415088 (MonoType_t * __this, String_t* ___name0, int32_t ___bindingAttr1, bool ___ignoreCase2, Type_t * ___reflected_type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t152480188* MonoType_GetMethods_m353342170 (MonoType_t * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.MonoType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * MonoType_GetMethodImpl_m593754598 (MonoType_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t3404612058 * ___binder2, int32_t ___callConvention3, TypeU5BU5D_t1664964607* ___types4, ParameterModifierU5BU5D_t963192633* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C"  PropertyInfoU5BU5D_t1736152084* MonoType_GetPropertiesByName_m1524828075 (MonoType_t * __this, String_t* ___name0, int32_t ___bindingAttr1, bool ___icase2, Type_t * ___reflected_type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * MonoType_GetPropertyImpl_m2358827483 (MonoType_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t3404612058 * ___binder2, Type_t * ___returnType3, TypeU5BU5D_t1664964607* ___types4, ParameterModifierU5BU5D_t963192633* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::HasElementTypeImpl()
extern "C"  bool MonoType_HasElementTypeImpl_m1040892148 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsArrayImpl()
extern "C"  bool MonoType_IsArrayImpl_m126199703 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsByRefImpl()
extern "C"  bool MonoType_IsByRefImpl_m2593739268 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPointerImpl()
extern "C"  bool MonoType_IsPointerImpl_m648213545 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPrimitiveImpl()
extern "C"  bool MonoType_IsPrimitiveImpl_m2843720007 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsSubclassOf(System.Type)
extern "C"  bool MonoType_IsSubclassOf_m2211166238 (MonoType_t * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MonoType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * MonoType_InvokeMember_m2947147169 (MonoType_t * __this, String_t* ___name0, int32_t ___invokeAttr1, Binder_t3404612058 * ___binder2, Il2CppObject * ___target3, ObjectU5BU5D_t3614634134* ___args4, ParameterModifierU5BU5D_t963192633* ___modifiers5, CultureInfo_t3500843524 * ___culture6, StringU5BU5D_t1642385972* ___namedParameters7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetElementType()
extern "C"  Type_t * MonoType_GetElementType_m2286087352 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_UnderlyingSystemType()
extern "C"  Type_t * MonoType_get_UnderlyingSystemType_m412136521 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.MonoType::get_Assembly()
extern "C"  Assembly_t4268412390 * MonoType_get_Assembly_m548508498 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_AssemblyQualifiedName()
extern "C"  String_t* MonoType_get_AssemblyQualifiedName_m2325116127 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::getFullName(System.Boolean,System.Boolean)
extern "C"  String_t* MonoType_getFullName_m1434947639 (MonoType_t * __this, bool ___full_name0, bool ___assembly_qualified1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_BaseType()
extern "C"  Type_t * MonoType_get_BaseType_m3469218400 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_FullName()
extern "C"  String_t* MonoType_get_FullName_m4049129774 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoType_IsDefined_m3203470635 (MonoType_t * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* MonoType_GetCustomAttributes_m110499900 (MonoType_t * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* MonoType_GetCustomAttributes_m2680938729 (MonoType_t * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.MonoType::get_MemberType()
extern "C"  int32_t MonoType_get_MemberType_m3619652595 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Name()
extern "C"  String_t* MonoType_get_Name_m865859211 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Namespace()
extern "C"  String_t* MonoType_get_Namespace_m3110646319 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.MonoType::get_Module()
extern "C"  Module_t4282841206 * MonoType_get_Module_m3769241394 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_DeclaringType()
extern "C"  Type_t * MonoType_get_DeclaringType_m3267159288 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_ReflectedType()
extern "C"  Type_t * MonoType_get_ReflectedType_m2981714783 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.MonoType::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t2330101084  MonoType_get_TypeHandle_m3750614457 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoType_GetObjectData_m2888677152 (MonoType_t * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::ToString()
extern "C"  String_t* MonoType_ToString_m473949831 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetGenericArguments()
extern "C"  TypeU5BU5D_t1664964607* MonoType_GetGenericArguments_m2708198481 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_ContainsGenericParameters()
extern "C"  bool MonoType_get_ContainsGenericParameters_m3229732653 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_IsGenericParameter()
extern "C"  bool MonoType_get_IsGenericParameter_m1335676395 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetGenericTypeDefinition()
extern "C"  Type_t * MonoType_GetGenericTypeDefinition_m2363776160 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.MonoType::CheckMethodSecurity(System.Reflection.MethodBase)
extern "C"  MethodBase_t904190842 * MonoType_CheckMethodSecurity_m4116906190 (MonoType_t * __this, MethodBase_t904190842 * ___mb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::ReorderParamArrayArguments(System.Object[]&,System.Reflection.MethodBase)
extern "C"  void MonoType_ReorderParamArrayArguments_m979187413 (MonoType_t * __this, ObjectU5BU5D_t3614634134** ___args0, MethodBase_t904190842 * ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
