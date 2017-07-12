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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange
struct TlsServerKeyExchange_t115542990;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.RSA
struct RSA_t3719518354;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"
#include "mscorlib_System_Security_Cryptography_RSA3719518354.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsServerKeyExchange__ctor_m1637043935 (TlsServerKeyExchange_t115542990 * __this, Context_t4285182719 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::Update()
extern "C"  void TlsServerKeyExchange_Update_m3948163941 (TlsServerKeyExchange_t115542990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::ProcessAsSsl3()
extern "C"  void TlsServerKeyExchange_ProcessAsSsl3_m1106616156 (TlsServerKeyExchange_t115542990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::ProcessAsTls1()
extern "C"  void TlsServerKeyExchange_ProcessAsTls1_m2150990647 (TlsServerKeyExchange_t115542990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::createSignature(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsServerKeyExchange_createSignature_m3618923038 (TlsServerKeyExchange_t115542990 * __this, RSA_t3719518354 * ___rsa0, ByteU5BU5D_t3397334013* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
