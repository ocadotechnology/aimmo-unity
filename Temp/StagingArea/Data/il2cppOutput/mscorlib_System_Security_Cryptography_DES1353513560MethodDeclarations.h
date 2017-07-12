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

// System.Security.Cryptography.DES
struct DES_t1353513560;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Security.Cryptography.DES::.ctor()
extern "C"  void DES__ctor_m3442600969 (DES_t1353513560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::.cctor()
extern "C"  void DES__cctor_m3250404232 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DES System.Security.Cryptography.DES::Create()
extern "C"  DES_t1353513560 * DES_Create_m638366307 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DES System.Security.Cryptography.DES::Create(System.String)
extern "C"  DES_t1353513560 * DES_Create_m2705450713 (Il2CppObject * __this /* static, unused */, String_t* ___algName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsWeakKey(System.Byte[])
extern "C"  bool DES_IsWeakKey_m3832577339 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___rgbKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsSemiWeakKey(System.Byte[])
extern "C"  bool DES_IsSemiWeakKey_m3967392585 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___rgbKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DES::get_Key()
extern "C"  ByteU5BU5D_t3397334013* DES_get_Key_m2584608215 (DES_t1353513560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::set_Key(System.Byte[])
extern "C"  void DES_set_Key_m2689203108 (DES_t1353513560 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
