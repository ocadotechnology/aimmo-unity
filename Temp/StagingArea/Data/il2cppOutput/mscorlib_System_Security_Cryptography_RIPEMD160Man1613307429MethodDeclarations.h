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

// System.Security.Cryptography.RIPEMD160Managed
struct RIPEMD160Managed_t1613307429;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RIPEMD160Managed::.ctor()
extern "C"  void RIPEMD160Managed__ctor_m2544156846 (RIPEMD160Managed_t1613307429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Initialize()
extern "C"  void RIPEMD160Managed_Initialize_m3365407578 (RIPEMD160Managed_t1613307429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void RIPEMD160Managed_HashCore_m1069699592 (RIPEMD160Managed_t1613307429 * __this, ByteU5BU5D_t3397334013* ___rgb0, int32_t ___ibStart1, int32_t ___cbSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::HashFinal()
extern "C"  ByteU5BU5D_t3397334013* RIPEMD160Managed_HashFinal_m3468023802 (RIPEMD160Managed_t1613307429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Finalize()
extern "C"  void RIPEMD160Managed_Finalize_m3989651322 (RIPEMD160Managed_t1613307429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::ProcessBlock(System.Byte[],System.Int32)
extern "C"  void RIPEMD160Managed_ProcessBlock_m3808094040 (RIPEMD160Managed_t1613307429 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Compress()
extern "C"  void RIPEMD160Managed_Compress_m3844168032 (RIPEMD160Managed_t1613307429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::CompressFinal(System.UInt64)
extern "C"  void RIPEMD160Managed_CompressFinal_m1760549251 (RIPEMD160Managed_t1613307429 * __this, uint64_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::ROL(System.UInt32,System.Int32)
extern "C"  uint32_t RIPEMD160Managed_ROL_m1721215437 (RIPEMD160Managed_t1613307429 * __this, uint32_t ___x0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::F(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t RIPEMD160Managed_F_m924361015 (RIPEMD160Managed_t1613307429 * __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::G(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t RIPEMD160Managed_G_m3305831640 (RIPEMD160Managed_t1613307429 * __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::H(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t RIPEMD160Managed_H_m170966261 (RIPEMD160Managed_t1613307429 * __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::I(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t RIPEMD160Managed_I_m3794821014 (RIPEMD160Managed_t1613307429 * __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::J(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t RIPEMD160Managed_J_m397594803 (RIPEMD160Managed_t1613307429 * __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::FF(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_FF_m3827799023 (RIPEMD160Managed_t1613307429 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::GG(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_GG_m679367819 (RIPEMD160Managed_t1613307429 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HH(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_HH_m4008087279 (RIPEMD160Managed_t1613307429 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::II(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_II_m2512365451 (RIPEMD160Managed_t1613307429 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::JJ(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_JJ_m2933451431 (RIPEMD160Managed_t1613307429 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::FFF(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_FFF_m3619158225 (RIPEMD160Managed_t1613307429 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::GGG(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_GGG_m1639995340 (RIPEMD160Managed_t1613307429 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HHH(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_HHH_m1385141959 (RIPEMD160Managed_t1613307429 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::III(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_III_m1771327938 (RIPEMD160Managed_t1613307429 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::JJJ(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_JJJ_m838642365 (RIPEMD160Managed_t1613307429 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
