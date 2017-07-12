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

// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t904190842;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2275869610;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Exception
struct Exception_t1927440687;
// System.Reflection.Binder
struct Binder_t3404612058;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Runtime.InteropServices.DllImportAttribute
struct DllImportAttribute_t3000813225;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Type[]
struct TypeU5BU5D_t1664964607;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodBase904190842.h"
#include "mscorlib_System_Reflection_MonoMethod116053496.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_RuntimeMethodHandle894824333.h"
#include "mscorlib_System_Reflection_MethodAttributes790385034.h"
#include "mscorlib_System_Reflection_CallingConventions1097349142.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Reflection.MonoMethod::.ctor()
extern "C"  void MonoMethod__ctor_m4091684020 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)
extern "C"  String_t* MonoMethod_get_name_m1503581873 (Il2CppObject * __this /* static, unused */, MethodBase_t904190842 * ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethod System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)
extern "C"  MonoMethod_t * MonoMethod_get_base_definition_m1625237055 (Il2CppObject * __this /* static, unused */, MonoMethod_t * ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetBaseDefinition()
extern "C"  MethodInfo_t * MonoMethod_GetBaseDefinition_m1738989472 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReturnType()
extern "C"  Type_t * MonoMethod_get_ReturnType_m4218706049 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters()
extern "C"  ParameterInfoU5BU5D_t2275869610* MonoMethod_GetParameters_m1240674378 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C"  Il2CppObject * MonoMethod_InternalInvoke_m4055929538 (MonoMethod_t * __this, Il2CppObject * ___obj0, ObjectU5BU5D_t3614634134* ___parameters1, Exception_t1927440687 ** ___exc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * MonoMethod_Invoke_m3376991795 (MonoMethod_t * __this, Il2CppObject * ___obj0, int32_t ___invokeAttr1, Binder_t3404612058 * ___binder2, ObjectU5BU5D_t3614634134* ___parameters3, CultureInfo_t3500843524 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t894824333  MonoMethod_get_MethodHandle_m1882915015 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethod::get_Attributes()
extern "C"  int32_t MonoMethod_get_Attributes_m4038185617 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention()
extern "C"  int32_t MonoMethod_get_CallingConvention_m2978714873 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReflectedType()
extern "C"  Type_t * MonoMethod_get_ReflectedType_m3966408549 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_DeclaringType()
extern "C"  Type_t * MonoMethod_get_DeclaringType_m4119916616 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_Name()
extern "C"  String_t* MonoMethod_get_Name_m1650258269 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoMethod_IsDefined_m2322670981 (MonoMethod_t * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* MonoMethod_GetCustomAttributes_m2493833930 (MonoMethod_t * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* MonoMethod_GetCustomAttributes_m3212448303 (MonoMethod_t * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.DllImportAttribute System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)
extern "C"  DllImportAttribute_t3000813225 * MonoMethod_GetDllImportAttribute_m2757463479 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mhandle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetPseudoCustomAttributes()
extern "C"  ObjectU5BU5D_t3614634134* MonoMethod_GetPseudoCustomAttributes_m466965107 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::ShouldPrintFullName(System.Type)
extern "C"  bool MonoMethod_ShouldPrintFullName_m2343680861 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::ToString()
extern "C"  String_t* MonoMethod_ToString_m1014895917 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoMethod_GetObjectData_m3146497844 (MonoMethod_t * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod(System.Type[])
extern "C"  MethodInfo_t * MonoMethod_MakeGenericMethod_m3628255919 (MonoMethod_t * __this, TypeU5BU5D_t1664964607* ___methodInstantiation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])
extern "C"  MethodInfo_t * MonoMethod_MakeGenericMethod_impl_m2063853616 (MonoMethod_t * __this, TypeU5BU5D_t1664964607* ___types0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoMethod::GetGenericArguments()
extern "C"  TypeU5BU5D_t1664964607* MonoMethod_GetGenericArguments_m1043327523 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition()
extern "C"  bool MonoMethod_get_IsGenericMethodDefinition_m2424433610 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod()
extern "C"  bool MonoMethod_get_IsGenericMethod_m4276550811 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters()
extern "C"  bool MonoMethod_get_ContainsGenericParameters_m2891719083 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
