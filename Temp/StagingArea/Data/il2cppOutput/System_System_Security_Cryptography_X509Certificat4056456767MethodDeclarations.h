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

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t4056456767;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t650873211;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t452415348;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t870392;
// System.Security.Cryptography.Oid
struct Oid_t3221867120;
// Mono.Security.ASN1
struct ASN1_t924533536;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051958;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAlg784058677.h"
#include "System_System_Security_Cryptography_X509Certificat2669466891.h"
#include "Mono_Security_Mono_Security_ASN1924533535.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1216946873.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
extern "C"  void X509Certificate2__ctor_m1095336775 (X509Certificate2_t4056456767 * __this, ByteU5BU5D_t3397334013* ___rawData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.String)
extern "C"  void X509Certificate2__ctor_m674258694 (X509Certificate2_t4056456767 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void X509Certificate2__ctor_m267876066 (X509Certificate2_t4056456767 * __this, X509Certificate_t283079845 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
extern "C"  void X509Certificate2__cctor_m3470694777 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::get_Extensions()
extern "C"  X509ExtensionCollection_t650873211 * X509Certificate2_get_Extensions_m3374377562 (X509Certificate2_t4056456767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_IssuerName()
extern "C"  X500DistinguishedName_t452415348 * X509Certificate2_get_IssuerName_m2295833821 (X509Certificate2_t4056456767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
extern "C"  DateTime_t693205669  X509Certificate2_get_NotAfter_m3430171627 (X509Certificate2_t4056456767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
extern "C"  DateTime_t693205669  X509Certificate2_get_NotBefore_m2972055762 (X509Certificate2_t4056456767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
extern "C"  AsymmetricAlgorithm_t784058677 * X509Certificate2_get_PrivateKey_m2662162956 (X509Certificate2_t4056456767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::set_PrivateKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void X509Certificate2_set_PrivateKey_m4244881187 (X509Certificate2_t4056456767 * __this, AsymmetricAlgorithm_t784058677 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
extern "C"  PublicKey_t870392 * X509Certificate2_get_PublicKey_m2119837179 (X509Certificate2_t4056456767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
extern "C"  String_t* X509Certificate2_get_SerialNumber_m1521011849 (X509Certificate2_t4056456767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
extern "C"  Oid_t3221867120 * X509Certificate2_get_SignatureAlgorithm_m3069898012 (X509Certificate2_t4056456767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_SubjectName()
extern "C"  X500DistinguishedName_t452415348 * X509Certificate2_get_SubjectName_m2958094870 (X509Certificate2_t4056456767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
extern "C"  String_t* X509Certificate2_get_Thumbprint_m4244025929 (X509Certificate2_t4056456767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
extern "C"  int32_t X509Certificate2_get_Version_m1927399907 (X509Certificate2_t4056456767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType,System.Boolean)
extern "C"  String_t* X509Certificate2_GetNameInfo_m402390219 (X509Certificate2_t4056456767 * __this, int32_t ___nameType0, bool ___forIssuer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 System.Security.Cryptography.X509Certificates.X509Certificate2::Find(System.Byte[],Mono.Security.ASN1)
extern "C"  ASN1_t924533536 * X509Certificate2_Find_m833446211 (X509Certificate2_t4056456767 * __this, ByteU5BU5D_t3397334013* ___oid0, ASN1_t924533536 * ___dn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetValueAsString(Mono.Security.ASN1)
extern "C"  String_t* X509Certificate2_GetValueAsString_m1286925493 (X509Certificate2_t4056456767 * __this, ASN1_t924533536 * ___pair0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::ImportPkcs12(System.Byte[],System.String)
extern "C"  void X509Certificate2_ImportPkcs12_m3993877002 (X509Certificate2_t4056456767 * __this, ByteU5BU5D_t3397334013* ___rawData0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C"  void X509Certificate2_Import_m3813388542 (X509Certificate2_t4056456767 * __this, ByteU5BU5D_t3397334013* ___rawData0, String_t* ___password1, int32_t ___keyStorageFlags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.String,System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C"  void X509Certificate2_Import_m4013517513 (X509Certificate2_t4056456767 * __this, String_t* ___fileName0, String_t* ___password1, int32_t ___keyStorageFlags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::Load(System.String)
extern "C"  ByteU5BU5D_t3397334013* X509Certificate2_Load_m1463843184 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
extern "C"  void X509Certificate2_Reset_m414840175 (X509Certificate2_t4056456767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
extern "C"  String_t* X509Certificate2_ToString_m3269655217 (X509Certificate2_t4056456767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
extern "C"  String_t* X509Certificate2_ToString_m4160733282 (X509Certificate2_t4056456767 * __this, bool ___verbose0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern "C"  void X509Certificate2_AppendBuffer_m3517242299 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___sb0, ByteU5BU5D_t3397334013* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::Verify()
extern "C"  bool X509Certificate2_Verify_m1574874641 (X509Certificate2_t4056456767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::get_MonoCertificate()
extern "C"  X509Certificate_t324051958 * X509Certificate2_get_MonoCertificate_m2721967882 (X509Certificate2_t4056456767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
