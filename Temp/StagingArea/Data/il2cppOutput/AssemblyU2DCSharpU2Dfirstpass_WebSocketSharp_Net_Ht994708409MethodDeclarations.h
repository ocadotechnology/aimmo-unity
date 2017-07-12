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

// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t994708409;
// WebSocketSharp.Net.HttpConnection
struct HttpConnection_t2649486862;
// System.String
struct String_t;
// WebSocketSharp.Net.HttpListener
struct HttpListener_t4179429670;
// WebSocketSharp.Net.HttpListenerRequest
struct HttpListenerRequest_t2316381291;
// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t2223360553;
// System.Security.Principal.IPrincipal
struct IPrincipal_t783141777;
// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext
struct HttpListenerWebSocketContext_t1778866096;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H2649486862.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H4179429670.h"

// System.Void WebSocketSharp.Net.HttpListenerContext::.ctor(WebSocketSharp.Net.HttpConnection)
extern "C"  void HttpListenerContext__ctor_m3128637270 (HttpListenerContext_t994708409 * __this, HttpConnection_t2649486862 * ___connection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpConnection WebSocketSharp.Net.HttpListenerContext::get_Connection()
extern "C"  HttpConnection_t2649486862 * HttpListenerContext_get_Connection_m342591114 (HttpListenerContext_t994708409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerContext::get_ErrorMessage()
extern "C"  String_t* HttpListenerContext_get_ErrorMessage_m3601084513 (HttpListenerContext_t994708409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerContext::set_ErrorMessage(System.String)
extern "C"  void HttpListenerContext_set_ErrorMessage_m150462742 (HttpListenerContext_t994708409 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpListenerContext::get_ErrorStatus()
extern "C"  int32_t HttpListenerContext_get_ErrorStatus_m3303887233 (HttpListenerContext_t994708409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerContext::set_ErrorStatus(System.Int32)
extern "C"  void HttpListenerContext_set_ErrorStatus_m3473805932 (HttpListenerContext_t994708409 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerContext::get_HasError()
extern "C"  bool HttpListenerContext_get_HasError_m515020841 (HttpListenerContext_t994708409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListener WebSocketSharp.Net.HttpListenerContext::get_Listener()
extern "C"  HttpListener_t4179429670 * HttpListenerContext_get_Listener_m555843898 (HttpListenerContext_t994708409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerContext::set_Listener(WebSocketSharp.Net.HttpListener)
extern "C"  void HttpListenerContext_set_Listener_m1752999069 (HttpListenerContext_t994708409 * __this, HttpListener_t4179429670 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerRequest WebSocketSharp.Net.HttpListenerContext::get_Request()
extern "C"  HttpListenerRequest_t2316381291 * HttpListenerContext_get_Request_m3745322030 (HttpListenerContext_t994708409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerResponse WebSocketSharp.Net.HttpListenerContext::get_Response()
extern "C"  HttpListenerResponse_t2223360553 * HttpListenerContext_get_Response_m131054376 (HttpListenerContext_t994708409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.IPrincipal WebSocketSharp.Net.HttpListenerContext::get_User()
extern "C"  Il2CppObject * HttpListenerContext_get_User_m2098031777 (HttpListenerContext_t994708409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerContext::Authenticate()
extern "C"  bool HttpListenerContext_Authenticate_m3840549151 (HttpListenerContext_t994708409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerContext::Register()
extern "C"  bool HttpListenerContext_Register_m3572434627 (HttpListenerContext_t994708409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerContext::Unregister()
extern "C"  void HttpListenerContext_Unregister_m465381150 (HttpListenerContext_t994708409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext WebSocketSharp.Net.HttpListenerContext::AcceptWebSocket(System.String)
extern "C"  HttpListenerWebSocketContext_t1778866096 * HttpListenerContext_AcceptWebSocket_m2049961112 (HttpListenerContext_t994708409 * __this, String_t* ___protocol0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
