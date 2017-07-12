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

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct PrimeGeneratorBase_t1053438167;
// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t572679901;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor1997037801.h"

// System.Void Mono.Math.Prime.Generator.PrimeGeneratorBase::.ctor()
extern "C"  void PrimeGeneratorBase__ctor_m1958652214 (PrimeGeneratorBase_t1053438167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.ConfidenceFactor Mono.Math.Prime.Generator.PrimeGeneratorBase::get_Confidence()
extern "C"  int32_t PrimeGeneratorBase_get_Confidence_m2716080143 (PrimeGeneratorBase_t1053438167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.PrimalityTest Mono.Math.Prime.Generator.PrimeGeneratorBase::get_PrimalityTest()
extern "C"  PrimalityTest_t572679901 * PrimeGeneratorBase_get_PrimalityTest_m745694088 (PrimeGeneratorBase_t1053438167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.Prime.Generator.PrimeGeneratorBase::get_TrialDivisionBounds()
extern "C"  int32_t PrimeGeneratorBase_get_TrialDivisionBounds_m2212046603 (PrimeGeneratorBase_t1053438167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
