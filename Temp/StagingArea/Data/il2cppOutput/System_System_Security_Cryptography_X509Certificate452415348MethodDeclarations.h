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

// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t452415348;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificat2005802885.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Security_Cryptography_X509Certificate452415348.h"

// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::.ctor(System.Byte[])
extern "C"  void X500DistinguishedName__ctor_m459426370 (X500DistinguishedName_t452415348 * __this, ByteU5BU5D_t3397334013* ___encodedDistinguishedName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::Decode(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags)
extern "C"  String_t* X500DistinguishedName_Decode_m3070515374 (X500DistinguishedName_t452415348 * __this, int32_t ___flag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::GetSeparator(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags)
extern "C"  String_t* X500DistinguishedName_GetSeparator_m2215165979 (Il2CppObject * __this /* static, unused */, int32_t ___flag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::DecodeRawData()
extern "C"  void X500DistinguishedName_DecodeRawData_m3640767187 (X500DistinguishedName_t452415348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::Canonize(System.String)
extern "C"  String_t* X500DistinguishedName_Canonize_m2814323919 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X500DistinguishedName::AreEqual(System.Security.Cryptography.X509Certificates.X500DistinguishedName,System.Security.Cryptography.X509Certificates.X500DistinguishedName)
extern "C"  bool X500DistinguishedName_AreEqual_m2245968769 (Il2CppObject * __this /* static, unused */, X500DistinguishedName_t452415348 * ___name10, X500DistinguishedName_t452415348 * ___name21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
