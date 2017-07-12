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

// Mono.Security.X509.PKCS12/DeriveBytes
struct DeriveBytes_t1740753016;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.ctor()
extern "C"  void DeriveBytes__ctor_m3089550878 (DeriveBytes_t1740753016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.cctor()
extern "C"  void DeriveBytes__cctor_m3151663919 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_HashName(System.String)
extern "C"  void DeriveBytes_set_HashName_m1033859896 (DeriveBytes_t1740753016 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_IterationCount(System.Int32)
extern "C"  void DeriveBytes_set_IterationCount_m978799990 (DeriveBytes_t1740753016 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Password(System.Byte[])
extern "C"  void DeriveBytes_set_Password_m3391502993 (DeriveBytes_t1740753016 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Salt(System.Byte[])
extern "C"  void DeriveBytes_set_Salt_m4154827108 (DeriveBytes_t1740753016 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::Adjust(System.Byte[],System.Int32,System.Byte[])
extern "C"  void DeriveBytes_Adjust_m105515328 (DeriveBytes_t1740753016 * __this, ByteU5BU5D_t3397334013* ___a0, int32_t ___aOff1, ByteU5BU5D_t3397334013* ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::Derive(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* DeriveBytes_Derive_m4287063555 (DeriveBytes_t1740753016 * __this, ByteU5BU5D_t3397334013* ___diversifier0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveKey(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* DeriveBytes_DeriveKey_m2059955099 (DeriveBytes_t1740753016 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveIV(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* DeriveBytes_DeriveIV_m3493603215 (DeriveBytes_t1740753016 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveMAC(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* DeriveBytes_DeriveMAC_m2485586011 (DeriveBytes_t1740753016 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
