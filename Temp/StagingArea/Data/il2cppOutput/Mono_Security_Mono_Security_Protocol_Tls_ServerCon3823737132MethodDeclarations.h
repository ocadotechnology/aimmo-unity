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

// Mono.Security.Protocol.Tls.ServerContext
struct ServerContext_t3823737132;
// Mono.Security.Protocol.Tls.SslServerStream
struct SslServerStream_t330206493;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslServerS330206493.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityPr155967584.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"

// System.Void Mono.Security.Protocol.Tls.ServerContext::.ctor(Mono.Security.Protocol.Tls.SslServerStream,Mono.Security.Protocol.Tls.SecurityProtocolType,System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Boolean)
extern "C"  void ServerContext__ctor_m185848009 (ServerContext_t3823737132 * __this, SslServerStream_t330206493 * ___stream0, int32_t ___securityProtocolType1, X509Certificate_t283079845 * ___serverCertificate2, bool ___clientCertificateRequired3, bool ___requestClientCertificate4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SslServerStream Mono.Security.Protocol.Tls.ServerContext::get_SslStream()
extern "C"  SslServerStream_t330206493 * ServerContext_get_SslStream_m650876629 (ServerContext_t3823737132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ServerContext::get_ClientCertificateRequired()
extern "C"  bool ServerContext_get_ClientCertificateRequired_m1536484652 (ServerContext_t3823737132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ServerContext::get_RequestClientCertificate()
extern "C"  bool ServerContext_get_RequestClientCertificate_m4044500958 (ServerContext_t3823737132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
