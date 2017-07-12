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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHelloDone
struct TlsServerHelloDone_t2766712588;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsServerHelloDone__ctor_m661901113 (TlsServerHelloDone_t2766712588 * __this, Context_t4285182719 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHelloDone::ProcessAsSsl3()
extern "C"  void TlsServerHelloDone_ProcessAsSsl3_m1485742018 (TlsServerHelloDone_t2766712588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHelloDone::ProcessAsTls1()
extern "C"  void TlsServerHelloDone_ProcessAsTls1_m513960917 (TlsServerHelloDone_t2766712588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
