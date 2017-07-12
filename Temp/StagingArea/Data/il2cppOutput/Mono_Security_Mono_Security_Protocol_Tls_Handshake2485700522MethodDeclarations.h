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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientFinished
struct TlsClientFinished_t2485700522;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsClientFinished__ctor_m790123616 (TlsClientFinished_t2485700522 * __this, Context_t4285182719 * ___context0, ByteU5BU5D_t3397334013* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientFinished::ProcessAsSsl3()
extern "C"  void TlsClientFinished_ProcessAsSsl3_m1844880638 (TlsClientFinished_t2485700522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientFinished::ProcessAsTls1()
extern "C"  void TlsClientFinished_ProcessAsTls1_m352374989 (TlsClientFinished_t2485700522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
