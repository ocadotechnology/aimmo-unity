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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Math_BigInteger925946152.h"
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor1997037801.h"

// System.Int32 Mono.Math.Prime.PrimalityTests::GetSPPRounds(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C"  int32_t PrimalityTests_GetSPPRounds_m1844115340 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi0, int32_t ___confidence1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTests::Test(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C"  bool PrimalityTests_Test_m1088386156 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___n0, int32_t ___confidence1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTests::RabinMillerTest(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C"  bool PrimalityTests_RabinMillerTest_m1376858197 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___n0, int32_t ___confidence1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTests::SmallPrimeSppTest(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C"  bool PrimalityTests_SmallPrimeSppTest_m3182530923 (Il2CppObject * __this /* static, unused */, BigInteger_t925946152 * ___bi0, int32_t ___confidence1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
