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

// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t3696771181;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1197680765;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Security_Cryptography_X509Certificat1197680765.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void LocalCertificateSelectionCallback__ctor_m3518900705 (LocalCertificateSelectionCallback_t3696771181 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern "C"  X509Certificate_t283079845 * LocalCertificateSelectionCallback_Invoke_m2908082640 (LocalCertificateSelectionCallback_t3696771181 * __this, Il2CppObject * ___sender0, String_t* ___targetHost1, X509CertificateCollection_t1197680765 * ___localCertificates2, X509Certificate_t283079845 * ___remoteCertificate3, StringU5BU5D_t1642385972* ___acceptableIssuers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.LocalCertificateSelectionCallback::BeginInvoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LocalCertificateSelectionCallback_BeginInvoke_m2931049388 (LocalCertificateSelectionCallback_t3696771181 * __this, Il2CppObject * ___sender0, String_t* ___targetHost1, X509CertificateCollection_t1197680765 * ___localCertificates2, X509Certificate_t283079845 * ___remoteCertificate3, StringU5BU5D_t1642385972* ___acceptableIssuers4, AsyncCallback_t163412349 * ___callback5, Il2CppObject * ___object6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C"  X509Certificate_t283079845 * LocalCertificateSelectionCallback_EndInvoke_m3245477004 (LocalCertificateSelectionCallback_t3696771181 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
