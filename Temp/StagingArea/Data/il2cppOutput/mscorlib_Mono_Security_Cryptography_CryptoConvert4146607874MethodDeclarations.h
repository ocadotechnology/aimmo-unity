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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSA3719518354.h"

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C"  int32_t CryptoConvert_ToInt32LE_m3103589321 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C"  uint32_t CryptoConvert_ToUInt32LE_m27102829 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* CryptoConvert_GetBytesLE_m4026062242 (Il2CppObject * __this /* static, unused */, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::Trim(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* CryptoConvert_Trim_m2977625850 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlob(System.Byte[],System.Int32)
extern "C"  RSA_t3719518354 * CryptoConvert_FromCapiPrivateKeyBlob_m2742962763 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
extern "C"  ByteU5BU5D_t3397334013* CryptoConvert_ToCapiPrivateKeyBlob_m850465939 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
extern "C"  RSA_t3719518354 * CryptoConvert_FromCapiPublicKeyBlob_m547807126 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
extern "C"  RSA_t3719518354 * CryptoConvert_FromCapiPublicKeyBlob_m812595523 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
extern "C"  ByteU5BU5D_t3397334013* CryptoConvert_ToCapiPublicKeyBlob_m924651951 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[])
extern "C"  RSA_t3719518354 * CryptoConvert_FromCapiKeyBlob_m2946005903 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[],System.Int32)
extern "C"  RSA_t3719518354 * CryptoConvert_FromCapiKeyBlob_m3701215818 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
extern "C"  ByteU5BU5D_t3397334013* CryptoConvert_ToCapiKeyBlob_m607484285 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, bool ___includePrivateKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
