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

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t2739465458;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1108166522;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_SymmetricAlg1108166522.h"

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  void MACAlgorithm__ctor_m2165161608 (MACAlgorithm_t2739465458 * __this, SymmetricAlgorithm_t1108166522 * ___algorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
extern "C"  void MACAlgorithm_Initialize_m133885420 (MACAlgorithm_t2739465458 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
extern "C"  void MACAlgorithm_Core_m2390605245 (MACAlgorithm_t2739465458 * __this, ByteU5BU5D_t3397334013* ___rgb0, int32_t ___ib1, int32_t ___cb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
extern "C"  ByteU5BU5D_t3397334013* MACAlgorithm_Final_m4076939925 (MACAlgorithm_t2739465458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
