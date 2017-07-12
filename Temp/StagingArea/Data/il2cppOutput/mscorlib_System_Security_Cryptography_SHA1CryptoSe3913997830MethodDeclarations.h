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

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct SHA1CryptoServiceProvider_t3913997830;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::.ctor()
extern "C"  void SHA1CryptoServiceProvider__ctor_m3127563759 (SHA1CryptoServiceProvider_t3913997830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::Finalize()
extern "C"  void SHA1CryptoServiceProvider_Finalize_m844913965 (SHA1CryptoServiceProvider_t3913997830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::Dispose(System.Boolean)
extern "C"  void SHA1CryptoServiceProvider_Dispose_m1052169139 (SHA1CryptoServiceProvider_t3913997830 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void SHA1CryptoServiceProvider_HashCore_m855584397 (SHA1CryptoServiceProvider_t3913997830 * __this, ByteU5BU5D_t3397334013* ___rgb0, int32_t ___ibStart1, int32_t ___cbSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1CryptoServiceProvider::HashFinal()
extern "C"  ByteU5BU5D_t3397334013* SHA1CryptoServiceProvider_HashFinal_m2054931157 (SHA1CryptoServiceProvider_t3913997830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::Initialize()
extern "C"  void SHA1CryptoServiceProvider_Initialize_m3685014747 (SHA1CryptoServiceProvider_t3913997830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
