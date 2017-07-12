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

// WebSocketSharp.Net.HttpConnection
struct HttpConnection_t2649486862;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// WebSocketSharp.Net.EndPointListener
struct EndPointListener_t3937551933;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// System.IO.Stream
struct Stream_t3255436806;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// WebSocketSharp.Net.RequestStream
struct RequestStream_t775716369;
// WebSocketSharp.Net.ResponseStream
struct ResponseStream_t3200689523;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket3821512045.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_E3937551933.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void WebSocketSharp.Net.HttpConnection::.ctor(System.Net.Sockets.Socket,WebSocketSharp.Net.EndPointListener)
extern "C"  void HttpConnection__ctor_m3728184753 (HttpConnection_t2649486862 * __this, Socket_t3821512045 * ___socket0, EndPointListener_t3937551933 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpConnection::get_IsClosed()
extern "C"  bool HttpConnection_get_IsClosed_m627910688 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpConnection::get_IsSecure()
extern "C"  bool HttpConnection_get_IsSecure_m3388935897 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint WebSocketSharp.Net.HttpConnection::get_LocalEndPoint()
extern "C"  IPEndPoint_t2615413766 * HttpConnection_get_LocalEndPoint_m2718784393 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint WebSocketSharp.Net.HttpConnection::get_RemoteEndPoint()
extern "C"  IPEndPoint_t2615413766 * HttpConnection_get_RemoteEndPoint_m3880339724 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpConnection::get_Reuses()
extern "C"  int32_t HttpConnection_get_Reuses_m946144593 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream WebSocketSharp.Net.HttpConnection::get_Stream()
extern "C"  Stream_t3255436806 * HttpConnection_get_Stream_m3057188898 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::close()
extern "C"  void HttpConnection_close_m2934543415 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::closeSocket()
extern "C"  void HttpConnection_closeSocket_m3782249042 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::disposeRequestBuffer()
extern "C"  void HttpConnection_disposeRequestBuffer_m616429139 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::disposeStream()
extern "C"  void HttpConnection_disposeStream_m696878842 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::disposeTimer()
extern "C"  void HttpConnection_disposeTimer_m1617797337 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::init()
extern "C"  void HttpConnection_init_m2507008043 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::onRead(System.IAsyncResult)
extern "C"  void HttpConnection_onRead_m3416102127 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::onTimeout(System.Object)
extern "C"  void HttpConnection_onTimeout_m1875479069 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpConnection::processInput(System.Byte[],System.Int32)
extern "C"  bool HttpConnection_processInput_m3335279548 (HttpConnection_t2649486862 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpConnection::readLineFrom(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern "C"  String_t* HttpConnection_readLineFrom_m1656019638 (HttpConnection_t2649486862 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___length2, int32_t* ___read3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::removeConnection()
extern "C"  void HttpConnection_removeConnection_m920600969 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::unregisterContext()
extern "C"  void HttpConnection_unregisterContext_m258852138 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::Close(System.Boolean)
extern "C"  void HttpConnection_Close_m964863922 (HttpConnection_t2649486862 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::BeginReadRequest()
extern "C"  void HttpConnection_BeginReadRequest_m2188979853 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::Close()
extern "C"  void HttpConnection_Close_m1389512663 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.RequestStream WebSocketSharp.Net.HttpConnection::GetRequestStream(System.Int64,System.Boolean)
extern "C"  RequestStream_t775716369 * HttpConnection_GetRequestStream_m1496219671 (HttpConnection_t2649486862 * __this, int64_t ___contentLength0, bool ___chunked1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.ResponseStream WebSocketSharp.Net.HttpConnection::GetResponseStream()
extern "C"  ResponseStream_t3200689523 * HttpConnection_GetResponseStream_m972324690 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::SendError()
extern "C"  void HttpConnection_SendError_m3341147533 (HttpConnection_t2649486862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::SendError(System.String,System.Int32)
extern "C"  void HttpConnection_SendError_m2050578102 (HttpConnection_t2649486862 * __this, String_t* ___message0, int32_t ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
