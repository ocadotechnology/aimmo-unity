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

// System.Text.UTF7Encoding
struct UTF7Encoding_t741406939;
// System.Object
struct Il2CppObject;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Text.Decoder
struct Decoder_t3792697818;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Text.UTF7Encoding::.ctor()
extern "C"  void UTF7Encoding__ctor_m1941256679 (UTF7Encoding_t741406939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF7Encoding::.ctor(System.Boolean)
extern "C"  void UTF7Encoding__ctor_m2365939916 (UTF7Encoding_t741406939 * __this, bool ___allowOptionals0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF7Encoding::.cctor()
extern "C"  void UTF7Encoding__cctor_m4192443836 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetHashCode()
extern "C"  int32_t UTF7Encoding_GetHashCode_m359766848 (UTF7Encoding_t741406939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF7Encoding::Equals(System.Object)
extern "C"  bool UTF7Encoding_Equals_m3706778156 (UTF7Encoding_t741406939 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean,System.Boolean)
extern "C"  int32_t UTF7Encoding_InternalGetByteCount_m1636341784 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___index1, int32_t ___count2, bool ___flush3, int32_t ___leftOver4, bool ___isInShifted5, bool ___allowOptionals6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t UTF7Encoding_GetByteCount_m253528135 (UTF7Encoding_t741406939 * __this, CharU5BU5D_t1328083999* ___chars0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean,System.Int32&,System.Boolean&,System.Boolean)
extern "C"  int32_t UTF7Encoding_InternalGetBytes_m2772055844 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t3397334013* ___bytes3, int32_t ___byteIndex4, bool ___flush5, int32_t* ___leftOver6, bool* ___isInShifted7, bool ___allowOptionals8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UTF7Encoding_GetBytes_m2915771241 (UTF7Encoding_t741406939 * __this, CharU5BU5D_t1328083999* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t3397334013* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.Int32)
extern "C"  int32_t UTF7Encoding_InternalGetCharCount_m655336125 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___index1, int32_t ___count2, int32_t ___leftOver3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t UTF7Encoding_GetCharCount_m2589913583 (UTF7Encoding_t741406939 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Int32&)
extern "C"  int32_t UTF7Encoding_InternalGetChars_m4157428055 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t1328083999* ___chars3, int32_t ___charIndex4, int32_t* ___leftOver5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t UTF7Encoding_GetChars_m4059350315 (UTF7Encoding_t741406939 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t1328083999* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t UTF7Encoding_GetMaxByteCount_m1832475511 (UTF7Encoding_t741406939 * __this, int32_t ___charCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t UTF7Encoding_GetMaxCharCount_m356714085 (UTF7Encoding_t741406939 * __this, int32_t ___byteCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF7Encoding::GetDecoder()
extern "C"  Decoder_t3792697818 * UTF7Encoding_GetDecoder_m396865028 (UTF7Encoding_t741406939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t UTF7Encoding_GetByteCount_m273209154 (UTF7Encoding_t741406939 * __this, Il2CppChar* ___chars0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.String)
extern "C"  int32_t UTF7Encoding_GetByteCount_m1588484494 (UTF7Encoding_t741406939 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t UTF7Encoding_GetBytes_m3015176946 (UTF7Encoding_t741406939 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UTF7Encoding_GetBytes_m3033375614 (UTF7Encoding_t741406939 * __this, String_t* ___s0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t3397334013* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF7Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* UTF7Encoding_GetString_m4263430344 (UTF7Encoding_t741406939 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
