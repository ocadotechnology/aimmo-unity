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

// System.Security.Cryptography.DSA
struct DSA_t903174880;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter1872138834.h"

// System.Void System.Security.Cryptography.DSA::.ctor()
extern "C"  void DSA__ctor_m613430209 (DSA_t903174880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create()
extern "C"  DSA_t903174880 * DSA_Create_m1032215987 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create(System.String)
extern "C"  DSA_t903174880 * DSA_Create_m3450041777 (Il2CppObject * __this /* static, unused */, String_t* ___algName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSA::ZeroizePrivateKey(System.Security.Cryptography.DSAParameters)
extern "C"  void DSA_ZeroizePrivateKey_m86428970 (DSA_t903174880 * __this, DSAParameters_t1872138834  ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSA::FromXmlString(System.String)
extern "C"  void DSA_FromXmlString_m2141326025 (DSA_t903174880 * __this, String_t* ___xmlString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.DSA::ToXmlString(System.Boolean)
extern "C"  String_t* DSA_ToXmlString_m1014346120 (DSA_t903174880 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
