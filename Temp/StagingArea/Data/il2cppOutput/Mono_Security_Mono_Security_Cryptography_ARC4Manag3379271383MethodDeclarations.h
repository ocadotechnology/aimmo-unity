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

// Mono.Security.Cryptography.ARC4Managed
struct ARC4Managed_t3379271383;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t281704372;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.ARC4Managed::.ctor()
extern "C"  void ARC4Managed__ctor_m2922048522 (ARC4Managed_t3379271383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Finalize()
extern "C"  void ARC4Managed_Finalize_m4206406046 (ARC4Managed_t3379271383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Dispose(System.Boolean)
extern "C"  void ARC4Managed_Dispose_m4102232694 (ARC4Managed_t3379271383 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::get_Key()
extern "C"  ByteU5BU5D_t3397334013* ARC4Managed_get_Key_m3234603170 (ARC4Managed_t3379271383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::set_Key(System.Byte[])
extern "C"  void ARC4Managed_set_Key_m663161993 (ARC4Managed_t3379271383 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.ARC4Managed::get_CanReuseTransform()
extern "C"  bool ARC4Managed_get_CanReuseTransform_m3235470105 (ARC4Managed_t3379271383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * ARC4Managed_CreateEncryptor_m800891464 (ARC4Managed_t3379271383 * __this, ByteU5BU5D_t3397334013* ___rgbKey0, ByteU5BU5D_t3397334013* ___rgvIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * ARC4Managed_CreateDecryptor_m2848783948 (ARC4Managed_t3379271383 * __this, ByteU5BU5D_t3397334013* ___rgbKey0, ByteU5BU5D_t3397334013* ___rgvIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateIV()
extern "C"  void ARC4Managed_GenerateIV_m2815460576 (ARC4Managed_t3379271383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateKey()
extern "C"  void ARC4Managed_GenerateKey_m716135508 (ARC4Managed_t3379271383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::KeySetup(System.Byte[])
extern "C"  void ARC4Managed_KeySetup_m73384687 (ARC4Managed_t3379271383 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::CheckInput(System.Byte[],System.Int32,System.Int32)
extern "C"  void ARC4Managed_CheckInput_m3033530539 (ARC4Managed_t3379271383 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t ARC4Managed_TransformBlock_m1197694862 (ARC4Managed_t3379271383 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t3397334013* ___outputBuffer3, int32_t ___outputOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t ARC4Managed_InternalTransformBlock_m1999805545 (ARC4Managed_t3379271383 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t3397334013* ___outputBuffer3, int32_t ___outputOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* ARC4Managed_TransformFinalBlock_m2162658128 (ARC4Managed_t3379271383 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
