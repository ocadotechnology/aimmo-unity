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

// System.UnitySerializationHolder
struct UnitySerializationHolder_t2045574117;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t972229383;
// System.Reflection.Module
struct Module_t4282841206;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_DBNull972229383.h"
#include "mscorlib_System_Reflection_Module4282841206.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder__ctor_m2832165173 (UnitySerializationHolder_t2045574117 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetTypeData_m3333995932 (Il2CppObject * __this /* static, unused */, Type_t * ___instance0, SerializationInfo_t228987430 * ___info1, StreamingContext_t1417235061  ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetDBNullData_m461795932 (Il2CppObject * __this /* static, unused */, DBNull_t972229383 * ___instance0, SerializationInfo_t228987430 * ___info1, StreamingContext_t1417235061  ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetModuleData_m2945403213 (Il2CppObject * __this /* static, unused */, Module_t4282841206 * ___instance0, SerializationInfo_t228987430 * ___info1, StreamingContext_t1417235061  ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetObjectData_m2280028722 (UnitySerializationHolder_t2045574117 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  Il2CppObject * UnitySerializationHolder_GetRealObject_m286267090 (UnitySerializationHolder_t2045574117 * __this, StreamingContext_t1417235061  ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
