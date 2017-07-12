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

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t2187578719;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAlg784058677.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
extern "C"  void DSASignatureDeformatter__ctor_m1585942358 (DSASignatureDeformatter_t2187578719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void DSASignatureDeformatter__ctor_m3436060726 (DSASignatureDeformatter_t2187578719 * __this, AsymmetricAlgorithm_t784058677 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
extern "C"  void DSASignatureDeformatter_SetHashAlgorithm_m2911075905 (DSASignatureDeformatter_t2187578719 * __this, String_t* ___strName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void DSASignatureDeformatter_SetKey_m3650872171 (DSASignatureDeformatter_t2187578719 * __this, AsymmetricAlgorithm_t784058677 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C"  bool DSASignatureDeformatter_VerifySignature_m4078616251 (DSASignatureDeformatter_t2187578719 * __this, ByteU5BU5D_t3397334013* ___rgbHash0, ByteU5BU5D_t3397334013* ___rgbSignature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
