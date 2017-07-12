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

// WebSocketSharp.Net.ResponseStream
struct ResponseStream_t3200689523;
// System.IO.Stream
struct Stream_t3255436806;
// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t2223360553;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H2223360553.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void WebSocketSharp.Net.ResponseStream::.ctor(System.IO.Stream,WebSocketSharp.Net.HttpListenerResponse,System.Boolean)
extern "C"  void ResponseStream__ctor_m2615872355 (ResponseStream_t3200689523 * __this, Stream_t3255436806 * ___stream0, HttpListenerResponse_t2223360553 * ___response1, bool ___ignoreWriteExceptions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.ResponseStream::get_CanRead()
extern "C"  bool ResponseStream_get_CanRead_m3506824543 (ResponseStream_t3200689523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.ResponseStream::get_CanSeek()
extern "C"  bool ResponseStream_get_CanSeek_m3305569561 (ResponseStream_t3200689523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.ResponseStream::get_CanWrite()
extern "C"  bool ResponseStream_get_CanWrite_m2558153854 (ResponseStream_t3200689523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.Net.ResponseStream::get_Length()
extern "C"  int64_t ResponseStream_get_Length_m2246055300 (ResponseStream_t3200689523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.Net.ResponseStream::get_Position()
extern "C"  int64_t ResponseStream_get_Position_m2806549473 (ResponseStream_t3200689523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::set_Position(System.Int64)
extern "C"  void ResponseStream_set_Position_m2974343758 (ResponseStream_t3200689523 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.ResponseStream::flush(System.Boolean)
extern "C"  bool ResponseStream_flush_m2146861439 (ResponseStream_t3200689523 * __this, bool ___closing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::flushBody(System.Boolean)
extern "C"  void ResponseStream_flushBody_m238409935 (ResponseStream_t3200689523 * __this, bool ___closing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.ResponseStream::flushHeaders(System.Boolean)
extern "C"  bool ResponseStream_flushHeaders_m1008557487 (ResponseStream_t3200689523 * __this, bool ___closing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.ResponseStream::getChunkSizeBytes(System.Int32,System.Boolean)
extern "C"  ByteU5BU5D_t3397334013* ResponseStream_getChunkSizeBytes_m13011647 (Il2CppObject * __this /* static, unused */, int32_t ___size0, bool ___final1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::writeChunked(System.Byte[],System.Int32,System.Int32)
extern "C"  void ResponseStream_writeChunked_m2571045390 (ResponseStream_t3200689523 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::writeChunkedWithoutThrowingException(System.Byte[],System.Int32,System.Int32)
extern "C"  void ResponseStream_writeChunkedWithoutThrowingException_m3406368529 (ResponseStream_t3200689523 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::writeWithoutThrowingException(System.Byte[],System.Int32,System.Int32)
extern "C"  void ResponseStream_writeWithoutThrowingException_m444580247 (ResponseStream_t3200689523 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::Close(System.Boolean)
extern "C"  void ResponseStream_Close_m245165781 (ResponseStream_t3200689523 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::InternalWrite(System.Byte[],System.Int32,System.Int32)
extern "C"  void ResponseStream_InternalWrite_m725358113 (ResponseStream_t3200689523 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WebSocketSharp.Net.ResponseStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ResponseStream_BeginRead_m2360555986 (ResponseStream_t3200689523 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WebSocketSharp.Net.ResponseStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ResponseStream_BeginWrite_m2404160749 (ResponseStream_t3200689523 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::Close()
extern "C"  void ResponseStream_Close_m845055774 (ResponseStream_t3200689523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::Dispose(System.Boolean)
extern "C"  void ResponseStream_Dispose_m2261148878 (ResponseStream_t3200689523 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.ResponseStream::EndRead(System.IAsyncResult)
extern "C"  int32_t ResponseStream_EndRead_m3614824094 (ResponseStream_t3200689523 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::EndWrite(System.IAsyncResult)
extern "C"  void ResponseStream_EndWrite_m2273389747 (ResponseStream_t3200689523 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::Flush()
extern "C"  void ResponseStream_Flush_m2216062200 (ResponseStream_t3200689523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.ResponseStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ResponseStream_Read_m1480931879 (ResponseStream_t3200689523 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.Net.ResponseStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ResponseStream_Seek_m3975711372 (ResponseStream_t3200689523 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::SetLength(System.Int64)
extern "C"  void ResponseStream_SetLength_m1600936398 (ResponseStream_t3200689523 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ResponseStream_Write_m3798778106 (ResponseStream_t3200689523 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::.cctor()
extern "C"  void ResponseStream__cctor_m1098785847 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
