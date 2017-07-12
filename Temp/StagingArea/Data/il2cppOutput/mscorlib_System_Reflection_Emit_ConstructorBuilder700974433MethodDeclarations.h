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

// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t700974433;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3308873219;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t2318378278;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2275869610;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t3404612058;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t99948092;
// System.Reflection.Module
struct Module_t4282841206;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder3308873219.h"
#include "mscorlib_System_Reflection_MethodAttributes790385034.h"
#include "mscorlib_System_Reflection_CallingConventions1097349142.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_RuntimeMethodHandle894824333.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_Emit_MethodToken3991686330.h"

// System.Void System.Reflection.Emit.ConstructorBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C"  void ConstructorBuilder__ctor_m2001998159 (ConstructorBuilder_t700974433 * __this, TypeBuilder_t3308873219 * ___tb0, int32_t ___attributes1, int32_t ___callingConvention2, TypeU5BU5D_t1664964607* ___parameterTypes3, TypeU5BU5DU5BU5D_t2318378278* ___paramModReq4, TypeU5BU5DU5BU5D_t2318378278* ___paramModOpt5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
extern "C"  int32_t ConstructorBuilder_get_CallingConvention_m443074051 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
extern "C"  TypeBuilder_t3308873219 * ConstructorBuilder_get_TypeBuilder_m3442952231 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
extern "C"  ParameterInfoU5BU5D_t2275869610* ConstructorBuilder_GetParameters_m3711347282 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
extern "C"  ParameterInfoU5BU5D_t2275869610* ConstructorBuilder_GetParametersInternal_m3775796783 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::GetParameterCount()
extern "C"  int32_t ConstructorBuilder_GetParameterCount_m2862936870 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * ConstructorBuilder_Invoke_m2354062201 (ConstructorBuilder_t700974433 * __this, Il2CppObject * ___obj0, int32_t ___invokeAttr1, Binder_t3404612058 * ___binder2, ObjectU5BU5D_t3614634134* ___parameters3, CultureInfo_t3500843524 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * ConstructorBuilder_Invoke_m2488856091 (ConstructorBuilder_t700974433 * __this, int32_t ___invokeAttr0, Binder_t3404612058 * ___binder1, ObjectU5BU5D_t3614634134* ___parameters2, CultureInfo_t3500843524 * ___culture3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t894824333  ConstructorBuilder_get_MethodHandle_m977166569 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
extern "C"  int32_t ConstructorBuilder_get_Attributes_m2137353707 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
extern "C"  Type_t * ConstructorBuilder_get_ReflectedType_m3815261871 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
extern "C"  Type_t * ConstructorBuilder_get_DeclaringType_m4264602248 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
extern "C"  String_t* ConstructorBuilder_get_Name_m134603075 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool ConstructorBuilder_IsDefined_m2369140139 (ConstructorBuilder_t700974433 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* ConstructorBuilder_GetCustomAttributes_m1931712364 (ConstructorBuilder_t700974433 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* ConstructorBuilder_GetCustomAttributes_m1698596385 (ConstructorBuilder_t700974433 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator()
extern "C"  ILGenerator_t99948092 * ConstructorBuilder_GetILGenerator_m1407935730 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator(System.Int32)
extern "C"  ILGenerator_t99948092 * ConstructorBuilder_GetILGenerator_m1731893569 (ConstructorBuilder_t700974433 * __this, int32_t ___streamSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodToken System.Reflection.Emit.ConstructorBuilder::GetToken()
extern "C"  MethodToken_t3991686330  ConstructorBuilder_GetToken_m3945412419 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
extern "C"  Module_t4282841206 * ConstructorBuilder_get_Module_m2159174298 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
extern "C"  String_t* ConstructorBuilder_ToString_m347700767 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ConstructorBuilder::fixup()
extern "C"  void ConstructorBuilder_fixup_m836985654 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t ConstructorBuilder_get_next_table_index_m932085784 (ConstructorBuilder_t700974433 * __this, Il2CppObject * ___obj0, int32_t ___table1, bool ___inc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
extern "C"  bool ConstructorBuilder_get_IsCompilerContext_m2796899803 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
extern "C"  Exception_t1927440687 * ConstructorBuilder_not_supported_m3687319507 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
extern "C"  Exception_t1927440687 * ConstructorBuilder_not_created_m2150488017 (ConstructorBuilder_t700974433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
