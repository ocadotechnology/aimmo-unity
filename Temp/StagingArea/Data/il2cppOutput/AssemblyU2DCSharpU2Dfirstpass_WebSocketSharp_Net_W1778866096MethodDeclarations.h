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

// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext
struct HttpListenerWebSocketContext_t1778866096;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t994708409;
// System.String
struct String_t;
// WebSocketSharp.Logger
struct Logger_t2598199114;
// System.IO.Stream
struct Stream_t3255436806;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t4248997468;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.Uri
struct Uri_t19570940;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// System.Security.Principal.IPrincipal
struct IPrincipal_t783141777;
// WebSocketSharp.WebSocket
struct WebSocket_t3268376029;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Ht994708409.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H2661820989.h"

// System.Void WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::.ctor(WebSocketSharp.Net.HttpListenerContext,System.String)
extern "C"  void HttpListenerWebSocketContext__ctor_m3485133604 (HttpListenerWebSocketContext_t1778866096 * __this, HttpListenerContext_t994708409 * ___context0, String_t* ___protocol1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Logger WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_Log()
extern "C"  Logger_t2598199114 * HttpListenerWebSocketContext_get_Log_m411153132 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_Stream()
extern "C"  Stream_t3255436806 * HttpListenerWebSocketContext_get_Stream_m2120357230 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_CookieCollection()
extern "C"  CookieCollection_t4248997468 * HttpListenerWebSocketContext_get_CookieCollection_m4095921403 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_Headers()
extern "C"  NameValueCollection_t3047564564 * HttpListenerWebSocketContext_get_Headers_m3874983692 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_Host()
extern "C"  String_t* HttpListenerWebSocketContext_get_Host_m127174591 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_IsAuthenticated()
extern "C"  bool HttpListenerWebSocketContext_get_IsAuthenticated_m3091368145 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_IsLocal()
extern "C"  bool HttpListenerWebSocketContext_get_IsLocal_m2891168893 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_IsSecureConnection()
extern "C"  bool HttpListenerWebSocketContext_get_IsSecureConnection_m3423482545 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_IsWebSocketRequest()
extern "C"  bool HttpListenerWebSocketContext_get_IsWebSocketRequest_m2323820372 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_Origin()
extern "C"  String_t* HttpListenerWebSocketContext_get_Origin_m290499659 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_QueryString()
extern "C"  NameValueCollection_t3047564564 * HttpListenerWebSocketContext_get_QueryString_m3329285821 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_RequestUri()
extern "C"  Uri_t19570940 * HttpListenerWebSocketContext_get_RequestUri_m4228855779 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_SecWebSocketKey()
extern "C"  String_t* HttpListenerWebSocketContext_get_SecWebSocketKey_m1339412236 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_SecWebSocketProtocols()
extern "C"  Il2CppObject* HttpListenerWebSocketContext_get_SecWebSocketProtocols_m669184913 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_SecWebSocketVersion()
extern "C"  String_t* HttpListenerWebSocketContext_get_SecWebSocketVersion_m47243625 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_ServerEndPoint()
extern "C"  IPEndPoint_t2615413766 * HttpListenerWebSocketContext_get_ServerEndPoint_m3126196027 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.IPrincipal WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_User()
extern "C"  Il2CppObject * HttpListenerWebSocketContext_get_User_m2717993478 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_UserEndPoint()
extern "C"  IPEndPoint_t2615413766 * HttpListenerWebSocketContext_get_UserEndPoint_m1664793999 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_WebSocket()
extern "C"  WebSocket_t3268376029 * HttpListenerWebSocketContext_get_WebSocket_m2489613726 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::Close()
extern "C"  void HttpListenerWebSocketContext_Close_m2207646309 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::Close(WebSocketSharp.Net.HttpStatusCode)
extern "C"  void HttpListenerWebSocketContext_Close_m3939713916 (HttpListenerWebSocketContext_t1778866096 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::ToString()
extern "C"  String_t* HttpListenerWebSocketContext_ToString_m4212653550 (HttpListenerWebSocketContext_t1778866096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
