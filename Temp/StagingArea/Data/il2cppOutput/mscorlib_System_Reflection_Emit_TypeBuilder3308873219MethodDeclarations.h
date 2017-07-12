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

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3308873219;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t4282841206;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Reflection.Binder
struct Binder_t3404612058;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t963192633;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t700974433;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t2318378278;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1996683371;
// System.Reflection.EventInfo
struct EventInfo_t;
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
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes2229518203.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder3308873219.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Reflection_CallingConventions1097349142.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MethodAttributes790385034.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"

// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern "C"  int32_t TypeBuilder_GetAttributeFlagsImpl_m2593449699 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::setup_internal_class(System.Reflection.Emit.TypeBuilder)
extern "C"  void TypeBuilder_setup_internal_class_m235812026 (TypeBuilder_t3308873219 * __this, TypeBuilder_t3308873219 * ___tb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::create_generic_class()
extern "C"  void TypeBuilder_create_generic_class_m986834171 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C"  Assembly_t4268412390 * TypeBuilder_get_Assembly_m492491492 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern "C"  String_t* TypeBuilder_get_AssemblyQualifiedName_m2097258567 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C"  Type_t * TypeBuilder_get_BaseType_m4088672180 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C"  Type_t * TypeBuilder_get_DeclaringType_m3236598700 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern "C"  Type_t * TypeBuilder_get_UnderlyingSystemType_m392404521 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C"  String_t* TypeBuilder_get_FullName_m1626507516 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C"  Module_t4282841206 * TypeBuilder_get_Module_m1668298460 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C"  String_t* TypeBuilder_get_Name_m170882803 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C"  String_t* TypeBuilder_get_Namespace_m3562783599 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C"  Type_t * TypeBuilder_get_ReflectedType_m2504081059 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t2851816542 * TypeBuilder_GetConstructorImpl_m4192168686 (TypeBuilder_t3308873219 * __this, int32_t ___bindingAttr0, Binder_t3404612058 * ___binder1, int32_t ___callConvention2, TypeU5BU5D_t1664964607* ___types3, ParameterModifierU5BU5D_t963192633* ___modifiers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool TypeBuilder_IsDefined_m3186251655 (TypeBuilder_t3308873219 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* TypeBuilder_GetCustomAttributes_m1637538574 (TypeBuilder_t3308873219 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* TypeBuilder_GetCustomAttributes_m2702632361 (TypeBuilder_t3308873219 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[])
extern "C"  ConstructorBuilder_t700974433 * TypeBuilder_DefineConstructor_m3431248509 (TypeBuilder_t3308873219 * __this, int32_t ___attributes0, int32_t ___callingConvention1, TypeU5BU5D_t1664964607* ___parameterTypes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C"  ConstructorBuilder_t700974433 * TypeBuilder_DefineConstructor_m2972481149 (TypeBuilder_t3308873219 * __this, int32_t ___attributes0, int32_t ___callingConvention1, TypeU5BU5D_t1664964607* ___parameterTypes2, TypeU5BU5DU5BU5D_t2318378278* ___requiredCustomModifiers3, TypeU5BU5DU5BU5D_t2318378278* ___optionalCustomModifiers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineDefaultConstructor(System.Reflection.MethodAttributes)
extern "C"  ConstructorBuilder_t700974433 * TypeBuilder_DefineDefaultConstructor_m2225828699 (TypeBuilder_t3308873219 * __this, int32_t ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::create_runtime_class(System.Reflection.Emit.TypeBuilder)
extern "C"  Type_t * TypeBuilder_create_runtime_class_m2719530260 (TypeBuilder_t3308873219 * __this, TypeBuilder_t3308873219 * ___tb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::is_nested_in(System.Type)
extern "C"  bool TypeBuilder_is_nested_in_m3557898035 (TypeBuilder_t3308873219 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::has_ctor_method()
extern "C"  bool TypeBuilder_has_ctor_method_m3449702467 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::CreateType()
extern "C"  Type_t * TypeBuilder_CreateType_m4126056124 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t1996683371* TypeBuilder_GetConstructors_m774120094 (TypeBuilder_t3308873219 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t1996683371* TypeBuilder_GetConstructorsInternal_m2426192231 (TypeBuilder_t3308873219 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern "C"  Type_t * TypeBuilder_GetElementType_m3707448372 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * TypeBuilder_GetEvent_m3876348075 (TypeBuilder_t3308873219 * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * TypeBuilder_GetField_m2112455315 (TypeBuilder_t3308873219 * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t125053523* TypeBuilder_GetFields_m3875401338 (TypeBuilder_t3308873219 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern "C"  TypeU5BU5D_t1664964607* TypeBuilder_GetInterfaces_m1818658502 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C"  MethodInfoU5BU5D_t152480188* TypeBuilder_GetMethodsByName_m229541072 (TypeBuilder_t3308873219 * __this, String_t* ___name0, int32_t ___bindingAttr1, bool ___ignoreCase2, Type_t * ___reflected_type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t152480188* TypeBuilder_GetMethods_m4196862738 (TypeBuilder_t3308873219 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * TypeBuilder_GetMethodImpl_m1443640538 (TypeBuilder_t3308873219 * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t3404612058 * ___binder2, int32_t ___callConvention3, TypeU5BU5D_t1664964607* ___types4, ParameterModifierU5BU5D_t963192633* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * TypeBuilder_GetPropertyImpl_m1854119335 (TypeBuilder_t3308873219 * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t3404612058 * ___binder2, Type_t * ___returnType3, TypeU5BU5D_t1664964607* ___types4, ParameterModifierU5BU5D_t963192633* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern "C"  bool TypeBuilder_HasElementTypeImpl_m3160520656 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * TypeBuilder_InvokeMember_m1992906893 (TypeBuilder_t3308873219 * __this, String_t* ___name0, int32_t ___invokeAttr1, Binder_t3404612058 * ___binder2, Il2CppObject * ___target3, ObjectU5BU5D_t3614634134* ___args4, ParameterModifierU5BU5D_t963192633* ___modifiers5, CultureInfo_t3500843524 * ___culture6, StringU5BU5D_t1642385972* ___namedParameters7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern "C"  bool TypeBuilder_IsArrayImpl_m1932432187 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern "C"  bool TypeBuilder_IsByRefImpl_m3716138128 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern "C"  bool TypeBuilder_IsPointerImpl_m3046705585 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern "C"  bool TypeBuilder_IsPrimitiveImpl_m3315689435 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern "C"  bool TypeBuilder_IsValueTypeImpl_m1499671481 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern "C"  Type_t * TypeBuilder_MakeGenericType_m4282022646 (TypeBuilder_t3308873219 * __this, TypeU5BU5D_t1664964607* ___typeArguments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t2330101084  TypeBuilder_get_TypeHandle_m922348781 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::SetParent(System.Type)
extern "C"  void TypeBuilder_SetParent_m387557893 (TypeBuilder_t3308873219 * __this, Type_t * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.TypeBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t TypeBuilder_get_next_table_index_m1415870184 (TypeBuilder_t3308873219 * __this, Il2CppObject * ___obj0, int32_t ___table1, bool ___inc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C"  bool TypeBuilder_get_IsCompilerContext_m3623403919 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C"  bool TypeBuilder_get_is_created_m736553860 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern "C"  Exception_t1927440687 * TypeBuilder_not_supported_m3178173643 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_not_created()
extern "C"  void TypeBuilder_check_not_created_m2785532739 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C"  void TypeBuilder_check_created_m2929267877 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern "C"  String_t* TypeBuilder_ToString_m1952363535 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern "C"  bool TypeBuilder_IsAssignableFrom_m212977480 (TypeBuilder_t3308873219 * __this, Type_t * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern "C"  bool TypeBuilder_IsSubclassOf_m428846622 (TypeBuilder_t3308873219 * __this, Type_t * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern "C"  bool TypeBuilder_IsAssignableTo_m3210661829 (TypeBuilder_t3308873219 * __this, Type_t * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern "C"  TypeU5BU5D_t1664964607* TypeBuilder_GetGenericArguments_m3241780469 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern "C"  Type_t * TypeBuilder_GetGenericTypeDefinition_m3813000816 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern "C"  bool TypeBuilder_get_ContainsGenericParameters_m493137229 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern "C"  bool TypeBuilder_get_IsGenericParameter_m2604628295 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C"  bool TypeBuilder_get_IsGenericTypeDefinition_m1652226431 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern "C"  bool TypeBuilder_get_IsGenericType_m1475565622 (TypeBuilder_t3308873219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
