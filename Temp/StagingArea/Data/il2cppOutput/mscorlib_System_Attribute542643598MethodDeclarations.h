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

// System.Attribute
struct Attribute_t542643598;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2249040075;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075.h"

// System.Void System.Attribute::.ctor()
extern "C"  void Attribute__ctor_m1730479323 (Attribute_t542643598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::CheckParameters(System.Object,System.Type)
extern "C"  void Attribute_CheckParameters_m1754681684 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, Type_t * ___attributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
extern "C"  Attribute_t542643598 * Attribute_GetCustomAttribute_m2157205805 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element0, Type_t * ___attributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C"  Attribute_t542643598 * Attribute_GetCustomAttribute_m3988539922 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element0, Type_t * ___attributeType1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Attribute::GetHashCode()
extern "C"  int32_t Attribute_GetHashCode_m2653962112 (Attribute_t542643598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type)
extern "C"  bool Attribute_IsDefined_m2186700650 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2249040075 * ___element0, Type_t * ___attributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
extern "C"  bool Attribute_IsDefined_m1350918959 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element0, Type_t * ___attributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C"  bool Attribute_IsDefined_m216577166 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element0, Type_t * ___attributeType1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type,System.Boolean)
extern "C"  bool Attribute_IsDefined_m2118467641 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2249040075 * ___element0, Type_t * ___attributeType1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::Equals(System.Object)
extern "C"  bool Attribute_Equals_m3576905816 (Attribute_t542643598 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
