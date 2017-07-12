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

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.RSA
struct RSA_t3719518354;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2624936259;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSA3719518354.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber2510243513.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorith2624936259.h"

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C"  void PKCS1__cctor_m3343707276 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C"  bool PKCS1_Compare_m4211756960 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___array10, ByteU5BU5D_t3397334013* ___array21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* PKCS1_I2OSP_m3905712516 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___x0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PKCS1_OS2IP_m1273945439 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PKCS1_RSAEP_m3065689068 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, ByteU5BU5D_t3397334013* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSADP(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PKCS1_RSADP_m2144306987 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, ByteU5BU5D_t3397334013* ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PKCS1_RSASP1_m1786291617 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, ByteU5BU5D_t3397334013* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PKCS1_RSAVP1_m4144423556 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, ByteU5BU5D_t3397334013* ___s1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PKCS1_Encrypt_v15_m1473661153 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, RandomNumberGenerator_t2510243513 * ___rng1, ByteU5BU5D_t3397334013* ___M2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Decrypt_v15(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PKCS1_Decrypt_v15_m1825603087 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, ByteU5BU5D_t3397334013* ___C1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PKCS1_Sign_v15_m2137018891 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, HashAlgorithm_t2624936259 * ___hash1, ByteU5BU5D_t3397334013* ___hashValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C"  bool PKCS1_Verify_v15_m1048842936 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, HashAlgorithm_t2624936259 * ___hash1, ByteU5BU5D_t3397334013* ___hashValue2, ByteU5BU5D_t3397334013* ___signature3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C"  bool PKCS1_Verify_v15_m2571212635 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, HashAlgorithm_t2624936259 * ___hash1, ByteU5BU5D_t3397334013* ___hashValue2, ByteU5BU5D_t3397334013* ___signature3, bool ___tryNonStandardEncoding4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* PKCS1_Encode_v15_m2462715278 (Il2CppObject * __this /* static, unused */, HashAlgorithm_t2624936259 * ___hash0, ByteU5BU5D_t3397334013* ___hashValue1, int32_t ___emLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
