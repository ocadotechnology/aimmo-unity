#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t989458295;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t1663566523;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t3318447433;

#include "Mono_Security_Mono_Security_Protocol_Tls_SslStreamB934199321.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SslServerStream
struct  SslServerStream_t330206493  : public SslStreamBase_t934199321
{
public:
	// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslServerStream::ClientCertValidation
	CertificateValidationCallback_t989458295 * ___ClientCertValidation_16;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslServerStream::PrivateKeySelection
	PrivateKeySelectionCallback_t1663566523 * ___PrivateKeySelection_17;
	// Mono.Security.Protocol.Tls.CertificateValidationCallback2 Mono.Security.Protocol.Tls.SslServerStream::ClientCertValidation2
	CertificateValidationCallback2_t3318447433 * ___ClientCertValidation2_18;

public:
	inline static int32_t get_offset_of_ClientCertValidation_16() { return static_cast<int32_t>(offsetof(SslServerStream_t330206493, ___ClientCertValidation_16)); }
	inline CertificateValidationCallback_t989458295 * get_ClientCertValidation_16() const { return ___ClientCertValidation_16; }
	inline CertificateValidationCallback_t989458295 ** get_address_of_ClientCertValidation_16() { return &___ClientCertValidation_16; }
	inline void set_ClientCertValidation_16(CertificateValidationCallback_t989458295 * value)
	{
		___ClientCertValidation_16 = value;
		Il2CppCodeGenWriteBarrier(&___ClientCertValidation_16, value);
	}

	inline static int32_t get_offset_of_PrivateKeySelection_17() { return static_cast<int32_t>(offsetof(SslServerStream_t330206493, ___PrivateKeySelection_17)); }
	inline PrivateKeySelectionCallback_t1663566523 * get_PrivateKeySelection_17() const { return ___PrivateKeySelection_17; }
	inline PrivateKeySelectionCallback_t1663566523 ** get_address_of_PrivateKeySelection_17() { return &___PrivateKeySelection_17; }
	inline void set_PrivateKeySelection_17(PrivateKeySelectionCallback_t1663566523 * value)
	{
		___PrivateKeySelection_17 = value;
		Il2CppCodeGenWriteBarrier(&___PrivateKeySelection_17, value);
	}

	inline static int32_t get_offset_of_ClientCertValidation2_18() { return static_cast<int32_t>(offsetof(SslServerStream_t330206493, ___ClientCertValidation2_18)); }
	inline CertificateValidationCallback2_t3318447433 * get_ClientCertValidation2_18() const { return ___ClientCertValidation2_18; }
	inline CertificateValidationCallback2_t3318447433 ** get_address_of_ClientCertValidation2_18() { return &___ClientCertValidation2_18; }
	inline void set_ClientCertValidation2_18(CertificateValidationCallback2_t3318447433 * value)
	{
		___ClientCertValidation2_18 = value;
		Il2CppCodeGenWriteBarrier(&___ClientCertValidation2_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
