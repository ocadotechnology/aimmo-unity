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
struct BigInteger_t925946152;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Math_BigInteger_Sign874893935.h"
#include "mscorlib_Mono_Math_BigInteger925946152.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber2510243513.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
extern "C"  void BigInteger__ctor_m2087647354 (BigInteger_t925946152 * __this, int32_t ___sign0, uint32_t ___len1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
extern "C"  void BigInteger__ctor_m582670464 (BigInteger_t925946152 * __this, BigInteger_t925946152 * ___bi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
extern "C"  void BigInteger__ctor_m2550657544 (BigInteger_t925946152 * __this, BigInteger_t925946152 * ___bi0, uint32_t ___len1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
extern "C"  void BigInteger__ctor_m2233526054 (BigInteger_t925946152 * __this, ByteU5BU5D_t3397334013* ___inData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
extern "C"  void BigInteger__ctor_m2945783161 (BigInteger_t925946152 * __this, uint32_t ___ui0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.cctor()
extern "C"  void BigInteger__cctor_m2334632754 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
extern "C"  RandomNumberGenerator_t2510243513 * BigInteger_get_Rng_m1268152318 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
extern "C"  BigInteger_t925946152 * BigInteger_GenerateRandom_m1785549398 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, RandomNumberGenerator_t2510243513 * ___rng1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
extern "C"  BigInteger_t925946152 * BigInteger_GenerateRandom_m2507308768 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize(System.Security.Cryptography.RandomNumberGenerator)
extern "C"  void BigInteger_Randomize_m3622044292 (BigInteger_t925946152 * __this, RandomNumberGenerator_t2510243513 * ___rng0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize()
extern "C"  void BigInteger_Randomize_m4237512560 (BigInteger_t925946152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::BitCount()
extern "C"  int32_t BigInteger_BitCount_m3320427467 (BigInteger_t925946152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.UInt32)
extern "C"  bool BigInteger_TestBit_m2116575810 (BigInteger_t925946152 * __this, uint32_t ___bitNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
extern "C"  bool BigInteger_TestBit_m2791151177 (BigInteger_t925946152 * __this, int32_t ___bitNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
extern "C"  void BigInteger_SetBit_m3652815178 (BigInteger_t925946152 * __this, uint32_t ___bitNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
extern "C"  void BigInteger_SetBit_m3708595375 (BigInteger_t925946152 * __this, uint32_t ___bitNum0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
extern "C"  int32_t BigInteger_LowestSetBit_m4236277214 (BigInteger_t925946152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
extern "C"  ByteU5BU5D_t3397334013* BigInteger_GetBytes_m2935282248 (BigInteger_t925946152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
extern "C"  String_t* BigInteger_ToString_m1239856588 (BigInteger_t925946152 * __this, uint32_t ___radix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
extern "C"  String_t* BigInteger_ToString_m3837784224 (BigInteger_t925946152 * __this, uint32_t ___radix0, String_t* ___characterSet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Normalize()
extern "C"  void BigInteger_Normalize_m62229468 (BigInteger_t925946152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Clear()
extern "C"  void BigInteger_Clear_m433805134 (BigInteger_t925946152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::GetHashCode()
extern "C"  int32_t BigInteger_GetHashCode_m4043602706 (BigInteger_t925946152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString()
extern "C"  String_t* BigInteger_ToString_m377176314 (BigInteger_t925946152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
extern "C"  bool BigInteger_Equals_m562026250 (BigInteger_t925946152 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
extern "C"  BigInteger_t925946152 * BigInteger_ModInverse_m506185746 (BigInteger_t925946152 * __this, BigInteger_t925946152 * ___modulus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946152 * BigInteger_ModPow_m887553845 (BigInteger_t925946152 * __this, BigInteger_t925946152 * ___exp0, BigInteger_t925946152 * ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::IsProbablePrime()
extern "C"  bool BigInteger_IsProbablePrime_m3945802749 (BigInteger_t925946152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
extern "C"  BigInteger_t925946152 * BigInteger_GeneratePseudoPrime_m2606361440 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Incr2()
extern "C"  void BigInteger_Incr2_m4072644401 (BigInteger_t925946152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
extern "C"  BigInteger_t925946152 * BigInteger_op_Implicit_m799073176 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
extern "C"  BigInteger_t925946152 * BigInteger_op_Implicit_m4032862257 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Addition(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946152 * BigInteger_op_Addition_m1196561843 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi10, BigInteger_t925946152 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946152 * BigInteger_op_Subtraction_m2941563507 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi10, BigInteger_t925946152 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t BigInteger_op_Modulus_m582549828 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi0, uint32_t ___ui1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946152 * BigInteger_op_Modulus_m3788401748 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi10, BigInteger_t925946152 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946152 * BigInteger_op_Division_m1581119694 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi10, BigInteger_t925946152 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946152 * BigInteger_op_Multiply_m3289461939 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi10, BigInteger_t925946152 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t925946152 * BigInteger_op_Multiply_m142859783 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t925946152 * BigInteger_op_LeftShift_m1612425812 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi10, int32_t ___shiftVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t925946152 * BigInteger_op_RightShift_m1619744615 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi10, int32_t ___shiftVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
extern "C"  bool BigInteger_op_Equality_m3606819076 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi10, uint32_t ___ui1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
extern "C"  bool BigInteger_op_Inequality_m628223799 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi10, uint32_t ___ui1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_Equality_m366854173 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi10, BigInteger_t925946152 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_Inequality_m1442635028 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi10, BigInteger_t925946152 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_GreaterThan_m2125509286 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi10, BigInteger_t925946152 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_LessThan_m3575820387 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi10, BigInteger_t925946152 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_GreaterThanOrEqual_m1998498565 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi10, BigInteger_t925946152 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_LessThanOrEqual_m1986506530 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi10, BigInteger_t925946152 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
