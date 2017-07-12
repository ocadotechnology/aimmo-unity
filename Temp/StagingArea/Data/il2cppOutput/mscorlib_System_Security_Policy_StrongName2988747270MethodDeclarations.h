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

// System.Security.Policy.StrongName
struct StrongName_t2988747270;
// System.String
struct String_t;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2860422703;
// System.Version
struct Version_t1755874712;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.String System.Security.Policy.StrongName::get_Name()
extern "C"  String_t* StrongName_get_Name_m3562418544 (StrongName_t2988747270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::get_PublicKey()
extern "C"  StrongNamePublicKeyBlob_t2860422703 * StrongName_get_PublicKey_m660168277 (StrongName_t2988747270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongName::get_Version()
extern "C"  Version_t1755874712 * StrongName_get_Version_m2566154422 (StrongName_t2988747270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongName::Equals(System.Object)
extern "C"  bool StrongName_Equals_m67226644 (StrongName_t2988747270 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongName::GetHashCode()
extern "C"  int32_t StrongName_GetHashCode_m2759564240 (StrongName_t2988747270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongName::ToString()
extern "C"  String_t* StrongName_ToString_m2622029394 (StrongName_t2988747270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
