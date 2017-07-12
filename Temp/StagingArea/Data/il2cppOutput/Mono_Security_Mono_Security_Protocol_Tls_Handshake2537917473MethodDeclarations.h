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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate
struct TlsClientCertificate_t2537917473;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsClientCertificate__ctor_m987604448 (TlsClientCertificate_t2537917473 * __this, Context_t4285182719 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::get_ClientCertificate()
extern "C"  X509Certificate_t283079845 * TlsClientCertificate_get_ClientCertificate_m3062440489 (TlsClientCertificate_t2537917473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::Update()
extern "C"  void TlsClientCertificate_Update_m3781462820 (TlsClientCertificate_t2537917473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::GetClientCertificate()
extern "C"  void TlsClientCertificate_GetClientCertificate_m2808467979 (TlsClientCertificate_t2537917473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::SendCertificates()
extern "C"  void TlsClientCertificate_SendCertificates_m1096074091 (TlsClientCertificate_t2537917473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsSsl3()
extern "C"  void TlsClientCertificate_ProcessAsSsl3_m3634449507 (TlsClientCertificate_t2537917473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsTls1()
extern "C"  void TlsClientCertificate_ProcessAsTls1_m1772516248 (TlsClientCertificate_t2537917473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::FindParentCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  X509Certificate_t283079845 * TlsClientCertificate_FindParentCertificate_m10738514 (TlsClientCertificate_t2537917473 * __this, X509Certificate_t283079845 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
