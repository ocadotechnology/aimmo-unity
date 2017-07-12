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

// WebSocketSharp.Net.HttpListener
struct HttpListener_t4179429670;
// System.Func`2<WebSocketSharp.Net.HttpListenerRequest,WebSocketSharp.Net.AuthenticationSchemes>
struct Func_2_t1102535652;
// System.String
struct String_t;
// WebSocketSharp.Logger
struct Logger_t2598199114;
// WebSocketSharp.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_t3269177542;
// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t204724213;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>
struct Func_2_t353436505;
// System.Exception
struct Exception_t1927440687;
// WebSocketSharp.Net.HttpListenerAsyncResult
struct HttpListenerAsyncResult_t3506939685;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t994708409;
// WebSocketSharp.Net.HttpConnection
struct HttpConnection_t2649486862;
// WebSocketSharp.Net.HttpListenerRequest
struct HttpListenerRequest_t2316381291;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Aut29593226.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Se204724213.h"
#include "mscorlib_System_Exception1927440687.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H2649486862.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H3506939685.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Ht994708409.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H2316381291.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void WebSocketSharp.Net.HttpListener::.cctor()
extern "C"  void HttpListener__cctor_m3516526934 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::.ctor()
extern "C"  void HttpListener__ctor_m1635710101 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListener::get_IsDisposed()
extern "C"  bool HttpListener_get_IsDisposed_m2707128797 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListener::get_ReuseAddress()
extern "C"  bool HttpListener_get_ReuseAddress_m2331157896 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_ReuseAddress(System.Boolean)
extern "C"  void HttpListener_set_ReuseAddress_m1841746065 (HttpListener_t4179429670 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Net.HttpListener::get_AuthenticationSchemes()
extern "C"  int32_t HttpListener_get_AuthenticationSchemes_m708007129 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_AuthenticationSchemes(WebSocketSharp.Net.AuthenticationSchemes)
extern "C"  void HttpListener_set_AuthenticationSchemes_m3193981710 (HttpListener_t4179429670 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<WebSocketSharp.Net.HttpListenerRequest,WebSocketSharp.Net.AuthenticationSchemes> WebSocketSharp.Net.HttpListener::get_AuthenticationSchemeSelector()
extern "C"  Func_2_t1102535652 * HttpListener_get_AuthenticationSchemeSelector_m3566301219 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_AuthenticationSchemeSelector(System.Func`2<WebSocketSharp.Net.HttpListenerRequest,WebSocketSharp.Net.AuthenticationSchemes>)
extern "C"  void HttpListener_set_AuthenticationSchemeSelector_m495344912 (HttpListener_t4179429670 * __this, Func_2_t1102535652 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListener::get_CertificateFolderPath()
extern "C"  String_t* HttpListener_get_CertificateFolderPath_m4080683211 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_CertificateFolderPath(System.String)
extern "C"  void HttpListener_set_CertificateFolderPath_m1714626130 (HttpListener_t4179429670 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListener::get_IgnoreWriteExceptions()
extern "C"  bool HttpListener_get_IgnoreWriteExceptions_m422867993 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_IgnoreWriteExceptions(System.Boolean)
extern "C"  void HttpListener_set_IgnoreWriteExceptions_m2619647770 (HttpListener_t4179429670 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListener::get_IsListening()
extern "C"  bool HttpListener_get_IsListening_m1888290143 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListener::get_IsSupported()
extern "C"  bool HttpListener_get_IsSupported_m518355228 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Logger WebSocketSharp.Net.HttpListener::get_Log()
extern "C"  Logger_t2598199114 * HttpListener_get_Log_m387674116 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerPrefixCollection WebSocketSharp.Net.HttpListener::get_Prefixes()
extern "C"  HttpListenerPrefixCollection_t3269177542 * HttpListener_get_Prefixes_m3126723039 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListener::get_Realm()
extern "C"  String_t* HttpListener_get_Realm_m3083450838 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_Realm(System.String)
extern "C"  void HttpListener_set_Realm_m1629730833 (HttpListener_t4179429670 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Net.HttpListener::get_SslConfiguration()
extern "C"  ServerSslConfiguration_t204724213 * HttpListener_get_SslConfiguration_m579992708 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_SslConfiguration(WebSocketSharp.Net.ServerSslConfiguration)
extern "C"  void HttpListener_set_SslConfiguration_m588386483 (HttpListener_t4179429670 * __this, ServerSslConfiguration_t204724213 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListener::get_UnsafeConnectionNtlmAuthentication()
extern "C"  bool HttpListener_get_UnsafeConnectionNtlmAuthentication_m478104183 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_UnsafeConnectionNtlmAuthentication(System.Boolean)
extern "C"  void HttpListener_set_UnsafeConnectionNtlmAuthentication_m2863434512 (HttpListener_t4179429670 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential> WebSocketSharp.Net.HttpListener::get_UserCredentialsFinder()
extern "C"  Func_2_t353436505 * HttpListener_get_UserCredentialsFinder_m576938202 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_UserCredentialsFinder(System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>)
extern "C"  void HttpListener_set_UserCredentialsFinder_m3363904841 (HttpListener_t4179429670 * __this, Func_2_t353436505 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::cleanupConnections()
extern "C"  void HttpListener_cleanupConnections_m2313522886 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::cleanupContextQueue(System.Boolean)
extern "C"  void HttpListener_cleanupContextQueue_m696404408 (HttpListener_t4179429670 * __this, bool ___sendServiceUnavailable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::cleanupContextRegistry()
extern "C"  void HttpListener_cleanupContextRegistry_m2017049535 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::cleanupWaitQueue(System.Exception)
extern "C"  void HttpListener_cleanupWaitQueue_m2594218623 (HttpListener_t4179429670 * __this, Exception_t1927440687 * ___exception0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::close(System.Boolean)
extern "C"  void HttpListener_close_m2395039474 (HttpListener_t4179429670 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerAsyncResult WebSocketSharp.Net.HttpListener::getAsyncResultFromQueue()
extern "C"  HttpListenerAsyncResult_t3506939685 * HttpListener_getAsyncResultFromQueue_m954061539 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.HttpListener::getContextFromQueue()
extern "C"  HttpListenerContext_t994708409 * HttpListener_getContextFromQueue_m2798149155 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListener::AddConnection(WebSocketSharp.Net.HttpConnection)
extern "C"  bool HttpListener_AddConnection_m3100367922 (HttpListener_t4179429670 * __this, HttpConnection_t2649486862 * ___connection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerAsyncResult WebSocketSharp.Net.HttpListener::BeginGetContext(WebSocketSharp.Net.HttpListenerAsyncResult)
extern "C"  HttpListenerAsyncResult_t3506939685 * HttpListener_BeginGetContext_m3006872278 (HttpListener_t4179429670 * __this, HttpListenerAsyncResult_t3506939685 * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::CheckDisposed()
extern "C"  void HttpListener_CheckDisposed_m2763472932 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListener::GetRealm()
extern "C"  String_t* HttpListener_GetRealm_m375465161 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential> WebSocketSharp.Net.HttpListener::GetUserCredentialsFinder()
extern "C"  Func_2_t353436505 * HttpListener_GetUserCredentialsFinder_m1004978809 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListener::RegisterContext(WebSocketSharp.Net.HttpListenerContext)
extern "C"  bool HttpListener_RegisterContext_m1198663634 (HttpListener_t4179429670 * __this, HttpListenerContext_t994708409 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::RemoveConnection(WebSocketSharp.Net.HttpConnection)
extern "C"  void HttpListener_RemoveConnection_m2715993929 (HttpListener_t4179429670 * __this, HttpConnection_t2649486862 * ___connection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Net.HttpListener::SelectAuthenticationScheme(WebSocketSharp.Net.HttpListenerRequest)
extern "C"  int32_t HttpListener_SelectAuthenticationScheme_m2773626794 (HttpListener_t4179429670 * __this, HttpListenerRequest_t2316381291 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::UnregisterContext(WebSocketSharp.Net.HttpListenerContext)
extern "C"  void HttpListener_UnregisterContext_m3213145483 (HttpListener_t4179429670 * __this, HttpListenerContext_t994708409 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::Abort()
extern "C"  void HttpListener_Abort_m526722679 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WebSocketSharp.Net.HttpListener::BeginGetContext(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HttpListener_BeginGetContext_m2058599423 (HttpListener_t4179429670 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::Close()
extern "C"  void HttpListener_Close_m858444319 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.HttpListener::EndGetContext(System.IAsyncResult)
extern "C"  HttpListenerContext_t994708409 * HttpListener_EndGetContext_m2193201918 (HttpListener_t4179429670 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.HttpListener::GetContext()
extern "C"  HttpListenerContext_t994708409 * HttpListener_GetContext_m369452120 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::Start()
extern "C"  void HttpListener_Start_m4042961797 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::Stop()
extern "C"  void HttpListener_Stop_m3344768021 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::System.IDisposable.Dispose()
extern "C"  void HttpListener_System_IDisposable_Dispose_m190215146 (HttpListener_t4179429670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
