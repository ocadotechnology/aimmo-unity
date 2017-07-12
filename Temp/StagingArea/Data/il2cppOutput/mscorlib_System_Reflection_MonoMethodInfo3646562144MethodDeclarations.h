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
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2275869610;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t3646562144;
struct MonoMethodInfo_t3646562144_marshaled_pinvoke;
struct MonoMethodInfo_t3646562144_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Reflection_MonoMethodInfo3646562144.h"
#include "mscorlib_System_Reflection_MethodAttributes790385034.h"
#include "mscorlib_System_Reflection_CallingConventions1097349142.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"

// System.Void System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)
extern "C"  void MonoMethodInfo_get_method_info_m3630911979 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, MonoMethodInfo_t3646562144 * ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethodInfo System.Reflection.MonoMethodInfo::GetMethodInfo(System.IntPtr)
extern "C"  MonoMethodInfo_t3646562144  MonoMethodInfo_GetMethodInfo_m3298558752 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetDeclaringType(System.IntPtr)
extern "C"  Type_t * MonoMethodInfo_GetDeclaringType_m4186531677 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetReturnType(System.IntPtr)
extern "C"  Type_t * MonoMethodInfo_GetReturnType_m2864247130 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::GetAttributes(System.IntPtr)
extern "C"  int32_t MonoMethodInfo_GetAttributes_m2535493430 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::GetCallingConvention(System.IntPtr)
extern "C"  int32_t MonoMethodInfo_GetCallingConvention_m3095860872 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)
extern "C"  ParameterInfoU5BU5D_t2275869610* MonoMethodInfo_get_parameter_info_m3554140855 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, MemberInfo_t * ___member1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::GetParametersInfo(System.IntPtr,System.Reflection.MemberInfo)
extern "C"  ParameterInfoU5BU5D_t2275869610* MonoMethodInfo_GetParametersInfo_m3456861922 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, MemberInfo_t * ___member1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct MonoMethodInfo_t3646562144;
struct MonoMethodInfo_t3646562144_marshaled_pinvoke;

extern "C" void MonoMethodInfo_t3646562144_marshal_pinvoke(const MonoMethodInfo_t3646562144& unmarshaled, MonoMethodInfo_t3646562144_marshaled_pinvoke& marshaled);
extern "C" void MonoMethodInfo_t3646562144_marshal_pinvoke_back(const MonoMethodInfo_t3646562144_marshaled_pinvoke& marshaled, MonoMethodInfo_t3646562144& unmarshaled);
extern "C" void MonoMethodInfo_t3646562144_marshal_pinvoke_cleanup(MonoMethodInfo_t3646562144_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct MonoMethodInfo_t3646562144;
struct MonoMethodInfo_t3646562144_marshaled_com;

extern "C" void MonoMethodInfo_t3646562144_marshal_com(const MonoMethodInfo_t3646562144& unmarshaled, MonoMethodInfo_t3646562144_marshaled_com& marshaled);
extern "C" void MonoMethodInfo_t3646562144_marshal_com_back(const MonoMethodInfo_t3646562144_marshaled_com& marshaled, MonoMethodInfo_t3646562144& unmarshaled);
extern "C" void MonoMethodInfo_t3646562144_marshal_com_cleanup(MonoMethodInfo_t3646562144_marshaled_com& marshaled);
