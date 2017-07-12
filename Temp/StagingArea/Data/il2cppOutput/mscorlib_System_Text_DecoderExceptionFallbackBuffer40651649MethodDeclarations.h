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

// System.Text.DecoderExceptionFallbackBuffer
struct DecoderExceptionFallbackBuffer_t40651649;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.DecoderExceptionFallbackBuffer::.ctor()
extern "C"  void DecoderExceptionFallbackBuffer__ctor_m509091621 (DecoderExceptionFallbackBuffer_t40651649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderExceptionFallbackBuffer::get_Remaining()
extern "C"  int32_t DecoderExceptionFallbackBuffer_get_Remaining_m282446616 (DecoderExceptionFallbackBuffer_t40651649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderExceptionFallbackBuffer::Fallback(System.Byte[],System.Int32)
extern "C"  bool DecoderExceptionFallbackBuffer_Fallback_m3457210607 (DecoderExceptionFallbackBuffer_t40651649 * __this, ByteU5BU5D_t3397334013* ___bytesUnknown0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderExceptionFallbackBuffer::GetNextChar()
extern "C"  Il2CppChar DecoderExceptionFallbackBuffer_GetNextChar_m1727394816 (DecoderExceptionFallbackBuffer_t40651649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
