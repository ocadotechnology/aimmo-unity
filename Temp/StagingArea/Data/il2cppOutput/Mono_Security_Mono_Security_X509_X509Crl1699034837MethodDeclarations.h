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

// Mono.Security.X509.X509Crl
struct X509Crl_t1699034837;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1640144840;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t743353844;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051958;
// System.Security.Cryptography.DSA
struct DSA_t903174880;
// System.Security.Cryptography.RSA
struct RSA_t3719518354;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate324051957.h"
#include "mscorlib_System_Security_Cryptography_DSA903174880.h"
#include "mscorlib_System_Security_Cryptography_RSA3719518354.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAlg784058677.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C"  void X509Crl__ctor_m2469408229 (X509Crl_t1699034837 * __this, ByteU5BU5D_t3397334013* ___crl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C"  void X509Crl_Parse_m3287862528 (X509Crl_t1699034837 * __this, ByteU5BU5D_t3397334013* ___crl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C"  X509ExtensionCollection_t1640144840 * X509Crl_get_Extensions_m1795830276 (X509Crl_t1699034837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C"  ByteU5BU5D_t3397334013* X509Crl_get_Hash_m3617397429 (X509Crl_t1699034837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C"  String_t* X509Crl_get_IssuerName_m756409840 (X509Crl_t1699034837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C"  DateTime_t693205669  X509Crl_get_NextUpdate_m45665244 (X509Crl_t1699034837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C"  bool X509Crl_Compare_m2229641633 (X509Crl_t1699034837 * __this, ByteU5BU5D_t3397334013* ___array10, ByteU5BU5D_t3397334013* ___array21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C"  X509CrlEntry_t743353844 * X509Crl_GetCrlEntry_m630720316 (X509Crl_t1699034837 * __this, X509Certificate_t324051958 * ___x5090, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C"  X509CrlEntry_t743353844 * X509Crl_GetCrlEntry_m550904265 (X509Crl_t1699034837 * __this, ByteU5BU5D_t3397334013* ___serialNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C"  String_t* X509Crl_GetHashName_m183504634 (X509Crl_t1699034837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C"  bool X509Crl_VerifySignature_m25190802 (X509Crl_t1699034837 * __this, DSA_t903174880 * ___dsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C"  bool X509Crl_VerifySignature_m25189948 (X509Crl_t1699034837 * __this, RSA_t3719518354 * ___rsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  bool X509Crl_VerifySignature_m1390212587 (X509Crl_t1699034837 * __this, AsymmetricAlgorithm_t784058677 * ___aa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
