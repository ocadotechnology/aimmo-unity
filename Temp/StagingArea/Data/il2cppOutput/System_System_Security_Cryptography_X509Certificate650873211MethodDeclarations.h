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

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t650873211;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051958;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t1320896183;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t3763443773;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate324051957.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.ctor(Mono.Security.X509.X509Certificate)
extern "C"  void X509ExtensionCollection__ctor_m1324282194 (X509ExtensionCollection_t650873211 * __this, X509Certificate_t324051958 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void X509ExtensionCollection_System_Collections_ICollection_CopyTo_m3421329346 (X509ExtensionCollection_t650873211 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m1813422183 (X509ExtensionCollection_t650873211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Count()
extern "C"  int32_t X509ExtensionCollection_get_Count_m3798021134 (X509ExtensionCollection_t650873211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_SyncRoot()
extern "C"  Il2CppObject * X509ExtensionCollection_get_SyncRoot_m3539525515 (X509ExtensionCollection_t650873211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Item(System.String)
extern "C"  X509Extension_t1320896183 * X509ExtensionCollection_get_Item_m2392275793 (X509ExtensionCollection_t650873211 * __this, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::GetEnumerator()
extern "C"  X509ExtensionEnumerator_t3763443773 * X509ExtensionCollection_GetEnumerator_m3421097717 (X509ExtensionCollection_t650873211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
