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

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2624936259;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Security.Cryptography.HashAlgorithm::.ctor()
extern "C"  void HashAlgorithm__ctor_m3777008390 (HashAlgorithm_t2624936259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::System.IDisposable.Dispose()
extern "C"  void HashAlgorithm_System_IDisposable_Dispose_m2106335965 (HashAlgorithm_t2624936259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.HashAlgorithm::get_CanReuseTransform()
extern "C"  bool HashAlgorithm_get_CanReuseTransform_m160024219 (HashAlgorithm_t2624936259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* HashAlgorithm_ComputeHash_m3637856778 (HashAlgorithm_t2624936259 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* HashAlgorithm_ComputeHash_m3945506296 (HashAlgorithm_t2624936259 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HashAlgorithm::Create(System.String)
extern "C"  HashAlgorithm_t2624936259 * HashAlgorithm_Create_m1224939073 (Il2CppObject * __this /* static, unused */, String_t* ___hashName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash()
extern "C"  ByteU5BU5D_t3397334013* HashAlgorithm_get_Hash_m931854461 (HashAlgorithm_t2624936259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HashAlgorithm::get_HashSize()
extern "C"  int32_t HashAlgorithm_get_HashSize_m2625667696 (HashAlgorithm_t2624936259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::Dispose(System.Boolean)
extern "C"  void HashAlgorithm_Dispose_m716639490 (HashAlgorithm_t2624936259 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t HashAlgorithm_TransformBlock_m4190258810 (HashAlgorithm_t2624936259 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t3397334013* ___outputBuffer3, int32_t ___outputOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* HashAlgorithm_TransformFinalBlock_m3071802428 (HashAlgorithm_t2624936259 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
