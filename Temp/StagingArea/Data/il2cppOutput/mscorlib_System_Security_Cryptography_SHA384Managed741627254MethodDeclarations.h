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

// System.Security.Cryptography.SHA384Managed
struct SHA384Managed_t741627254;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.SHA384Managed::.ctor()
extern "C"  void SHA384Managed__ctor_m3766962367 (SHA384Managed_t741627254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::Initialize(System.Boolean)
extern "C"  void SHA384Managed_Initialize_m1719088674 (SHA384Managed_t741627254 * __this, bool ___reuse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::Initialize()
extern "C"  void SHA384Managed_Initialize_m712692291 (SHA384Managed_t741627254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void SHA384Managed_HashCore_m1968820717 (SHA384Managed_t741627254 * __this, ByteU5BU5D_t3397334013* ___rgb0, int32_t ___ibStart1, int32_t ___cbSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA384Managed::HashFinal()
extern "C"  ByteU5BU5D_t3397334013* SHA384Managed_HashFinal_m3159561733 (SHA384Managed_t741627254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::update(System.Byte)
extern "C"  void SHA384Managed_update_m2629600295 (SHA384Managed_t741627254 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::processWord(System.Byte[],System.Int32)
extern "C"  void SHA384Managed_processWord_m2113057662 (SHA384Managed_t741627254 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::unpackWord(System.UInt64,System.Byte[],System.Int32)
extern "C"  void SHA384Managed_unpackWord_m2501009050 (SHA384Managed_t741627254 * __this, uint64_t ___word0, ByteU5BU5D_t3397334013* ___output1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::adjustByteCounts()
extern "C"  void SHA384Managed_adjustByteCounts_m410900820 (SHA384Managed_t741627254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::processLength(System.UInt64,System.UInt64)
extern "C"  void SHA384Managed_processLength_m3001210306 (SHA384Managed_t741627254 * __this, uint64_t ___lowW0, uint64_t ___hiW1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::processBlock()
extern "C"  void SHA384Managed_processBlock_m3232296629 (SHA384Managed_t741627254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
