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

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.BitConverter::.cctor()
extern "C"  void BitConverter__cctor_m2650018227 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::AmILittleEndian()
extern "C"  bool BitConverter_AmILittleEndian_m2716658112 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::DoubleWordsAreSwapped()
extern "C"  bool BitConverter_DoubleWordsAreSwapped_m2697726202 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
extern "C"  int64_t BitConverter_DoubleToInt64Bits_m3672024538 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Byte*,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* BitConverter_GetBytes_m252990073 (Il2CppObject * __this /* static, unused */, uint8_t* ___ptr0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Boolean)
extern "C"  ByteU5BU5D_t3397334013* BitConverter_GetBytes_m2886837746 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Char)
extern "C"  ByteU5BU5D_t3397334013* BitConverter_GetBytes_m584210984 (Il2CppObject * __this /* static, unused */, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Int16)
extern "C"  ByteU5BU5D_t3397334013* BitConverter_GetBytes_m1583172484 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* BitConverter_GetBytes_m1300847478 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
extern "C"  ByteU5BU5D_t3397334013* BitConverter_GetBytes_m2282078441 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
extern "C"  ByteU5BU5D_t3397334013* BitConverter_GetBytes_m1050477013 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.UInt32)
extern "C"  ByteU5BU5D_t3397334013* BitConverter_GetBytes_m3019845415 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.UInt64)
extern "C"  ByteU5BU5D_t3397334013* BitConverter_GetBytes_m2213276262 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Single)
extern "C"  ByteU5BU5D_t3397334013* BitConverter_GetBytes_m4095372044 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Double)
extern "C"  ByteU5BU5D_t3397334013* BitConverter_GetBytes_m4115681617 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.BitConverter::PutBytes(System.Byte*,System.Byte[],System.Int32,System.Int32)
extern "C"  void BitConverter_PutBytes_m1441606178 (Il2CppObject * __this /* static, unused */, uint8_t* ___dst0, ByteU5BU5D_t3397334013* ___src1, int32_t ___start_index2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::ToBoolean(System.Byte[],System.Int32)
extern "C"  bool BitConverter_ToBoolean_m1373272469 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.BitConverter::ToChar(System.Byte[],System.Int32)
extern "C"  Il2CppChar BitConverter_ToChar_m496738261 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.BitConverter::ToInt16(System.Byte[],System.Int32)
extern "C"  int16_t BitConverter_ToInt16_m2139847221 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
extern "C"  int32_t BitConverter_ToInt32_m2742027961 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
extern "C"  int64_t BitConverter_ToInt64_m1329623425 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.BitConverter::ToUInt16(System.Byte[],System.Int32)
extern "C"  uint16_t BitConverter_ToUInt16_m2715119381 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
extern "C"  uint32_t BitConverter_ToUInt32_m4153360341 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
extern "C"  uint64_t BitConverter_ToUInt64_m2584075445 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
extern "C"  float BitConverter_ToSingle_m159411893 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.BitConverter::ToDouble(System.Byte[],System.Int32)
extern "C"  double BitConverter_ToDouble_m4124699541 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[])
extern "C"  String_t* BitConverter_ToString_m927173850 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* BitConverter_ToString_m2246696988 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, int32_t ___startIndex1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
