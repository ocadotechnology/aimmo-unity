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

// WebSocketSharp.Net.AuthenticationResponse
struct AuthenticationResponse_t1212723231;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_t3911206805;
// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_t1146723439;
// System.String
struct String_t;
// System.Security.Principal.IIdentity
struct IIdentity_t2445095625;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Aut29593226.h"
#include "System_System_Collections_Specialized_NameValueCol3047564564.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_N3911206805.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_A1146723439.h"
#include "mscorlib_System_String2029220233.h"

// System.Void WebSocketSharp.Net.AuthenticationResponse::.ctor(WebSocketSharp.Net.AuthenticationSchemes,System.Collections.Specialized.NameValueCollection)
extern "C"  void AuthenticationResponse__ctor_m1295800755 (AuthenticationResponse_t1212723231 * __this, int32_t ___scheme0, NameValueCollection_t3047564564 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.AuthenticationResponse::.ctor(WebSocketSharp.Net.NetworkCredential)
extern "C"  void AuthenticationResponse__ctor_m2304535979 (AuthenticationResponse_t1212723231 * __this, NetworkCredential_t3911206805 * ___credentials0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.AuthenticationResponse::.ctor(WebSocketSharp.Net.AuthenticationChallenge,WebSocketSharp.Net.NetworkCredential,System.UInt32)
extern "C"  void AuthenticationResponse__ctor_m3527775216 (AuthenticationResponse_t1212723231 * __this, AuthenticationChallenge_t1146723439 * ___challenge0, NetworkCredential_t3911206805 * ___credentials1, uint32_t ___nonceCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.AuthenticationResponse::.ctor(WebSocketSharp.Net.AuthenticationSchemes,System.Collections.Specialized.NameValueCollection,WebSocketSharp.Net.NetworkCredential,System.UInt32)
extern "C"  void AuthenticationResponse__ctor_m3890038308 (AuthenticationResponse_t1212723231 * __this, int32_t ___scheme0, NameValueCollection_t3047564564 * ___parameters1, NetworkCredential_t3911206805 * ___credentials2, uint32_t ___nonceCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 WebSocketSharp.Net.AuthenticationResponse::get_NonceCount()
extern "C"  uint32_t AuthenticationResponse_get_NonceCount_m983056004 (AuthenticationResponse_t1212723231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::get_Cnonce()
extern "C"  String_t* AuthenticationResponse_get_Cnonce_m1176647958 (AuthenticationResponse_t1212723231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::get_Nc()
extern "C"  String_t* AuthenticationResponse_get_Nc_m1043152757 (AuthenticationResponse_t1212723231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::get_Password()
extern "C"  String_t* AuthenticationResponse_get_Password_m741089335 (AuthenticationResponse_t1212723231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::get_Response()
extern "C"  String_t* AuthenticationResponse_get_Response_m142848391 (AuthenticationResponse_t1212723231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::get_Uri()
extern "C"  String_t* AuthenticationResponse_get_Uri_m1112136282 (AuthenticationResponse_t1212723231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::get_UserName()
extern "C"  String_t* AuthenticationResponse_get_UserName_m37890690 (AuthenticationResponse_t1212723231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::createA1(System.String,System.String,System.String)
extern "C"  String_t* AuthenticationResponse_createA1_m705706371 (Il2CppObject * __this /* static, unused */, String_t* ___username0, String_t* ___password1, String_t* ___realm2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::createA1(System.String,System.String,System.String,System.String,System.String)
extern "C"  String_t* AuthenticationResponse_createA1_m3588332867 (Il2CppObject * __this /* static, unused */, String_t* ___username0, String_t* ___password1, String_t* ___realm2, String_t* ___nonce3, String_t* ___cnonce4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::createA2(System.String,System.String)
extern "C"  String_t* AuthenticationResponse_createA2_m2870369686 (Il2CppObject * __this /* static, unused */, String_t* ___method0, String_t* ___uri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::createA2(System.String,System.String,System.String)
extern "C"  String_t* AuthenticationResponse_createA2_m551544994 (Il2CppObject * __this /* static, unused */, String_t* ___method0, String_t* ___uri1, String_t* ___entity2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::hash(System.String)
extern "C"  String_t* AuthenticationResponse_hash_m2473247645 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.AuthenticationResponse::initAsDigest()
extern "C"  void AuthenticationResponse_initAsDigest_m2207554970 (AuthenticationResponse_t1212723231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::CreateRequestDigest(System.Collections.Specialized.NameValueCollection)
extern "C"  String_t* AuthenticationResponse_CreateRequestDigest_m4133630183 (Il2CppObject * __this /* static, unused */, NameValueCollection_t3047564564 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationResponse WebSocketSharp.Net.AuthenticationResponse::Parse(System.String)
extern "C"  AuthenticationResponse_t1212723231 * AuthenticationResponse_Parse_m2427847625 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.AuthenticationResponse::ParseBasicCredentials(System.String)
extern "C"  NameValueCollection_t3047564564 * AuthenticationResponse_ParseBasicCredentials_m3038440841 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::ToBasicString()
extern "C"  String_t* AuthenticationResponse_ToBasicString_m4122897381 (AuthenticationResponse_t1212723231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::ToDigestString()
extern "C"  String_t* AuthenticationResponse_ToDigestString_m1689985271 (AuthenticationResponse_t1212723231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.IIdentity WebSocketSharp.Net.AuthenticationResponse::ToIdentity()
extern "C"  Il2CppObject * AuthenticationResponse_ToIdentity_m1732049004 (AuthenticationResponse_t1212723231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.AuthenticationResponse::<initAsDigest>m__0(System.String)
extern "C"  bool AuthenticationResponse_U3CinitAsDigestU3Em__0_m3391380873 (Il2CppObject * __this /* static, unused */, String_t* ___qop0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
