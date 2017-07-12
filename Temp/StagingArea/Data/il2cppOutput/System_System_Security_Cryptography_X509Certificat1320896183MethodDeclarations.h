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

// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t1320896183;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t463456204;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Security_Cryptography_AsnEncodedData463456204.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
extern "C"  void X509Extension__ctor_m4030395494 (X509Extension_t1320896183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.String,System.Byte[],System.Boolean)
extern "C"  void X509Extension__ctor_m1827839564 (X509Extension_t1320896183 * __this, String_t* ___oid0, ByteU5BU5D_t3397334013* ___rawData1, bool ___critical2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
extern "C"  bool X509Extension_get_Critical_m1395159716 (X509Extension_t1320896183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
extern "C"  void X509Extension_set_Critical_m1247863465 (X509Extension_t1320896183 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void X509Extension_CopyFrom_m2644634650 (X509Extension_t1320896183 * __this, AsnEncodedData_t463456204 * ___asnEncodedData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
extern "C"  String_t* X509Extension_FormatUnkownData_m4057132051 (X509Extension_t1320896183 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
