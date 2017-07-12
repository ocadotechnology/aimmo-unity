#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.SslServerStream
struct SslServerStream_t330206493;

#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ServerContext
struct  ServerContext_t3823737132  : public Context_t4285182719
{
public:
	// Mono.Security.Protocol.Tls.SslServerStream Mono.Security.Protocol.Tls.ServerContext::sslStream
	SslServerStream_t330206493 * ___sslStream_30;
	// System.Boolean Mono.Security.Protocol.Tls.ServerContext::request_client_certificate
	bool ___request_client_certificate_31;
	// System.Boolean Mono.Security.Protocol.Tls.ServerContext::clientCertificateRequired
	bool ___clientCertificateRequired_32;

public:
	inline static int32_t get_offset_of_sslStream_30() { return static_cast<int32_t>(offsetof(ServerContext_t3823737132, ___sslStream_30)); }
	inline SslServerStream_t330206493 * get_sslStream_30() const { return ___sslStream_30; }
	inline SslServerStream_t330206493 ** get_address_of_sslStream_30() { return &___sslStream_30; }
	inline void set_sslStream_30(SslServerStream_t330206493 * value)
	{
		___sslStream_30 = value;
		Il2CppCodeGenWriteBarrier(&___sslStream_30, value);
	}

	inline static int32_t get_offset_of_request_client_certificate_31() { return static_cast<int32_t>(offsetof(ServerContext_t3823737132, ___request_client_certificate_31)); }
	inline bool get_request_client_certificate_31() const { return ___request_client_certificate_31; }
	inline bool* get_address_of_request_client_certificate_31() { return &___request_client_certificate_31; }
	inline void set_request_client_certificate_31(bool value)
	{
		___request_client_certificate_31 = value;
	}

	inline static int32_t get_offset_of_clientCertificateRequired_32() { return static_cast<int32_t>(offsetof(ServerContext_t3823737132, ___clientCertificateRequired_32)); }
	inline bool get_clientCertificateRequired_32() const { return ___clientCertificateRequired_32; }
	inline bool* get_address_of_clientCertificateRequired_32() { return &___clientCertificateRequired_32; }
	inline void set_clientCertificateRequired_32(bool value)
	{
		___clientCertificateRequired_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
