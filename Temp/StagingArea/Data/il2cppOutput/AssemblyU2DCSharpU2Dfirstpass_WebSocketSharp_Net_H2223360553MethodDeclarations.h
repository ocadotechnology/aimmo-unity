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

// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t2223360553;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t994708409;
// System.Text.Encoding
struct Encoding_t663144255;
// System.String
struct String_t;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t4248997468;
// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t1932982249;
// System.IO.Stream
struct Stream_t3255436806;
// System.Version
struct Version_t1755874712;
// WebSocketSharp.Net.Cookie
struct Cookie_t1826188460;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Net.Cookie>
struct IEnumerable_1_t2118315505;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Ht994708409.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_C4248997468.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_W1932982249.h"
#include "mscorlib_System_Version1755874712.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_C1826188460.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H2223360553.h"

// System.Void WebSocketSharp.Net.HttpListenerResponse::.ctor(WebSocketSharp.Net.HttpListenerContext)
extern "C"  void HttpListenerResponse__ctor_m3452247769 (HttpListenerResponse_t2223360553 * __this, HttpListenerContext_t994708409 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerResponse::get_CloseConnection()
extern "C"  bool HttpListenerResponse_get_CloseConnection_m3362337975 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_CloseConnection(System.Boolean)
extern "C"  void HttpListenerResponse_set_CloseConnection_m33694816 (HttpListenerResponse_t2223360553 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerResponse::get_HeadersSent()
extern "C"  bool HttpListenerResponse_get_HeadersSent_m31757967 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_HeadersSent(System.Boolean)
extern "C"  void HttpListenerResponse_set_HeadersSent_m1253210188 (HttpListenerResponse_t2223360553 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding WebSocketSharp.Net.HttpListenerResponse::get_ContentEncoding()
extern "C"  Encoding_t663144255 * HttpListenerResponse_get_ContentEncoding_m2078791817 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_ContentEncoding(System.Text.Encoding)
extern "C"  void HttpListenerResponse_set_ContentEncoding_m3741494238 (HttpListenerResponse_t2223360553 * __this, Encoding_t663144255 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.Net.HttpListenerResponse::get_ContentLength64()
extern "C"  int64_t HttpListenerResponse_get_ContentLength64_m2051058149 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_ContentLength64(System.Int64)
extern "C"  void HttpListenerResponse_set_ContentLength64_m3516009178 (HttpListenerResponse_t2223360553 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerResponse::get_ContentType()
extern "C"  String_t* HttpListenerResponse_get_ContentType_m610795151 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_ContentType(System.String)
extern "C"  void HttpListenerResponse_set_ContentType_m1582444398 (HttpListenerResponse_t2223360553 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.HttpListenerResponse::get_Cookies()
extern "C"  CookieCollection_t4248997468 * HttpListenerResponse_get_Cookies_m2650722123 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_Cookies(WebSocketSharp.Net.CookieCollection)
extern "C"  void HttpListenerResponse_set_Cookies_m715611484 (HttpListenerResponse_t2223360553 * __this, CookieCollection_t4248997468 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.HttpListenerResponse::get_Headers()
extern "C"  WebHeaderCollection_t1932982249 * HttpListenerResponse_get_Headers_m1746882975 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_Headers(WebSocketSharp.Net.WebHeaderCollection)
extern "C"  void HttpListenerResponse_set_Headers_m1851174056 (HttpListenerResponse_t2223360553 * __this, WebHeaderCollection_t1932982249 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerResponse::get_KeepAlive()
extern "C"  bool HttpListenerResponse_get_KeepAlive_m2663040503 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_KeepAlive(System.Boolean)
extern "C"  void HttpListenerResponse_set_KeepAlive_m3297330670 (HttpListenerResponse_t2223360553 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream WebSocketSharp.Net.HttpListenerResponse::get_OutputStream()
extern "C"  Stream_t3255436806 * HttpListenerResponse_get_OutputStream_m1507031612 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version WebSocketSharp.Net.HttpListenerResponse::get_ProtocolVersion()
extern "C"  Version_t1755874712 * HttpListenerResponse_get_ProtocolVersion_m997202629 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_ProtocolVersion(System.Version)
extern "C"  void HttpListenerResponse_set_ProtocolVersion_m1930628784 (HttpListenerResponse_t2223360553 * __this, Version_t1755874712 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerResponse::get_RedirectLocation()
extern "C"  String_t* HttpListenerResponse_get_RedirectLocation_m1498776077 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_RedirectLocation(System.String)
extern "C"  void HttpListenerResponse_set_RedirectLocation_m4077630172 (HttpListenerResponse_t2223360553 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerResponse::get_SendChunked()
extern "C"  bool HttpListenerResponse_get_SendChunked_m2998420545 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_SendChunked(System.Boolean)
extern "C"  void HttpListenerResponse_set_SendChunked_m147031478 (HttpListenerResponse_t2223360553 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpListenerResponse::get_StatusCode()
extern "C"  int32_t HttpListenerResponse_get_StatusCode_m588172800 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_StatusCode(System.Int32)
extern "C"  void HttpListenerResponse_set_StatusCode_m1348845051 (HttpListenerResponse_t2223360553 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerResponse::get_StatusDescription()
extern "C"  String_t* HttpListenerResponse_get_StatusDescription_m865376448 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_StatusDescription(System.String)
extern "C"  void HttpListenerResponse_set_StatusDescription_m1709694227 (HttpListenerResponse_t2223360553 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerResponse::canAddOrUpdate(WebSocketSharp.Net.Cookie)
extern "C"  bool HttpListenerResponse_canAddOrUpdate_m450445653 (HttpListenerResponse_t2223360553 * __this, Cookie_t1826188460 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::checkDisposed()
extern "C"  void HttpListenerResponse_checkDisposed_m3737536907 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::checkDisposedOrHeadersSent()
extern "C"  void HttpListenerResponse_checkDisposedOrHeadersSent_m513081266 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::close(System.Boolean)
extern "C"  void HttpListenerResponse_close_m3535102739 (HttpListenerResponse_t2223360553 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Net.Cookie> WebSocketSharp.Net.HttpListenerResponse::findCookie(WebSocketSharp.Net.Cookie)
extern "C"  Il2CppObject* HttpListenerResponse_findCookie_m3124640095 (HttpListenerResponse_t2223360553 * __this, Cookie_t1826188460 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.HttpListenerResponse::WriteHeadersTo(System.IO.MemoryStream)
extern "C"  WebHeaderCollection_t1932982249 * HttpListenerResponse_WriteHeadersTo_m839647968 (HttpListenerResponse_t2223360553 * __this, MemoryStream_t743994179 * ___destination0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::Abort()
extern "C"  void HttpListenerResponse_Abort_m3492672600 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::AddHeader(System.String,System.String)
extern "C"  void HttpListenerResponse_AddHeader_m1980709582 (HttpListenerResponse_t2223360553 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::AppendCookie(WebSocketSharp.Net.Cookie)
extern "C"  void HttpListenerResponse_AppendCookie_m2273871172 (HttpListenerResponse_t2223360553 * __this, Cookie_t1826188460 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::AppendHeader(System.String,System.String)
extern "C"  void HttpListenerResponse_AppendHeader_m1072179651 (HttpListenerResponse_t2223360553 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::Close()
extern "C"  void HttpListenerResponse_Close_m3884482054 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::Close(System.Byte[],System.Boolean)
extern "C"  void HttpListenerResponse_Close_m898240688 (HttpListenerResponse_t2223360553 * __this, ByteU5BU5D_t3397334013* ___responseEntity0, bool ___willBlock1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::CopyFrom(WebSocketSharp.Net.HttpListenerResponse)
extern "C"  void HttpListenerResponse_CopyFrom_m97468942 (HttpListenerResponse_t2223360553 * __this, HttpListenerResponse_t2223360553 * ___templateResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::Redirect(System.String)
extern "C"  void HttpListenerResponse_Redirect_m4045000030 (HttpListenerResponse_t2223360553 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::SetCookie(WebSocketSharp.Net.Cookie)
extern "C"  void HttpListenerResponse_SetCookie_m1671976994 (HttpListenerResponse_t2223360553 * __this, Cookie_t1826188460 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::System.IDisposable.Dispose()
extern "C"  void HttpListenerResponse_System_IDisposable_Dispose_m3477824677 (HttpListenerResponse_t2223360553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
