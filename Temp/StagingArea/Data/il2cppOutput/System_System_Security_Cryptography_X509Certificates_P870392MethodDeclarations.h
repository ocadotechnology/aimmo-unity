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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t870392;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051958;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t463456204;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;
// System.Security.Cryptography.Oid
struct Oid_t3221867120;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.DSA
struct DSA_t903174880;
// System.Security.Cryptography.RSA
struct RSA_t3719518354;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate324051957.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C"  void PublicKey__ctor_m613031465 (PublicKey_t870392 * __this, X509Certificate_t324051958 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C"  AsnEncodedData_t463456204 * PublicKey_get_EncodedKeyValue_m3051963850 (PublicKey_t870392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C"  AsnEncodedData_t463456204 * PublicKey_get_EncodedParameters_m2182265270 (PublicKey_t870392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C"  AsymmetricAlgorithm_t784058677 * PublicKey_get_Key_m126090744 (PublicKey_t870392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C"  Oid_t3221867120 * PublicKey_get_Oid_m4224222642 (PublicKey_t870392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PublicKey_GetUnsignedBigInteger_m913837477 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___integer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C"  DSA_t903174880 * PublicKey_DecodeDSA_m1169363495 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___rawPublicKey0, ByteU5BU5D_t3397334013* ___rawParameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C"  RSA_t3719518354 * PublicKey_DecodeRSA_m1627823702 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___rawPublicKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
