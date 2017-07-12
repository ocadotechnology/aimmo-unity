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

// Mono.Security.Protocol.Tls.ServerRecordProtocol
struct ServerRecordProtocol_t1033892432;
// System.IO.Stream
struct Stream_t3255436806;
// Mono.Security.Protocol.Tls.ServerContext
struct ServerContext_t3823737132;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3938752374;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t4089752859;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ServerCon3823737132.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2540099417.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream4089752859.h"

// System.Void Mono.Security.Protocol.Tls.ServerRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ServerContext)
extern "C"  void ServerRecordProtocol__ctor_m3765020479 (ServerRecordProtocol_t1033892432 * __this, Stream_t3255436806 * ___innerStream0, ServerContext_t3823737132 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ServerRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t3938752374 * ServerRecordProtocol_GetMessage_m4226122651 (ServerRecordProtocol_t1033892432 * __this, uint8_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ServerRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C"  void ServerRecordProtocol_ProcessHandshakeMessage_m1688041244 (ServerRecordProtocol_t1033892432 * __this, TlsStream_t4089752859 * ___handMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ServerRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C"  HandshakeMessage_t3938752374 * ServerRecordProtocol_createClientHandshakeMessage_m2812099666 (ServerRecordProtocol_t1033892432 * __this, uint8_t ___type0, ByteU5BU5D_t3397334013* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ServerRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t3938752374 * ServerRecordProtocol_createServerHandshakeMessage_m1597473387 (ServerRecordProtocol_t1033892432 * __this, uint8_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
