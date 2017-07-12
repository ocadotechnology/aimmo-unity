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

// System.Security.Cryptography.OidEnumerator
struct OidEnumerator_t3674631724;
// System.Security.Cryptography.OidCollection
struct OidCollection_t3790243618;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_OidCollection3790243618.h"

// System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
extern "C"  void OidEnumerator__ctor_m675250776 (OidEnumerator_t3674631724 * __this, OidCollection_t3790243618 * ___collection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.OidEnumerator::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * OidEnumerator_System_Collections_IEnumerator_get_Current_m2449534361 (OidEnumerator_t3674631724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
extern "C"  bool OidEnumerator_MoveNext_m1889267785 (OidEnumerator_t3674631724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.OidEnumerator::Reset()
extern "C"  void OidEnumerator_Reset_m400083278 (OidEnumerator_t3674631724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
