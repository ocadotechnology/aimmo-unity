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

// Mono.Globalization.Unicode.SortKeyBuffer
struct SortKeyBuffer_t1759538423;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Globalization.SortKey
struct SortKey_t1270563137;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CompareOptions2829943955.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Globalization.Unicode.SortKeyBuffer::.ctor(System.Int32)
extern "C"  void SortKeyBuffer__ctor_m3849560435 (SortKeyBuffer_t1759538423 * __this, int32_t ___lcid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::Reset()
extern "C"  void SortKeyBuffer_Reset_m1812791879 (SortKeyBuffer_t1759538423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::Initialize(System.Globalization.CompareOptions,System.Int32,System.String,System.Boolean)
extern "C"  void SortKeyBuffer_Initialize_m588272701 (SortKeyBuffer_t1759538423 * __this, int32_t ___options0, int32_t ___lcid1, String_t* ___s2, bool ___frenchSort3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendCJKExtension(System.Byte,System.Byte)
extern "C"  void SortKeyBuffer_AppendCJKExtension_m1401737447 (SortKeyBuffer_t1759538423 * __this, uint8_t ___lv1msb0, uint8_t ___lv1lsb1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendKana(System.Byte,System.Byte,System.Byte,System.Byte,System.Boolean,System.Byte,System.Boolean,System.Boolean)
extern "C"  void SortKeyBuffer_AppendKana_m3963110419 (SortKeyBuffer_t1759538423 * __this, uint8_t ___category0, uint8_t ___lv11, uint8_t ___lv22, uint8_t ___lv33, bool ___isSmallKana4, uint8_t ___markType5, bool ___isKatakana6, bool ___isHalfWidth7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendNormal(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C"  void SortKeyBuffer_AppendNormal_m2554296431 (SortKeyBuffer_t1759538423 * __this, uint8_t ___category0, uint8_t ___lv11, uint8_t ___lv22, uint8_t ___lv33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendLevel5(System.Byte,System.Byte)
extern "C"  void SortKeyBuffer_AppendLevel5_m1585345611 (SortKeyBuffer_t1759538423 * __this, uint8_t ___category0, uint8_t ___lv11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendBufferPrimitive(System.Byte,System.Byte[]&,System.Int32&)
extern "C"  void SortKeyBuffer_AppendBufferPrimitive_m702517590 (SortKeyBuffer_t1759538423 * __this, uint8_t ___value0, ByteU5BU5D_t3397334013** ___buf1, int32_t* ___bidx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SortKeyBuffer::GetResultAndReset()
extern "C"  SortKey_t1270563137 * SortKeyBuffer_GetResultAndReset_m2516956577 (SortKeyBuffer_t1759538423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::GetOptimizedLength(System.Byte[],System.Int32,System.Byte)
extern "C"  int32_t SortKeyBuffer_GetOptimizedLength_m2170603326 (SortKeyBuffer_t1759538423 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___len1, uint8_t ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SortKeyBuffer::GetResult()
extern "C"  SortKey_t1270563137 * SortKeyBuffer_GetResult_m962852575 (SortKeyBuffer_t1759538423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
