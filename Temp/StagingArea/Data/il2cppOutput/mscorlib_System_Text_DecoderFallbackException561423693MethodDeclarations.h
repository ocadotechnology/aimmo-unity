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

// System.Text.DecoderFallbackException
struct DecoderFallbackException_t561423693;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Text.DecoderFallbackException::.ctor()
extern "C"  void DecoderFallbackException__ctor_m3246478881 (DecoderFallbackException_t561423693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderFallbackException::.ctor(System.String)
extern "C"  void DecoderFallbackException__ctor_m3081822699 (DecoderFallbackException_t561423693 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderFallbackException::.ctor(System.String,System.Byte[],System.Int32)
extern "C"  void DecoderFallbackException__ctor_m2025033573 (DecoderFallbackException_t561423693 * __this, String_t* ___message0, ByteU5BU5D_t3397334013* ___bytesUnknown1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
