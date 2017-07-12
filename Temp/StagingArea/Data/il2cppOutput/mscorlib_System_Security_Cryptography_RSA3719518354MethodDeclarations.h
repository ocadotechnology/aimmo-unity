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

// System.Security.Cryptography.RSA
struct RSA_t3719518354;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter1462703416.h"

// System.Void System.Security.Cryptography.RSA::.ctor()
extern "C"  void RSA__ctor_m375023755 (RSA_t3719518354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create()
extern "C"  RSA_t3719518354 * RSA_Create_m4148185627 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create(System.String)
extern "C"  RSA_t3719518354 * RSA_Create_m2263911853 (Il2CppObject * __this /* static, unused */, String_t* ___algName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSA::ZeroizePrivateKey(System.Security.Cryptography.RSAParameters)
extern "C"  void RSA_ZeroizePrivateKey_m1189265834 (RSA_t3719518354 * __this, RSAParameters_t1462703416  ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSA::FromXmlString(System.String)
extern "C"  void RSA_FromXmlString_m2869022271 (RSA_t3719518354 * __this, String_t* ___xmlString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSA::ToXmlString(System.Boolean)
extern "C"  String_t* RSA_ToXmlString_m4145056574 (RSA_t3719518354 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
