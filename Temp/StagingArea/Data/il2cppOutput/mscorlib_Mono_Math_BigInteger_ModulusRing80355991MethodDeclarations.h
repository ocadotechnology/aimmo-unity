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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t80355991;
// Mono.Math.BigInteger
struct BigInteger_t925946152;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Math_BigInteger925946152.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C"  void ModulusRing__ctor_m59363820 (ModulusRing_t80355991 * __this, BigInteger_t925946152 * ___modulus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C"  void ModulusRing_BarrettReduction_m2175091295 (ModulusRing_t80355991 * __this, BigInteger_t925946152 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946152 * ModulusRing_Multiply_m386339435 (ModulusRing_t80355991 * __this, BigInteger_t925946152 * ___a0, BigInteger_t925946152 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946152 * ModulusRing_Difference_m2183667534 (ModulusRing_t80355991 * __this, BigInteger_t925946152 * ___a0, BigInteger_t925946152 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946152 * ModulusRing_Pow_m1137250399 (ModulusRing_t80355991 * __this, BigInteger_t925946152 * ___a0, BigInteger_t925946152 * ___k1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C"  BigInteger_t925946152 * ModulusRing_Pow_m3751129772 (ModulusRing_t80355991 * __this, uint32_t ___b0, BigInteger_t925946152 * ___exp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
