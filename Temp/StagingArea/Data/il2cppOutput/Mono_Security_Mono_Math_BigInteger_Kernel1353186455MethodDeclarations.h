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
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t3157146938;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Math_BigInteger925946152.h"
#include "Mono_Security_Mono_Math_BigInteger_Sign874893935.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946153 * Kernel_AddSameSign_m4087322475 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, BigInteger_t925946153 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946153 * Kernel_Subtract_m2224959291 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___big0, BigInteger_t925946153 * ___small1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  void Kernel_MinusEq_m1637138341 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___big0, BigInteger_t925946153 * ___small1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  void Kernel_PlusEq_m2259390883 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, BigInteger_t925946153 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  int32_t Kernel_Compare_m722412638 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, BigInteger_t925946153 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t Kernel_SingleByteDivideInPlace_m3631295848 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___n0, uint32_t ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t Kernel_DwordMod_m978954867 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___n0, uint32_t ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C"  BigIntegerU5BU5D_t3157146938* Kernel_DwordDivMod_m3728402123 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___n0, uint32_t ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigIntegerU5BU5D_t3157146938* Kernel_multiByteDivide_m3157480645 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi10, BigInteger_t925946153 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t925946153 * Kernel_LeftShift_m3814364702 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t925946153 * Kernel_RightShift_m2983108719 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C"  void Kernel_Multiply_m1938858919 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, uint32_t ___xOffset1, uint32_t ___xLen2, UInt32U5BU5D_t59386216* ___y3, uint32_t ___yOffset4, uint32_t ___yLen5, UInt32U5BU5D_t59386216* ___d6, uint32_t ___dOffset7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C"  void Kernel_MultiplyMod2p32pmod_m874406394 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOffset1, int32_t ___xLen2, UInt32U5BU5D_t59386216* ___y3, int32_t ___yOffest4, int32_t ___yLen5, UInt32U5BU5D_t59386216* ___d6, int32_t ___dOffset7, int32_t ___mod8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t Kernel_modInverse_m1848537133 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi0, uint32_t ___modulus1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946153 * Kernel_modInverse_m3230829577 (Il2CppObject * __this /* static, unused */, BigInteger_t925946153 * ___bi0, BigInteger_t925946153 * ___modulus1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
