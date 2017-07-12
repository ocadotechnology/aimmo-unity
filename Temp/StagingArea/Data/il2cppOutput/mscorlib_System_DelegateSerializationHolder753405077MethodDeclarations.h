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

// System.DelegateSerializationHolder
struct DelegateSerializationHolder_t753405077;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Delegate
struct Delegate_t3022476291;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Delegate3022476291.h"

// System.Void System.DelegateSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DelegateSerializationHolder__ctor_m3915060553 (DelegateSerializationHolder_t753405077 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetDelegateData(System.Delegate,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DelegateSerializationHolder_GetDelegateData_m1057136238 (Il2CppObject * __this /* static, unused */, Delegate_t3022476291 * ___instance0, SerializationInfo_t228987430 * ___info1, StreamingContext_t1417235061  ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DelegateSerializationHolder_GetObjectData_m3504134864 (DelegateSerializationHolder_t753405077 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DelegateSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  Il2CppObject * DelegateSerializationHolder_GetRealObject_m1233806014 (DelegateSerializationHolder_t753405077 * __this, StreamingContext_t1417235061  ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
