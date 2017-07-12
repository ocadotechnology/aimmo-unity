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

// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051958;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.DSA
struct DSA_t903174880;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1640144840;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t3719518354;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;
// Mono.Security.ASN1
struct ASN1_t924533536;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSA903174880.h"
#include "mscorlib_System_Security_Cryptography_RSA3719518354.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAlg784058677.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C"  void X509Certificate__ctor_m2941481449 (X509Certificate_t324051958 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C"  void X509Certificate__cctor_m2984068893 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C"  void X509Certificate_Parse_m1764345628 (X509Certificate_t324051958 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* X509Certificate_GetUnsignedBigInteger_m2102946512 (X509Certificate_t324051958 * __this, ByteU5BU5D_t3397334013* ___integer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C"  DSA_t903174880 * X509Certificate_get_DSA_m3972464423 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
extern "C"  void X509Certificate_set_DSA_m1325917832 (X509Certificate_t324051958 * __this, DSA_t903174880 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
extern "C"  X509ExtensionCollection_t1640144840 * X509Certificate_get_Extensions_m222060964 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
extern "C"  ByteU5BU5D_t3397334013* X509Certificate_get_Hash_m2470366345 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C"  String_t* X509Certificate_get_IssuerName_m3907994144 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
extern "C"  String_t* X509Certificate_get_KeyAlgorithm_m454927092 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C"  ByteU5BU5D_t3397334013* X509Certificate_get_KeyAlgorithmParameters_m1701675565 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_KeyAlgorithmParameters(System.Byte[])
extern "C"  void X509Certificate_set_KeyAlgorithmParameters_m17826364 (X509Certificate_t324051958 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C"  ByteU5BU5D_t3397334013* X509Certificate_get_PublicKey_m933487733 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
extern "C"  RSA_t3719518354 * X509Certificate_get_RSA_m1167362983 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
extern "C"  void X509Certificate_set_RSA_m1038416652 (X509Certificate_t324051958 * __this, RSA_t3719518354 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C"  ByteU5BU5D_t3397334013* X509Certificate_get_RawData_m1262574599 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
extern "C"  ByteU5BU5D_t3397334013* X509Certificate_get_SerialNumber_m2509150920 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
extern "C"  ByteU5BU5D_t3397334013* X509Certificate_get_Signature_m3664033367 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
extern "C"  String_t* X509Certificate_get_SignatureAlgorithm_m2111916881 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C"  String_t* X509Certificate_get_SubjectName_m3533705485 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C"  DateTime_t693205669  X509Certificate_get_ValidFrom_m1740754472 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C"  DateTime_t693205669  X509Certificate_get_ValidUntil_m4037777446 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
extern "C"  int32_t X509Certificate_get_Version_m1704730343 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
extern "C"  bool X509Certificate_get_IsCurrent_m424898544 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
extern "C"  bool X509Certificate_WasCurrent_m3632049416 (X509Certificate_t324051958 * __this, DateTime_t693205669  ___instant0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
extern "C"  bool X509Certificate_VerifySignature_m4020723406 (X509Certificate_t324051958 * __this, DSA_t903174880 * ___dsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
extern "C"  bool X509Certificate_VerifySignature_m4020723740 (X509Certificate_t324051958 * __this, RSA_t3719518354 * ___rsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  bool X509Certificate_VerifySignature_m3536156059 (X509Certificate_t324051958 * __this, AsymmetricAlgorithm_t784058677 * ___aa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
extern "C"  bool X509Certificate_get_IsSelfSigned_m3860357831 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C"  ASN1_t924533536 * X509Certificate_GetIssuerName_m2776799695 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C"  ASN1_t924533536 * X509Certificate_GetSubjectName_m3163312410 (X509Certificate_t324051958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void X509Certificate_GetObjectData_m2064274370 (X509Certificate_t324051958 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* X509Certificate_PEM_m49854707 (Il2CppObject * __this /* static, unused */, String_t* ___type0, ByteU5BU5D_t3397334013* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
