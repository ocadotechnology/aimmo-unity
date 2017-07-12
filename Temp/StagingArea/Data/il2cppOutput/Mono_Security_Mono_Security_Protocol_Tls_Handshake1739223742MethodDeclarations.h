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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished
struct TlsServerFinished_t1739223742;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsServerFinished__ctor_m46304517 (TlsServerFinished_t1739223742 * __this, Context_t4285182719 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::.cctor()
extern "C"  void TlsServerFinished__cctor_m3757178253 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::ProcessAsSsl3()
extern "C"  void TlsServerFinished_ProcessAsSsl3_m642399426 (TlsServerFinished_t1739223742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::ProcessAsTls1()
extern "C"  void TlsServerFinished_ProcessAsTls1_m2555920257 (TlsServerFinished_t1739223742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
