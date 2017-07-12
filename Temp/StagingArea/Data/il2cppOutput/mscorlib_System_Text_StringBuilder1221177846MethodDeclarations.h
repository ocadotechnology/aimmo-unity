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

// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.IFormatProvider
struct IFormatProvider_t2849799027;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32)
extern "C"  void StringBuilder__ctor_m2307000687 (StringBuilder_t1221177846 * __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___length2, int32_t ___capacity3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void StringBuilder__ctor_m1386129952 (StringBuilder_t1221177846 * __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___length2, int32_t ___capacity3, int32_t ___maxCapacity4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3946851802 (StringBuilder_t1221177846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C"  void StringBuilder__ctor_m536337337 (StringBuilder_t1221177846 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C"  void StringBuilder__ctor_m782331808 (StringBuilder_t1221177846 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
extern "C"  void StringBuilder__ctor_m1456828835 (StringBuilder_t1221177846 * __this, String_t* ___value0, int32_t ___capacity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void StringBuilder__ctor_m201937067 (StringBuilder_t1221177846 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void StringBuilder_System_Runtime_Serialization_ISerializable_GetObjectData_m3547759871 (StringBuilder_t1221177846 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Capacity()
extern "C"  int32_t StringBuilder_get_Capacity_m1253303803 (StringBuilder_t1221177846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Capacity(System.Int32)
extern "C"  void StringBuilder_set_Capacity_m3320848288 (StringBuilder_t1221177846 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C"  int32_t StringBuilder_get_Length_m1608241323 (StringBuilder_t1221177846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
extern "C"  void StringBuilder_set_Length_m3039225444 (StringBuilder_t1221177846 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
extern "C"  Il2CppChar StringBuilder_get_Chars_m256627635 (StringBuilder_t1221177846 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
extern "C"  void StringBuilder_set_Chars_m1019094834 (StringBuilder_t1221177846 * __this, int32_t ___index0, Il2CppChar ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString()
extern "C"  String_t* StringBuilder_ToString_m1507807375 (StringBuilder_t1221177846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString(System.Int32,System.Int32)
extern "C"  String_t* StringBuilder_ToString_m617673931 (StringBuilder_t1221177846 * __this, int32_t ___startIndex0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Remove_m3617011745 (StringBuilder_t1221177846 * __this, int32_t ___startIndex0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Replace_m28121947 (StringBuilder_t1221177846 * __this, String_t* ___oldValue0, String_t* ___newValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String,System.Int32,System.Int32)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Replace_m334638391 (StringBuilder_t1221177846 * __this, String_t* ___oldValue0, String_t* ___newValue1, int32_t ___startIndex2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[])
extern "C"  StringBuilder_t1221177846 * StringBuilder_Append_m293880008 (StringBuilder_t1221177846 * __this, CharU5BU5D_t1328083999* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Append_m3636508479 (StringBuilder_t1221177846 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Double)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Append_m2548870311 (StringBuilder_t1221177846 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Append_m2109474214 (StringBuilder_t1221177846 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int64)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Append_m1128243247 (StringBuilder_t1221177846 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Append_m3541816491 (StringBuilder_t1221177846 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Append_m3618697540 (StringBuilder_t1221177846 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Append_m2084384963 (StringBuilder_t1221177846 * __this, Il2CppChar ___value0, int32_t ___repeatCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Append_m2279048166 (StringBuilder_t1221177846 * __this, CharU5BU5D_t1328083999* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Append_m1462406979 (StringBuilder_t1221177846 * __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
extern "C"  StringBuilder_t1221177846 * StringBuilder_AppendLine_m1686706871 (StringBuilder_t1221177846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
extern "C"  StringBuilder_t1221177846 * StringBuilder_AppendFormat_m1879616656 (StringBuilder_t1221177846 * __this, String_t* ___format0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
extern "C"  StringBuilder_t1221177846 * StringBuilder_AppendFormat_m3178887408 (StringBuilder_t1221177846 * __this, Il2CppObject * ___provider0, String_t* ___format1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
extern "C"  StringBuilder_t1221177846 * StringBuilder_AppendFormat_m3265503696 (StringBuilder_t1221177846 * __this, String_t* ___format0, Il2CppObject * ___arg01, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
extern "C"  StringBuilder_t1221177846 * StringBuilder_AppendFormat_m759296786 (StringBuilder_t1221177846 * __this, String_t* ___format0, Il2CppObject * ___arg01, Il2CppObject * ___arg12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
extern "C"  StringBuilder_t1221177846 * StringBuilder_AppendFormat_m1666670800 (StringBuilder_t1221177846 * __this, String_t* ___format0, Il2CppObject * ___arg01, Il2CppObject * ___arg12, Il2CppObject * ___arg23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Insert_m3322917127 (StringBuilder_t1221177846 * __this, int32_t ___index0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Insert_m2080758720 (StringBuilder_t1221177846 * __this, int32_t ___index0, Il2CppChar ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String,System.Int32)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Insert_m1733097906 (StringBuilder_t1221177846 * __this, int32_t ___index0, String_t* ___value1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::InternalEnsureCapacity(System.Int32)
extern "C"  void StringBuilder_InternalEnsureCapacity_m1674769070 (StringBuilder_t1221177846 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
