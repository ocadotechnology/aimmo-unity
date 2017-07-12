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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange
struct TlsClientKeyExchange_t3808761250;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsClientKeyExchange__ctor_m2741078239 (TlsClientKeyExchange_t3808761250 * __this, Context_t4285182719 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessAsSsl3()
extern "C"  void TlsClientKeyExchange_ProcessAsSsl3_m662933084 (TlsClientKeyExchange_t3808761250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessAsTls1()
extern "C"  void TlsClientKeyExchange_ProcessAsTls1_m1707307575 (TlsClientKeyExchange_t3808761250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessCommon(System.Boolean)
extern "C"  void TlsClientKeyExchange_ProcessCommon_m1203833053 (TlsClientKeyExchange_t3808761250 * __this, bool ___sendLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
