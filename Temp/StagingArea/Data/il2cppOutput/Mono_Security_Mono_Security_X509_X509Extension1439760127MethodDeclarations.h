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
struct X509Extension_t1439760128;
// Mono.Security.ASN1
struct ASN1_t924533536;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN1924533535.h"
#include "Mono_Security_Mono_Security_X509_X509Extension1439760127.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern "C"  void X509Extension__ctor_m2083345012 (X509Extension_t1439760128 * __this, ASN1_t924533536 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void X509Extension__ctor_m2273534630 (X509Extension_t1439760128 * __this, X509Extension_t1439760128 * ___extension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Decode()
extern "C"  void X509Extension_Decode_m972859652 (X509Extension_t1439760128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Encode()
extern "C"  void X509Extension_Encode_m1753933824 (X509Extension_t1439760128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::get_Oid()
extern "C"  String_t* X509Extension_get_Oid_m2301335920 (X509Extension_t1439760128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::get_Critical()
extern "C"  bool X509Extension_get_Critical_m1103269870 (X509Extension_t1439760128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_Value()
extern "C"  ASN1_t924533536 * X509Extension_get_Value_m3409801211 (X509Extension_t1439760128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
extern "C"  bool X509Extension_Equals_m1304125015 (X509Extension_t1439760128 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
extern "C"  int32_t X509Extension_GetHashCode_m3265407565 (X509Extension_t1439760128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C"  void X509Extension_WriteLine_m364247613 (X509Extension_t1439760128 * __this, StringBuilder_t1221177846 * ___sb0, int32_t ___n1, int32_t ___pos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::ToString()
extern "C"  String_t* X509Extension_ToString_m408479757 (X509Extension_t1439760128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
