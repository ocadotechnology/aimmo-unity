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

// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
struct ExtendedKeyUsageExtension_t3816993686;
// Mono.Security.X509.X509Extension
struct X509Extension_t1439760128;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509Extension1439760127.h"

// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void ExtendedKeyUsageExtension__ctor_m3310261285 (ExtendedKeyUsageExtension_t3816993686 * __this, X509Extension_t1439760128 * ___extension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::Decode()
extern "C"  void ExtendedKeyUsageExtension_Decode_m901297139 (ExtendedKeyUsageExtension_t3816993686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::Encode()
extern "C"  void ExtendedKeyUsageExtension_Encode_m3429751649 (ExtendedKeyUsageExtension_t3816993686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::get_KeyPurpose()
extern "C"  ArrayList_t4252133567 * ExtendedKeyUsageExtension_get_KeyPurpose_m1625001387 (ExtendedKeyUsageExtension_t3816993686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::ToString()
extern "C"  String_t* ExtendedKeyUsageExtension_ToString_m1081992020 (ExtendedKeyUsageExtension_t3816993686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
