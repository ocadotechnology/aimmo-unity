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

// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext
struct TcpListenerWebSocketContext_t1695227117;
// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// System.String
struct String_t;
// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t204724213;
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
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>
struct Func_2_t353436505;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_TcpClient408947970.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Se204724213.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Logge2598199114.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Aut29593226.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H2661820989.h"

// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::.ctor(System.Net.Sockets.TcpClient,System.String,System.Boolean,WebSocketSharp.Net.ServerSslConfiguration,WebSocketSharp.Logger)
extern "C"  void TcpListenerWebSocketContext__ctor_m1756626393 (TcpListenerWebSocketContext_t1695227117 * __this, TcpClient_t408947970 * ___tcpClient0, String_t* ___protocol1, bool ___secure2, ServerSslConfiguration_t204724213 * ___sslConfig3, Logger_t2598199114 * ___logger4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Logger WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_Log()
extern "C"  Logger_t2598199114 * TcpListenerWebSocketContext_get_Log_m2435211661 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_Stream()
extern "C"  Stream_t3255436806 * TcpListenerWebSocketContext_get_Stream_m347263421 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_CookieCollection()
extern "C"  CookieCollection_t4248997468 * TcpListenerWebSocketContext_get_CookieCollection_m1495417832 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_Headers()
extern "C"  NameValueCollection_t3047564564 * TcpListenerWebSocketContext_get_Headers_m3516833401 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_Host()
extern "C"  String_t* TcpListenerWebSocketContext_get_Host_m2067023892 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_IsAuthenticated()
extern "C"  bool TcpListenerWebSocketContext_get_IsAuthenticated_m823320548 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_IsLocal()
extern "C"  bool TcpListenerWebSocketContext_get_IsLocal_m600042752 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_IsSecureConnection()
extern "C"  bool TcpListenerWebSocketContext_get_IsSecureConnection_m33934590 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_IsWebSocketRequest()
extern "C"  bool TcpListenerWebSocketContext_get_IsWebSocketRequest_m3903716523 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_Origin()
extern "C"  String_t* TcpListenerWebSocketContext_get_Origin_m146258032 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_QueryString()
extern "C"  NameValueCollection_t3047564564 * TcpListenerWebSocketContext_get_QueryString_m1314593930 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_RequestUri()
extern "C"  Uri_t19570940 * TcpListenerWebSocketContext_get_RequestUri_m1062522284 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_SecWebSocketKey()
extern "C"  String_t* TcpListenerWebSocketContext_get_SecWebSocketKey_m2190091515 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_SecWebSocketProtocols()
extern "C"  Il2CppObject* TcpListenerWebSocketContext_get_SecWebSocketProtocols_m3002464522 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_SecWebSocketVersion()
extern "C"  String_t* TcpListenerWebSocketContext_get_SecWebSocketVersion_m2006788820 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_ServerEndPoint()
extern "C"  IPEndPoint_t2615413766 * TcpListenerWebSocketContext_get_ServerEndPoint_m4041910366 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.IPrincipal WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_User()
extern "C"  Il2CppObject * TcpListenerWebSocketContext_get_User_m3019464399 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_UserEndPoint()
extern "C"  IPEndPoint_t2615413766 * TcpListenerWebSocketContext_get_UserEndPoint_m1333352346 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_WebSocket()
extern "C"  WebSocket_t3268376029 * TcpListenerWebSocketContext_get_WebSocket_m334383041 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::Authenticate(WebSocketSharp.Net.AuthenticationSchemes,System.String,System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>)
extern "C"  bool TcpListenerWebSocketContext_Authenticate_m2522963093 (TcpListenerWebSocketContext_t1695227117 * __this, int32_t ___scheme0, String_t* ___realm1, Func_2_t353436505 * ___credentialsFinder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::Close()
extern "C"  void TcpListenerWebSocketContext_Close_m2477292498 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::Close(WebSocketSharp.Net.HttpStatusCode)
extern "C"  void TcpListenerWebSocketContext_Close_m3461308149 (TcpListenerWebSocketContext_t1695227117 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::SendAuthenticationChallenge(System.String)
extern "C"  void TcpListenerWebSocketContext_SendAuthenticationChallenge_m3683962929 (TcpListenerWebSocketContext_t1695227117 * __this, String_t* ___challenge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::ToString()
extern "C"  String_t* TcpListenerWebSocketContext_ToString_m2223862759 (TcpListenerWebSocketContext_t1695227117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
