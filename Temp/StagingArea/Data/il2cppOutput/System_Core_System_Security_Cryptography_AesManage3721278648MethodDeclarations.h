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

// System.Security.Cryptography.AesManaged
struct AesManaged_t3721278648;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t281704372;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.AesManaged::.ctor()
extern "C"  void AesManaged__ctor_m2322442838 (AesManaged_t3721278648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::GenerateIV()
extern "C"  void AesManaged_GenerateIV_m199727220 (AesManaged_t3721278648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::GenerateKey()
extern "C"  void AesManaged_GenerateKey_m2925191332 (AesManaged_t3721278648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * AesManaged_CreateDecryptor_m1136566004 (AesManaged_t3721278648 * __this, ByteU5BU5D_t3397334013* ___rgbKey0, ByteU5BU5D_t3397334013* ___rgbIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * AesManaged_CreateEncryptor_m1729287824 (AesManaged_t3721278648 * __this, ByteU5BU5D_t3397334013* ___rgbKey0, ByteU5BU5D_t3397334013* ___rgbIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesManaged::get_IV()
extern "C"  ByteU5BU5D_t3397334013* AesManaged_get_IV_m560133634 (AesManaged_t3721278648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_IV(System.Byte[])
extern "C"  void AesManaged_set_IV_m2479404195 (AesManaged_t3721278648 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesManaged::get_Key()
extern "C"  ByteU5BU5D_t3397334013* AesManaged_get_Key_m1100519798 (AesManaged_t3721278648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_Key(System.Byte[])
extern "C"  void AesManaged_set_Key_m2884557591 (AesManaged_t3721278648 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.AesManaged::get_KeySize()
extern "C"  int32_t AesManaged_get_KeySize_m2773901127 (AesManaged_t3721278648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_KeySize(System.Int32)
extern "C"  void AesManaged_set_KeySize_m3458102022 (AesManaged_t3721278648 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor()
extern "C"  Il2CppObject * AesManaged_CreateDecryptor_m76892358 (AesManaged_t3721278648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor()
extern "C"  Il2CppObject * AesManaged_CreateEncryptor_m2261049526 (AesManaged_t3721278648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::Dispose(System.Boolean)
extern "C"  void AesManaged_Dispose_m2144430298 (AesManaged_t3721278648 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
