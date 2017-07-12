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

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t2694504884;
// System.IO.Stream
struct Stream_t3255436806;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t3002158488;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3938752374;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t4089752859;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientCon3002158488.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2540099417.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream4089752859.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
extern "C"  void ClientRecordProtocol__ctor_m648586559 (ClientRecordProtocol_t2694504884 * __this, Stream_t3255436806 * ___innerStream0, ClientContext_t3002158488 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t3938752374 * ClientRecordProtocol_GetMessage_m2649269799 (ClientRecordProtocol_t2694504884 * __this, uint8_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C"  void ClientRecordProtocol_ProcessHandshakeMessage_m3590516592 (ClientRecordProtocol_t2694504884 * __this, TlsStream_t4089752859 * ___handMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t3938752374 * ClientRecordProtocol_createClientHandshakeMessage_m811708715 (ClientRecordProtocol_t2694504884 * __this, uint8_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C"  HandshakeMessage_t3938752374 * ClientRecordProtocol_createServerHandshakeMessage_m3939790866 (ClientRecordProtocol_t2694504884 * __this, uint8_t ___type0, ByteU5BU5D_t3397334013* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
