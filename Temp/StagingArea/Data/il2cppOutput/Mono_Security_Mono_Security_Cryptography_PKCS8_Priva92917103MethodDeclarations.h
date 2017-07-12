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

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t92917104;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.RSA
struct RSA_t3719518354;
// System.Security.Cryptography.DSA
struct DSA_t903174880;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter1872138834.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C"  void PrivateKeyInfo__ctor_m2683279425 (PrivateKeyInfo_t92917104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C"  void PrivateKeyInfo__ctor_m3851924948 (PrivateKeyInfo_t92917104 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C"  ByteU5BU5D_t3397334013* PrivateKeyInfo_get_PrivateKey_m2127503870 (PrivateKeyInfo_t92917104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C"  void PrivateKeyInfo_Decode_m1053025782 (PrivateKeyInfo_t92917104 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PrivateKeyInfo_RemoveLeadingZero_m3396807048 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bigInt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* PrivateKeyInfo_Normalize_m1192796352 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bigInt0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C"  RSA_t3719518354 * PrivateKeyInfo_DecodeRSA_m919734506 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___keypair0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C"  DSA_t903174880 * PrivateKeyInfo_DecodeDSA_m2497561917 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___privateKey0, DSAParameters_t1872138834  ___dsaParameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
