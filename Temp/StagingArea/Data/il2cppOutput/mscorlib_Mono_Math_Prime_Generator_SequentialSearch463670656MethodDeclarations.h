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

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t463670656;
// Mono.Math.BigInteger
struct BigInteger_t925946152;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_Mono_Math_BigInteger925946152.h"

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C"  void SequentialSearchPrimeGeneratorBase__ctor_m1628348781 (SequentialSearchPrimeGeneratorBase_t463670656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C"  BigInteger_t925946152 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m909657064 (SequentialSearchPrimeGeneratorBase_t463670656 * __this, int32_t ___bits0, Il2CppObject * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C"  BigInteger_t925946152 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m545729286 (SequentialSearchPrimeGeneratorBase_t463670656 * __this, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C"  BigInteger_t925946152 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m2351639568 (SequentialSearchPrimeGeneratorBase_t463670656 * __this, int32_t ___bits0, Il2CppObject * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C"  bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m4074701961 (SequentialSearchPrimeGeneratorBase_t463670656 * __this, BigInteger_t925946152 * ___bi0, Il2CppObject * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
