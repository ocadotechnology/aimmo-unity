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
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2624936259;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSA3719518354.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorith2624936259.h"

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C"  void PKCS1__cctor_m1002943778 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C"  bool PKCS1_Compare_m552424558 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___array10, ByteU5BU5D_t3397334013* ___array21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* PKCS1_I2OSP_m647014786 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___x0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PKCS1_OS2IP_m2226560443 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PKCS1_RSASP1_m1748738009 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, ByteU5BU5D_t3397334013* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PKCS1_RSAVP1_m1644175986 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, ByteU5BU5D_t3397334013* ___s1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PKCS1_Sign_v15_m554806303 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, HashAlgorithm_t2624936259 * ___hash1, ByteU5BU5D_t3397334013* ___hashValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C"  bool PKCS1_Verify_v15_m3855588030 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, HashAlgorithm_t2624936259 * ___hash1, ByteU5BU5D_t3397334013* ___hashValue2, ByteU5BU5D_t3397334013* ___signature3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C"  bool PKCS1_Verify_v15_m478274703 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, HashAlgorithm_t2624936259 * ___hash1, ByteU5BU5D_t3397334013* ___hashValue2, ByteU5BU5D_t3397334013* ___signature3, bool ___tryNonStandardEncoding4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* PKCS1_Encode_v15_m1038051160 (Il2CppObject * __this /* static, unused */, HashAlgorithm_t2624936259 * ___hash0, ByteU5BU5D_t3397334013* ___hashValue1, int32_t ___emLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
