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

// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t403340211;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3592472866;
// System.Security.Cryptography.RSA
struct RSA_t3719518354;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t2397899623;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3592472865.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter1462703416.h"

// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::.ctor()
extern "C"  void TlsServerSettings__ctor_m1125867683 (TlsServerSettings_t403340211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_ServerKeyExchange()
extern "C"  bool TlsServerSettings_get_ServerKeyExchange_m1147981947 (TlsServerSettings_t403340211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_ServerKeyExchange(System.Boolean)
extern "C"  void TlsServerSettings_set_ServerKeyExchange_m4199779410 (TlsServerSettings_t403340211 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::get_Certificates()
extern "C"  X509CertificateCollection_t3592472866 * TlsServerSettings_get_Certificates_m3301336199 (TlsServerSettings_t403340211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_Certificates(Mono.Security.X509.X509CertificateCollection)
extern "C"  void TlsServerSettings_set_Certificates_m67827830 (TlsServerSettings_t403340211 * __this, X509CertificateCollection_t3592472866 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRSA()
extern "C"  RSA_t3719518354 * TlsServerSettings_get_CertificateRSA_m1899388839 (TlsServerSettings_t403340211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::get_RsaParameters()
extern "C"  RSAParameters_t1462703416  TlsServerSettings_get_RsaParameters_m1327440044 (TlsServerSettings_t403340211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_RsaParameters(System.Security.Cryptography.RSAParameters)
extern "C"  void TlsServerSettings_set_RsaParameters_m3165273449 (TlsServerSettings_t403340211 * __this, RSAParameters_t1462703416  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_SignedParams(System.Byte[])
extern "C"  void TlsServerSettings_set_SignedParams_m1826385315 (TlsServerSettings_t403340211 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRequest()
extern "C"  bool TlsServerSettings_get_CertificateRequest_m1204669838 (TlsServerSettings_t403340211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateRequest(System.Boolean)
extern "C"  void TlsServerSettings_set_CertificateRequest_m3419519893 (TlsServerSettings_t403340211 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[] Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateTypes()
extern "C"  ClientCertificateTypeU5BU5D_t2397899623* TlsServerSettings_get_CertificateTypes_m2680336348 (TlsServerSettings_t403340211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateTypes(Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[])
extern "C"  void TlsServerSettings_set_CertificateTypes_m264196087 (TlsServerSettings_t403340211 * __this, ClientCertificateTypeU5BU5D_t2397899623* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.Protocol.Tls.TlsServerSettings::get_DistinguisedNames()
extern "C"  StringU5BU5D_t1642385972* TlsServerSettings_get_DistinguisedNames_m2198423229 (TlsServerSettings_t403340211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_DistinguisedNames(System.String[])
extern "C"  void TlsServerSettings_set_DistinguisedNames_m2290049644 (TlsServerSettings_t403340211 * __this, StringU5BU5D_t1642385972* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::UpdateCertificateRSA()
extern "C"  void TlsServerSettings_UpdateCertificateRSA_m2025051563 (TlsServerSettings_t403340211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
