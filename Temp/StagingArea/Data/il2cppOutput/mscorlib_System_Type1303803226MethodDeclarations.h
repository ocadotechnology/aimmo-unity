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
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Binder
struct Binder_t3404612058;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t963192633;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_TypeAttributes2229518203.h"
#include "mscorlib_System_Reflection_MemberTypes3343038963.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_TypeCode2536926201.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Reflection_CallingConventions1097349142.h"

// System.Void System.Type::.ctor()
extern "C"  void Type__ctor_m882675131 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Type::.cctor()
extern "C"  void Type__cctor_m3101966940 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterName_impl(System.Reflection.MemberInfo,System.Object)
extern "C"  bool Type_FilterName_impl_m2806300061 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___m0, Il2CppObject * ___filterCriteria1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterNameIgnoreCase_impl(System.Reflection.MemberInfo,System.Object)
extern "C"  bool Type_FilterNameIgnoreCase_impl_m296452813 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___m0, Il2CppObject * ___filterCriteria1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterAttribute_impl(System.Reflection.MemberInfo,System.Object)
extern "C"  bool Type_FilterAttribute_impl_m2792336386 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___m0, Il2CppObject * ___filterCriteria1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Type::get_Attributes()
extern "C"  int32_t Type_get_Attributes_m967681955 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_DeclaringType()
extern "C"  Type_t * Type_get_DeclaringType_m128188791 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_HasElementType()
extern "C"  bool Type_get_HasElementType_m3319917896 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsAbstract()
extern "C"  bool Type_get_IsAbstract_m2532060002 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
extern "C"  bool Type_get_IsArray_m811277129 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsByRef()
extern "C"  bool Type_get_IsByRef_m3523465500 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsClass()
extern "C"  bool Type_get_IsClass_m2968663946 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsContextful()
extern "C"  bool Type_get_IsContextful_m1542685486 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsEnum()
extern "C"  bool Type_get_IsEnum_m313908919 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsExplicitLayout()
extern "C"  bool Type_get_IsExplicitLayout_m1489853866 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsInterface()
extern "C"  bool Type_get_IsInterface_m3583817465 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsMarshalByRef()
extern "C"  bool Type_get_IsMarshalByRef_m863073076 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPointer()
extern "C"  bool Type_get_IsPointer_m3832342327 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPrimitive()
extern "C"  bool Type_get_IsPrimitive_m1522841565 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSealed()
extern "C"  bool Type_get_IsSealed_m2380985836 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSerializable()
extern "C"  bool Type_get_IsSerializable_m4047653969 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
extern "C"  bool Type_get_IsValueType_m1733572463 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Type::get_MemberType()
extern "C"  int32_t Type_get_MemberType_m744159024 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_ReflectedType()
extern "C"  Type_t * Type_get_ReflectedType_m587395740 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t2330101084  Type_get_TypeHandle_m2371151380 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::Equals(System.Object)
extern "C"  bool Type_Equals_m1272005660 (Type_t * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::Equals(System.Type)
extern "C"  bool Type_Equals_m1326467719 (Type_t * __this, Type_t * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::EqualsInternal(System.Type)
extern "C"  bool Type_EqualsInternal_m266086934 (Type_t * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_handle(System.IntPtr)
extern "C"  Type_t * Type_internal_from_handle_m3322326604 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_name(System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Type_internal_from_name_m1506974323 (Il2CppObject * __this /* static, unused */, String_t* ___name0, bool ___throwOnError1, bool ___ignoreCase2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String)
extern "C"  Type_t * Type_GetType_m773255995 (Il2CppObject * __this /* static, unused */, String_t* ___typeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String,System.Boolean)
extern "C"  Type_t * Type_GetType_m402049910 (Il2CppObject * __this /* static, unused */, String_t* ___typeName0, bool ___throwOnError1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCodeInternal(System.Type)
extern "C"  int32_t Type_GetTypeCodeInternal_m834669909 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCode(System.Type)
extern "C"  int32_t Type_GetTypeCode_m1044483454 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m432505302 (Il2CppObject * __this /* static, unused */, RuntimeTypeHandle_t2330101084  ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::GetTypeHandle(System.Object)
extern "C"  RuntimeTypeHandle_t2330101084  Type_GetTypeHandle_m2405042843 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_subtype_of(System.Type,System.Type,System.Boolean)
extern "C"  bool Type_type_is_subtype_of_m312896768 (Il2CppObject * __this /* static, unused */, Type_t * ___a0, Type_t * ___b1, bool ___check_interfaces2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_assignable_from(System.Type,System.Type)
extern "C"  bool Type_type_is_assignable_from_m1620694099 (Il2CppObject * __this /* static, unused */, Type_t * ___a0, Type_t * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsSubclassOf(System.Type)
extern "C"  bool Type_IsSubclassOf_m2450899481 (Type_t * __this, Type_t * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsAssignableFrom(System.Type)
extern "C"  bool Type_IsAssignableFrom_m907986231 (Type_t * __this, Type_t * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsInstanceOfType(System.Object)
extern "C"  bool Type_IsInstanceOfType_m2802212815 (Type_t * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
extern "C"  FieldInfo_t * Type_GetField_m3036413258 (Type_t * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Type::GetHashCode()
extern "C"  int32_t Type_GetHashCode_m1150382148 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
extern "C"  MethodInfo_t * Type_GetMethod_m1197504218 (Type_t * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
extern "C"  MethodInfo_t * Type_GetMethod_m475234662 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * Type_GetMethod_m1930231379 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t3404612058 * ___binder2, TypeU5BU5D_t1664964607* ___types3, ParameterModifierU5BU5D_t963192633* ___modifiers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * Type_GetMethod_m3650909507 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t3404612058 * ___binder2, int32_t ___callConvention3, TypeU5BU5D_t1664964607* ___types4, ParameterModifierU5BU5D_t963192633* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
extern "C"  PropertyInfo_t * Type_GetProperty_m808359402 (Type_t * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
extern "C"  PropertyInfo_t * Type_GetProperty_m1510204374 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type)
extern "C"  PropertyInfo_t * Type_GetProperty_m4024018787 (Type_t * __this, String_t* ___name0, Type_t * ___returnType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type,System.Type[])
extern "C"  PropertyInfo_t * Type_GetProperty_m2512308450 (Type_t * __this, String_t* ___name0, Type_t * ___returnType1, TypeU5BU5D_t1664964607* ___types2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * Type_GetProperty_m2172000670 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t3404612058 * ___binder2, Type_t * ___returnType3, TypeU5BU5D_t1664964607* ___types4, ParameterModifierU5BU5D_t963192633* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsArrayImpl(System.Type)
extern "C"  bool Type_IsArrayImpl_m3073208555 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsValueTypeImpl()
extern "C"  bool Type_IsValueTypeImpl_m1300813382 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsContextfulImpl()
extern "C"  bool Type_IsContextfulImpl_m1952300657 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsMarshalByRefImpl()
extern "C"  bool Type_IsMarshalByRefImpl_m673713323 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
extern "C"  ConstructorInfo_t2851816542 * Type_GetConstructor_m132234455 (Type_t * __this, TypeU5BU5D_t1664964607* ___types0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t2851816542 * Type_GetConstructor_m663514781 (Type_t * __this, int32_t ___bindingAttr0, Binder_t3404612058 * ___binder1, TypeU5BU5D_t1664964607* ___types2, ParameterModifierU5BU5D_t963192633* ___modifiers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t2851816542 * Type_GetConstructor_m835344477 (Type_t * __this, int32_t ___bindingAttr0, Binder_t3404612058 * ___binder1, int32_t ___callConvention2, TypeU5BU5D_t1664964607* ___types3, ParameterModifierU5BU5D_t963192633* ___modifiers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Type::ToString()
extern "C"  String_t* Type_ToString_m2596437994 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSystemType()
extern "C"  bool Type_get_IsSystemType_m2276830817 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Type::GetGenericArguments()
extern "C"  TypeU5BU5D_t1664964607* Type_GetGenericArguments_m2378564336 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_ContainsGenericParameters()
extern "C"  bool Type_get_ContainsGenericParameters_m505913180 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericTypeDefinition()
extern "C"  bool Type_get_IsGenericTypeDefinition_m2147901038 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition_impl()
extern "C"  Type_t * Type_GetGenericTypeDefinition_impl_m2206745596 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition()
extern "C"  Type_t * Type_GetGenericTypeDefinition_m2658530753 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericType()
extern "C"  bool Type_get_IsGenericType_m3396841573 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type,System.Type[])
extern "C"  Type_t * Type_MakeGenericType_m973683242 (Il2CppObject * __this /* static, unused */, Type_t * ___gt0, TypeU5BU5D_t1664964607* ___types1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type[])
extern "C"  Type_t * Type_MakeGenericType_m2765875033 (Type_t * __this, TypeU5BU5D_t1664964607* ___typeArguments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericParameter()
extern "C"  bool Type_get_IsGenericParameter_m161434704 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsNested()
extern "C"  bool Type_get_IsNested_m3671396733 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Type::GetPseudoCustomAttributes()
extern "C"  ObjectU5BU5D_t3614634134* Type_GetPseudoCustomAttributes_m869578 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
