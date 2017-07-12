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

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_t2099881051;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t463456204;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_AsnEncodedData463456204.h"
#include "System_System_Security_Cryptography_AsnDecodeStatu1962003286.h"

// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C"  void X509EnhancedKeyUsageExtension__ctor_m4050164330 (X509EnhancedKeyUsageExtension_t2099881051 * __this, AsnEncodedData_t463456204 * ___encodedEnhancedKeyUsages0, bool ___critical1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void X509EnhancedKeyUsageExtension_CopyFrom_m1426370958 (X509EnhancedKeyUsageExtension_t2099881051 * __this, AsnEncodedData_t463456204 * ___asnEncodedData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
extern "C"  int32_t X509EnhancedKeyUsageExtension_Decode_m3866320499 (X509EnhancedKeyUsageExtension_t2099881051 * __this, ByteU5BU5D_t3397334013* ___extension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
extern "C"  String_t* X509EnhancedKeyUsageExtension_ToString_m1748333326 (X509EnhancedKeyUsageExtension_t2099881051 * __this, bool ___multiLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
