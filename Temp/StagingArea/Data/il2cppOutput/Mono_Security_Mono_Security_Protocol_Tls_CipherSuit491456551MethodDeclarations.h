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

// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t491456551;
// System.String
struct String_t;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t281704372;
// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t1374150027;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlg4212518094.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgor1654661965.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAl954949548.h"
#include "mscorlib_System_Security_Cryptography_CipherMode162592484.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern "C"  void CipherSuite__ctor_m440966622 (CipherSuite_t491456551 * __this, int16_t ___code0, String_t* ___name1, int32_t ___cipherAlgorithmType2, int32_t ___hashAlgorithmType3, int32_t ___exchangeAlgorithmType4, bool ___exportable5, bool ___blockMode6, uint8_t ___keyMaterialSize7, uint8_t ___expandedKeyMaterialSize8, int16_t ___effectiveKeyBits9, uint8_t ___ivSize10, uint8_t ___blockSize11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::.cctor()
extern "C"  void CipherSuite__cctor_m2232817620 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_EncryptionCipher()
extern "C"  Il2CppObject * CipherSuite_get_EncryptionCipher_m1019312730 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_DecryptionCipher()
extern "C"  Il2CppObject * CipherSuite_get_DecryptionCipher_m3464788382 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ClientHMAC()
extern "C"  KeyedHashAlgorithm_t1374150027 * CipherSuite_get_ClientHMAC_m2261562571 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ServerHMAC()
extern "C"  KeyedHashAlgorithm_t1374150027 * CipherSuite_get_ServerHMAC_m3566778727 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_CipherAlgorithmType()
extern "C"  int32_t CipherSuite_get_CipherAlgorithmType_m750379757 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmName()
extern "C"  String_t* CipherSuite_get_HashAlgorithmName_m3238654725 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmType()
extern "C"  int32_t CipherSuite_get_HashAlgorithmType_m3902365773 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_HashSize()
extern "C"  int32_t CipherSuite_get_HashSize_m3748598203 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_ExchangeAlgorithmType()
extern "C"  int32_t CipherSuite_get_ExchangeAlgorithmType_m3219223789 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode Mono.Security.Protocol.Tls.CipherSuite::get_CipherMode()
extern "C"  int32_t CipherSuite_get_CipherMode_m2346658878 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_Code()
extern "C"  int16_t CipherSuite_get_Code_m3902213587 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_Name()
extern "C"  String_t* CipherSuite_get_Name_m3914703358 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuite::get_IsExportable()
extern "C"  bool CipherSuite_get_IsExportable_m136354150 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_KeyMaterialSize()
extern "C"  uint8_t CipherSuite_get_KeyMaterialSize_m4222492337 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_KeyBlockSize()
extern "C"  int32_t CipherSuite_get_KeyBlockSize_m2993514247 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_ExpandedKeyMaterialSize()
extern "C"  uint8_t CipherSuite_get_ExpandedKeyMaterialSize_m296573450 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_EffectiveKeyBits()
extern "C"  int16_t CipherSuite_get_EffectiveKeyBits_m3588203390 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_IvSize()
extern "C"  uint8_t CipherSuite_get_IvSize_m2971966910 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.CipherSuite::get_Context()
extern "C"  Context_t4285182719 * CipherSuite_get_Context_m1298687213 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::set_Context(Mono.Security.Protocol.Tls.Context)
extern "C"  void CipherSuite_set_Context_m4127897124 (CipherSuite_t491456551 * __this, Context_t4285182719 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.Int16)
extern "C"  void CipherSuite_Write_m1271196675 (CipherSuite_t491456551 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int16_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.UInt64)
extern "C"  void CipherSuite_Write_m827355463 (CipherSuite_t491456551 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, uint64_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::InitializeCipher()
extern "C"  void CipherSuite_InitializeCipher_m229247572 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::EncryptRecord(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* CipherSuite_EncryptRecord_m3421046381 (CipherSuite_t491456551 * __this, ByteU5BU5D_t3397334013* ___fragment0, ByteU5BU5D_t3397334013* ___mac1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::DecryptRecord(System.Byte[],System.Byte[]&,System.Byte[]&)
extern "C"  void CipherSuite_DecryptRecord_m1247194570 (CipherSuite_t491456551 * __this, ByteU5BU5D_t3397334013* ___fragment0, ByteU5BU5D_t3397334013** ___dcrFragment1, ByteU5BU5D_t3397334013** ___dcrMAC2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::CreatePremasterSecret()
extern "C"  ByteU5BU5D_t3397334013* CipherSuite_CreatePremasterSecret_m3728217834 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::PRF(System.Byte[],System.String,System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* CipherSuite_PRF_m3379816948 (CipherSuite_t491456551 * __this, ByteU5BU5D_t3397334013* ___secret0, String_t* ___label1, ByteU5BU5D_t3397334013* ___data2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::Expand(System.String,System.Byte[],System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* CipherSuite_Expand_m1800208652 (CipherSuite_t491456551 * __this, String_t* ___hashName0, ByteU5BU5D_t3397334013* ___secret1, ByteU5BU5D_t3397334013* ___seed2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createEncryptionCipher()
extern "C"  void CipherSuite_createEncryptionCipher_m1926075645 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createDecryptionCipher()
extern "C"  void CipherSuite_createDecryptionCipher_m1118350455 (CipherSuite_t491456551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
