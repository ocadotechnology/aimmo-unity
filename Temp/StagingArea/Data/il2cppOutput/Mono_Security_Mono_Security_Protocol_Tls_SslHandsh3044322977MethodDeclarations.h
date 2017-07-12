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

// Mono.Security.Protocol.Tls.SslHandshakeHash
struct SslHandshakeHash_t3044322977;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.RSA
struct RSA_t3719518354;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSA3719518354.h"

// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::.ctor(System.Byte[])
extern "C"  void SslHandshakeHash__ctor_m1269339424 (SslHandshakeHash_t3044322977 * __this, ByteU5BU5D_t3397334013* ___secret0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::Initialize()
extern "C"  void SslHandshakeHash_Initialize_m2786849785 (SslHandshakeHash_t3044322977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::HashFinal()
extern "C"  ByteU5BU5D_t3397334013* SslHandshakeHash_HashFinal_m1925138451 (SslHandshakeHash_t3044322977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void SslHandshakeHash_HashCore_m3914471343 (SslHandshakeHash_t3044322977 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___ibStart1, int32_t ___cbSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::CreateSignature(System.Security.Cryptography.RSA)
extern "C"  ByteU5BU5D_t3397334013* SslHandshakeHash_CreateSignature_m3001618400 (SslHandshakeHash_t3044322977 * __this, RSA_t3719518354 * ___rsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslHandshakeHash::VerifySignature(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  bool SslHandshakeHash_VerifySignature_m3867994234 (SslHandshakeHash_t3044322977 * __this, RSA_t3719518354 * ___rsa0, ByteU5BU5D_t3397334013* ___rgbSignature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::initializePad()
extern "C"  void SslHandshakeHash_initializePad_m4132246594 (SslHandshakeHash_t3044322977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
