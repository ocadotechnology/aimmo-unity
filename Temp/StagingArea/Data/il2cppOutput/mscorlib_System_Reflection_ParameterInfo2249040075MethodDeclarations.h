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

// System.Reflection.ParameterInfo
struct ParameterInfo_t2249040075;
// System.Reflection.Emit.ParameterBuilder
struct ParameterBuilder_t3344728474;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_ParameterBuilder3344728474.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075.h"
#include "mscorlib_System_Reflection_ParameterAttributes1266705348.h"

// System.Void System.Reflection.ParameterInfo::.ctor()
extern "C"  void ParameterInfo__ctor_m1986388557 (ParameterInfo_t2249040075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.Emit.ParameterBuilder,System.Type,System.Reflection.MemberInfo,System.Int32)
extern "C"  void ParameterInfo__ctor_m2149157062 (ParameterInfo_t2249040075 * __this, ParameterBuilder_t3344728474 * ___pb0, Type_t * ___type1, MemberInfo_t * ___member2, int32_t ___position3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.ParameterInfo,System.Reflection.MemberInfo)
extern "C"  void ParameterInfo__ctor_m3204994840 (ParameterInfo_t2249040075 * __this, ParameterInfo_t2249040075 * ___pinfo0, MemberInfo_t * ___member1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.ParameterInfo::ToString()
extern "C"  String_t* ParameterInfo_ToString_m1722229694 (ParameterInfo_t2249040075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.ParameterInfo::get_ParameterType()
extern "C"  Type_t * ParameterInfo_get_ParameterType_m1441012169 (ParameterInfo_t2249040075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes()
extern "C"  int32_t ParameterInfo_get_Attributes_m407887446 (ParameterInfo_t2249040075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsIn()
extern "C"  bool ParameterInfo_get_IsIn_m1357865245 (ParameterInfo_t2249040075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsOptional()
extern "C"  bool ParameterInfo_get_IsOptional_m2877290948 (ParameterInfo_t2249040075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsOut()
extern "C"  bool ParameterInfo_get_IsOut_m3097675062 (ParameterInfo_t2249040075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsRetval()
extern "C"  bool ParameterInfo_get_IsRetval_m1881464570 (ParameterInfo_t2249040075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.Reflection.ParameterInfo::get_Member()
extern "C"  MemberInfo_t * ParameterInfo_get_Member_m4111292219 (ParameterInfo_t2249040075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.ParameterInfo::get_Name()
extern "C"  String_t* ParameterInfo_get_Name_m149251884 (ParameterInfo_t2249040075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.ParameterInfo::get_Position()
extern "C"  int32_t ParameterInfo_get_Position_m2135360011 (ParameterInfo_t2249040075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* ParameterInfo_GetCustomAttributes_m2985072480 (ParameterInfo_t2249040075 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::IsDefined(System.Type,System.Boolean)
extern "C"  bool ParameterInfo_IsDefined_m2412925144 (ParameterInfo_t2249040075 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetPseudoCustomAttributes()
extern "C"  ObjectU5BU5D_t3614634134* ParameterInfo_GetPseudoCustomAttributes_m2952359394 (ParameterInfo_t2249040075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
