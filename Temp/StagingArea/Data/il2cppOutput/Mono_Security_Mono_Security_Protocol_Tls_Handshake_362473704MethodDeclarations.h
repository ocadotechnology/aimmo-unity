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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello
struct TlsClientHello_t362473704;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsClientHello__ctor_m2507299848 (TlsClientHello_t362473704 * __this, Context_t4285182719 * ___context0, ByteU5BU5D_t3397334013* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::Update()
extern "C"  void TlsClientHello_Update_m3599813547 (TlsClientHello_t362473704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::ProcessAsSsl3()
extern "C"  void TlsClientHello_ProcessAsSsl3_m2651118978 (TlsClientHello_t362473704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::ProcessAsTls1()
extern "C"  void TlsClientHello_ProcessAsTls1_m662563581 (TlsClientHello_t362473704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::processProtocol(System.Int16)
extern "C"  void TlsClientHello_processProtocol_m258353738 (TlsClientHello_t362473704 * __this, int16_t ___protocol0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::selectCipherSuite()
extern "C"  void TlsClientHello_selectCipherSuite_m177277593 (TlsClientHello_t362473704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::selectCompressionMethod()
extern "C"  void TlsClientHello_selectCompressionMethod_m2485216343 (TlsClientHello_t362473704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
