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

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t2081831987;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t528874471;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct X509ChainElementEnumerator_t3304975821;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t4056456767;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "System_System_Security_Cryptography_X509Certificat4056456767.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::.ctor()
extern "C"  void X509ChainElementCollection__ctor_m2389346408 (X509ChainElementCollection_t2081831987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void X509ChainElementCollection_System_Collections_ICollection_CopyTo_m1467895312 (X509ChainElementCollection_t2081831987 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_m2559704689 (X509ChainElementCollection_t2081831987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Count()
extern "C"  int32_t X509ChainElementCollection_get_Count_m905965108 (X509ChainElementCollection_t2081831987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Item(System.Int32)
extern "C"  X509ChainElement_t528874471 * X509ChainElementCollection_get_Item_m1494130666 (X509ChainElementCollection_t2081831987 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_SyncRoot()
extern "C"  Il2CppObject * X509ChainElementCollection_get_SyncRoot_m579710009 (X509ChainElementCollection_t2081831987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::GetEnumerator()
extern "C"  X509ChainElementEnumerator_t3304975821 * X509ChainElementCollection_GetEnumerator_m3367250365 (X509ChainElementCollection_t2081831987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  void X509ChainElementCollection_Add_m1511936349 (X509ChainElementCollection_t2081831987 * __this, X509Certificate2_t4056456767 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Clear()
extern "C"  void X509ChainElementCollection_Clear_m414681645 (X509ChainElementCollection_t2081831987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509ChainElementCollection_Contains_m3599995067 (X509ChainElementCollection_t2081831987 * __this, X509Certificate2_t4056456767 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
