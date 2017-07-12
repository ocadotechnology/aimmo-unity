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

// System.Text.Decoder
struct Decoder_t3792697818;
// System.Text.DecoderFallback
struct DecoderFallback_t1715117820;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t4206371382;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_DecoderFallback1715117820.h"

// System.Void System.Text.Decoder::.ctor()
extern "C"  void Decoder__ctor_m2623573910 (Decoder_t3792697818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C"  void Decoder_set_Fallback_m1780632169 (Decoder_t3792697818 * __this, DecoderFallback_t1715117820 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C"  DecoderFallbackBuffer_t4206371382 * Decoder_get_FallbackBuffer_m2995053018 (Decoder_t3792697818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
