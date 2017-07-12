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

// Mono.Math.BigInteger
struct BigInteger_t925946153;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Math_BigInteger_Sign874893935.h"
#include "Mono_Security_Mono_Math_BigInteger925946152.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber2510243513.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
extern "C"  void BigInteger__ctor_m4013661868 (BigInteger_t925946153 * __this, int32_t ___sign0, uint32_t ___len1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
extern "C"  void BigInteger__ctor_m2991182310 (BigInteger_t925946153 * __this, BigInteger_t925946153 * ___bi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
extern "C"  void BigInteger__ctor_m3239748086 (BigInteger_t925946153 * __this, BigInteger_t925946153 * ___bi0, uint32_t ___len1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
extern "C"  void BigInteger__ctor_m2998639688 (BigInteger_t925946153 * __this, ByteU5BU5D_t3397334013* ___inData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
extern "C"  void BigInteger__ctor_m3787562545 (BigInteger_t925946153 * __this, uint32_t ___ui0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.cctor()
extern "C"  void BigInteger__cctor_m3631692756 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
extern "C"  RandomNumberGenerator_t2510243513 * BigInteger_get_Rng_m2525288368 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
extern "C"  BigInteger_t925946153 * BigInteger_GenerateRandom_m714043984 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, RandomNumberGenerator_t2510243513 * ___rng1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
extern "C"  BigInteger_t925946153 * BigInteger_GenerateRandom_m1878468830 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::BitCount()
extern "C"  int32_t BigInteger_BitCount_m1334731567 (BigInteger_t925946153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
extern "C"  bool BigInteger_TestBit_m2460344121 (BigInteger_t925946153 * __this, int32_t ___bitNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
extern "C"  void BigInteger_SetBit_m426619300 (BigInteger_t925946153 * __this, uint32_t ___bitNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
extern "C"  void BigInteger_SetBit_m576108355 (BigInteger_t925946153 * __this, uint32_t ___bitNum0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
extern "C"  int32_t BigInteger_LowestSetBit_m1146240832 (BigInteger_t925946153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
extern "C"  ByteU5BU5D_t3397334013* BigInteger_GetBytes_m767422614 (BigInteger_t925946153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
extern "C"  String_t* BigInteger_ToString_m1842353154 (BigInteger_t925946153 * __this, uint32_t ___radix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
extern "C"  String_t* BigInteger_ToString_m2878297110 (BigInteger_t925946153 * __this, uint32_t ___radix0, String_t* ___characterSet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Normalize()
extern "C"  void BigInteger_Normalize_m1262742386 (BigInteger_t925946153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Clear()
extern "C"  void BigInteger_Clear_m2734785184 (BigInteger_t925946153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::GetHashCode()
extern "C"  int32_t BigInteger_GetHashCode_m1450276268 (BigInteger_t925946153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString()
extern "C"  String_t* BigInteger_ToString_m2806881644 (BigInteger_t925946153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
extern "C"  bool BigInteger_Equals_m1886728252 (BigInteger_t925946153 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
extern "C"  BigInteger_t925946153 * BigInteger_ModInverse_m1881894572 (BigInteger_t925946153 * __this, BigInteger_t925946153 * ___modulus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946153 * BigInteger_ModPow_m1418407677 (BigInteger_t925946153 * __this, BigInteger_t925946153 * ___exp0, BigInteger_t925946153 * ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
extern "C"  BigInteger_t925946153 * BigInteger_GeneratePseudoPrime_m2186059270 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Incr2()
extern "C"  void BigInteger_Incr2_m505983313 (BigInteger_t925946153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
extern "C"  BigInteger_t925946153 * BigInteger_op_Implicit_m622924526 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
extern "C"  BigInteger_t925946153 * BigInteger_op_Implicit_m3634001681 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Addition(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946153 * BigInteger_op_Addition_m1734797151 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, BigInteger_t925946153 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946153 * BigInteger_op_Subtraction_m972393015 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, BigInteger_t925946153 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t BigInteger_op_Modulus_m2895726170 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi0, uint32_t ___ui1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946153 * BigInteger_op_Modulus_m13450242 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, BigInteger_t925946153 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946153 * BigInteger_op_Division_m4076990896 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, BigInteger_t925946153 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946153 * BigInteger_op_Multiply_m1833761647 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, BigInteger_t925946153 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t925946153 * BigInteger_op_LeftShift_m3361632170 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, int32_t ___shiftVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t925946153 * BigInteger_op_RightShift_m852685747 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, int32_t ___shiftVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
extern "C"  bool BigInteger_op_Equality_m2683055762 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, uint32_t ___ui1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
extern "C"  bool BigInteger_op_Inequality_m744282323 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, uint32_t ___ui1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_Equality_m3089846781 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, BigInteger_t925946153 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_Inequality_m4286929594 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, BigInteger_t925946153 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_GreaterThan_m2492620848 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, BigInteger_t925946153 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_LessThan_m3825358479 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, BigInteger_t925946153 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_GreaterThanOrEqual_m2643115413 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, BigInteger_t925946153 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_LessThanOrEqual_m3528380540 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, BigInteger_t925946153 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
