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

// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct SubjectAltNameExtension_t604050261;
// Mono.Security.X509.X509Extension
struct X509Extension_t1439760128;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509Extension1439760127.h"

// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void SubjectAltNameExtension__ctor_m2621620126 (SubjectAltNameExtension_t604050261 * __this, X509Extension_t1439760128 * ___extension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::Decode()
extern "C"  void SubjectAltNameExtension_Decode_m3676245240 (SubjectAltNameExtension_t604050261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_DNSNames()
extern "C"  StringU5BU5D_t1642385972* SubjectAltNameExtension_get_DNSNames_m1798931443 (SubjectAltNameExtension_t604050261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_IPAddresses()
extern "C"  StringU5BU5D_t1642385972* SubjectAltNameExtension_get_IPAddresses_m3207151211 (SubjectAltNameExtension_t604050261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.SubjectAltNameExtension::ToString()
extern "C"  String_t* SubjectAltNameExtension_ToString_m1300810903 (SubjectAltNameExtension_t604050261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
