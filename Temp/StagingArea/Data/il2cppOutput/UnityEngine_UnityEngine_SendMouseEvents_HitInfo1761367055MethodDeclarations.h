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

// System.String
struct String_t;
// UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t1761367055;
struct HitInfo_t1761367055_marshaled_pinvoke;
struct HitInfo_t1761367055_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo1761367055.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern "C"  void HitInfo_SendMessage_m3368777144 (HitInfo_t1761367055 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern "C"  bool HitInfo_op_Implicit_m1583347317 (Il2CppObject * __this /* static, unused */, HitInfo_t1761367055  ___exists0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern "C"  bool HitInfo_Compare_m4272872794 (Il2CppObject * __this /* static, unused */, HitInfo_t1761367055  ___lhs0, HitInfo_t1761367055  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct HitInfo_t1761367055;
struct HitInfo_t1761367055_marshaled_pinvoke;

extern "C" void HitInfo_t1761367055_marshal_pinvoke(const HitInfo_t1761367055& unmarshaled, HitInfo_t1761367055_marshaled_pinvoke& marshaled);
extern "C" void HitInfo_t1761367055_marshal_pinvoke_back(const HitInfo_t1761367055_marshaled_pinvoke& marshaled, HitInfo_t1761367055& unmarshaled);
extern "C" void HitInfo_t1761367055_marshal_pinvoke_cleanup(HitInfo_t1761367055_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct HitInfo_t1761367055;
struct HitInfo_t1761367055_marshaled_com;

extern "C" void HitInfo_t1761367055_marshal_com(const HitInfo_t1761367055& unmarshaled, HitInfo_t1761367055_marshaled_com& marshaled);
extern "C" void HitInfo_t1761367055_marshal_com_back(const HitInfo_t1761367055_marshaled_com& marshaled, HitInfo_t1761367055& unmarshaled);
extern "C" void HitInfo_t1761367055_marshal_com_cleanup(HitInfo_t1761367055_marshaled_com& marshaled);
