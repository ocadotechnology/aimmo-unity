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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Type
struct Type_t;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t1473156697;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t589103770;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Void System.Runtime.Serialization.SerializationInfo::.ctor(System.Type,System.Runtime.Serialization.IFormatterConverter)
extern "C"  void SerializationInfo__ctor_m4016423422 (SerializationInfo_t228987430 * __this, Type_t * ___type0, Il2CppObject * ___converter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
extern "C"  void SerializationInfo_AddValue_m1781549036 (SerializationInfo_t228987430 * __this, String_t* ___name0, Il2CppObject * ___value1, Type_t * ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
extern "C"  Il2CppObject * SerializationInfo_GetValue_m1127314592 (SerializationInfo_t228987430 * __this, String_t* ___name0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
extern "C"  void SerializationInfo_SetType_m499725474 (SerializationInfo_t228987430 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationInfoEnumerator System.Runtime.Serialization.SerializationInfo::GetEnumerator()
extern "C"  SerializationInfoEnumerator_t589103770 * SerializationInfo_GetEnumerator_m2402005737 (SerializationInfo_t228987430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int16)
extern "C"  void SerializationInfo_AddValue_m2871643642 (SerializationInfo_t228987430 * __this, String_t* ___name0, int16_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
extern "C"  void SerializationInfo_AddValue_m902275108 (SerializationInfo_t228987430 * __this, String_t* ___name0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
extern "C"  void SerializationInfo_AddValue_m1192926088 (SerializationInfo_t228987430 * __this, String_t* ___name0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.DateTime)
extern "C"  void SerializationInfo_AddValue_m721212291 (SerializationInfo_t228987430 * __this, String_t* ___name0, DateTime_t693205669  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Single)
extern "C"  void SerializationInfo_AddValue_m2342806462 (SerializationInfo_t228987430 * __this, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int64)
extern "C"  void SerializationInfo_AddValue_m1708843935 (SerializationInfo_t228987430 * __this, String_t* ___name0, int64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
extern "C"  void SerializationInfo_AddValue_m4254971664 (SerializationInfo_t228987430 * __this, String_t* ___name0, uint64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C"  void SerializationInfo_AddValue_m1740888931 (SerializationInfo_t228987430 * __this, String_t* ___name0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
extern "C"  bool SerializationInfo_GetBoolean_m3573708305 (SerializationInfo_t228987430 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Runtime.Serialization.SerializationInfo::GetInt16(System.String)
extern "C"  int16_t SerializationInfo_GetInt16_m3549836657 (SerializationInfo_t228987430 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
extern "C"  int32_t SerializationInfo_GetInt32_m4039439501 (SerializationInfo_t228987430 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.SerializationInfo::GetInt64(System.String)
extern "C"  int64_t SerializationInfo_GetInt64_m1778999221 (SerializationInfo_t228987430 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern "C"  String_t* SerializationInfo_GetString_m547109409 (SerializationInfo_t228987430 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
