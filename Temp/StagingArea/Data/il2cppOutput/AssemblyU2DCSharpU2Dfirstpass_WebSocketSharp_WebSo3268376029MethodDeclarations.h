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

// WebSocketSharp.WebSocket
struct WebSocket_t3268376029;
// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext
struct HttpListenerWebSocketContext_t1778866096;
// System.String
struct String_t;
// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext
struct TcpListenerWebSocketContext_t1695227117;
// System.String[]
struct StringU5BU5D_t1642385972;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t4248997468;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String>
struct Func_2_t1909060290;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Net.Cookie>
struct IEnumerable_1_t2118315505;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_t3911206805;
// WebSocketSharp.Logger
struct Logger_t2598199114;
// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_t1159130081;
// System.Uri
struct Uri_t19570940;
// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_t3230782241;
// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_t3388497467;
// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t1481358898;
// System.EventHandler
struct EventHandler_t277755526;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t3488732344;
// WebSocketSharp.HttpResponse
struct HttpResponse_t2820540315;
// WebSocketSharp.WebSocketFrame
struct WebSocketFrame_t764750278;
// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t344507773;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// WebSocketSharp.HttpRequest
struct HttpRequest_t1845443631;
// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_t2890051726;
// System.Exception
struct Exception_t1927440687;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// System.IO.Stream
struct Stream_t3255436806;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.IO.FileInfo
struct FileInfo_t3153503742;
// System.Collections.Generic.Dictionary`2<WebSocketSharp.CompressionMethod,System.Byte[]>
struct Dictionary_2_t1575245043;
// System.Collections.Generic.Dictionary`2<WebSocketSharp.CompressionMethod,System.IO.Stream>
struct Dictionary_2_t1433347836;
// WebSocketSharp.Net.Cookie
struct Cookie_t1826188460;
// System.IAsyncResult
struct IAsyncResult_t1999651008;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_W1778866096.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_W1695227117.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Compr4066553457.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Logge2598199114.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_WebSo2935910988.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_C1159130081.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_EventHandler277755526.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_W3488732344.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_HttpR2820540315.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_WebSoc764750278.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_CloseE344507773.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H2661820989.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Messa2890051726.h"
#include "mscorlib_System_Exception1927440687.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Close2945181741.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_C4248997468.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Opcod2313788840.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Fin2752139063.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_HttpR1845443631.h"
#include "mscorlib_System_IO_FileInfo3153503742.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_C1826188460.h"

