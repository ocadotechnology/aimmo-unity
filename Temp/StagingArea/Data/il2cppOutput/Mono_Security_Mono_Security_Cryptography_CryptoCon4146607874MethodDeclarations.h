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

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.String Mono.Security.Cryptography.CryptoConvert::ToHex(System.Byte[])
extern "C"  String_t* CryptoConvert_ToHex_m2874017189 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Cryptography.CryptoConvert::FromHexChar(System.Char)
extern "C"  uint8_t CryptoConvert_FromHexChar_m3606013875 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::FromHex(System.String)
extern "C"  ByteU5BU5D_t3397334013* CryptoConvert_FromHex_m291962194 (Il2CppObject * __this /* static, unused */, String_t* ___hex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
