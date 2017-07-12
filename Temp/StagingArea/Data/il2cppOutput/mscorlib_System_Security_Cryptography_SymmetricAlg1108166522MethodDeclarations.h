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

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1108166522;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1153004758;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t281704372;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_CipherMode162592484.h"
#include "mscorlib_System_Security_Cryptography_PaddingMode3032142640.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Security.Cryptography.SymmetricAlgorithm::.ctor()
extern "C"  void SymmetricAlgorithm__ctor_m851603055 (SymmetricAlgorithm_t1108166522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::System.IDisposable.Dispose()
extern "C"  void SymmetricAlgorithm_System_IDisposable_Dispose_m1482450464 (SymmetricAlgorithm_t1108166522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Finalize()
extern "C"  void SymmetricAlgorithm_Finalize_m1665128997 (SymmetricAlgorithm_t1108166522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Clear()
extern "C"  void SymmetricAlgorithm_Clear_m774423768 (SymmetricAlgorithm_t1108166522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Dispose(System.Boolean)
extern "C"  void SymmetricAlgorithm_Dispose_m120666995 (SymmetricAlgorithm_t1108166522 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize()
extern "C"  int32_t SymmetricAlgorithm_get_BlockSize_m3945427462 (SymmetricAlgorithm_t1108166522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_BlockSize(System.Int32)
extern "C"  void SymmetricAlgorithm_set_BlockSize_m3823517143 (SymmetricAlgorithm_t1108166522 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize()
extern "C"  int32_t SymmetricAlgorithm_get_FeedbackSize_m544664262 (SymmetricAlgorithm_t1108166522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV()
extern "C"  ByteU5BU5D_t3397334013* SymmetricAlgorithm_get_IV_m1608154021 (SymmetricAlgorithm_t1108166522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[])
extern "C"  void SymmetricAlgorithm_set_IV_m4262655606 (SymmetricAlgorithm_t1108166522 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key()
extern "C"  ByteU5BU5D_t3397334013* SymmetricAlgorithm_get_Key_m1408548977 (SymmetricAlgorithm_t1108166522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[])
extern "C"  void SymmetricAlgorithm_set_Key_m2973350820 (SymmetricAlgorithm_t1108166522 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize()
extern "C"  int32_t SymmetricAlgorithm_get_KeySize_m4259485468 (SymmetricAlgorithm_t1108166522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32)
extern "C"  void SymmetricAlgorithm_set_KeySize_m270664177 (SymmetricAlgorithm_t1108166522 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::get_LegalKeySizes()
extern "C"  KeySizesU5BU5D_t1153004758* SymmetricAlgorithm_get_LegalKeySizes_m1816448847 (SymmetricAlgorithm_t1108166522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode()
extern "C"  int32_t SymmetricAlgorithm_get_Mode_m943866327 (SymmetricAlgorithm_t1108166522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode)
extern "C"  void SymmetricAlgorithm_set_Mode_m2836933176 (SymmetricAlgorithm_t1108166522 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding()
extern "C"  int32_t SymmetricAlgorithm_get_Padding_m718051685 (SymmetricAlgorithm_t1108166522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode)
extern "C"  void SymmetricAlgorithm_set_Padding_m3081984460 (SymmetricAlgorithm_t1108166522 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor()
extern "C"  Il2CppObject * SymmetricAlgorithm_CreateDecryptor_m4240570785 (SymmetricAlgorithm_t1108166522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor()
extern "C"  Il2CppObject * SymmetricAlgorithm_CreateEncryptor_m2635170175 (SymmetricAlgorithm_t1108166522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.SymmetricAlgorithm::Create(System.String)
extern "C"  SymmetricAlgorithm_t1108166522 * SymmetricAlgorithm_Create_m1998846805 (Il2CppObject * __this /* static, unused */, String_t* ___algName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