// System.Void WebSocketSharp.WebSocket::.cctor()
extern "C"  void WebSocket__cctor_m4243690512 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::.ctor(WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext,System.String)
extern "C"  void WebSocket__ctor_m3260610799 (WebSocket_t3268376029 * __this, HttpListenerWebSocketContext_t1778866096 * ___context0, String_t* ___protocol1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::.ctor(WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext,System.String)
extern "C"  void WebSocket__ctor_m3270823202 (WebSocket_t3268376029 * __this, TcpListenerWebSocketContext_t1695227117 * ___context0, String_t* ___protocol1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::.ctor(System.String,System.String[])
extern "C"  void WebSocket__ctor_m3192051325 (WebSocket_t3268376029 * __this, String_t* ___url0, StringU5BU5D_t1642385972* ___protocols1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.WebSocket::get_CookieCollection()
extern "C"  CookieCollection_t4248997468 * WebSocket_get_CookieCollection_m2381015991 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String> WebSocketSharp.WebSocket::get_CustomHandshakeRequestChecker()
extern "C"  Func_2_t1909060290 * WebSocket_get_CustomHandshakeRequestChecker_m1582212324 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_CustomHandshakeRequestChecker(System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String>)
extern "C"  void WebSocket_set_CustomHandshakeRequestChecker_m3294677473 (WebSocket_t3268376029 * __this, Func_2_t1909060290 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::get_HasMessage()
extern "C"  bool WebSocket_get_HasMessage_m3308060819 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::get_IgnoreExtensions()
extern "C"  bool WebSocket_get_IgnoreExtensions_m83391850 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_IgnoreExtensions(System.Boolean)
extern "C"  void WebSocket_set_IgnoreExtensions_m3239950823 (WebSocket_t3268376029 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::get_IsConnected()
extern "C"  bool WebSocket_get_IsConnected_m2961684967 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.CompressionMethod WebSocketSharp.WebSocket::get_Compression()
extern "C"  uint8_t WebSocket_get_Compression_m1230577797 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_Compression(WebSocketSharp.CompressionMethod)
extern "C"  void WebSocket_set_Compression_m496973120 (WebSocket_t3268376029 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Net.Cookie> WebSocketSharp.WebSocket::get_Cookies()
extern "C"  Il2CppObject* WebSocket_get_Cookies_m260109651 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::get_Credentials()
extern "C"  NetworkCredential_t3911206805 * WebSocket_get_Credentials_m3574230656 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::get_EmitOnPing()
extern "C"  bool WebSocket_get_EmitOnPing_m2000092508 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_EmitOnPing(System.Boolean)
extern "C"  void WebSocket_set_EmitOnPing_m448150073 (WebSocket_t3268376029 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::get_EnableRedirection()
extern "C"  bool WebSocket_get_EnableRedirection_m1198225025 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_EnableRedirection(System.Boolean)
extern "C"  void WebSocket_set_EnableRedirection_m3885817072 (WebSocket_t3268376029 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::get_Extensions()
extern "C"  String_t* WebSocket_get_Extensions_m3340942609 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::get_IsAlive()
extern "C"  bool WebSocket_get_IsAlive_m3301145411 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::get_IsSecure()
extern "C"  bool WebSocket_get_IsSecure_m990175451 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Logger WebSocketSharp.WebSocket::get_Log()
extern "C"  Logger_t2598199114 * WebSocket_get_Log_m1742957638 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_Log(WebSocketSharp.Logger)
extern "C"  void WebSocket_set_Log_m3437765705 (WebSocket_t3268376029 * __this, Logger_t2598199114 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::get_Origin()
extern "C"  String_t* WebSocket_get_Origin_m1625253623 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_Origin(System.String)
extern "C"  void WebSocket_set_Origin_m2555033344 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::get_Protocol()
extern "C"  String_t* WebSocket_get_Protocol_m1183893005 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_Protocol(System.String)
extern "C"  void WebSocket_set_Protocol_m1199814390 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketState WebSocketSharp.WebSocket::get_ReadyState()
extern "C"  uint16_t WebSocket_get_ReadyState_m252666978 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.ClientSslConfiguration WebSocketSharp.WebSocket::get_SslConfiguration()
extern "C"  ClientSslConfiguration_t1159130081 * WebSocket_get_SslConfiguration_m918493670 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_SslConfiguration(WebSocketSharp.Net.ClientSslConfiguration)
extern "C"  void WebSocket_set_SslConfiguration_m861371045 (WebSocket_t3268376029 * __this, ClientSslConfiguration_t1159130081 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.WebSocket::get_Url()
extern "C"  Uri_t19570940 * WebSocket_get_Url_m3790314339 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan WebSocketSharp.WebSocket::get_WaitTime()
extern "C"  TimeSpan_t3430258949  WebSocket_get_WaitTime_m2466796097 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_WaitTime(System.TimeSpan)
extern "C"  void WebSocket_set_WaitTime_m2472625442 (WebSocket_t3268376029 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::add_OnClose(System.EventHandler`1<WebSocketSharp.CloseEventArgs>)
extern "C"  void WebSocket_add_OnClose_m941233690 (WebSocket_t3268376029 * __this, EventHandler_1_t3230782241 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::remove_OnClose(System.EventHandler`1<WebSocketSharp.CloseEventArgs>)
extern "C"  void WebSocket_remove_OnClose_m152785435 (WebSocket_t3268376029 * __this, EventHandler_1_t3230782241 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::add_OnError(System.EventHandler`1<WebSocketSharp.ErrorEventArgs>)
extern "C"  void WebSocket_add_OnError_m3672513798 (WebSocket_t3268376029 * __this, EventHandler_1_t3388497467 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::remove_OnError(System.EventHandler`1<WebSocketSharp.ErrorEventArgs>)
extern "C"  void WebSocket_remove_OnError_m2547405635 (WebSocket_t3268376029 * __this, EventHandler_1_t3388497467 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::add_OnMessage(System.EventHandler`1<WebSocketSharp.MessageEventArgs>)
extern "C"  void WebSocket_add_OnMessage_m3974864524 (WebSocket_t3268376029 * __this, EventHandler_1_t1481358898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::remove_OnMessage(System.EventHandler`1<WebSocketSharp.MessageEventArgs>)
extern "C"  void WebSocket_remove_OnMessage_m1562631879 (WebSocket_t3268376029 * __this, EventHandler_1_t1481358898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::add_OnOpen(System.EventHandler)
extern "C"  void WebSocket_add_OnOpen_m2401961247 (WebSocket_t3268376029 * __this, EventHandler_t277755526 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::remove_OnOpen(System.EventHandler)
extern "C"  void WebSocket_remove_OnOpen_m844989886 (WebSocket_t3268376029 * __this, EventHandler_t277755526 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::accept()
extern "C"  bool WebSocket_accept_m1106246327 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::acceptHandshake()
extern "C"  bool WebSocket_acceptHandshake_m74555238 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::checkHandshakeRequest(WebSocketSharp.Net.WebSockets.WebSocketContext,System.String&)
extern "C"  bool WebSocket_checkHandshakeRequest_m4225009407 (WebSocket_t3268376029 * __this, WebSocketContext_t3488732344 * ___context0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::checkHandshakeResponse(WebSocketSharp.HttpResponse,System.String&)
extern "C"  bool WebSocket_checkHandshakeResponse_m3123457809 (WebSocket_t3268376029 * __this, HttpResponse_t2820540315 * ___response0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::checkIfAvailable(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String&)
extern "C"  bool WebSocket_checkIfAvailable_m2351139079 (WebSocket_t3268376029 * __this, bool ___connecting0, bool ___open1, bool ___closing2, bool ___closed3, String_t** ___message4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::checkIfAvailable(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String&)
extern "C"  bool WebSocket_checkIfAvailable_m1135373675 (WebSocket_t3268376029 * __this, bool ___client0, bool ___server1, bool ___connecting2, bool ___open3, bool ___closing4, bool ___closed5, String_t** ___message6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::checkParametersForSetCredentials(System.String,System.String,System.String&)
extern "C"  bool WebSocket_checkParametersForSetCredentials_m3359842836 (Il2CppObject * __this /* static, unused */, String_t* ___username0, String_t* ___password1, String_t** ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::checkParametersForSetProxy(System.String,System.String,System.String,System.String&)
extern "C"  bool WebSocket_checkParametersForSetProxy_m2817237698 (Il2CppObject * __this /* static, unused */, String_t* ___url0, String_t* ___username1, String_t* ___password2, String_t** ___message3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::checkReceivedFrame(WebSocketSharp.WebSocketFrame,System.String&)
extern "C"  bool WebSocket_checkReceivedFrame_m1929439912 (WebSocket_t3268376029 * __this, WebSocketFrame_t764750278 * ___frame0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::close(System.UInt16,System.String)
extern "C"  void WebSocket_close_m3825351409 (WebSocket_t3268376029 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::close(WebSocketSharp.CloseEventArgs,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void WebSocket_close_m860071038 (WebSocket_t3268376029 * __this, CloseEventArgs_t344507773 * ___e0, bool ___send1, bool ___receive2, bool ___received3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::closeAsync(System.UInt16,System.String)
extern "C"  void WebSocket_closeAsync_m2085062143 (WebSocket_t3268376029 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::closeAsync(WebSocketSharp.CloseEventArgs,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void WebSocket_closeAsync_m3945564118 (WebSocket_t3268376029 * __this, CloseEventArgs_t344507773 * ___e0, bool ___send1, bool ___receive2, bool ___received3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::closeHandshake(System.Byte[],System.Boolean,System.Boolean)
extern "C"  bool WebSocket_closeHandshake_m601727993 (WebSocket_t3268376029 * __this, ByteU5BU5D_t3397334013* ___frameAsBytes0, bool ___receive1, bool ___received2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::connect()
extern "C"  bool WebSocket_connect_m570724797 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::createExtensions()
extern "C"  String_t* WebSocket_createExtensions_m1564962174 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.WebSocket::createHandshakeFailureResponse(WebSocketSharp.Net.HttpStatusCode)
extern "C"  HttpResponse_t2820540315 * WebSocket_createHandshakeFailureResponse_m3984003255 (WebSocket_t3268376029 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpRequest WebSocketSharp.WebSocket::createHandshakeRequest()
extern "C"  HttpRequest_t1845443631 * WebSocket_createHandshakeRequest_m467859270 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.WebSocket::createHandshakeResponse()
extern "C"  HttpResponse_t2820540315 * WebSocket_createHandshakeResponse_m4140112726 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::customCheckHandshakeRequest(WebSocketSharp.Net.WebSockets.WebSocketContext,System.String&)
extern "C"  bool WebSocket_customCheckHandshakeRequest_m544192330 (WebSocket_t3268376029 * __this, WebSocketContext_t3488732344 * ___context0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.MessageEventArgs WebSocketSharp.WebSocket::dequeueFromMessageEventQueue()
extern "C"  MessageEventArgs_t2890051726 * WebSocket_dequeueFromMessageEventQueue_m1884293811 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::doHandshake()
extern "C"  bool WebSocket_doHandshake_m1805237795 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::enqueueToMessageEventQueue(WebSocketSharp.MessageEventArgs)
extern "C"  void WebSocket_enqueueToMessageEventQueue_m1070306207 (WebSocket_t3268376029 * __this, MessageEventArgs_t2890051726 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::error(System.String,System.Exception)
extern "C"  void WebSocket_error_m2795755081 (WebSocket_t3268376029 * __this, String_t* ___message0, Exception_t1927440687 * ___exception1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::fatal(System.String,System.Exception)
extern "C"  void WebSocket_fatal_m4286412963 (WebSocket_t3268376029 * __this, String_t* ___message0, Exception_t1927440687 * ___exception1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::fatal(System.String,WebSocketSharp.CloseStatusCode)
extern "C"  void WebSocket_fatal_m541496223 (WebSocket_t3268376029 * __this, String_t* ___message0, uint16_t ___code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::init()
extern "C"  void WebSocket_init_m1479622061 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::message()
extern "C"  void WebSocket_message_m1053634122 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::messagec(WebSocketSharp.MessageEventArgs)
extern "C"  void WebSocket_messagec_m376358614 (WebSocket_t3268376029 * __this, MessageEventArgs_t2890051726 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::messages(WebSocketSharp.MessageEventArgs)
extern "C"  void WebSocket_messages_m1534426406 (WebSocket_t3268376029 * __this, MessageEventArgs_t2890051726 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::open()
extern "C"  void WebSocket_open_m3527357835 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::processCloseFrame(WebSocketSharp.WebSocketFrame)
extern "C"  bool WebSocket_processCloseFrame_m2602792212 (WebSocket_t3268376029 * __this, WebSocketFrame_t764750278 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::processCookies(WebSocketSharp.Net.CookieCollection)
extern "C"  void WebSocket_processCookies_m894555479 (WebSocket_t3268376029 * __this, CookieCollection_t4248997468 * ___cookies0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::processDataFrame(WebSocketSharp.WebSocketFrame)
extern "C"  bool WebSocket_processDataFrame_m2569002102 (WebSocket_t3268376029 * __this, WebSocketFrame_t764750278 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::processFragmentFrame(WebSocketSharp.WebSocketFrame)
extern "C"  bool WebSocket_processFragmentFrame_m1454338710 (WebSocket_t3268376029 * __this, WebSocketFrame_t764750278 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::processPingFrame(WebSocketSharp.WebSocketFrame)
extern "C"  bool WebSocket_processPingFrame_m3084984606 (WebSocket_t3268376029 * __this, WebSocketFrame_t764750278 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::processPongFrame(WebSocketSharp.WebSocketFrame)
extern "C"  bool WebSocket_processPongFrame_m2180509204 (WebSocket_t3268376029 * __this, WebSocketFrame_t764750278 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::processReceivedFrame(WebSocketSharp.WebSocketFrame)
extern "C"  bool WebSocket_processReceivedFrame_m4229613185 (WebSocket_t3268376029 * __this, WebSocketFrame_t764750278 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::processSecWebSocketExtensionsClientHeader(System.String)
extern "C"  void WebSocket_processSecWebSocketExtensionsClientHeader_m2389523274 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::processSecWebSocketExtensionsServerHeader(System.String)
extern "C"  void WebSocket_processSecWebSocketExtensionsServerHeader_m3613840110 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::processSecWebSocketProtocolHeader(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  void WebSocket_processSecWebSocketProtocolHeader_m3351134998 (WebSocket_t3268376029 * __this, Il2CppObject* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::processUnsupportedFrame(WebSocketSharp.WebSocketFrame)
extern "C"  bool WebSocket_processUnsupportedFrame_m1434058031 (WebSocket_t3268376029 * __this, WebSocketFrame_t764750278 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::releaseClientResources()
extern "C"  void WebSocket_releaseClientResources_m706019642 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::releaseCommonResources()
extern "C"  void WebSocket_releaseCommonResources_m2780700516 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::releaseResources()
extern "C"  void WebSocket_releaseResources_m2844090619 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::releaseServerResources()
extern "C"  void WebSocket_releaseServerResources_m1411519110 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::send(System.Byte[])
extern "C"  bool WebSocket_send_m403481360 (WebSocket_t3268376029 * __this, ByteU5BU5D_t3397334013* ___frameAsBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::send(WebSocketSharp.Opcode,System.IO.Stream)
extern "C"  bool WebSocket_send_m1890811697 (WebSocket_t3268376029 * __this, uint8_t ___opcode0, Stream_t3255436806 * ___stream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::send(WebSocketSharp.Opcode,System.IO.Stream,System.Boolean)
extern "C"  bool WebSocket_send_m4019663124 (WebSocket_t3268376029 * __this, uint8_t ___opcode0, Stream_t3255436806 * ___stream1, bool ___compressed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::send(WebSocketSharp.Fin,WebSocketSharp.Opcode,System.Byte[],System.Boolean)
extern "C"  bool WebSocket_send_m3000867418 (WebSocket_t3268376029 * __this, uint8_t ___fin0, uint8_t ___opcode1, ByteU5BU5D_t3397334013* ___data2, bool ___compressed3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::sendAsync(WebSocketSharp.Opcode,System.IO.Stream,System.Action`1<System.Boolean>)
extern "C"  void WebSocket_sendAsync_m4176457398 (WebSocket_t3268376029 * __this, uint8_t ___opcode0, Stream_t3255436806 * ___stream1, Action_1_t3627374100 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::sendBytes(System.Byte[])
extern "C"  bool WebSocket_sendBytes_m3753310537 (WebSocket_t3268376029 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.WebSocket::sendHandshakeRequest()
extern "C"  HttpResponse_t2820540315 * WebSocket_sendHandshakeRequest_m2892378742 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.WebSocket::sendHttpRequest(WebSocketSharp.HttpRequest,System.Int32)
extern "C"  HttpResponse_t2820540315 * WebSocket_sendHttpRequest_m1180308492 (WebSocket_t3268376029 * __this, HttpRequest_t1845443631 * ___request0, int32_t ___millisecondsTimeout1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::sendHttpResponse(WebSocketSharp.HttpResponse)
extern "C"  bool WebSocket_sendHttpResponse_m2235228462 (WebSocket_t3268376029 * __this, HttpResponse_t2820540315 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::sendProxyConnectRequest()
extern "C"  void WebSocket_sendProxyConnectRequest_m3393479112 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::setClientStream()
extern "C"  void WebSocket_setClientStream_m3441324870 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::startReceiving()
extern "C"  void WebSocket_startReceiving_m2009934605 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketAcceptHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketAcceptHeader_m1567486550 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketExtensionsClientHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketExtensionsClientHeader_m2854251259 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketExtensionsServerHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketExtensionsServerHeader_m55883151 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketKeyHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketKeyHeader_m1356193671 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketProtocolClientHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketProtocolClientHeader_m2160106955 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketProtocolServerHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketProtocolServerHeader_m1175636399 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketVersionClientHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketVersionClientHeader_m2176214035 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketVersionServerHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketVersionServerHeader_m3723439743 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::CheckParametersForClose(System.UInt16,System.String,System.Boolean,System.String&)
extern "C"  bool WebSocket_CheckParametersForClose_m48892605 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, String_t* ___reason1, bool ___client2, String_t** ___message3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::CheckParametersForClose(WebSocketSharp.CloseStatusCode,System.String,System.Boolean,System.String&)
extern "C"  bool WebSocket_CheckParametersForClose_m2906602755 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, String_t* ___reason1, bool ___client2, String_t** ___message3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::CheckPingParameter(System.String,System.Byte[]&)
extern "C"  String_t* WebSocket_CheckPingParameter_m1638372910 (Il2CppObject * __this /* static, unused */, String_t* ___message0, ByteU5BU5D_t3397334013** ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::CheckSendParameter(System.Byte[])
extern "C"  String_t* WebSocket_CheckSendParameter_m3090090740 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::CheckSendParameter(System.IO.FileInfo)
extern "C"  String_t* WebSocket_CheckSendParameter_m38137608 (Il2CppObject * __this /* static, unused */, FileInfo_t3153503742 * ___file0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::CheckSendParameter(System.String)
extern "C"  String_t* WebSocket_CheckSendParameter_m3482725359 (Il2CppObject * __this /* static, unused */, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::CheckSendParameters(System.IO.Stream,System.Int32)
extern "C"  String_t* WebSocket_CheckSendParameters_m2863203454 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(WebSocketSharp.HttpResponse)
extern "C"  void WebSocket_Close_m1995637949 (WebSocket_t3268376029 * __this, HttpResponse_t2820540315 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(WebSocketSharp.Net.HttpStatusCode)
extern "C"  void WebSocket_Close_m3203391894 (WebSocket_t3268376029 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(WebSocketSharp.CloseEventArgs,System.Byte[],System.Boolean)
extern "C"  void WebSocket_Close_m1523459359 (WebSocket_t3268376029 * __this, CloseEventArgs_t344507773 * ___e0, ByteU5BU5D_t3397334013* ___frameAsBytes1, bool ___receive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::CreateBase64Key()
extern "C"  String_t* WebSocket_CreateBase64Key_m3718048252 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::CreateResponseKey(System.String)
extern "C"  String_t* WebSocket_CreateResponseKey_m1770661666 (Il2CppObject * __this /* static, unused */, String_t* ___base64Key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::InternalAccept()
extern "C"  void WebSocket_InternalAccept_m2580683268 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::Ping(System.Byte[],System.TimeSpan)
extern "C"  bool WebSocket_Ping_m3740733610 (WebSocket_t3268376029 * __this, ByteU5BU5D_t3397334013* ___frameAsBytes0, TimeSpan_t3430258949  ___timeout1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Send(WebSocketSharp.Opcode,System.Byte[],System.Collections.Generic.Dictionary`2<WebSocketSharp.CompressionMethod,System.Byte[]>)
extern "C"  void WebSocket_Send_m1572184235 (WebSocket_t3268376029 * __this, uint8_t ___opcode0, ByteU5BU5D_t3397334013* ___data1, Dictionary_2_t1575245043 * ___cache2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Send(WebSocketSharp.Opcode,System.IO.Stream,System.Collections.Generic.Dictionary`2<WebSocketSharp.CompressionMethod,System.IO.Stream>)
extern "C"  void WebSocket_Send_m891264875 (WebSocket_t3268376029 * __this, uint8_t ___opcode0, Stream_t3255436806 * ___stream1, Dictionary_2_t1433347836 * ___cache2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Accept()
extern "C"  void WebSocket_Accept_m1019119671 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::AcceptAsync()
extern "C"  void WebSocket_AcceptAsync_m1998505721 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close()
extern "C"  void WebSocket_Close_m1606182409 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(System.UInt16)
extern "C"  void WebSocket_Close_m1766733287 (WebSocket_t3268376029 * __this, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(WebSocketSharp.CloseStatusCode)
extern "C"  void WebSocket_Close_m565765457 (WebSocket_t3268376029 * __this, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(System.UInt16,System.String)
extern "C"  void WebSocket_Close_m1115155217 (WebSocket_t3268376029 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(WebSocketSharp.CloseStatusCode,System.String)
extern "C"  void WebSocket_Close_m1340137467 (WebSocket_t3268376029 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::CloseAsync()
extern "C"  void WebSocket_CloseAsync_m1055733927 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::CloseAsync(System.UInt16)
extern "C"  void WebSocket_CloseAsync_m1323487565 (WebSocket_t3268376029 * __this, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::CloseAsync(WebSocketSharp.CloseStatusCode)
extern "C"  void WebSocket_CloseAsync_m1310076659 (WebSocket_t3268376029 * __this, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::CloseAsync(System.UInt16,System.String)
extern "C"  void WebSocket_CloseAsync_m3581884319 (WebSocket_t3268376029 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::CloseAsync(WebSocketSharp.CloseStatusCode,System.String)
extern "C"  void WebSocket_CloseAsync_m1731429705 (WebSocket_t3268376029 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Connect()
extern "C"  void WebSocket_Connect_m3113795693 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::ConnectAsync()
extern "C"  void WebSocket_ConnectAsync_m756238003 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::Ping()
extern "C"  bool WebSocket_Ping_m940274015 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::Ping(System.String)
extern "C"  bool WebSocket_Ping_m4177351905 (WebSocket_t3268376029 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Send(System.Byte[])
extern "C"  void WebSocket_Send_m3052477646 (WebSocket_t3268376029 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Send(System.IO.FileInfo)
extern "C"  void WebSocket_Send_m3911143798 (WebSocket_t3268376029 * __this, FileInfo_t3153503742 * ___file0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Send(System.String)
extern "C"  void WebSocket_Send_m2924151661 (WebSocket_t3268376029 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::SendAsync(System.Byte[],System.Action`1<System.Boolean>)
extern "C"  void WebSocket_SendAsync_m1002335979 (WebSocket_t3268376029 * __this, ByteU5BU5D_t3397334013* ___data0, Action_1_t3627374100 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::SendAsync(System.IO.FileInfo,System.Action`1<System.Boolean>)
extern "C"  void WebSocket_SendAsync_m2152805099 (WebSocket_t3268376029 * __this, FileInfo_t3153503742 * ___file0, Action_1_t3627374100 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::SendAsync(System.String,System.Action`1<System.Boolean>)
extern "C"  void WebSocket_SendAsync_m2663143754 (WebSocket_t3268376029 * __this, String_t* ___data0, Action_1_t3627374100 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::SendAsync(System.IO.Stream,System.Int32,System.Action`1<System.Boolean>)
extern "C"  void WebSocket_SendAsync_m4276531166 (WebSocket_t3268376029 * __this, Stream_t3255436806 * ___stream0, int32_t ___length1, Action_1_t3627374100 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::SetCookie(WebSocketSharp.Net.Cookie)
extern "C"  void WebSocket_SetCookie_m1833970595 (WebSocket_t3268376029 * __this, Cookie_t1826188460 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::SetCredentials(System.String,System.String,System.Boolean)
extern "C"  void WebSocket_SetCredentials_m52277822 (WebSocket_t3268376029 * __this, String_t* ___username0, String_t* ___password1, bool ___preAuth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::SetProxy(System.String,System.String,System.String)
extern "C"  void WebSocket_SetProxy_m466484595 (WebSocket_t3268376029 * __this, String_t* ___url0, String_t* ___username1, String_t* ___password2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::System.IDisposable.Dispose()
extern "C"  void WebSocket_System_IDisposable_Dispose_m2489464940 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::<open>m__0(System.IAsyncResult)
extern "C"  void WebSocket_U3CopenU3Em__0_m622966377 (WebSocket_t3268376029 * __this, Il2CppObject * ___ar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::<processSecWebSocketProtocolHeader>m__1(System.String)
extern "C"  bool WebSocket_U3CprocessSecWebSocketProtocolHeaderU3Em__1_m4290199253 (WebSocket_t3268376029 * __this, String_t* ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
