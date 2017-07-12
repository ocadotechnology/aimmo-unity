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

// WebSocketSharp.Net.SslConfiguration
struct SslConfiguration_t760772650;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t3696771181;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1197680765;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t777637347;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Authentication_SslProtocols894678499.h"
#include "System_System_Net_Security_LocalCertificateSelecti3696771181.h"
#include "System_System_Net_Security_RemoteCertificateValida2756269959.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Security_Cryptography_X509Certificat1197680765.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "System_System_Security_Cryptography_X509Certificate777637347.h"
#include "System_System_Net_Security_SslPolicyErrors1928581431.h"

// System.Void WebSocketSharp.Net.SslConfiguration::.ctor(System.Security.Authentication.SslProtocols,System.Boolean)
extern "C"  void SslConfiguration__ctor_m407868970 (SslConfiguration_t760772650 * __this, int32_t ___enabledSslProtocols0, bool ___checkCertificateRevocation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.LocalCertificateSelectionCallback WebSocketSharp.Net.SslConfiguration::get_CertificateSelectionCallback()
extern "C"  LocalCertificateSelectionCallback_t3696771181 * SslConfiguration_get_CertificateSelectionCallback_m3106984336 (SslConfiguration_t760772650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.SslConfiguration::set_CertificateSelectionCallback(System.Net.Security.LocalCertificateSelectionCallback)
extern "C"  void SslConfiguration_set_CertificateSelectionCallback_m3443508417 (SslConfiguration_t760772650 * __this, LocalCertificateSelectionCallback_t3696771181 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback WebSocketSharp.Net.SslConfiguration::get_CertificateValidationCallback()
extern "C"  RemoteCertificateValidationCallback_t2756269959 * SslConfiguration_get_CertificateValidationCallback_m984307907 (SslConfiguration_t760772650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.SslConfiguration::set_CertificateValidationCallback(System.Net.Security.RemoteCertificateValidationCallback)
extern "C"  void SslConfiguration_set_CertificateValidationCallback_m1366793142 (SslConfiguration_t760772650 * __this, RemoteCertificateValidationCallback_t2756269959 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.SslConfiguration::get_CheckCertificateRevocation()
extern "C"  bool SslConfiguration_get_CheckCertificateRevocation_m690215825 (SslConfiguration_t760772650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.SslConfiguration::set_CheckCertificateRevocation(System.Boolean)
extern "C"  void SslConfiguration_set_CheckCertificateRevocation_m2409346296 (SslConfiguration_t760772650 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Authentication.SslProtocols WebSocketSharp.Net.SslConfiguration::get_EnabledSslProtocols()
extern "C"  int32_t SslConfiguration_get_EnabledSslProtocols_m123992377 (SslConfiguration_t760772650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.SslConfiguration::set_EnabledSslProtocols(System.Security.Authentication.SslProtocols)
extern "C"  void SslConfiguration_set_EnabledSslProtocols_m2267716044 (SslConfiguration_t760772650 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate WebSocketSharp.Net.SslConfiguration::<get_CertificateSelectionCallback>m__0(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern "C"  X509Certificate_t283079845 * SslConfiguration_U3Cget_CertificateSelectionCallbackU3Em__0_m180992510 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, String_t* ___targetHost1, X509CertificateCollection_t1197680765 * ___localCertificates2, X509Certificate_t283079845 * ___remoteCertificate3, StringU5BU5D_t1642385972* ___acceptableIssuers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.SslConfiguration::<get_CertificateValidationCallback>m__1(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool SslConfiguration_U3Cget_CertificateValidationCallbackU3Em__1_m3322184848 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, X509Certificate_t283079845 * ___certificate1, X509Chain_t777637347 * ___chain2, int32_t ___sslPolicyErrors3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
