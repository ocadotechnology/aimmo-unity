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
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t2849799027;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.DateTimeOffset::.ctor(System.DateTime)
extern "C"  void DateTimeOffset__ctor_m428942261 (DateTimeOffset_t1362988906 * __this, DateTime_t693205669  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m2870721395 (DateTimeOffset_t1362988906 * __this, DateTime_t693205669  ___dateTime0, TimeSpan_t3430258949  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m2110004919 (DateTimeOffset_t1362988906 * __this, int64_t ___ticks0, TimeSpan_t3430258949  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DateTimeOffset__ctor_m1796624924 (DateTimeOffset_t1362988906 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.cctor()
extern "C"  void DateTimeOffset__cctor_m2475500670 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::System.IComparable.CompareTo(System.Object)
extern "C"  int32_t DateTimeOffset_System_IComparable_CompareTo_m1775227279 (DateTimeOffset_t1362988906 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData_m1430367682 (DateTimeOffset_t1362988906 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m1059347059 (DateTimeOffset_t1362988906 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
extern "C"  int32_t DateTimeOffset_CompareTo_m441053436 (DateTimeOffset_t1362988906 * __this, DateTimeOffset_t1362988906  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
extern "C"  bool DateTimeOffset_Equals_m3728302791 (DateTimeOffset_t1362988906 * __this, DateTimeOffset_t1362988906  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.Object)
extern "C"  bool DateTimeOffset_Equals_m3467127074 (DateTimeOffset_t1362988906 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::GetHashCode()
extern "C"  int32_t DateTimeOffset_GetHashCode_m3312197462 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString()
extern "C"  String_t* DateTimeOffset_ToString_m2511385248 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* DateTimeOffset_ToString_m2121173678 (DateTimeOffset_t1362988906 * __this, String_t* ___format0, Il2CppObject * ___formatProvider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
extern "C"  DateTime_t693205669  DateTimeOffset_get_DateTime_m229084964 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
extern "C"  TimeSpan_t3430258949  DateTimeOffset_get_Offset_m2335492074 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
extern "C"  DateTime_t693205669  DateTimeOffset_get_UtcDateTime_m3162550774 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
