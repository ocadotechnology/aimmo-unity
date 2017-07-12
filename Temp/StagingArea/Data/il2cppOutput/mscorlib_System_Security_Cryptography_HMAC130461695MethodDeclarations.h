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

// System.Security.Cryptography.HMAC
struct HMAC_t130461695;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t3158419191;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Security.Cryptography.HMAC::.ctor()
extern "C"  void HMAC__ctor_m2799893504 (HMAC_t130461695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HMAC::get_BlockSizeValue()
extern "C"  int32_t HMAC_get_BlockSizeValue_m603907214 (HMAC_t130461695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_BlockSizeValue(System.Int32)
extern "C"  void HMAC_set_BlockSizeValue_m1107262347 (HMAC_t130461695 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_HashName(System.String)
extern "C"  void HMAC_set_HashName_m457235014 (HMAC_t130461695 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::get_Key()
extern "C"  ByteU5BU5D_t3397334013* HMAC_get_Key_m3894931668 (HMAC_t130461695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_Key(System.Byte[])
extern "C"  void HMAC_set_Key_m1530357889 (HMAC_t130461695 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::get_Block()
extern "C"  BlockProcessor_t3158419191 * HMAC_get_Block_m1367204253 (HMAC_t130461695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::KeySetup(System.Byte[],System.Byte)
extern "C"  ByteU5BU5D_t3397334013* HMAC_KeySetup_m3436156608 (HMAC_t130461695 * __this, ByteU5BU5D_t3397334013* ___key0, uint8_t ___padding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Dispose(System.Boolean)
extern "C"  void HMAC_Dispose_m972060868 (HMAC_t130461695 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void HMAC_HashCore_m1869699062 (HMAC_t130461695 * __this, ByteU5BU5D_t3397334013* ___rgb0, int32_t ___ib1, int32_t ___cb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::HashFinal()
extern "C"  ByteU5BU5D_t3397334013* HMAC_HashFinal_m3699989772 (HMAC_t130461695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Initialize()
extern "C"  void HMAC_Initialize_m2760853000 (HMAC_t130461695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create()
extern "C"  HMAC_t130461695 * HMAC_Create_m3778878895 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create(System.String)
extern "C"  HMAC_t130461695 * HMAC_Create_m3244939349 (Il2CppObject * __this /* static, unused */, String_t* ___algorithmName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
