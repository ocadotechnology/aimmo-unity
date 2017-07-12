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

// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3938752374;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2540099417.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentTyp859870085.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  void HandshakeMessage__ctor_m3783158590 (HandshakeMessage_t3938752374 * __this, Context_t4285182719 * ___context0, uint8_t ___handshakeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,Mono.Security.Protocol.Tls.ContentType)
extern "C"  void HandshakeMessage__ctor_m2727745933 (HandshakeMessage_t3938752374 * __this, Context_t4285182719 * ___context0, uint8_t ___handshakeType1, uint8_t ___contentType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C"  void HandshakeMessage__ctor_m1431757899 (HandshakeMessage_t3938752374 * __this, Context_t4285182719 * ___context0, uint8_t ___handshakeType1, ByteU5BU5D_t3397334013* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_Context()
extern "C"  Context_t4285182719 * HandshakeMessage_get_Context_m3356295711 (HandshakeMessage_t3938752374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_HandshakeType()
extern "C"  uint8_t HandshakeMessage_get_HandshakeType_m2104271474 (HandshakeMessage_t3938752374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ContentType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_ContentType()
extern "C"  uint8_t HandshakeMessage_get_ContentType_m760670911 (HandshakeMessage_t3938752374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Process()
extern "C"  void HandshakeMessage_Process_m2688076118 (HandshakeMessage_t3938752374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Update()
extern "C"  void HandshakeMessage_Update_m1733566706 (HandshakeMessage_t3938752374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::EncodeMessage()
extern "C"  ByteU5BU5D_t3397334013* HandshakeMessage_EncodeMessage_m2725158930 (HandshakeMessage_t3938752374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Compare(System.Byte[],System.Byte[])
extern "C"  bool HandshakeMessage_Compare_m2025941142 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buffer10, ByteU5BU5D_t3397334013* ___buffer21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
