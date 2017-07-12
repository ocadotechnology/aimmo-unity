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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate
struct TlsClientCertificate_t3862719489;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051958;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3592472866;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate324051957.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3592472865.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsClientCertificate__ctor_m2862745605 (TlsClientCertificate_t3862719489 * __this, Context_t4285182719 * ___context0, ByteU5BU5D_t3397334013* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::Update()
extern "C"  void TlsClientCertificate_Update_m375712760 (TlsClientCertificate_t3862719489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::ProcessAsSsl3()
extern "C"  void TlsClientCertificate_ProcessAsSsl3_m2976459599 (TlsClientCertificate_t3862719489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::ProcessAsTls1()
extern "C"  void TlsClientCertificate_ProcessAsTls1_m1487606700 (TlsClientCertificate_t3862719489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern "C"  bool TlsClientCertificate_checkCertificateUsage_m455292777 (TlsClientCertificate_t3862719489 * __this, X509Certificate_t324051958 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern "C"  void TlsClientCertificate_validateCertificates_m184270997 (TlsClientCertificate_t3862719489 * __this, X509CertificateCollection_t3592472866 * ___certificates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
