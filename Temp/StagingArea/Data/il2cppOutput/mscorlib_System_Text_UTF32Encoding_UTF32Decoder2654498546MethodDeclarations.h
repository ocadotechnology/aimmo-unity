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

// System.Text.UTF32Encoding/UTF32Decoder
struct UTF32Decoder_t2654498546;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.UTF32Encoding/UTF32Decoder::.ctor(System.Boolean)
extern "C"  void UTF32Decoder__ctor_m265166765 (UTF32Decoder_t2654498546 * __this, bool ___bigEndian0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t UTF32Decoder_GetChars_m3694662036 (UTF32Decoder_t2654498546 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t1328083999* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
