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

// WebSocketSharp.Net.ChunkedRequestStream
struct ChunkedRequestStream_t3311534059;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t994708409;
// WebSocketSharp.Net.ChunkStream
struct ChunkStream_t2067859643;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Ht994708409.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_C2067859643.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void WebSocketSharp.Net.ChunkedRequestStream::.ctor(System.IO.Stream,System.Byte[],System.Int32,System.Int32,WebSocketSharp.Net.HttpListenerContext)
extern "C"  void ChunkedRequestStream__ctor_m3047915735 (ChunkedRequestStream_t3311534059 * __this, Stream_t3255436806 * ___stream0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___offset2, int32_t ___count3, HttpListenerContext_t994708409 * ___context4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.ChunkStream WebSocketSharp.Net.ChunkedRequestStream::get_Decoder()
extern "C"  ChunkStream_t2067859643 * ChunkedRequestStream_get_Decoder_m960544865 (ChunkedRequestStream_t3311534059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ChunkedRequestStream::set_Decoder(WebSocketSharp.Net.ChunkStream)
extern "C"  void ChunkedRequestStream_set_Decoder_m353815958 (ChunkedRequestStream_t3311534059 * __this, ChunkStream_t2067859643 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ChunkedRequestStream::onRead(System.IAsyncResult)
extern "C"  void ChunkedRequestStream_onRead_m1311338092 (ChunkedRequestStream_t3311534059 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WebSocketSharp.Net.ChunkedRequestStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ChunkedRequestStream_BeginRead_m3263361920 (ChunkedRequestStream_t3311534059 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ChunkedRequestStream::Close()
extern "C"  void ChunkedRequestStream_Close_m3914429764 (ChunkedRequestStream_t3311534059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.ChunkedRequestStream::EndRead(System.IAsyncResult)
extern "C"  int32_t ChunkedRequestStream_EndRead_m1543652292 (ChunkedRequestStream_t3311534059 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.ChunkedRequestStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ChunkedRequestStream_Read_m1639331531 (ChunkedRequestStream_t3311534059 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
