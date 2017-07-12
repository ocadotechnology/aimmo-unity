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

// WebSocketSharp.Net.AuthenticationBase
struct AuthenticationBase_t909684845;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Aut29593226.h"
#include "System_System_Collections_Specialized_NameValueCol3047564564.h"
#include "mscorlib_System_String2029220233.h"

// System.Void WebSocketSharp.Net.AuthenticationBase::.ctor(WebSocketSharp.Net.AuthenticationSchemes,System.Collections.Specialized.NameValueCollection)
extern "C"  void AuthenticationBase__ctor_m3754396373 (AuthenticationBase_t909684845 * __this, int32_t ___scheme0, NameValueCollection_t3047564564 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationBase::get_Algorithm()
extern "C"  String_t* AuthenticationBase_get_Algorithm_m2734557781 (AuthenticationBase_t909684845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationBase::get_Nonce()
extern "C"  String_t* AuthenticationBase_get_Nonce_m1050182215 (AuthenticationBase_t909684845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationBase::get_Opaque()
extern "C"  String_t* AuthenticationBase_get_Opaque_m282967973 (AuthenticationBase_t909684845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationBase::get_Qop()
extern "C"  String_t* AuthenticationBase_get_Qop_m1296014134 (AuthenticationBase_t909684845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationBase::get_Realm()
extern "C"  String_t* AuthenticationBase_get_Realm_m4084640333 (AuthenticationBase_t909684845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Net.AuthenticationBase::get_Scheme()
extern "C"  int32_t AuthenticationBase_get_Scheme_m766138777 (AuthenticationBase_t909684845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationBase::CreateNonceValue()
extern "C"  String_t* AuthenticationBase_CreateNonceValue_m1997843477 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.AuthenticationBase::ParseParameters(System.String)
extern "C"  NameValueCollection_t3047564564 * AuthenticationBase_ParseParameters_m1856208559 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationBase::ToString()
extern "C"  String_t* AuthenticationBase_ToString_m1216947581 (AuthenticationBase_t909684845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
