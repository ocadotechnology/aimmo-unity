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

// System.Text.DecoderReplacementFallbackBuffer
struct DecoderReplacementFallbackBuffer_t3471122670;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t3042394152;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_DecoderReplacementFallback3042394152.h"

// System.Void System.Text.DecoderReplacementFallbackBuffer::.ctor(System.Text.DecoderReplacementFallback)
extern "C"  void DecoderReplacementFallbackBuffer__ctor_m1305504326 (DecoderReplacementFallbackBuffer_t3471122670 * __this, DecoderReplacementFallback_t3042394152 * ___fallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderReplacementFallbackBuffer::get_Remaining()
extern "C"  int32_t DecoderReplacementFallbackBuffer_get_Remaining_m1631894831 (DecoderReplacementFallbackBuffer_t3471122670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderReplacementFallbackBuffer::Fallback(System.Byte[],System.Int32)
extern "C"  bool DecoderReplacementFallbackBuffer_Fallback_m1790184670 (DecoderReplacementFallbackBuffer_t3471122670 * __this, ByteU5BU5D_t3397334013* ___bytesUnknown0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderReplacementFallbackBuffer::GetNextChar()
extern "C"  Il2CppChar DecoderReplacementFallbackBuffer_GetNextChar_m2575703537 (DecoderReplacementFallbackBuffer_t3471122670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderReplacementFallbackBuffer::Reset()
extern "C"  void DecoderReplacementFallbackBuffer_Reset_m2576819665 (DecoderReplacementFallbackBuffer_t3471122670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
