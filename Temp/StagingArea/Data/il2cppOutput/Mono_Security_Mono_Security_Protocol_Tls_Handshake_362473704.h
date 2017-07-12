#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int16[]
struct Int16U5BU5D_t3104283263;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3938752374.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello
struct  TlsClientHello_t362473704  : public HandshakeMessage_t3938752374
{
public:
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::random
	ByteU5BU5D_t3397334013* ___random_9;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::sessionId
	ByteU5BU5D_t3397334013* ___sessionId_10;
	// System.Int16[] Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::cipherSuites
	Int16U5BU5D_t3104283263* ___cipherSuites_11;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::compressionMethods
	ByteU5BU5D_t3397334013* ___compressionMethods_12;

public:
	inline static int32_t get_offset_of_random_9() { return static_cast<int32_t>(offsetof(TlsClientHello_t362473704, ___random_9)); }
	inline ByteU5BU5D_t3397334013* get_random_9() const { return ___random_9; }
	inline ByteU5BU5D_t3397334013** get_address_of_random_9() { return &___random_9; }
	inline void set_random_9(ByteU5BU5D_t3397334013* value)
	{
		___random_9 = value;
		Il2CppCodeGenWriteBarrier(&___random_9, value);
	}

	inline static int32_t get_offset_of_sessionId_10() { return static_cast<int32_t>(offsetof(TlsClientHello_t362473704, ___sessionId_10)); }
	inline ByteU5BU5D_t3397334013* get_sessionId_10() const { return ___sessionId_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_sessionId_10() { return &___sessionId_10; }
	inline void set_sessionId_10(ByteU5BU5D_t3397334013* value)
	{
		___sessionId_10 = value;
		Il2CppCodeGenWriteBarrier(&___sessionId_10, value);
	}

	inline static int32_t get_offset_of_cipherSuites_11() { return static_cast<int32_t>(offsetof(TlsClientHello_t362473704, ___cipherSuites_11)); }
	inline Int16U5BU5D_t3104283263* get_cipherSuites_11() const { return ___cipherSuites_11; }
	inline Int16U5BU5D_t3104283263** get_address_of_cipherSuites_11() { return &___cipherSuites_11; }
	inline void set_cipherSuites_11(Int16U5BU5D_t3104283263* value)
	{
		___cipherSuites_11 = value;
		Il2CppCodeGenWriteBarrier(&___cipherSuites_11, value);
	}

	inline static int32_t get_offset_of_compressionMethods_12() { return static_cast<int32_t>(offsetof(TlsClientHello_t362473704, ___compressionMethods_12)); }
	inline ByteU5BU5D_t3397334013* get_compressionMethods_12() const { return ___compressionMethods_12; }
	inline ByteU5BU5D_t3397334013** get_address_of_compressionMethods_12() { return &___compressionMethods_12; }
	inline void set_compressionMethods_12(ByteU5BU5D_t3397334013* value)
	{
		___compressionMethods_12 = value;
		Il2CppCodeGenWriteBarrier(&___compressionMethods_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
