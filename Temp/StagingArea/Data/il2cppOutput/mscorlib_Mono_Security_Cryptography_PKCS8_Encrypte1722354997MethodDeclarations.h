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

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct EncryptedPrivateKeyInfo_t1722354997;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor()
extern "C"  void EncryptedPrivateKeyInfo__ctor_m3964541963 (EncryptedPrivateKeyInfo_t1722354997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor(System.Byte[])
extern "C"  void EncryptedPrivateKeyInfo__ctor_m832236482 (EncryptedPrivateKeyInfo_t1722354997 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Algorithm()
extern "C"  String_t* EncryptedPrivateKeyInfo_get_Algorithm_m2779196942 (EncryptedPrivateKeyInfo_t1722354997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_EncryptedData()
extern "C"  ByteU5BU5D_t3397334013* EncryptedPrivateKeyInfo_get_EncryptedData_m345125768 (EncryptedPrivateKeyInfo_t1722354997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Salt()
extern "C"  ByteU5BU5D_t3397334013* EncryptedPrivateKeyInfo_get_Salt_m2734354394 (EncryptedPrivateKeyInfo_t1722354997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_IterationCount()
extern "C"  int32_t EncryptedPrivateKeyInfo_get_IterationCount_m1505875216 (EncryptedPrivateKeyInfo_t1722354997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::Decode(System.Byte[])
extern "C"  void EncryptedPrivateKeyInfo_Decode_m1824098820 (EncryptedPrivateKeyInfo_t1722354997 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
