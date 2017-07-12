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

// System.Reflection.MonoCMethod
struct MonoCMethod_t611352247;
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
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_RuntimeMethodHandle894824333.h"
#include "mscorlib_System_Reflection_MethodAttributes790385034.h"
#include "mscorlib_System_Reflection_CallingConventions1097349142.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Reflection.MonoCMethod::.ctor()
extern "C"  void MonoCMethod__ctor_m2473049889 (MonoCMethod_t611352247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
extern "C"  ParameterInfoU5BU5D_t2275869610* MonoCMethod_GetParameters_m2658773133 (MonoCMethod_t611352247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C"  Il2CppObject * MonoCMethod_InternalInvoke_m2816771359 (MonoCMethod_t611352247 * __this, Il2CppObject * ___obj0, ObjectU5BU5D_t3614634134* ___parameters1, Exception_t1927440687 ** ___exc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * MonoCMethod_Invoke_m264177196 (MonoCMethod_t611352247 * __this, Il2CppObject * ___obj0, int32_t ___invokeAttr1, Binder_t3404612058 * ___binder2, ObjectU5BU5D_t3614634134* ___parameters3, CultureInfo_t3500843524 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * MonoCMethod_Invoke_m931478014 (MonoCMethod_t611352247 * __this, int32_t ___invokeAttr0, Binder_t3404612058 * ___binder1, ObjectU5BU5D_t3614634134* ___parameters2, CultureInfo_t3500843524 * ___culture3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t894824333  MonoCMethod_get_MethodHandle_m3394506066 (MonoCMethod_t611352247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
extern "C"  int32_t MonoCMethod_get_Attributes_m3914742834 (MonoCMethod_t611352247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
extern "C"  int32_t MonoCMethod_get_CallingConvention_m3356441108 (MonoCMethod_t611352247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
extern "C"  Type_t * MonoCMethod_get_ReflectedType_m3611546138 (MonoCMethod_t611352247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
extern "C"  Type_t * MonoCMethod_get_DeclaringType_m4147430117 (MonoCMethod_t611352247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::get_Name()
extern "C"  String_t* MonoCMethod_get_Name_m764669486 (MonoCMethod_t611352247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoCMethod_IsDefined_m3686883242 (MonoCMethod_t611352247 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* MonoCMethod_GetCustomAttributes_m2886701175 (MonoCMethod_t611352247 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* MonoCMethod_GetCustomAttributes_m1110360782 (MonoCMethod_t611352247 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::ToString()
extern "C"  String_t* MonoCMethod_ToString_m607787036 (MonoCMethod_t611352247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoCMethod_GetObjectData_m2435596845 (MonoCMethod_t611352247 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
