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

// WebSocketSharp.HttpResponse
struct HttpResponse_t2820540315;
// System.String
struct String_t;
// System.Version
struct Version_t1755874712;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t4248997468;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Version1755874712.h"
#include "System_System_Collections_Specialized_NameValueCol3047564564.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H2661820989.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_C4248997468.h"

// System.Void WebSocketSharp.HttpResponse::.ctor(System.String,System.String,System.Version,System.Collections.Specialized.NameValueCollection)
extern "C"  void HttpResponse__ctor_m2109311883 (HttpResponse_t2820540315 * __this, String_t* ___code0, String_t* ___reason1, Version_t1755874712 * ___version2, NameValueCollection_t3047564564 * ___headers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HttpResponse::.ctor(WebSocketSharp.Net.HttpStatusCode)
extern "C"  void HttpResponse__ctor_m4054626768 (HttpResponse_t2820540315 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HttpResponse::.ctor(WebSocketSharp.Net.HttpStatusCode,System.String)
extern "C"  void HttpResponse__ctor_m1502371128 (HttpResponse_t2820540315 * __this, int32_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.HttpResponse::get_Cookies()
extern "C"  CookieCollection_t4248997468 * HttpResponse_get_Cookies_m627497346 (HttpResponse_t2820540315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.HttpResponse::get_HasConnectionClose()
extern "C"  bool HttpResponse_get_HasConnectionClose_m3628343740 (HttpResponse_t2820540315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.HttpResponse::get_IsProxyAuthenticationRequired()
extern "C"  bool HttpResponse_get_IsProxyAuthenticationRequired_m753402687 (HttpResponse_t2820540315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.HttpResponse::get_IsRedirect()
extern "C"  bool HttpResponse_get_IsRedirect_m703736048 (HttpResponse_t2820540315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.HttpResponse::get_IsUnauthorized()
extern "C"  bool HttpResponse_get_IsUnauthorized_m557036194 (HttpResponse_t2820540315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.HttpResponse::get_IsWebSocketResponse()
extern "C"  bool HttpResponse_get_IsWebSocketResponse_m2899291802 (HttpResponse_t2820540315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HttpResponse::get_Reason()
extern "C"  String_t* HttpResponse_get_Reason_m849520133 (HttpResponse_t2820540315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HttpResponse::get_StatusCode()
extern "C"  String_t* HttpResponse_get_StatusCode_m2873795522 (HttpResponse_t2820540315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.HttpResponse::CreateCloseResponse(WebSocketSharp.Net.HttpStatusCode)
extern "C"  HttpResponse_t2820540315 * HttpResponse_CreateCloseResponse_m4171393304 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.HttpResponse::CreateUnauthorizedResponse(System.String)
extern "C"  HttpResponse_t2820540315 * HttpResponse_CreateUnauthorizedResponse_m756526495 (Il2CppObject * __this /* static, unused */, String_t* ___challenge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.HttpResponse::CreateWebSocketResponse()
extern "C"  HttpResponse_t2820540315 * HttpResponse_CreateWebSocketResponse_m1267651860 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.HttpResponse::Parse(System.String[])
extern "C"  HttpResponse_t2820540315 * HttpResponse_Parse_m3685729995 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___headerParts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.HttpResponse::Read(System.IO.Stream,System.Int32)
extern "C"  HttpResponse_t2820540315 * HttpResponse_Read_m859980304 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, int32_t ___millisecondsTimeout1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HttpResponse::SetCookies(WebSocketSharp.Net.CookieCollection)
extern "C"  void HttpResponse_SetCookies_m477308422 (HttpResponse_t2820540315 * __this, CookieCollection_t4248997468 * ___cookies0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HttpResponse::ToString()
extern "C"  String_t* HttpResponse_ToString_m1833397312 (HttpResponse_t2820540315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
