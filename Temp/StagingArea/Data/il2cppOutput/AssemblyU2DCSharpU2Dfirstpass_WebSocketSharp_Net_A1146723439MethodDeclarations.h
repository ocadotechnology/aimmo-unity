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

// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_t1146723439;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Aut29593226.h"
#include "System_System_Collections_Specialized_NameValueCol3047564564.h"
#include "mscorlib_System_String2029220233.h"

// System.Void WebSocketSharp.Net.AuthenticationChallenge::.ctor(WebSocketSharp.Net.AuthenticationSchemes,System.Collections.Specialized.NameValueCollection)
extern "C"  void AuthenticationChallenge__ctor_m1303000571 (AuthenticationChallenge_t1146723439 * __this, int32_t ___scheme0, NameValueCollection_t3047564564 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.AuthenticationChallenge::.ctor(WebSocketSharp.Net.AuthenticationSchemes,System.String)
extern "C"  void AuthenticationChallenge__ctor_m240615270 (AuthenticationChallenge_t1146723439 * __this, int32_t ___scheme0, String_t* ___realm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationChallenge::get_Domain()
extern "C"  String_t* AuthenticationChallenge_get_Domain_m3294030750 (AuthenticationChallenge_t1146723439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationChallenge::get_Stale()
extern "C"  String_t* AuthenticationChallenge_get_Stale_m4190519987 (AuthenticationChallenge_t1146723439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.Net.AuthenticationChallenge::CreateBasicChallenge(System.String)
extern "C"  AuthenticationChallenge_t1146723439 * AuthenticationChallenge_CreateBasicChallenge_m1804567529 (Il2CppObject * __this /* static, unused */, String_t* ___realm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.Net.AuthenticationChallenge::CreateDigestChallenge(System.String)
extern "C"  AuthenticationChallenge_t1146723439 * AuthenticationChallenge_CreateDigestChallenge_m4101935015 (Il2CppObject * __this /* static, unused */, String_t* ___realm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.Net.AuthenticationChallenge::Parse(System.String)
extern "C"  AuthenticationChallenge_t1146723439 * AuthenticationChallenge_Parse_m3578057421 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationChallenge::ToBasicString()
extern "C"  String_t* AuthenticationChallenge_ToBasicString_m3535931721 (AuthenticationChallenge_t1146723439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationChallenge::ToDigestString()
extern "C"  String_t* AuthenticationChallenge_ToDigestString_m3185679715 (AuthenticationChallenge_t1146723439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
