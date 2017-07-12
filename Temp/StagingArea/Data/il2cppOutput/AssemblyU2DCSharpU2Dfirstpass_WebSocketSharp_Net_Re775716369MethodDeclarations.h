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

// WebSocketSharp.Net.RequestStream
struct RequestStream_t775716369;
// System.IO.Stream
struct Stream_t3255436806;
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
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void WebSocketSharp.Net.RequestStream::.ctor(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern "C"  void RequestStream__ctor_m2771029720 (RequestStream_t775716369 * __this, Stream_t3255436806 * ___stream0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___offset2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.RequestStream::.ctor(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Int64)
extern "C"  void RequestStream__ctor_m1603562370 (RequestStream_t775716369 * __this, Stream_t3255436806 * ___stream0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___offset2, int32_t ___count3, int64_t ___contentLength4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.RequestStream::get_CanRead()
extern "C"  bool RequestStream_get_CanRead_m1724409997 (RequestStream_t775716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.RequestStream::get_CanSeek()
extern "C"  bool RequestStream_get_CanSeek_m2302615719 (RequestStream_t775716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.RequestStream::get_CanWrite()
extern "C"  bool RequestStream_get_CanWrite_m4283748608 (RequestStream_t775716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.Net.RequestStream::get_Length()
extern "C"  int64_t RequestStream_get_Length_m1469279312 (RequestStream_t775716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.Net.RequestStream::get_Position()
extern "C"  int64_t RequestStream_get_Position_m2822189811 (RequestStream_t775716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.RequestStream::set_Position(System.Int64)
extern "C"  void RequestStream_set_Position_m2497494976 (RequestStream_t775716369 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.RequestStream::fillFromBuffer(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t RequestStream_fillFromBuffer_m4068383544 (RequestStream_t775716369 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WebSocketSharp.Net.RequestStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RequestStream_BeginRead_m1285153820 (RequestStream_t775716369 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WebSocketSharp.Net.RequestStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RequestStream_BeginWrite_m3880227079 (RequestStream_t775716369 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.RequestStream::Close()
extern "C"  void RequestStream_Close_m1327802972 (RequestStream_t775716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.RequestStream::EndRead(System.IAsyncResult)
extern "C"  int32_t RequestStream_EndRead_m2230800524 (RequestStream_t775716369 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.RequestStream::EndWrite(System.IAsyncResult)
extern "C"  void RequestStream_EndWrite_m2885736129 (RequestStream_t775716369 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.RequestStream::Flush()
extern "C"  void RequestStream_Flush_m1327985198 (RequestStream_t775716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.RequestStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t RequestStream_Read_m1880128429 (RequestStream_t775716369 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.Net.RequestStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t RequestStream_Seek_m4059273732 (RequestStream_t775716369 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.RequestStream::SetLength(System.Int64)
extern "C"  void RequestStream_SetLength_m6429860 (RequestStream_t775716369 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.RequestStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void RequestStream_Write_m3820334904 (RequestStream_t775716369 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
