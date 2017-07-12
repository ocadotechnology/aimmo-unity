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

// System.Security.Cryptography.AesTransform
struct AesTransform_t3733702461;
// System.Security.Cryptography.Aes
struct Aes_t2354947465;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Security_Cryptography_Aes2354947465.h"

// System.Void System.Security.Cryptography.AesTransform::.ctor(System.Security.Cryptography.Aes,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void AesTransform__ctor_m3304222252 (AesTransform_t3733702461 * __this, Aes_t2354947465 * ___algo0, bool ___encryption1, ByteU5BU5D_t3397334013* ___key2, ByteU5BU5D_t3397334013* ___iv3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::.cctor()
extern "C"  void AesTransform__cctor_m619532760 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::ECB(System.Byte[],System.Byte[])
extern "C"  void AesTransform_ECB_m1505875511 (AesTransform_t3733702461 * __this, ByteU5BU5D_t3397334013* ___input0, ByteU5BU5D_t3397334013* ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.AesTransform::SubByte(System.UInt32)
extern "C"  uint32_t AesTransform_SubByte_m3508318874 (AesTransform_t3733702461 * __this, uint32_t ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void AesTransform_Encrypt128_m617981965 (AesTransform_t3733702461 * __this, ByteU5BU5D_t3397334013* ___indata0, ByteU5BU5D_t3397334013* ___outdata1, UInt32U5BU5D_t59386216* ___ekey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void AesTransform_Decrypt128_m3067379519 (AesTransform_t3733702461 * __this, ByteU5BU5D_t3397334013* ___indata0, ByteU5BU5D_t3397334013* ___outdata1, UInt32U5BU5D_t59386216* ___ekey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
