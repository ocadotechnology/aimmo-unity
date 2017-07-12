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

// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_t2915171657;
// System.Security.Cryptography.CspParameters
struct CspParameters_t46065560;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t3289624707;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_CspParameters46065560.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter1872138834.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_EventArgs3289624707.h"

// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor()
extern "C"  void DSACryptoServiceProvider__ctor_m701823690 (DSACryptoServiceProvider_t2915171657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32)
extern "C"  void DSACryptoServiceProvider__ctor_m181065031 (DSACryptoServiceProvider_t2915171657 * __this, int32_t ___dwKeySize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32,System.Security.Cryptography.CspParameters)
extern "C"  void DSACryptoServiceProvider__ctor_m2374304492 (DSACryptoServiceProvider_t2915171657 * __this, int32_t ___dwKeySize0, CspParameters_t46065560 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.cctor()
extern "C"  void DSACryptoServiceProvider__cctor_m4178234285 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Finalize()
extern "C"  void DSACryptoServiceProvider_Finalize_m1911772902 (DSACryptoServiceProvider_t2915171657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.DSACryptoServiceProvider::get_KeySize()
extern "C"  int32_t DSACryptoServiceProvider_get_KeySize_m3258282267 (DSACryptoServiceProvider_t2915171657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_PublicOnly()
extern "C"  bool DSACryptoServiceProvider_get_PublicOnly_m998015514 (DSACryptoServiceProvider_t2915171657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C"  DSAParameters_t1872138834  DSACryptoServiceProvider_ExportParameters_m2503144019 (DSACryptoServiceProvider_t2915171657 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.DSAParameters)
extern "C"  void DSACryptoServiceProvider_ImportParameters_m513997588 (DSACryptoServiceProvider_t2915171657 * __this, DSAParameters_t1872138834  ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::CreateSignature(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* DSACryptoServiceProvider_CreateSignature_m469230785 (DSACryptoServiceProvider_t2915171657 * __this, ByteU5BU5D_t3397334013* ___rgbHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::VerifySignature(System.Byte[],System.Byte[])
extern "C"  bool DSACryptoServiceProvider_VerifySignature_m1717508085 (DSACryptoServiceProvider_t2915171657 * __this, ByteU5BU5D_t3397334013* ___rgbHash0, ByteU5BU5D_t3397334013* ___rgbSignature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Dispose(System.Boolean)
extern "C"  void DSACryptoServiceProvider_Dispose_m3399776526 (DSACryptoServiceProvider_t2915171657 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C"  void DSACryptoServiceProvider_OnKeyGenerated_m1573093697 (DSACryptoServiceProvider_t2915171657 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
