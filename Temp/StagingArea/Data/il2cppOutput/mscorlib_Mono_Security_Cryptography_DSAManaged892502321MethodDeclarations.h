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

// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t892502321;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t2001522803;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_Cryptography_DSAManaged_Key2001522803.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter1872138834.h"

// System.Void Mono.Security.Cryptography.DSAManaged::.ctor(System.Int32)
extern "C"  void DSAManaged__ctor_m3339082535 (DSAManaged_t892502321 * __this, int32_t ___dwKeySize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
extern "C"  void DSAManaged_add_KeyGenerated_m46818873 (DSAManaged_t892502321 * __this, KeyGeneratedEventHandler_t2001522803 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
extern "C"  void DSAManaged_remove_KeyGenerated_m61544860 (DSAManaged_t892502321 * __this, KeyGeneratedEventHandler_t2001522803 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Finalize()
extern "C"  void DSAManaged_Finalize_m2447404200 (DSAManaged_t892502321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Generate()
extern "C"  void DSAManaged_Generate_m3166917081 (DSAManaged_t892502321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateKeyPair()
extern "C"  void DSAManaged_GenerateKeyPair_m2711647034 (DSAManaged_t892502321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add(System.Byte[],System.Byte[],System.Int32)
extern "C"  void DSAManaged_add_m910149930 (DSAManaged_t892502321 * __this, ByteU5BU5D_t3397334013* ___a0, ByteU5BU5D_t3397334013* ___b1, int32_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateParams(System.Int32)
extern "C"  void DSAManaged_GenerateParams_m4227218898 (DSAManaged_t892502321 * __this, int32_t ___keyLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::get_Random()
extern "C"  RandomNumberGenerator_t2510243513 * DSAManaged_get_Random_m1992022707 (DSAManaged_t892502321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.DSAManaged::get_KeySize()
extern "C"  int32_t DSAManaged_get_KeySize_m3029954771 (DSAManaged_t892502321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::get_PublicOnly()
extern "C"  bool DSAManaged_get_PublicOnly_m1397398436 (DSAManaged_t892502321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::NormalizeArray(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* DSAManaged_NormalizeArray_m2287089393 (DSAManaged_t892502321 * __this, ByteU5BU5D_t3397334013* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.Cryptography.DSAManaged::ExportParameters(System.Boolean)
extern "C"  DSAParameters_t1872138834  DSAManaged_ExportParameters_m727133363 (DSAManaged_t892502321 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::ImportParameters(System.Security.Cryptography.DSAParameters)
extern "C"  void DSAManaged_ImportParameters_m987307570 (DSAManaged_t892502321 * __this, DSAParameters_t1872138834  ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::CreateSignature(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* DSAManaged_CreateSignature_m1139224029 (DSAManaged_t892502321 * __this, ByteU5BU5D_t3397334013* ___rgbHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::VerifySignature(System.Byte[],System.Byte[])
extern "C"  bool DSAManaged_VerifySignature_m2580707953 (DSAManaged_t892502321 * __this, ByteU5BU5D_t3397334013* ___rgbHash0, ByteU5BU5D_t3397334013* ___rgbSignature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Dispose(System.Boolean)
extern "C"  void DSAManaged_Dispose_m4084007120 (DSAManaged_t892502321 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
