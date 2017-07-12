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

// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t2688843926;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.ctor()
extern "C"  void RNGCryptoServiceProvider__ctor_m3226360387 (RNGCryptoServiceProvider_t2688843926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.cctor()
extern "C"  void RNGCryptoServiceProvider__cctor_m3121681526 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Check()
extern "C"  void RNGCryptoServiceProvider_Check_m919917061 (RNGCryptoServiceProvider_t2688843926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RNGCryptoServiceProvider::RngOpen()
extern "C"  bool RNGCryptoServiceProvider_RngOpen_m2238023214 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngInitialize(System.Byte[])
extern "C"  IntPtr_t RNGCryptoServiceProvider_RngInitialize_m4136227644 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___seed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngGetBytes(System.IntPtr,System.Byte[])
extern "C"  IntPtr_t RNGCryptoServiceProvider_RngGetBytes_m1722813891 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, ByteU5BU5D_t3397334013* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::RngClose(System.IntPtr)
extern "C"  void RNGCryptoServiceProvider_RngClose_m2921734810 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetBytes(System.Byte[])
extern "C"  void RNGCryptoServiceProvider_GetBytes_m167497991 (RNGCryptoServiceProvider_t2688843926 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetNonZeroBytes(System.Byte[])
extern "C"  void RNGCryptoServiceProvider_GetNonZeroBytes_m1918762662 (RNGCryptoServiceProvider_t2688843926 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Finalize()
extern "C"  void RNGCryptoServiceProvider_Finalize_m3698313957 (RNGCryptoServiceProvider_t2688843926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
