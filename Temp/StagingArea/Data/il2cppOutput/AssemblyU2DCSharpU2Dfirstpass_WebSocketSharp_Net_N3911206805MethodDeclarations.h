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

// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_t3911206805;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void WebSocketSharp.Net.NetworkCredential::.ctor(System.String,System.String)
extern "C"  void NetworkCredential__ctor_m3229406480 (NetworkCredential_t3911206805 * __this, String_t* ___userName0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.NetworkCredential::.ctor(System.String,System.String,System.String,System.String[])
extern "C"  void NetworkCredential__ctor_m3796852700 (NetworkCredential_t3911206805 * __this, String_t* ___userName0, String_t* ___password1, String_t* ___domain2, StringU5BU5D_t1642385972* ___roles3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.NetworkCredential::get_Domain()
extern "C"  String_t* NetworkCredential_get_Domain_m3238672872 (NetworkCredential_t3911206805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.NetworkCredential::set_Domain(System.String)
extern "C"  void NetworkCredential_set_Domain_m970914797 (NetworkCredential_t3911206805 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.NetworkCredential::get_Password()
extern "C"  String_t* NetworkCredential_get_Password_m1151498485 (NetworkCredential_t3911206805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.NetworkCredential::set_Password(System.String)
extern "C"  void NetworkCredential_set_Password_m3137143054 (NetworkCredential_t3911206805 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.Net.NetworkCredential::get_Roles()
extern "C"  StringU5BU5D_t1642385972* NetworkCredential_get_Roles_m3681817799 (NetworkCredential_t3911206805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.NetworkCredential::set_Roles(System.String[])
extern "C"  void NetworkCredential_set_Roles_m2705774418 (NetworkCredential_t3911206805 * __this, StringU5BU5D_t1642385972* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.NetworkCredential::get_UserName()
extern "C"  String_t* NetworkCredential_get_UserName_m2840216828 (NetworkCredential_t3911206805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.NetworkCredential::set_UserName(System.String)
extern "C"  void NetworkCredential_set_UserName_m4236810503 (NetworkCredential_t3911206805 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
