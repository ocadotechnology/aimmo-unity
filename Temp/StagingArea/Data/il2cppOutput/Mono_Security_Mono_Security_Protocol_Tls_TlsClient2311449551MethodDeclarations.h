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

// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t2311449551;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1197680765;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t3034748748;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Security_Cryptography_X509Certificat1197680765.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"

// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::.ctor()
extern "C"  void TlsClientSettings__ctor_m3065987087 (TlsClientSettings_t2311449551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.TlsClientSettings::get_TargetHost()
extern "C"  String_t* TlsClientSettings_get_TargetHost_m2817634620 (TlsClientSettings_t2311449551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_TargetHost(System.String)
extern "C"  void TlsClientSettings_set_TargetHost_m3421266913 (TlsClientSettings_t2311449551 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.TlsClientSettings::get_Certificates()
extern "C"  X509CertificateCollection_t1197680765 * TlsClientSettings_get_Certificates_m2509165647 (TlsClientSettings_t2311449551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_Certificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  void TlsClientSettings_set_Certificates_m1110280480 (TlsClientSettings_t2311449551 * __this, X509CertificateCollection_t1197680765 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.TlsClientSettings::get_ClientCertificate()
extern "C"  X509Certificate_t283079845 * TlsClientSettings_get_ClientCertificate_m89435195 (TlsClientSettings_t2311449551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_ClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void TlsClientSettings_set_ClientCertificate_m442292512 (TlsClientSettings_t2311449551 * __this, X509Certificate_t283079845 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.RSAManaged Mono.Security.Protocol.Tls.TlsClientSettings::get_CertificateRSA()
extern "C"  RSAManaged_t3034748748 * TlsClientSettings_get_CertificateRSA_m3237339012 (TlsClientSettings_t2311449551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::UpdateCertificateRSA()
extern "C"  void TlsClientSettings_UpdateCertificateRSA_m1828531911 (TlsClientSettings_t2311449551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
