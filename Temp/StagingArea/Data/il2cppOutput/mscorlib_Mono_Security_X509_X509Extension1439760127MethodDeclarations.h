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

// Mono.Security.X509.X509Extension
struct X509Extension_t1439760127;
// Mono.Security.ASN1
struct ASN1_t924533535;
// System.Object
struct Il2CppObject;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_ASN1924533535.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern "C"  void X509Extension__ctor_m3226803314 (X509Extension_t1439760127 * __this, ASN1_t924533535 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Decode()
extern "C"  void X509Extension_Decode_m1485464434 (X509Extension_t1439760127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
extern "C"  bool X509Extension_Equals_m2626519947 (X509Extension_t1439760127 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
extern "C"  int32_t X509Extension_GetHashCode_m440263973 (X509Extension_t1439760127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C"  void X509Extension_WriteLine_m2850991173 (X509Extension_t1439760127 * __this, StringBuilder_t1221177846 * ___sb0, int32_t ___n1, int32_t ___pos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::ToString()
extern "C"  String_t* X509Extension_ToString_m546886661 (X509Extension_t1439760127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
