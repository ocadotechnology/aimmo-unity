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

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t2656813773;
// Mono.Security.ASN1
struct ASN1_t924533536;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1443605388;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN1924533535.h"

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C"  void EncryptedData__ctor_m3834592644 (EncryptedData_t2656813773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C"  void EncryptedData__ctor_m3866918584 (EncryptedData_t2656813773 * __this, ASN1_t924533536 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C"  ContentInfo_t1443605388 * EncryptedData_get_EncryptionAlgorithm_m3585820551 (EncryptedData_t2656813773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C"  ByteU5BU5D_t3397334013* EncryptedData_get_EncryptedContent_m3832882582 (EncryptedData_t2656813773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
