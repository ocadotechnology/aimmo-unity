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

// System.Reflection.MemberInfoSerializationHolder
struct MemberInfoSerializationHolder_t2799051170;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MemberTypes3343038963.h"

// System.Void System.Reflection.MemberInfoSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MemberInfoSerializationHolder__ctor_m1297860825 (MemberInfoSerializationHolder_t2799051170 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes)
extern "C"  void MemberInfoSerializationHolder_Serialize_m1949812823 (Il2CppObject * __this /* static, unused */, SerializationInfo_t228987430 * ___info0, String_t* ___name1, Type_t * ___klass2, String_t* ___signature3, int32_t ___type4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes,System.Type[])
extern "C"  void MemberInfoSerializationHolder_Serialize_m4243060728 (Il2CppObject * __this /* static, unused */, SerializationInfo_t228987430 * ___info0, String_t* ___name1, Type_t * ___klass2, String_t* ___signature3, int32_t ___type4, TypeU5BU5D_t1664964607* ___genericArguments5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MemberInfoSerializationHolder_GetObjectData_m1760456120 (MemberInfoSerializationHolder_t2799051170 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MemberInfoSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  Il2CppObject * MemberInfoSerializationHolder_GetRealObject_m3643310964 (MemberInfoSerializationHolder_t2799051170 * __this, StreamingContext_t1417235061  ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
