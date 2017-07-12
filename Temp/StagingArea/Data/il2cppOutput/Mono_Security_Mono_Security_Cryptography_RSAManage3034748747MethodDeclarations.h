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

// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t3034748748;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// Mono.Math.BigInteger
struct BigInteger_t925946153;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter1462703416.h"
#include "Mono_Security_Mono_Math_BigInteger925946152.h"

// System.Void Mono.Security.Cryptography.RSAManaged::.ctor()
extern "C"  void RSAManaged__ctor_m1370411656 (RSAManaged_t3034748748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
extern "C"  void RSAManaged__ctor_m1680944437 (RSAManaged_t3034748748 * __this, int32_t ___keySize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Finalize()
extern "C"  void RSAManaged_Finalize_m3491799840 (RSAManaged_t3034748748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
extern "C"  void RSAManaged_GenerateKeyPair_m1213111262 (RSAManaged_t3034748748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.RSAManaged::get_KeySize()
extern "C"  int32_t RSAManaged_get_KeySize_m3478823737 (RSAManaged_t3034748748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
extern "C"  bool RSAManaged_get_PublicOnly_m2581981140 (RSAManaged_t3034748748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::DecryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* RSAManaged_DecryptValue_m1225349489 (RSAManaged_t3034748748 * __this, ByteU5BU5D_t3397334013* ___rgb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::EncryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* RSAManaged_EncryptValue_m1847230963 (RSAManaged_t3034748748 * __this, ByteU5BU5D_t3397334013* ___rgb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
extern "C"  RSAParameters_t1462703416  RSAManaged_ExportParameters_m2871338879 (RSAManaged_t3034748748 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C"  void RSAManaged_ImportParameters_m3060955884 (RSAManaged_t3034748748 * __this, RSAParameters_t1462703416  ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
extern "C"  void RSAManaged_Dispose_m160261748 (RSAManaged_t3034748748 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
extern "C"  String_t* RSAManaged_ToXmlString_m2606223477 (RSAManaged_t3034748748 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* RSAManaged_GetPaddedValue_m2972141669 (RSAManaged_t3034748748 * __this, BigInteger_t925946153 * ___value0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
