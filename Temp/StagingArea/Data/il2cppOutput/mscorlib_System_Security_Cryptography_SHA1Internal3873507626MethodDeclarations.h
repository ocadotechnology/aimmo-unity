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

// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t3873507626;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.SHA1Internal::.ctor()
extern "C"  void SHA1Internal__ctor_m3651539199 (SHA1Internal_t3873507626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void SHA1Internal_HashCore_m3151709221 (SHA1Internal_t3873507626 * __this, ByteU5BU5D_t3397334013* ___rgb0, int32_t ___ibStart1, int32_t ___cbSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1Internal::HashFinal()
extern "C"  ByteU5BU5D_t3397334013* SHA1Internal_HashFinal_m3188468925 (SHA1Internal_t3873507626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::Initialize()
extern "C"  void SHA1Internal_Initialize_m2776411059 (SHA1Internal_t3873507626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::ProcessBlock(System.Byte[],System.UInt32)
extern "C"  void SHA1Internal_ProcessBlock_m4070037334 (SHA1Internal_t3873507626 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, uint32_t ___inputOffset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::InitialiseBuff(System.UInt32[],System.Byte[],System.UInt32)
extern "C"  void SHA1Internal_InitialiseBuff_m1428597166 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___buff0, ByteU5BU5D_t3397334013* ___input1, uint32_t ___inputOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::FillBuff(System.UInt32[])
extern "C"  void SHA1Internal_FillBuff_m891541953 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___buff0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  void SHA1Internal_ProcessFinalBlock_m1820374466 (SHA1Internal_t3873507626 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::AddLength(System.UInt64,System.Byte[],System.Int32)
extern "C"  void SHA1Internal_AddLength_m3520088763 (SHA1Internal_t3873507626 * __this, uint64_t ___length0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
