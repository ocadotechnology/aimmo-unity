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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange
struct TlsClientKeyExchange_t835272394;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsClientKeyExchange__ctor_m3707501598 (TlsClientKeyExchange_t835272394 * __this, Context_t4285182719 * ___context0, ByteU5BU5D_t3397334013* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange::ProcessAsSsl3()
extern "C"  void TlsClientKeyExchange_ProcessAsSsl3_m3161476736 (TlsClientKeyExchange_t835272394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange::ProcessAsTls1()
extern "C"  void TlsClientKeyExchange_ProcessAsTls1_m283981715 (TlsClientKeyExchange_t835272394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
