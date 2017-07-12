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

// System.Text.UTF8Encoding
struct UTF8Encoding_t111055448;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t4206371382;
// System.Text.Decoder
struct Decoder_t3792697818;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Text_DecoderFallbackBuffer4206371382.h"

// System.Void System.Text.UTF8Encoding::.ctor()
extern "C"  void UTF8Encoding__ctor_m100325490 (UTF8Encoding_t111055448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean)
extern "C"  void UTF8Encoding__ctor_m3336862259 (UTF8Encoding_t111055448 * __this, bool ___encoderShouldEmitUTF8Identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean,System.Boolean)
extern "C"  void UTF8Encoding__ctor_m3476740866 (UTF8Encoding_t111055448 * __this, bool ___encoderShouldEmitUTF8Identifier0, bool ___throwOnInvalidBytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Char&,System.Boolean)
extern "C"  int32_t UTF8Encoding_InternalGetByteCount_m3740515577 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___index1, int32_t ___count2, Il2CppChar* ___leftOver3, bool ___flush4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char*,System.Int32,System.Char&,System.Boolean)
extern "C"  int32_t UTF8Encoding_InternalGetByteCount_m309857650 (Il2CppObject * __this /* static, unused */, Il2CppChar* ___chars0, int32_t ___count1, Il2CppChar* ___leftOver2, bool ___flush3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t UTF8Encoding_GetByteCount_m2372933408 (UTF8Encoding_t111055448 * __this, CharU5BU5D_t1328083999* ___chars0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t UTF8Encoding_GetByteCount_m2547312609 (UTF8Encoding_t111055448 * __this, Il2CppChar* ___chars0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Char&,System.Boolean)
extern "C"  int32_t UTF8Encoding_InternalGetBytes_m1792519471 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t3397334013* ___bytes3, int32_t ___byteIndex4, Il2CppChar* ___leftOver5, bool ___flush6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char*,System.Int32,System.Byte*,System.Int32,System.Char&,System.Boolean)
extern "C"  int32_t UTF8Encoding_InternalGetBytes_m463991234 (Il2CppObject * __this /* static, unused */, Il2CppChar* ___chars0, int32_t ___count1, uint8_t* ___bytes2, int32_t ___bcount3, Il2CppChar* ___leftOver4, bool ___flush5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UTF8Encoding_GetBytes_m4170182058 (UTF8Encoding_t111055448 * __this, CharU5BU5D_t1328083999* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t3397334013* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UTF8Encoding_GetBytes_m2013140369 (UTF8Encoding_t111055448 * __this, String_t* ___s0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t3397334013* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t UTF8Encoding_GetBytes_m2973831055 (UTF8Encoding_t111055448 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C"  int32_t UTF8Encoding_InternalGetCharCount_m1541102251 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___index1, int32_t ___count2, uint32_t ___leftOverBits3, uint32_t ___leftOverCount4, Il2CppObject * ___provider5, DecoderFallbackBuffer_t4206371382 ** ___fallbackBuffer6, ByteU5BU5D_t3397334013** ___bufferArg7, bool ___flush8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte*,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C"  int32_t UTF8Encoding_InternalGetCharCount_m3465560630 (Il2CppObject * __this /* static, unused */, uint8_t* ___bytes0, int32_t ___count1, uint32_t ___leftOverBits2, uint32_t ___leftOverCount3, Il2CppObject * ___provider4, DecoderFallbackBuffer_t4206371382 ** ___fallbackBuffer5, ByteU5BU5D_t3397334013** ___bufferArg6, bool ___flush7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32)
extern "C"  int32_t UTF8Encoding_Fallback_m811555654 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___provider0, DecoderFallbackBuffer_t4206371382 ** ___buffer1, ByteU5BU5D_t3397334013** ___bufferArg2, uint8_t* ___bytes3, int64_t ___index4, uint32_t ___size5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32,System.Char*,System.Int32&)
extern "C"  void UTF8Encoding_Fallback_m3891588134 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___provider0, DecoderFallbackBuffer_t4206371382 ** ___buffer1, ByteU5BU5D_t3397334013** ___bufferArg2, uint8_t* ___bytes3, int64_t ___byteIndex4, uint32_t ___size5, Il2CppChar* ___chars6, int32_t* ___charIndex7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t UTF8Encoding_GetCharCount_m3557355060 (UTF8Encoding_t111055448 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C"  int32_t UTF8Encoding_InternalGetChars_m1688183071 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t1328083999* ___chars3, int32_t ___charIndex4, uint32_t* ___leftOverBits5, uint32_t* ___leftOverCount6, Il2CppObject * ___provider7, DecoderFallbackBuffer_t4206371382 ** ___fallbackBuffer8, ByteU5BU5D_t3397334013** ___bufferArg9, bool ___flush10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte*,System.Int32,System.Char*,System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C"  int32_t UTF8Encoding_InternalGetChars_m373801468 (Il2CppObject * __this /* static, unused */, uint8_t* ___bytes0, int32_t ___byteCount1, Il2CppChar* ___chars2, int32_t ___charCount3, uint32_t* ___leftOverBits4, uint32_t* ___leftOverCount5, Il2CppObject * ___provider6, DecoderFallbackBuffer_t4206371382 ** ___fallbackBuffer7, ByteU5BU5D_t3397334013** ___bufferArg8, bool ___flush9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t UTF8Encoding_GetChars_m2989739268 (UTF8Encoding_t111055448 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t1328083999* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t UTF8Encoding_GetMaxByteCount_m2157849212 (UTF8Encoding_t111055448 * __this, int32_t ___charCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t UTF8Encoding_GetMaxCharCount_m2653717734 (UTF8Encoding_t111055448 * __this, int32_t ___byteCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF8Encoding::GetDecoder()
extern "C"  Decoder_t3792697818 * UTF8Encoding_GetDecoder_m2009743649 (UTF8Encoding_t111055448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UTF8Encoding::GetPreamble()
extern "C"  ByteU5BU5D_t3397334013* UTF8Encoding_GetPreamble_m4179999478 (UTF8Encoding_t111055448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF8Encoding::Equals(System.Object)
extern "C"  bool UTF8Encoding_Equals_m3694374685 (UTF8Encoding_t111055448 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetHashCode()
extern "C"  int32_t UTF8Encoding_GetHashCode_m2456159187 (UTF8Encoding_t111055448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.String)
extern "C"  int32_t UTF8Encoding_GetByteCount_m1469571127 (UTF8Encoding_t111055448 * __this, String_t* ___chars0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF8Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* UTF8Encoding_GetString_m1836344205 (UTF8Encoding_t111055448 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
