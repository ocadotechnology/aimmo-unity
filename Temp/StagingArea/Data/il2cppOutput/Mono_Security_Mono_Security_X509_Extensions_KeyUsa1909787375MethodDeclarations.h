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

// Mono.Security.X509.Extensions.KeyUsageExtension
struct KeyUsageExtension_t1909787375;
// Mono.Security.X509.X509Extension
struct X509Extension_t1439760128;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509Extension1439760127.h"
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsag530589947.h"

// System.Void Mono.Security.X509.Extensions.KeyUsageExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void KeyUsageExtension__ctor_m2471620836 (KeyUsageExtension_t1909787375 * __this, X509Extension_t1439760128 * ___extension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.KeyUsageExtension::Decode()
extern "C"  void KeyUsageExtension_Decode_m4115739726 (KeyUsageExtension_t1909787375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.KeyUsageExtension::Encode()
extern "C"  void KeyUsageExtension_Encode_m1269721630 (KeyUsageExtension_t1909787375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.Extensions.KeyUsageExtension::Support(Mono.Security.X509.Extensions.KeyUsages)
extern "C"  bool KeyUsageExtension_Support_m2720178361 (KeyUsageExtension_t1909787375 * __this, int32_t ___usage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.KeyUsageExtension::ToString()
extern "C"  String_t* KeyUsageExtension_ToString_m1213032139 (KeyUsageExtension_t1909787375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
