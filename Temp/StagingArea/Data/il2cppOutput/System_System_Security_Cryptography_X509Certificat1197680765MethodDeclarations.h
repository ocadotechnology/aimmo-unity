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

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1197680765;
// System.Security.Cryptography.X509Certificates.X509Certificate[]
struct X509CertificateU5BU5D_t3424334632;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t1208230922;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"

// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
extern "C"  void X509CertificateCollection__ctor_m2226573328 (X509CertificateCollection_t1197680765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate[])
extern "C"  void X509CertificateCollection__ctor_m3709509050 (X509CertificateCollection_t1197680765 * __this, X509CertificateU5BU5D_t3424334632* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection::get_Item(System.Int32)
extern "C"  X509Certificate_t283079845 * X509CertificateCollection_get_Item_m848456018 (X509CertificateCollection_t1197680765 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::Add(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  int32_t X509CertificateCollection_Add_m3566444889 (X509CertificateCollection_t1197680765 * __this, X509Certificate_t283079845 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate[])
extern "C"  void X509CertificateCollection_AddRange_m3378127328 (X509CertificateCollection_t1197680765 * __this, X509CertificateU5BU5D_t3424334632* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetEnumerator()
extern "C"  X509CertificateEnumerator_t1208230922 * X509CertificateCollection_GetEnumerator_m75057995 (X509CertificateCollection_t1197680765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetHashCode()
extern "C"  int32_t X509CertificateCollection_GetHashCode_m1639487537 (X509CertificateCollection_t1197680765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
