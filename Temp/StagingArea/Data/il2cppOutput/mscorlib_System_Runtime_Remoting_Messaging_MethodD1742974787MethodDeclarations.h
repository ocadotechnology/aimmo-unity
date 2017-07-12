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

// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t1742974787;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t1899389025;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Array
struct Il2CppArray;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Array3829468939.h"

// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C"  void MethodDictionary__ctor_m184006744 (MethodDictionary_t1742974787 * __this, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m1794586762 (MethodDictionary_t1742974787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
extern "C"  void MethodDictionary_set_MethodKeys_m3180307551 (MethodDictionary_t1742974787 * __this, StringU5BU5D_t1642385972* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
extern "C"  Il2CppObject * MethodDictionary_AllocInternalProperties_m3261295876 (MethodDictionary_t1742974787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern "C"  Il2CppObject * MethodDictionary_GetInternalProperties_m1562637947 (MethodDictionary_t1742974787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
extern "C"  bool MethodDictionary_IsOverridenKey_m3922224650 (MethodDictionary_t1742974787 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
extern "C"  Il2CppObject * MethodDictionary_get_Item_m3352300532 (MethodDictionary_t1742974787 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern "C"  void MethodDictionary_set_Item_m3475146889 (MethodDictionary_t1742974787 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
extern "C"  Il2CppObject * MethodDictionary_GetMethodProperty_m4085857742 (MethodDictionary_t1742974787 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
extern "C"  void MethodDictionary_SetMethodProperty_m1502558295 (MethodDictionary_t1742974787 * __this, String_t* ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
extern "C"  Il2CppObject * MethodDictionary_get_Values_m3868590366 (MethodDictionary_t1742974787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern "C"  void MethodDictionary_Add_m1424332128 (MethodDictionary_t1742974787 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern "C"  void MethodDictionary_Remove_m3965014965 (MethodDictionary_t1742974787 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern "C"  int32_t MethodDictionary_get_Count_m3214848709 (MethodDictionary_t1742974787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern "C"  Il2CppObject * MethodDictionary_get_SyncRoot_m673971424 (MethodDictionary_t1742974787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
extern "C"  void MethodDictionary_CopyTo_m1721788774 (MethodDictionary_t1742974787 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern "C"  Il2CppObject * MethodDictionary_GetEnumerator_m2834961193 (MethodDictionary_t1742974787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
