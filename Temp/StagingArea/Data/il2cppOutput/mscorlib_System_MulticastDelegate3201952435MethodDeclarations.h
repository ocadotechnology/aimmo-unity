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

// System.MulticastDelegate
struct MulticastDelegate_t3201952435;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.Delegate[]
struct DelegateU5BU5D_t1606206610;
// System.Delegate
struct Delegate_t3022476291;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Delegate3022476291.h"
#include "mscorlib_System_MulticastDelegate3201952435.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MulticastDelegate_GetObjectData_m3187757658 (MulticastDelegate_t3201952435 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C"  bool MulticastDelegate_Equals_m3064081489 (MulticastDelegate_t3201952435 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C"  int32_t MulticastDelegate_GetHashCode_m1352560743 (MulticastDelegate_t3201952435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C"  DelegateU5BU5D_t1606206610* MulticastDelegate_GetInvocationList_m1380132617 (MulticastDelegate_t3201952435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C"  Delegate_t3022476291 * MulticastDelegate_CombineImpl_m3327763192 (MulticastDelegate_t3201952435 * __this, Delegate_t3022476291 * ___follow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C"  bool MulticastDelegate_BaseEquals_m2954278638 (MulticastDelegate_t3201952435 * __this, MulticastDelegate_t3201952435 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C"  MulticastDelegate_t3201952435 * MulticastDelegate_KPM_m1592985119 (Il2CppObject * __this /* static, unused */, MulticastDelegate_t3201952435 * ___needle0, MulticastDelegate_t3201952435 * ___haystack1, MulticastDelegate_t3201952435 ** ___tail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C"  Delegate_t3022476291 * MulticastDelegate_RemoveImpl_m2024746777 (MulticastDelegate_t3201952435 * __this, Delegate_t3022476291 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
