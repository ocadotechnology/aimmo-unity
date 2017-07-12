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

// WebSocketSharp.Net.HttpListenerRequest
struct HttpListenerRequest_t2316381291;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t994708409;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Text.Encoding
struct Encoding_t663144255;
// System.String
struct String_t;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t4248997468;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.IO.Stream
struct Stream_t3255436806;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// System.Version
struct Version_t1755874712;
// System.Uri
struct Uri_t19570940;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t4056456767;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Ht994708409.h"
#include "mscorlib_System_Guid2533601593.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Version1755874712.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void WebSocketSharp.Net.HttpListenerRequest::.cctor()
extern "C"  void HttpListenerRequest__cctor_m278195991 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerRequest::.ctor(WebSocketSharp.Net.HttpListenerContext)
extern "C"  void HttpListenerRequest__ctor_m1671306795 (HttpListenerRequest_t2316381291 * __this, HttpListenerContext_t994708409 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.Net.HttpListenerRequest::get_AcceptTypes()
extern "C"  StringU5BU5D_t1642385972* HttpListenerRequest_get_AcceptTypes_m3322981301 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpListenerRequest::get_ClientCertificateError()
extern "C"  int32_t HttpListenerRequest_get_ClientCertificateError_m3317810395 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding WebSocketSharp.Net.HttpListenerRequest::get_ContentEncoding()
extern "C"  Encoding_t663144255 * HttpListenerRequest_get_ContentEncoding_m2710770431 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.Net.HttpListenerRequest::get_ContentLength64()
extern "C"  int64_t HttpListenerRequest_get_ContentLength64_m3512124991 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerRequest::get_ContentType()
extern "C"  String_t* HttpListenerRequest_get_ContentType_m2223897185 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.HttpListenerRequest::get_Cookies()
extern "C"  CookieCollection_t4248997468 * HttpListenerRequest_get_Cookies_m3249530777 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::get_HasEntityBody()
extern "C"  bool HttpListenerRequest_get_HasEntityBody_m3828626574 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.HttpListenerRequest::get_Headers()
extern "C"  NameValueCollection_t3047564564 * HttpListenerRequest_get_Headers_m1475280861 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerRequest::get_HttpMethod()
extern "C"  String_t* HttpListenerRequest_get_HttpMethod_m1004347863 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream WebSocketSharp.Net.HttpListenerRequest::get_InputStream()
extern "C"  Stream_t3255436806 * HttpListenerRequest_get_InputStream_m1576426579 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::get_IsAuthenticated()
extern "C"  bool HttpListenerRequest_get_IsAuthenticated_m3717223458 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::get_IsLocal()
extern "C"  bool HttpListenerRequest_get_IsLocal_m584431086 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::get_IsSecureConnection()
extern "C"  bool HttpListenerRequest_get_IsSecureConnection_m583557184 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::get_IsWebSocketRequest()
extern "C"  bool HttpListenerRequest_get_IsWebSocketRequest_m3686179463 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::get_KeepAlive()
extern "C"  bool HttpListenerRequest_get_KeepAlive_m3744851289 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint WebSocketSharp.Net.HttpListenerRequest::get_LocalEndPoint()
extern "C"  IPEndPoint_t2615413766 * HttpListenerRequest_get_LocalEndPoint_m3890777296 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version WebSocketSharp.Net.HttpListenerRequest::get_ProtocolVersion()
extern "C"  Version_t1755874712 * HttpListenerRequest_get_ProtocolVersion_m4010244919 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.HttpListenerRequest::get_QueryString()
extern "C"  NameValueCollection_t3047564564 * HttpListenerRequest_get_QueryString_m1862256236 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerRequest::get_RawUrl()
extern "C"  String_t* HttpListenerRequest_get_RawUrl_m3579244211 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint WebSocketSharp.Net.HttpListenerRequest::get_RemoteEndPoint()
extern "C"  IPEndPoint_t2615413766 * HttpListenerRequest_get_RemoteEndPoint_m1146513145 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid WebSocketSharp.Net.HttpListenerRequest::get_RequestTraceIdentifier()
extern "C"  Guid_t2533601593  HttpListenerRequest_get_RequestTraceIdentifier_m603213757 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.Net.HttpListenerRequest::get_Url()
extern "C"  Uri_t19570940 * HttpListenerRequest_get_Url_m2321823198 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.Net.HttpListenerRequest::get_UrlReferrer()
extern "C"  Uri_t19570940 * HttpListenerRequest_get_UrlReferrer_m4013715135 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerRequest::get_UserAgent()
extern "C"  String_t* HttpListenerRequest_get_UserAgent_m4260375540 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerRequest::get_UserHostAddress()
extern "C"  String_t* HttpListenerRequest_get_UserHostAddress_m2619467027 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerRequest::get_UserHostName()
extern "C"  String_t* HttpListenerRequest_get_UserHostName_m3848761252 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.Net.HttpListenerRequest::get_UserLanguages()
extern "C"  StringU5BU5D_t1642385972* HttpListenerRequest_get_UserLanguages_m279609206 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::tryCreateVersion(System.String,System.Version&)
extern "C"  bool HttpListenerRequest_tryCreateVersion_m1220814294 (Il2CppObject * __this /* static, unused */, String_t* ___version0, Version_t1755874712 ** ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerRequest::AddHeader(System.String)
extern "C"  void HttpListenerRequest_AddHeader_m257341356 (HttpListenerRequest_t2316381291 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerRequest::FinishInitialization()
extern "C"  void HttpListenerRequest_FinishInitialization_m37153671 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::FlushInput()
extern "C"  bool HttpListenerRequest_FlushInput_m4213504706 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerRequest::SetRequestLine(System.String)
extern "C"  void HttpListenerRequest_SetRequestLine_m3616373491 (HttpListenerRequest_t2316381291 * __this, String_t* ___requestLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WebSocketSharp.Net.HttpListenerRequest::BeginGetClientCertificate(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HttpListenerRequest_BeginGetClientCertificate_m452667921 (HttpListenerRequest_t2316381291 * __this, AsyncCallback_t163412349 * ___requestCallback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 WebSocketSharp.Net.HttpListenerRequest::EndGetClientCertificate(System.IAsyncResult)
extern "C"  X509Certificate2_t4056456767 * HttpListenerRequest_EndGetClientCertificate_m699459243 (HttpListenerRequest_t2316381291 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 WebSocketSharp.Net.HttpListenerRequest::GetClientCertificate()
extern "C"  X509Certificate2_t4056456767 * HttpListenerRequest_GetClientCertificate_m437892481 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerRequest::ToString()
extern "C"  String_t* HttpListenerRequest_ToString_m918145679 (HttpListenerRequest_t2316381291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
