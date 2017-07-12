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

// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_t2029745292;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.SHA256Managed::.ctor()
extern "C"  void SHA256Managed__ctor_m1410575277 (SHA256Managed_t2029745292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void SHA256Managed_HashCore_m4111458495 (SHA256Managed_t2029745292 * __this, ByteU5BU5D_t3397334013* ___rgb0, int32_t ___ibStart1, int32_t ___cbSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA256Managed::HashFinal()
extern "C"  ByteU5BU5D_t3397334013* SHA256Managed_HashFinal_m2960991939 (SHA256Managed_t2029745292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::Initialize()
extern "C"  void SHA256Managed_Initialize_m2091245045 (SHA256Managed_t2029745292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::ProcessBlock(System.Byte[],System.Int32)
extern "C"  void SHA256Managed_ProcessBlock_m1064908669 (SHA256Managed_t2029745292 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  void SHA256Managed_ProcessFinalBlock_m2028661414 (SHA256Managed_t2029745292 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::AddLength(System.UInt64,System.Byte[],System.Int32)
extern "C"  void SHA256Managed_AddLength_m2984533577 (SHA256Managed_t2029745292 * __this, uint64_t ___length0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
