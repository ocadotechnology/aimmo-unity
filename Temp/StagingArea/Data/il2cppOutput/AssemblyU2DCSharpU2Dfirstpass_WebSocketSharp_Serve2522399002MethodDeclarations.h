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

// WebSocketSharp.Server.WebSocketServer
struct WebSocketServer_t2522399002;
// System.String
struct String_t;
// System.Net.IPAddress
struct IPAddress_t1399971723;
// WebSocketSharp.Logger
struct Logger_t2598199114;
// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t204724213;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>
struct Func_2_t353436505;
// WebSocketSharp.Server.WebSocketServiceManager
struct WebSocketServiceManager_t1683165547;
// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext
struct TcpListenerWebSocketContext_t1695227117;
// System.Uri
struct Uri_t19570940;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_IPAddress1399971723.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Aut29593226.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Se204724213.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_W1695227117.h"
#include "System_System_Uri19570940.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Close2945181741.h"

// System.Void WebSocketSharp.Server.WebSocketServer::.cctor()
extern "C"  void WebSocketServer__cctor_m1094571912 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::.ctor()
extern "C"  void WebSocketServer__ctor_m996350361 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::.ctor(System.Int32)
extern "C"  void WebSocketServer__ctor_m2503069860 (WebSocketServer_t2522399002 * __this, int32_t ___port0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::.ctor(System.String)
extern "C"  void WebSocketServer__ctor_m870766231 (WebSocketServer_t2522399002 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::.ctor(System.Int32,System.Boolean)
extern "C"  void WebSocketServer__ctor_m318184863 (WebSocketServer_t2522399002 * __this, int32_t ___port0, bool ___secure1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::.ctor(System.Net.IPAddress,System.Int32)
extern "C"  void WebSocketServer__ctor_m3825986337 (WebSocketServer_t2522399002 * __this, IPAddress_t1399971723 * ___address0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::.ctor(System.Net.IPAddress,System.Int32,System.Boolean)
extern "C"  void WebSocketServer__ctor_m1140429376 (WebSocketServer_t2522399002 * __this, IPAddress_t1399971723 * ___address0, int32_t ___port1, bool ___secure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress WebSocketSharp.Server.WebSocketServer::get_Address()
extern "C"  IPAddress_t1399971723 * WebSocketServer_get_Address_m2904801550 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::get_AllowForwardedRequest()
extern "C"  bool WebSocketServer_get_AllowForwardedRequest_m2547883508 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::set_AllowForwardedRequest(System.Boolean)
extern "C"  void WebSocketServer_set_AllowForwardedRequest_m3052370913 (WebSocketServer_t2522399002 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Server.WebSocketServer::get_AuthenticationSchemes()
extern "C"  int32_t WebSocketServer_get_AuthenticationSchemes_m845230533 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::set_AuthenticationSchemes(WebSocketSharp.Net.AuthenticationSchemes)
extern "C"  void WebSocketServer_set_AuthenticationSchemes_m2324873824 (WebSocketServer_t2522399002 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::get_IsListening()
extern "C"  bool WebSocketServer_get_IsListening_m3880703575 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::get_IsSecure()
extern "C"  bool WebSocketServer_get_IsSecure_m1995035045 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::get_KeepClean()
extern "C"  bool WebSocketServer_get_KeepClean_m507548450 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::set_KeepClean(System.Boolean)
extern "C"  void WebSocketServer_set_KeepClean_m779031473 (WebSocketServer_t2522399002 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Logger WebSocketSharp.Server.WebSocketServer::get_Log()
extern "C"  Logger_t2598199114 * WebSocketServer_get_Log_m1273824874 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Server.WebSocketServer::get_Port()
extern "C"  int32_t WebSocketServer_get_Port_m3275774095 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.WebSocketServer::get_Realm()
extern "C"  String_t* WebSocketServer_get_Realm_m366830368 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::set_Realm(System.String)
extern "C"  void WebSocketServer_set_Realm_m2642385261 (WebSocketServer_t2522399002 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::get_ReuseAddress()
extern "C"  bool WebSocketServer_get_ReuseAddress_m2819734878 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::set_ReuseAddress(System.Boolean)
extern "C"  void WebSocketServer_set_ReuseAddress_m3074639597 (WebSocketServer_t2522399002 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Server.WebSocketServer::get_SslConfiguration()
extern "C"  ServerSslConfiguration_t204724213 * WebSocketServer_get_SslConfiguration_m1216862498 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential> WebSocketSharp.Server.WebSocketServer::get_UserCredentialsFinder()
extern "C"  Func_2_t353436505 * WebSocketServer_get_UserCredentialsFinder_m3612760604 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::set_UserCredentialsFinder(System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>)
extern "C"  void WebSocketServer_set_UserCredentialsFinder_m2564818549 (WebSocketServer_t2522399002 * __this, Func_2_t353436505 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan WebSocketSharp.Server.WebSocketServer::get_WaitTime()
extern "C"  TimeSpan_t3430258949  WebSocketServer_get_WaitTime_m1529837083 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::set_WaitTime(System.TimeSpan)
extern "C"  void WebSocketServer_set_WaitTime_m2249613342 (WebSocketServer_t2522399002 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Server.WebSocketServiceManager WebSocketSharp.Server.WebSocketServer::get_WebSocketServices()
extern "C"  WebSocketServiceManager_t1683165547 * WebSocketServer_get_WebSocketServices_m230228971 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::abort()
extern "C"  void WebSocketServer_abort_m2034982175 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::checkHostNameForRequest(System.String)
extern "C"  bool WebSocketServer_checkHostNameForRequest_m739659844 (WebSocketServer_t2522399002 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::checkIfAvailable(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String&)
extern "C"  bool WebSocketServer_checkIfAvailable_m752016457 (WebSocketServer_t2522399002 * __this, bool ___ready0, bool ___start1, bool ___shutting2, bool ___stop3, String_t** ___message4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::checkServicePath(System.String,System.String&)
extern "C"  bool WebSocketServer_checkServicePath_m3795053333 (WebSocketServer_t2522399002 * __this, String_t* ___path0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::checkSslConfiguration(WebSocketSharp.Net.ServerSslConfiguration,System.String&)
extern "C"  bool WebSocketServer_checkSslConfiguration_m2072202484 (WebSocketServer_t2522399002 * __this, ServerSslConfiguration_t204724213 * ___configuration0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.WebSocketServer::getRealm()
extern "C"  String_t* WebSocketServer_getRealm_m318371725 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Server.WebSocketServer::getSslConfiguration()
extern "C"  ServerSslConfiguration_t204724213 * WebSocketServer_getSslConfiguration_m653263003 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::init(System.String,System.Net.IPAddress,System.Int32,System.Boolean)
extern "C"  void WebSocketServer_init_m2567503150 (WebSocketServer_t2522399002 * __this, String_t* ___hostname0, IPAddress_t1399971723 * ___address1, int32_t ___port2, bool ___secure3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::processRequest(WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext)
extern "C"  void WebSocketServer_processRequest_m1955026748 (WebSocketServer_t2522399002 * __this, TcpListenerWebSocketContext_t1695227117 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::receiveRequest()
extern "C"  void WebSocketServer_receiveRequest_m3587030499 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::startReceiving()
extern "C"  void WebSocketServer_startReceiving_m1300116887 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::stopReceiving(System.Int32)
extern "C"  void WebSocketServer_stopReceiving_m620248490 (WebSocketServer_t2522399002 * __this, int32_t ___millisecondsTimeout0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::tryCreateUri(System.String,System.Uri&,System.String&)
extern "C"  bool WebSocketServer_tryCreateUri_m3308606569 (Il2CppObject * __this /* static, unused */, String_t* ___uriString0, Uri_t19570940 ** ___result1, String_t** ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::RemoveWebSocketService(System.String)
extern "C"  bool WebSocketServer_RemoveWebSocketService_m110009549 (WebSocketServer_t2522399002 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::Start()
extern "C"  void WebSocketServer_Start_m110469241 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::Stop()
extern "C"  void WebSocketServer_Stop_m1198566745 (WebSocketServer_t2522399002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::Stop(System.UInt16,System.String)
extern "C"  void WebSocketServer_Stop_m3166658705 (WebSocketServer_t2522399002 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::Stop(WebSocketSharp.CloseStatusCode,System.String)
extern "C"  void WebSocketServer_Stop_m2804646395 (WebSocketServer_t2522399002 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
