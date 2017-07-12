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

// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t1370236603;
// System.Type
struct Type_t;
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
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_TypeAttributes2229518203.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Reflection_CallingConventions1097349142.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"

// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
extern "C"  bool GenericTypeParameterBuilder_IsSubclassOf_m563999142 (GenericTypeParameterBuilder_t1370236603 * __this, Type_t * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
extern "C"  int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m3338182267 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t2851816542 * GenericTypeParameterBuilder_GetConstructorImpl_m2310028502 (GenericTypeParameterBuilder_t1370236603 * __this, int32_t ___bindingAttr0, Binder_t3404612058 * ___binder1, int32_t ___callConvention2, TypeU5BU5D_t1664964607* ___types3, ParameterModifierU5BU5D_t963192633* ___modifiers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t1996683371* GenericTypeParameterBuilder_GetConstructors_m103067670 (GenericTypeParameterBuilder_t1370236603 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * GenericTypeParameterBuilder_GetEvent_m4210567427 (GenericTypeParameterBuilder_t1370236603 * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * GenericTypeParameterBuilder_GetField_m1135650395 (GenericTypeParameterBuilder_t1370236603 * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t125053523* GenericTypeParameterBuilder_GetFields_m1855948450 (GenericTypeParameterBuilder_t1370236603 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
extern "C"  TypeU5BU5D_t1664964607* GenericTypeParameterBuilder_GetInterfaces_m922686350 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t152480188* GenericTypeParameterBuilder_GetMethods_m1243855818 (GenericTypeParameterBuilder_t1370236603 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * GenericTypeParameterBuilder_GetMethodImpl_m528545634 (GenericTypeParameterBuilder_t1370236603 * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t3404612058 * ___binder2, int32_t ___callConvention3, TypeU5BU5D_t1664964607* ___types4, ParameterModifierU5BU5D_t963192633* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * GenericTypeParameterBuilder_GetPropertyImpl_m3566422383 (GenericTypeParameterBuilder_t1370236603 * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t3404612058 * ___binder2, Type_t * ___returnType3, TypeU5BU5D_t1664964607* ___types4, ParameterModifierU5BU5D_t963192633* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
extern "C"  bool GenericTypeParameterBuilder_HasElementTypeImpl_m2592272488 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
extern "C"  bool GenericTypeParameterBuilder_IsAssignableFrom_m3874566384 (GenericTypeParameterBuilder_t1370236603 * __this, Type_t * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
extern "C"  bool GenericTypeParameterBuilder_IsInstanceOfType_m2048682904 (GenericTypeParameterBuilder_t1370236603 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
extern "C"  bool GenericTypeParameterBuilder_IsArrayImpl_m1786931395 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
extern "C"  bool GenericTypeParameterBuilder_IsByRefImpl_m3339093128 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
extern "C"  bool GenericTypeParameterBuilder_IsPointerImpl_m4265374617 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
extern "C"  bool GenericTypeParameterBuilder_IsPrimitiveImpl_m1198748291 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
extern "C"  bool GenericTypeParameterBuilder_IsValueTypeImpl_m20800593 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * GenericTypeParameterBuilder_InvokeMember_m1055646245 (GenericTypeParameterBuilder_t1370236603 * __this, String_t* ___name0, int32_t ___invokeAttr1, Binder_t3404612058 * ___binder2, Il2CppObject * ___target3, ObjectU5BU5D_t3614634134* ___args4, ParameterModifierU5BU5D_t963192633* ___modifiers5, CultureInfo_t3500843524 * ___culture6, StringU5BU5D_t1642385972* ___namedParameters7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
extern "C"  Type_t * GenericTypeParameterBuilder_GetElementType_m2702341452 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
extern "C"  Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m200578513 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
extern "C"  Assembly_t4268412390 * GenericTypeParameterBuilder_get_Assembly_m2103587580 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
extern "C"  String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m902593295 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
extern "C"  Type_t * GenericTypeParameterBuilder_get_BaseType_m101683868 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
extern "C"  String_t* GenericTypeParameterBuilder_get_FullName_m3508212436 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool GenericTypeParameterBuilder_IsDefined_m1413593919 (GenericTypeParameterBuilder_t1370236603 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* GenericTypeParameterBuilder_GetCustomAttributes_m1330155190 (GenericTypeParameterBuilder_t1370236603 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* GenericTypeParameterBuilder_GetCustomAttributes_m3266536625 (GenericTypeParameterBuilder_t1370236603 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
extern "C"  String_t* GenericTypeParameterBuilder_get_Name_m2640162747 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
extern "C"  String_t* GenericTypeParameterBuilder_get_Namespace_m1776615511 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
extern "C"  Module_t4282841206 * GenericTypeParameterBuilder_get_Module_m2427847092 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
extern "C"  Type_t * GenericTypeParameterBuilder_get_DeclaringType_m1652924692 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
extern "C"  Type_t * GenericTypeParameterBuilder_get_ReflectedType_m562256091 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t2330101084  GenericTypeParameterBuilder_get_TypeHandle_m3293062357 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
extern "C"  TypeU5BU5D_t1664964607* GenericTypeParameterBuilder_GetGenericArguments_m277381309 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
extern "C"  Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m2936287336 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
extern "C"  bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m1449092549 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
extern "C"  bool GenericTypeParameterBuilder_get_IsGenericParameter_m1565478927 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
extern "C"  bool GenericTypeParameterBuilder_get_IsGenericType_m1883522222 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
extern "C"  bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m2790308279 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
extern "C"  Exception_t1927440687 * GenericTypeParameterBuilder_not_supported_m3784909043 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
extern "C"  String_t* GenericTypeParameterBuilder_ToString_m4223425511 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
extern "C"  bool GenericTypeParameterBuilder_Equals_m2498927509 (GenericTypeParameterBuilder_t1370236603 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
extern "C"  int32_t GenericTypeParameterBuilder_GetHashCode_m867619899 (GenericTypeParameterBuilder_t1370236603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
extern "C"  Type_t * GenericTypeParameterBuilder_MakeGenericType_m2955814622 (GenericTypeParameterBuilder_t1370236603 * __this, TypeU5BU5D_t1664964607* ___typeArguments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
