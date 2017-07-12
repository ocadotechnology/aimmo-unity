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

// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t2290372928;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t491456551;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuit491456551.h"

// System.Void Mono.Security.Protocol.Tls.SecurityParameters::.ctor()
extern "C"  void SecurityParameters__ctor_m3136793890 (SecurityParameters_t2290372928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::get_Cipher()
extern "C"  CipherSuite_t491456551 * SecurityParameters_get_Cipher_m2392911632 (SecurityParameters_t2290372928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_Cipher(Mono.Security.Protocol.Tls.CipherSuite)
extern "C"  void SecurityParameters_set_Cipher_m3888132335 (SecurityParameters_t2290372928 * __this, CipherSuite_t491456551 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ClientWriteMAC()
extern "C"  ByteU5BU5D_t3397334013* SecurityParameters_get_ClientWriteMAC_m2756307972 (SecurityParameters_t2290372928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ClientWriteMAC(System.Byte[])
extern "C"  void SecurityParameters_set_ClientWriteMAC_m1970377285 (SecurityParameters_t2290372928 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ServerWriteMAC()
extern "C"  ByteU5BU5D_t3397334013* SecurityParameters_get_ServerWriteMAC_m244028400 (SecurityParameters_t2290372928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ServerWriteMAC(System.Byte[])
extern "C"  void SecurityParameters_set_ServerWriteMAC_m3769080193 (SecurityParameters_t2290372928 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::Clear()
extern "C"  void SecurityParameters_Clear_m3409219757 (SecurityParameters_t2290372928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
