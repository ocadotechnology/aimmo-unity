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

// System.Text.EncoderReplacementFallbackBuffer
struct EncoderReplacementFallbackBuffer_t1313574570;
// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t4228544112;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_EncoderReplacementFallback4228544112.h"

// System.Void System.Text.EncoderReplacementFallbackBuffer::.ctor(System.Text.EncoderReplacementFallback)
extern "C"  void EncoderReplacementFallbackBuffer__ctor_m4289535750 (EncoderReplacementFallbackBuffer_t1313574570 * __this, EncoderReplacementFallback_t4228544112 * ___fallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.EncoderReplacementFallbackBuffer::get_Remaining()
extern "C"  int32_t EncoderReplacementFallbackBuffer_get_Remaining_m2777488845 (EncoderReplacementFallbackBuffer_t1313574570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Char,System.Int32)
extern "C"  bool EncoderReplacementFallbackBuffer_Fallback_m2957815540 (EncoderReplacementFallbackBuffer_t1313574570 * __this, Il2CppChar ___charUnknown0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
extern "C"  bool EncoderReplacementFallbackBuffer_Fallback_m4111893059 (EncoderReplacementFallbackBuffer_t1313574570 * __this, Il2CppChar ___charUnknownHigh0, Il2CppChar ___charUnknownLow1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Int32)
extern "C"  bool EncoderReplacementFallbackBuffer_Fallback_m2754647939 (EncoderReplacementFallbackBuffer_t1313574570 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.EncoderReplacementFallbackBuffer::GetNextChar()
extern "C"  Il2CppChar EncoderReplacementFallbackBuffer_GetNextChar_m1811006007 (EncoderReplacementFallbackBuffer_t1313574570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
