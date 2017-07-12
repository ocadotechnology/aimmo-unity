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

// System.Reflection.CustomAttributeData
struct CustomAttributeData_t3093286891;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t2039138515;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t635098144;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData>
struct IList_1_t3634227492;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Module
struct Module_t4282841206;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2249040075;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_ConstructorInfo2851816542.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Reflection_Module4282841206.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Reflection.CustomAttributeData::.ctor(System.Reflection.ConstructorInfo,System.Object[],System.Object[])
extern "C"  void CustomAttributeData__ctor_m1358286409 (CustomAttributeData_t3093286891 * __this, ConstructorInfo_t2851816542 * ___ctorInfo0, ObjectU5BU5D_t3614634134* ___ctorArgs1, ObjectU5BU5D_t3614634134* ___namedArgs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::get_Constructor()
extern "C"  ConstructorInfo_t2851816542 * CustomAttributeData_get_Constructor_m2529070599 (CustomAttributeData_t3093286891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::get_ConstructorArguments()
extern "C"  Il2CppObject* CustomAttributeData_get_ConstructorArguments_m1625171154 (CustomAttributeData_t3093286891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::get_NamedArguments()
extern "C"  Il2CppObject* CustomAttributeData_get_NamedArguments_m708818174 (CustomAttributeData_t3093286891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.Assembly)
extern "C"  Il2CppObject* CustomAttributeData_GetCustomAttributes_m4124612360 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.MemberInfo)
extern "C"  Il2CppObject* CustomAttributeData_GetCustomAttributes_m2421330738 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.Module)
extern "C"  Il2CppObject* CustomAttributeData_GetCustomAttributes_m119332220 (Il2CppObject * __this /* static, unused */, Module_t4282841206 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.ParameterInfo)
extern "C"  Il2CppObject* CustomAttributeData_GetCustomAttributes_m3258419955 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2249040075 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.CustomAttributeData::ToString()
extern "C"  String_t* CustomAttributeData_ToString_m1673522836 (CustomAttributeData_t3093286891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.CustomAttributeData::Equals(System.Object)
extern "C"  bool CustomAttributeData_Equals_m909425978 (CustomAttributeData_t3093286891 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.CustomAttributeData::GetHashCode()
extern "C"  int32_t CustomAttributeData_GetHashCode_m3989739430 (CustomAttributeData_t3093286891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
