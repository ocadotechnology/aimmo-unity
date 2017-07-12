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

// System.Text.Latin1Encoding
struct Latin1Encoding_t3483306430;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t3883615514;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_EncoderFallbackBuffer3883615514.h"

// System.Void System.Text.Latin1Encoding::.ctor()
extern "C"  void Latin1Encoding__ctor_m2999253292 (Latin1Encoding_t3483306430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t Latin1Encoding_GetByteCount_m2812921286 (Latin1Encoding_t3483306430 * __this, CharU5BU5D_t1328083999* ___chars0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.String)
extern "C"  int32_t Latin1Encoding_GetByteCount_m2621626395 (Latin1Encoding_t3483306430 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Latin1Encoding_GetBytes_m1448304712 (Latin1Encoding_t3483306430 * __this, CharU5BU5D_t1328083999* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t3397334013* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C"  int32_t Latin1Encoding_GetBytes_m1524377555 (Latin1Encoding_t3483306430 * __this, CharU5BU5D_t1328083999* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t3397334013* ___bytes3, int32_t ___byteIndex4, EncoderFallbackBuffer_t3883615514 ** ___buffer5, CharU5BU5D_t1328083999** ___fallback_chars6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Latin1Encoding_GetBytes_m1067304501 (Latin1Encoding_t3483306430 * __this, String_t* ___s0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t3397334013* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C"  int32_t Latin1Encoding_GetBytes_m549262084 (Latin1Encoding_t3483306430 * __this, String_t* ___s0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t3397334013* ___bytes3, int32_t ___byteIndex4, EncoderFallbackBuffer_t3883615514 ** ___buffer5, CharU5BU5D_t1328083999** ___fallback_chars6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t Latin1Encoding_GetCharCount_m3101226234 (Latin1Encoding_t3483306430 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t Latin1Encoding_GetChars_m1985468530 (Latin1Encoding_t3483306430 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t1328083999* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t Latin1Encoding_GetMaxByteCount_m709525090 (Latin1Encoding_t3483306430 * __this, int32_t ___charCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t Latin1Encoding_GetMaxCharCount_m1295285932 (Latin1Encoding_t3483306430 * __this, int32_t ___byteCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* Latin1Encoding_GetString_m2975627625 (Latin1Encoding_t3483306430 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[])
extern "C"  String_t* Latin1Encoding_GetString_m3553289597 (Latin1Encoding_t3483306430 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::get_WebName()
extern "C"  String_t* Latin1Encoding_get_WebName_m774101299 (Latin1Encoding_t3483306430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
