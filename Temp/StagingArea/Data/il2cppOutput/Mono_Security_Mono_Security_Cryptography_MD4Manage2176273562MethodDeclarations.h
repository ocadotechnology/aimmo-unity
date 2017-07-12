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

// Mono.Security.Cryptography.MD4Managed
struct MD4Managed_t2176273562;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.MD4Managed::.ctor()
extern "C"  void MD4Managed__ctor_m796835377 (MD4Managed_t2176273562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD4Managed::Initialize()
extern "C"  void MD4Managed_Initialize_m2316730601 (MD4Managed_t2176273562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD4Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void MD4Managed_HashCore_m3133543859 (MD4Managed_t2176273562 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___ibStart1, int32_t ___cbSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD4Managed::HashFinal()
extern "C"  ByteU5BU5D_t3397334013* MD4Managed_HashFinal_m1777895823 (MD4Managed_t2176273562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD4Managed::Padding(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* MD4Managed_Padding_m2920052321 (MD4Managed_t2176273562 * __this, int32_t ___nLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.MD4Managed::F(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t MD4Managed_F_m2501978380 (MD4Managed_t2176273562 * __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.MD4Managed::G(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t MD4Managed_G_m1121848465 (MD4Managed_t2176273562 * __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.MD4Managed::H(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t MD4Managed_H_m4236752602 (MD4Managed_t2176273562 * __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.MD4Managed::ROL(System.UInt32,System.Byte)
extern "C"  uint32_t MD4Managed_ROL_m2970841588 (MD4Managed_t2176273562 * __this, uint32_t ___x0, uint8_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD4Managed::FF(System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.Byte)
extern "C"  void MD4Managed_FF_m784377458 (MD4Managed_t2176273562 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t ___c2, uint32_t ___d3, uint32_t ___x4, uint8_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD4Managed::GG(System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.Byte)
extern "C"  void MD4Managed_GG_m1462438360 (MD4Managed_t2176273562 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t ___c2, uint32_t ___d3, uint32_t ___x4, uint8_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD4Managed::HH(System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.Byte)
extern "C"  void MD4Managed_HH_m2172169314 (MD4Managed_t2176273562 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t ___c2, uint32_t ___d3, uint32_t ___x4, uint8_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD4Managed::Encode(System.Byte[],System.UInt32[])
extern "C"  void MD4Managed_Encode_m2097839378 (MD4Managed_t2176273562 * __this, ByteU5BU5D_t3397334013* ___output0, UInt32U5BU5D_t59386216* ___input1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD4Managed::Decode(System.UInt32[],System.Byte[],System.Int32)
extern "C"  void MD4Managed_Decode_m1036272973 (MD4Managed_t2176273562 * __this, UInt32U5BU5D_t59386216* ___output0, ByteU5BU5D_t3397334013* ___input1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD4Managed::MD4Transform(System.UInt32[],System.Byte[],System.Int32)
extern "C"  void MD4Managed_MD4Transform_m2648331494 (MD4Managed_t2176273562 * __this, UInt32U5BU5D_t59386216* ___state0, ByteU5BU5D_t3397334013* ___block1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
