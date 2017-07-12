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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificateRequest
struct TlsServerCertificateRequest_t1805368644;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsServerCertificateRequest__ctor_m2411766155 (TlsServerCertificateRequest_t1805368644 * __this, Context_t4285182719 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificateRequest::ProcessAsSsl3()
extern "C"  void TlsServerCertificateRequest_ProcessAsSsl3_m1480226628 (TlsServerCertificateRequest_t1805368644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificateRequest::ProcessAsTls1()
extern "C"  void TlsServerCertificateRequest_ProcessAsTls1_m2932011715 (TlsServerCertificateRequest_t1805368644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
