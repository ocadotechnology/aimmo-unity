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

// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t572679901;
// System.Object
struct Il2CppObject;
// Mono.Math.BigInteger
struct BigInteger_t925946152;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_Mono_Math_BigInteger925946152.h"
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor1997037801.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern "C"  void PrimalityTest__ctor_m2405307051 (PrimalityTest_t572679901 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C"  bool PrimalityTest_Invoke_m1352225933 (PrimalityTest_t572679901 * __this, BigInteger_t925946152 * ___bi0, int32_t ___confidence1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PrimalityTest_BeginInvoke_m966469054 (PrimalityTest_t572679901 * __this, BigInteger_t925946152 * ___bi0, int32_t ___confidence1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern "C"  bool PrimalityTest_EndInvoke_m3726063833 (PrimalityTest_t572679901 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
