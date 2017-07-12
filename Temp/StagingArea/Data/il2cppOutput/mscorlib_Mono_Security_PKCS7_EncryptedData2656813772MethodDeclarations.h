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
struct EncryptedData_t2656813772;
// Mono.Security.ASN1
struct ASN1_t924533535;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1443605387;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_ASN1924533535.h"

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C"  void EncryptedData__ctor_m3128538466 (EncryptedData_t2656813772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C"  void EncryptedData__ctor_m3860500558 (EncryptedData_t2656813772 * __this, ASN1_t924533535 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C"  ContentInfo_t1443605387 * EncryptedData_get_EncryptionAlgorithm_m1301274243 (EncryptedData_t2656813772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C"  ByteU5BU5D_t3397334013* EncryptedData_get_EncryptedContent_m2732115576 (EncryptedData_t2656813772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
