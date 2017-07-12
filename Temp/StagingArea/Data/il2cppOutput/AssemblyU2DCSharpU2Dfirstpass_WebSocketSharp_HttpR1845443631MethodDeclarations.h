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

// WebSocketSharp.HttpRequest
struct HttpRequest_t1845443631;
// System.String
struct String_t;
// System.Version
struct Version_t1755874712;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// WebSocketSharp.Net.AuthenticationResponse
struct AuthenticationResponse_t1212723231;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t4248997468;
// System.Uri
struct Uri_t19570940;
// WebSocketSharp.HttpResponse
struct HttpResponse_t2820540315;
// System.IO.Stream
struct Stream_t3255436806;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Version1755874712.h"
#include "System_System_Collections_Specialized_NameValueCol3047564564.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_C4248997468.h"

// System.Void WebSocketSharp.HttpRequest::.ctor(System.String,System.String,System.Version,System.Collections.Specialized.NameValueCollection)
extern "C"  void HttpRequest__ctor_m148241785 (HttpRequest_t1845443631 * __this, String_t* ___method0, String_t* ___uri1, Version_t1755874712 * ___version2, NameValueCollection_t3047564564 * ___headers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HttpRequest::.ctor(System.String,System.String)
extern "C"  void HttpRequest__ctor_m1957047815 (HttpRequest_t1845443631 * __this, String_t* ___method0, String_t* ___uri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationResponse WebSocketSharp.HttpRequest::get_AuthenticationResponse()
extern "C"  AuthenticationResponse_t1212723231 * HttpRequest_get_AuthenticationResponse_m2174860427 (HttpRequest_t1845443631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.HttpRequest::get_Cookies()
extern "C"  CookieCollection_t4248997468 * HttpRequest_get_Cookies_m3948572340 (HttpRequest_t1845443631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HttpRequest::get_HttpMethod()
extern "C"  String_t* HttpRequest_get_HttpMethod_m453784858 (HttpRequest_t1845443631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.HttpRequest::get_IsWebSocketRequest()
extern "C"  bool HttpRequest_get_IsWebSocketRequest_m1673279340 (HttpRequest_t1845443631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HttpRequest::get_RequestUri()
extern "C"  String_t* HttpRequest_get_RequestUri_m746815414 (HttpRequest_t1845443631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpRequest WebSocketSharp.HttpRequest::CreateConnectRequest(System.Uri)
extern "C"  HttpRequest_t1845443631 * HttpRequest_CreateConnectRequest_m2321972314 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpRequest WebSocketSharp.HttpRequest::CreateWebSocketRequest(System.Uri)
extern "C"  HttpRequest_t1845443631 * HttpRequest_CreateWebSocketRequest_m1109129887 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.HttpRequest::GetResponse(System.IO.Stream,System.Int32)
extern "C"  HttpResponse_t2820540315 * HttpRequest_GetResponse_m1071593259 (HttpRequest_t1845443631 * __this, Stream_t3255436806 * ___stream0, int32_t ___millisecondsTimeout1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpRequest WebSocketSharp.HttpRequest::Parse(System.String[])
extern "C"  HttpRequest_t1845443631 * HttpRequest_Parse_m3242565187 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___headerParts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpRequest WebSocketSharp.HttpRequest::Read(System.IO.Stream,System.Int32)
extern "C"  HttpRequest_t1845443631 * HttpRequest_Read_m2004796360 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, int32_t ___millisecondsTimeout1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HttpRequest::SetCookies(WebSocketSharp.Net.CookieCollection)
extern "C"  void HttpRequest_SetCookies_m4144892026 (HttpRequest_t1845443631 * __this, CookieCollection_t4248997468 * ___cookies0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HttpRequest::ToString()
extern "C"  String_t* HttpRequest_ToString_m616014894 (HttpRequest_t1845443631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
