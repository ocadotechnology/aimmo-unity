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

// WebSocketSharp.Net.Chunk
struct Chunk_t2303927151;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void WebSocketSharp.Net.Chunk::.ctor(System.Byte[])
extern "C"  void Chunk__ctor_m1336237519 (Chunk_t2303927151 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.Chunk::get_ReadLeft()
extern "C"  int32_t Chunk_get_ReadLeft_m2364193784 (Chunk_t2303927151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.Chunk::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t Chunk_Read_m1773231755 (Chunk_t2303927151 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
