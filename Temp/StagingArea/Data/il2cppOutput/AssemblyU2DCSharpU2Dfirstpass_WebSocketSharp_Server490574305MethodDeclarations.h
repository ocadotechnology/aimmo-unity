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

// WebSocketSharp.Server.HttpServer
struct HttpServer_t490574305;
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
// System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>
struct EventHandler_1_t3804744336;
// System.Uri
struct Uri_t19570940;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t994708409;
// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext
struct HttpListenerWebSocketContext_t1778866096;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_IPAddress1399971723.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Aut29593226.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Se204724213.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "System_System_Uri19570940.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Ht994708409.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_W1778866096.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Close2945181741.h"

// System.Void WebSocketSharp.Server.HttpServer::.ctor()
extern "C"  void HttpServer__ctor_m3575891652 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::.ctor(System.Int32)
extern "C"  void HttpServer__ctor_m4088268605 (HttpServer_t490574305 * __this, int32_t ___port0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::.ctor(System.String)
extern "C"  void HttpServer__ctor_m1320810226 (HttpServer_t490574305 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::.ctor(System.Int32,System.Boolean)
extern "C"  void HttpServer__ctor_m748177436 (HttpServer_t490574305 * __this, int32_t ___port0, bool ___secure1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::.ctor(System.Net.IPAddress,System.Int32)
extern "C"  void HttpServer__ctor_m2896597782 (HttpServer_t490574305 * __this, IPAddress_t1399971723 * ___address0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::.ctor(System.Net.IPAddress,System.Int32,System.Boolean)
extern "C"  void HttpServer__ctor_m3253538023 (HttpServer_t490574305 * __this, IPAddress_t1399971723 * ___address0, int32_t ___port1, bool ___secure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress WebSocketSharp.Server.HttpServer::get_Address()
extern "C"  IPAddress_t1399971723 * HttpServer_get_Address_m2668351477 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Server.HttpServer::get_AuthenticationSchemes()
extern "C"  int32_t HttpServer_get_AuthenticationSchemes_m1197843204 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::set_AuthenticationSchemes(WebSocketSharp.Net.AuthenticationSchemes)
extern "C"  void HttpServer_set_AuthenticationSchemes_m298005391 (HttpServer_t490574305 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.HttpServer::get_IsListening()
extern "C"  bool HttpServer_get_IsListening_m4166306376 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.HttpServer::get_IsSecure()
extern "C"  bool HttpServer_get_IsSecure_m604268676 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.HttpServer::get_KeepClean()
extern "C"  bool HttpServer_get_KeepClean_m3637888823 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::set_KeepClean(System.Boolean)
extern "C"  void HttpServer_set_KeepClean_m744368172 (HttpServer_t490574305 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Logger WebSocketSharp.Server.HttpServer::get_Log()
extern "C"  Logger_t2598199114 * HttpServer_get_Log_m155229409 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Server.HttpServer::get_Port()
extern "C"  int32_t HttpServer_get_Port_m313531590 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.HttpServer::get_Realm()
extern "C"  String_t* HttpServer_get_Realm_m3236292635 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::set_Realm(System.String)
extern "C"  void HttpServer_set_Realm_m650861962 (HttpServer_t490574305 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.HttpServer::get_ReuseAddress()
extern "C"  bool HttpServer_get_ReuseAddress_m3223227691 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::set_ReuseAddress(System.Boolean)
extern "C"  void HttpServer_set_ReuseAddress_m1036989178 (HttpServer_t490574305 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.HttpServer::get_RootPath()
extern "C"  String_t* HttpServer_get_RootPath_m2258737303 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::set_RootPath(System.String)
extern "C"  void HttpServer_set_RootPath_m2989347614 (HttpServer_t490574305 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Server.HttpServer::get_SslConfiguration()
extern "C"  ServerSslConfiguration_t204724213 * HttpServer_get_SslConfiguration_m1545679065 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::set_SslConfiguration(WebSocketSharp.Net.ServerSslConfiguration)
extern "C"  void HttpServer_set_SslConfiguration_m2979698496 (HttpServer_t490574305 * __this, ServerSslConfiguration_t204724213 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential> WebSocketSharp.Server.HttpServer::get_UserCredentialsFinder()
extern "C"  Func_2_t353436505 * HttpServer_get_UserCredentialsFinder_m1402936359 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::set_UserCredentialsFinder(System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>)
extern "C"  void HttpServer_set_UserCredentialsFinder_m3615313138 (HttpServer_t490574305 * __this, Func_2_t353436505 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan WebSocketSharp.Server.HttpServer::get_WaitTime()
extern "C"  TimeSpan_t3430258949  HttpServer_get_WaitTime_m1603282314 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::set_WaitTime(System.TimeSpan)
extern "C"  void HttpServer_set_WaitTime_m3659077757 (HttpServer_t490574305 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Server.WebSocketServiceManager WebSocketSharp.Server.HttpServer::get_WebSocketServices()
extern "C"  WebSocketServiceManager_t1683165547 * HttpServer_get_WebSocketServices_m730900462 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnConnect(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnConnect_m4038794663 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnConnect(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnConnect_m1926187808 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnDelete(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnDelete_m2197607976 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnDelete(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnDelete_m3841313827 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnGet(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnGet_m3527779851 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnGet(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnGet_m1696473602 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnHead(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnHead_m1398547105 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnHead(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnHead_m2601059134 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnOptions(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnOptions_m932502717 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnOptions(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnOptions_m2326712748 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnPatch(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnPatch_m894976215 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnPatch(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnPatch_m463578512 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnPost(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnPost_m2787760845 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnPost(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnPost_m2664282582 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnPut(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnPut_m3700085258 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnPut(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnPut_m372802239 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnTrace(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnTrace_m410240498 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnTrace(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnTrace_m702394079 (HttpServer_t490574305 * __this, EventHandler_1_t3804744336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::abort()
extern "C"  void HttpServer_abort_m3319162842 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.HttpServer::checkIfAvailable(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String&)
extern "C"  bool HttpServer_checkIfAvailable_m158217152 (HttpServer_t490574305 * __this, bool ___ready0, bool ___start1, bool ___shutting2, bool ___stop3, String_t** ___message4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.HttpServer::checkIfCertificateExists()
extern "C"  String_t* HttpServer_checkIfCertificateExists_m1591085033 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.HttpServer::convertToString(System.Net.IPAddress)
extern "C"  String_t* HttpServer_convertToString_m2079828125 (Il2CppObject * __this /* static, unused */, IPAddress_t1399971723 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.HttpServer::getHost(System.Uri)
extern "C"  String_t* HttpServer_getHost_m3033993274 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::init(System.String,System.Net.IPAddress,System.Int32,System.Boolean)
extern "C"  void HttpServer_init_m1184039543 (HttpServer_t490574305 * __this, String_t* ___hostname0, IPAddress_t1399971723 * ___address1, int32_t ___port2, bool ___secure3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::processRequest(WebSocketSharp.Net.HttpListenerContext)
extern "C"  void HttpServer_processRequest_m1418434493 (HttpServer_t490574305 * __this, HttpListenerContext_t994708409 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::processRequest(WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext)
extern "C"  void HttpServer_processRequest_m484473906 (HttpServer_t490574305 * __this, HttpListenerWebSocketContext_t1778866096 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::receiveRequest()
extern "C"  void HttpServer_receiveRequest_m1235804616 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::startReceiving()
extern "C"  void HttpServer_startReceiving_m1021504868 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::stopReceiving(System.Int32)
extern "C"  void HttpServer_stopReceiving_m59977419 (HttpServer_t490574305 * __this, int32_t ___millisecondsTimeout0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.HttpServer::tryCreateUri(System.String,System.Uri&,System.String&)
extern "C"  bool HttpServer_tryCreateUri_m3071841914 (Il2CppObject * __this /* static, unused */, String_t* ___uriString0, Uri_t19570940 ** ___result1, String_t** ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Server.HttpServer::GetFile(System.String)
extern "C"  ByteU5BU5D_t3397334013* HttpServer_GetFile_m1130808468 (HttpServer_t490574305 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.HttpServer::RemoveWebSocketService(System.String)
extern "C"  bool HttpServer_RemoveWebSocketService_m106077956 (HttpServer_t490574305 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::Start()
extern "C"  void HttpServer_Start_m2500234980 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::Stop()
extern "C"  void HttpServer_Stop_m3140347046 (HttpServer_t490574305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::Stop(System.UInt16,System.String)
extern "C"  void HttpServer_Stop_m3033611022 (HttpServer_t490574305 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::Stop(WebSocketSharp.CloseStatusCode,System.String)
extern "C"  void HttpServer_Stop_m1176165942 (HttpServer_t490574305 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
