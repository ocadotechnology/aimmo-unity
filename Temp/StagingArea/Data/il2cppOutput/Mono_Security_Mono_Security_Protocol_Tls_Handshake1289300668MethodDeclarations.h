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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
struct TlsServerHello_t1289300668;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsServerHello__ctor_m3032108168 (TlsServerHello_t1289300668 * __this, Context_t4285182719 * ___context0, ByteU5BU5D_t3397334013* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
extern "C"  void TlsServerHello_Update_m1740270635 (TlsServerHello_t1289300668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
extern "C"  void TlsServerHello_ProcessAsSsl3_m3986132482 (TlsServerHello_t1289300668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
extern "C"  void TlsServerHello_ProcessAsTls1_m1997577085 (TlsServerHello_t1289300668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
extern "C"  void TlsServerHello_processProtocol_m1241336522 (TlsServerHello_t1289300668 * __this, int16_t ___protocol0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
