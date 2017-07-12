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

// Mono.Security.X509.X509Store
struct X509Store_t4028973563;
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3592472866;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051958;
// Mono.Security.X509.X509Crl
struct X509Crl_t1699034837;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C"  void X509Store__ctor_m914086381 (X509Store_t4028973563 * __this, String_t* ___path0, bool ___crl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C"  X509CertificateCollection_t3592472866 * X509Store_get_Certificates_m683383922 (X509Store_t4028973563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
extern "C"  ArrayList_t4252133567 * X509Store_get_Crls_m1365300487 (X509Store_t4028973563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C"  ByteU5BU5D_t3397334013* X509Store_Load_m3792048208 (X509Store_t4028973563 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C"  X509Certificate_t324051958 * X509Store_LoadCertificate_m1082475046 (X509Store_t4028973563 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
extern "C"  X509Crl_t1699034837 * X509Store_LoadCrl_m1146720614 (X509Store_t4028973563 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C"  bool X509Store_CheckStore_m1027496478 (X509Store_t4028973563 * __this, String_t* ___path0, bool ___throwException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C"  X509CertificateCollection_t3592472866 * X509Store_BuildCertificatesCollection_m4224672591 (X509Store_t4028973563 * __this, String_t* ___storeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
extern "C"  ArrayList_t4252133567 * X509Store_BuildCrlsCollection_m52567568 (X509Store_t4028973563 * __this, String_t* ___storeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
