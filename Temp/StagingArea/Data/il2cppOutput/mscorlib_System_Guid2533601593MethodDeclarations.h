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

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t2849799027;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid2533601593.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Guid::.ctor(System.Byte[])
extern "C"  void Guid__ctor_m2958090239 (Guid_t2533601593 * __this, ByteU5BU5D_t3397334013* ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
extern "C"  void Guid__ctor_m543169477 (Guid_t2533601593 * __this, int32_t ___a0, int16_t ___b1, int16_t ___c2, uint8_t ___d3, uint8_t ___e4, uint8_t ___f5, uint8_t ___g6, uint8_t ___h7, uint8_t ___i8, uint8_t ___j9, uint8_t ___k10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.cctor()
extern "C"  void Guid__cctor_m1295168203 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckNull(System.Object)
extern "C"  void Guid_CheckNull_m2903986431 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckLength(System.Byte[],System.Int32)
extern "C"  void Guid_CheckLength_m3817133960 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___o0, int32_t ___l1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckArray(System.Byte[],System.Int32)
extern "C"  void Guid_CheckArray_m3772604725 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___o0, int32_t ___l1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::Compare(System.Int32,System.Int32)
extern "C"  int32_t Guid_Compare_m1237783585 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::CompareTo(System.Object)
extern "C"  int32_t Guid_CompareTo_m2130663100 (Guid_t2533601593 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::Equals(System.Object)
extern "C"  bool Guid_Equals_m2346664749 (Guid_t2533601593 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::CompareTo(System.Guid)
extern "C"  int32_t Guid_CompareTo_m2203922782 (Guid_t2533601593 * __this, Guid_t2533601593  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::Equals(System.Guid)
extern "C"  bool Guid_Equals_m2389236871 (Guid_t2533601593 * __this, Guid_t2533601593  ___g0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::GetHashCode()
extern "C"  int32_t Guid_GetHashCode_m1401300871 (Guid_t2533601593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Guid::ToHex(System.Int32)
extern "C"  Il2CppChar Guid_ToHex_m1297445295 (Il2CppObject * __this /* static, unused */, int32_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid::NewGuid()
extern "C"  Guid_t2533601593  Guid_NewGuid_m3493657620 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendInt(System.Text.StringBuilder,System.Int32)
extern "C"  void Guid_AppendInt_m453617982 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___builder0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendShort(System.Text.StringBuilder,System.Int16)
extern "C"  void Guid_AppendShort_m1613704479 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___builder0, int16_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendByte(System.Text.StringBuilder,System.Byte)
extern "C"  void Guid_AppendByte_m2890893073 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___builder0, uint8_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::BaseToString(System.Boolean,System.Boolean,System.Boolean)
extern "C"  String_t* Guid_BaseToString_m3199695005 (Guid_t2533601593 * __this, bool ___h0, bool ___p1, bool ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString()
extern "C"  String_t* Guid_ToString_m3927110175 (Guid_t2533601593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String)
extern "C"  String_t* Guid_ToString_m51661589 (Guid_t2533601593 * __this, String_t* ___format0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Guid_ToString_m3858592945 (Guid_t2533601593 * __this, String_t* ___format0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
