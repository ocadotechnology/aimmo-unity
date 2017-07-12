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

// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t463456204;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.Oid
struct Oid_t3221867120;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Security_Cryptography_Oid3221867120.h"
#include "System_System_Security_Cryptography_AsnEncodedData463456204.h"

// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
extern "C"  void AsnEncodedData__ctor_m1611830939 (AsnEncodedData_t463456204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.String,System.Byte[])
extern "C"  void AsnEncodedData__ctor_m1211934482 (AsnEncodedData_t463456204 * __this, String_t* ___oid0, ByteU5BU5D_t3397334013* ___rawData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
extern "C"  void AsnEncodedData__ctor_m3538036029 (AsnEncodedData_t463456204 * __this, Oid_t3221867120 * ___oid0, ByteU5BU5D_t3397334013* ___rawData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::get_Oid()
extern "C"  Oid_t3221867120 * AsnEncodedData_get_Oid_m625199204 (AsnEncodedData_t463456204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
extern "C"  void AsnEncodedData_set_Oid_m3568255745 (AsnEncodedData_t463456204 * __this, Oid_t3221867120 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
extern "C"  ByteU5BU5D_t3397334013* AsnEncodedData_get_RawData_m895923910 (AsnEncodedData_t463456204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
extern "C"  void AsnEncodedData_set_RawData_m1046549989 (AsnEncodedData_t463456204 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void AsnEncodedData_CopyFrom_m2601972121 (AsnEncodedData_t463456204 * __this, AsnEncodedData_t463456204 * ___asnEncodedData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
extern "C"  String_t* AsnEncodedData_ToString_m724151831 (AsnEncodedData_t463456204 * __this, bool ___multiLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
extern "C"  String_t* AsnEncodedData_Default_m4197142414 (AsnEncodedData_t463456204 * __this, bool ___multiLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
extern "C"  String_t* AsnEncodedData_BasicConstraintsExtension_m4139728680 (AsnEncodedData_t463456204 * __this, bool ___multiLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
extern "C"  String_t* AsnEncodedData_EnhancedKeyUsageExtension_m1452131166 (AsnEncodedData_t463456204 * __this, bool ___multiLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
extern "C"  String_t* AsnEncodedData_KeyUsageExtension_m938572452 (AsnEncodedData_t463456204 * __this, bool ___multiLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
extern "C"  String_t* AsnEncodedData_SubjectKeyIdentifierExtension_m3991622246 (AsnEncodedData_t463456204 * __this, bool ___multiLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
extern "C"  String_t* AsnEncodedData_SubjectAltName_m3016089443 (AsnEncodedData_t463456204 * __this, bool ___multiLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
extern "C"  String_t* AsnEncodedData_NetscapeCertType_m2899239452 (AsnEncodedData_t463456204 * __this, bool ___multiLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
