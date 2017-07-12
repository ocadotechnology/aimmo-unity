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

// WebSocketSharp.Net.HttpDigestIdentity
struct HttpDigestIdentity_t3711678560;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Specialized_NameValueCol3047564564.h"
#include "mscorlib_System_String2029220233.h"

// System.Void WebSocketSharp.Net.HttpDigestIdentity::.ctor(System.Collections.Specialized.NameValueCollection)
extern "C"  void HttpDigestIdentity__ctor_m4078689432 (HttpDigestIdentity_t3711678560 * __this, NameValueCollection_t3047564564 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Algorithm()
extern "C"  String_t* HttpDigestIdentity_get_Algorithm_m1606970494 (HttpDigestIdentity_t3711678560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Cnonce()
extern "C"  String_t* HttpDigestIdentity_get_Cnonce_m3957067959 (HttpDigestIdentity_t3711678560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Nc()
extern "C"  String_t* HttpDigestIdentity_get_Nc_m3144757460 (HttpDigestIdentity_t3711678560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Nonce()
extern "C"  String_t* HttpDigestIdentity_get_Nonce_m1067129740 (HttpDigestIdentity_t3711678560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Opaque()
extern "C"  String_t* HttpDigestIdentity_get_Opaque_m1978721468 (HttpDigestIdentity_t3711678560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Qop()
extern "C"  String_t* HttpDigestIdentity_get_Qop_m1596745215 (HttpDigestIdentity_t3711678560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Realm()
extern "C"  String_t* HttpDigestIdentity_get_Realm_m3675735956 (HttpDigestIdentity_t3711678560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Response()
extern "C"  String_t* HttpDigestIdentity_get_Response_m3687127752 (HttpDigestIdentity_t3711678560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Uri()
extern "C"  String_t* HttpDigestIdentity_get_Uri_m4162455587 (HttpDigestIdentity_t3711678560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpDigestIdentity::IsValid(System.String,System.String,System.String,System.String)
extern "C"  bool HttpDigestIdentity_IsValid_m1525135285 (HttpDigestIdentity_t3711678560 * __this, String_t* ___password0, String_t* ___realm1, String_t* ___method2, String_t* ___entity3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
