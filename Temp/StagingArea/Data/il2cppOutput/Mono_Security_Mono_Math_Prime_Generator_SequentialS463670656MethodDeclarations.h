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
struct SequentialSearchPrimeGeneratorBase_t463670657;
// Mono.Math.BigInteger
struct BigInteger_t925946153;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "Mono_Security_Mono_Math_BigInteger925946152.h"

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C"  void SequentialSearchPrimeGeneratorBase__ctor_m3982028469 (SequentialSearchPrimeGeneratorBase_t463670657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C"  BigInteger_t925946153 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m2930465198 (SequentialSearchPrimeGeneratorBase_t463670657 * __this, int32_t ___bits0, Il2CppObject * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C"  BigInteger_t925946153 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m2255936480 (SequentialSearchPrimeGeneratorBase_t463670657 * __this, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C"  BigInteger_t925946153 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m296245934 (SequentialSearchPrimeGeneratorBase_t463670657 * __this, int32_t ___bits0, Il2CppObject * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C"  bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m3678219529 (SequentialSearchPrimeGeneratorBase_t463670657 * __this, BigInteger_t925946153 * ___bi0, Il2CppObject * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
