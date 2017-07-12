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

// Mono.Security.X509.PKCS12
struct PKCS12_t1362584794;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3592472865;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1108166522;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t2656813772;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t92917103;
// Mono.Security.ASN1
struct ASN1_t924533535;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051957;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1443605387;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_Mono_Security_PKCS7_EncryptedData2656813772.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter1872138834.h"
#include "mscorlib_Mono_Security_Cryptography_PKCS8_PrivateKey92917103.h"
#include "mscorlib_Mono_Security_ASN1924533535.h"
#include "mscorlib_Mono_Security_X509_X509Certificate324051957.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
extern "C"  void PKCS12__ctor_m3492967071 (PKCS12_t1362584794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
extern "C"  void PKCS12__ctor_m4169229936 (PKCS12_t1362584794 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
extern "C"  void PKCS12__ctor_m1045834576 (PKCS12_t1362584794 * __this, ByteU5BU5D_t3397334013* ___data0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
extern "C"  void PKCS12__cctor_m1757174972 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
extern "C"  void PKCS12_Decode_m731190390 (PKCS12_t1362584794 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
extern "C"  void PKCS12_Finalize_m107130293 (PKCS12_t1362584794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
extern "C"  void PKCS12_set_Password_m2189925567 (PKCS12_t1362584794 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_IterationCount()
extern "C"  int32_t PKCS12_get_IterationCount_m3572300030 (PKCS12_t1362584794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_IterationCount(System.Int32)
extern "C"  void PKCS12_set_IterationCount_m3081866347 (PKCS12_t1362584794 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
extern "C"  X509CertificateCollection_t3592472865 * PKCS12_get_Certificates_m2591178223 (PKCS12_t1362584794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::get_RNG()
extern "C"  RandomNumberGenerator_t2510243513 * PKCS12_get_RNG_m3620550062 (PKCS12_t1362584794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
extern "C"  bool PKCS12_Compare_m896757472 (PKCS12_t1362584794 * __this, ByteU5BU5D_t3397334013* ___expected0, ByteU5BU5D_t3397334013* ___actual1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
extern "C"  SymmetricAlgorithm_t1108166522 * PKCS12_GetSymmetricAlgorithm_m1812022677 (PKCS12_t1362584794 * __this, String_t* ___algorithmOid0, ByteU5BU5D_t3397334013* ___salt1, int32_t ___iterationCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PKCS12_Decrypt_m2353135969 (PKCS12_t1362584794 * __this, String_t* ___algorithmOid0, ByteU5BU5D_t3397334013* ___salt1, int32_t ___iterationCount2, ByteU5BU5D_t3397334013* ___encryptedData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
extern "C"  ByteU5BU5D_t3397334013* PKCS12_Decrypt_m2457743414 (PKCS12_t1362584794 * __this, EncryptedData_t2656813772 * ___ed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Encrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PKCS12_Encrypt_m1401341763 (PKCS12_t1362584794 * __this, String_t* ___algorithmOid0, ByteU5BU5D_t3397334013* ___salt1, int32_t ___iterationCount2, ByteU5BU5D_t3397334013* ___data3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
extern "C"  DSAParameters_t1872138834  PKCS12_GetExistingParameters_m2413397265 (PKCS12_t1362584794 * __this, bool* ___found0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
extern "C"  void PKCS12_AddPrivateKey_m2916757605 (PKCS12_t1362584794 * __this, PrivateKeyInfo_t92917103 * ___pki0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
extern "C"  void PKCS12_ReadSafeBag_m588574672 (PKCS12_t1362584794 * __this, ASN1_t924533535 * ___safeBag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.PKCS12::CertificateSafeBag(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C"  ASN1_t924533535 * PKCS12_CertificateSafeBag_m547206291 (PKCS12_t1362584794 * __this, X509Certificate_t324051957 * ___x5090, Il2CppObject * ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PKCS12_MAC_m1519937926 (PKCS12_t1362584794 * __this, ByteU5BU5D_t3397334013* ___password0, ByteU5BU5D_t3397334013* ___salt1, int32_t ___iterations2, ByteU5BU5D_t3397334013* ___data3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::GetBytes()
extern "C"  ByteU5BU5D_t3397334013* PKCS12_GetBytes_m1265989870 (PKCS12_t1362584794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.X509.PKCS12::EncryptedContentInfo(Mono.Security.ASN1,System.String)
extern "C"  ContentInfo_t1443605387 * PKCS12_EncryptedContentInfo_m1573763230 (PKCS12_t1362584794 * __this, ASN1_t924533535 * ___safeBags0, String_t* ___algorithmOid1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate)
extern "C"  void PKCS12_AddCertificate_m4095106945 (PKCS12_t1362584794 * __this, X509Certificate_t324051957 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C"  void PKCS12_AddCertificate_m2223551582 (PKCS12_t1362584794 * __this, X509Certificate_t324051957 * ___cert0, Il2CppObject * ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate)
extern "C"  void PKCS12_RemoveCertificate_m1590055870 (PKCS12_t1362584794 * __this, X509Certificate_t324051957 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C"  void PKCS12_RemoveCertificate_m3473106951 (PKCS12_t1362584794 * __this, X509Certificate_t324051957 * ___cert0, Il2CppObject * ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.PKCS12::Clone()
extern "C"  Il2CppObject * PKCS12_Clone_m4018301141 (PKCS12_t1362584794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
extern "C"  int32_t PKCS12_get_MaximumPasswordLength_m1894661347 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
