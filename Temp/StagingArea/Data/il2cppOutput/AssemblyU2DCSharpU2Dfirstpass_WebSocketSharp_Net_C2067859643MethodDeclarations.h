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

// WebSocketSharp.Net.ChunkStream
struct ChunkStream_t2067859643;
// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t1932982249;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_W1932982249.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_In126533044.h"

// System.Void WebSocketSharp.Net.ChunkStream::.ctor(WebSocketSharp.Net.WebHeaderCollection)
extern "C"  void ChunkStream__ctor_m1904486563 (ChunkStream_t2067859643 * __this, WebHeaderCollection_t1932982249 * ___headers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ChunkStream::.ctor(System.Byte[],System.Int32,System.Int32,WebSocketSharp.Net.WebHeaderCollection)
extern "C"  void ChunkStream__ctor_m3240085466 (ChunkStream_t2067859643 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, WebHeaderCollection_t1932982249 * ___headers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.ChunkStream::get_Headers()
extern "C"  WebHeaderCollection_t1932982249 * ChunkStream_get_Headers_m493706285 (ChunkStream_t2067859643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.ChunkStream::get_ChunkLeft()
extern "C"  int32_t ChunkStream_get_ChunkLeft_m948935131 (ChunkStream_t2067859643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.ChunkStream::get_WantMore()
extern "C"  bool ChunkStream_get_WantMore_m66851342 (ChunkStream_t2067859643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.ChunkStream::read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ChunkStream_read_m3957930911 (ChunkStream_t2067859643 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.ChunkStream::removeChunkExtension(System.String)
extern "C"  String_t* ChunkStream_removeChunkExtension_m3777690659 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.InputChunkState WebSocketSharp.Net.ChunkStream::seekCrLf(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_seekCrLf_m357034401 (ChunkStream_t2067859643 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t* ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.InputChunkState WebSocketSharp.Net.ChunkStream::setChunkSize(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_setChunkSize_m676804000 (ChunkStream_t2067859643 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t* ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.InputChunkState WebSocketSharp.Net.ChunkStream::setTrailer(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_setTrailer_m2569390261 (ChunkStream_t2067859643 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t* ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ChunkStream::throwProtocolViolation(System.String)
extern "C"  void ChunkStream_throwProtocolViolation_m3826620855 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ChunkStream::write(System.Byte[],System.Int32&,System.Int32)
extern "C"  void ChunkStream_write_m1906427758 (ChunkStream_t2067859643 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t* ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.InputChunkState WebSocketSharp.Net.ChunkStream::writeData(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_writeData_m205095875 (ChunkStream_t2067859643 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t* ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ChunkStream::ResetBuffer()
extern "C"  void ChunkStream_ResetBuffer_m1783873481 (ChunkStream_t2067859643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.ChunkStream::WriteAndReadBack(System.Byte[],System.Int32,System.Int32,System.Int32)
extern "C"  int32_t ChunkStream_WriteAndReadBack_m3204744295 (ChunkStream_t2067859643 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___writeCount2, int32_t ___readCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.ChunkStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ChunkStream_Read_m545985663 (ChunkStream_t2067859643 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ChunkStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ChunkStream_Write_m2417255128 (ChunkStream_t2067859643 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
