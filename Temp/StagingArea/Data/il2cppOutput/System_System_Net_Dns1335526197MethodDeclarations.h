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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Net.IPHostEntry
struct IPHostEntry_t994738509;
// System.Net.IPAddress
struct IPAddress_t1399971723;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t4087230954;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_IPAddress1399971723.h"

// System.Void System.Net.Dns::.cctor()
extern "C"  void Dns__cctor_m2821276024 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C"  bool Dns_GetHostByName_internal_m1349738089 (Il2CppObject * __this /* static, unused */, String_t* ___host0, String_t** ___h_name1, StringU5BU5D_t1642385972** ___h_aliases2, StringU5BU5D_t1642385972** ___h_addr_list3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByAddr_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C"  bool Dns_GetHostByAddr_internal_m1066991129 (Il2CppObject * __this /* static, unused */, String_t* ___addr0, String_t** ___h_name1, StringU5BU5D_t1642385972** ___h_aliases2, StringU5BU5D_t1642385972** ___h_addr_list3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostName_internal(System.String&)
extern "C"  bool Dns_GetHostName_internal_m2234042924 (Il2CppObject * __this /* static, unused */, String_t** ___h_name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String[],System.String[])
extern "C"  IPHostEntry_t994738509 * Dns_hostent_to_IPHostEntry_m3727947264 (Il2CppObject * __this /* static, unused */, String_t* ___h_name0, StringU5BU5D_t1642385972* ___h_aliases1, StringU5BU5D_t1642385972* ___h_addrlist2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByAddressFromString(System.String,System.Boolean)
extern "C"  IPHostEntry_t994738509 * Dns_GetHostByAddressFromString_m3502290436 (Il2CppObject * __this /* static, unused */, String_t* ___address0, bool ___parse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
extern "C"  IPHostEntry_t994738509 * Dns_GetHostEntry_m705645829 (Il2CppObject * __this /* static, unused */, String_t* ___hostNameOrAddress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.Net.IPAddress)
extern "C"  IPHostEntry_t994738509 * Dns_GetHostEntry_m2573910040 (Il2CppObject * __this /* static, unused */, IPAddress_t1399971723 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
extern "C"  IPAddressU5BU5D_t4087230954* Dns_GetHostAddresses_m1469938777 (Il2CppObject * __this /* static, unused */, String_t* ___hostNameOrAddress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern "C"  IPHostEntry_t994738509 * Dns_GetHostByName_m3673230969 (Il2CppObject * __this /* static, unused */, String_t* ___hostName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Dns::GetHostName()
extern "C"  String_t* Dns_GetHostName_m2452666545 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
