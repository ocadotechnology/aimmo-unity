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

// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1980576455;
// System.Collections.IComparer
struct IComparer_t3952557350;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t2716208158;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Object
struct Il2CppObject;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Array
struct Il2CppArray;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t3166395312;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Hashtable_EnumeratorMo2734922732.h"

// System.Void System.Collections.Hashtable::.ctor()
extern "C"  void Hashtable__ctor_m1884964176 (Hashtable_t909839986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m846339375 (Hashtable_t909839986 * __this, int32_t ___capacity0, float ___loadFactor1, Il2CppObject * ___hcp2, Il2CppObject * ___comparer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
extern "C"  void Hashtable__ctor_m1360482358 (Hashtable_t909839986 * __this, int32_t ___capacity0, float ___loadFactor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32)
extern "C"  void Hashtable__ctor_m2702360557 (Hashtable_t909839986 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.Hashtable)
extern "C"  void Hashtable__ctor_m392789568 (Hashtable_t909839986 * __this, Hashtable_t909839986 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m4106078798 (Hashtable_t909839986 * __this, int32_t ___capacity0, Il2CppObject * ___hcp1, Il2CppObject * ___comparer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m2894679847 (Hashtable_t909839986 * __this, Il2CppObject * ___d0, float ___loadFactor1, Il2CppObject * ___hcp2, Il2CppObject * ___comparer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m3742489710 (Hashtable_t909839986 * __this, Il2CppObject * ___d0, Il2CppObject * ___hcp1, Il2CppObject * ___comparer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m2337481811 (Hashtable_t909839986 * __this, Il2CppObject * ___hcp0, Il2CppObject * ___comparer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Hashtable__ctor_m4280223555 (Hashtable_t909839986 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern "C"  void Hashtable__ctor_m622168569 (Hashtable_t909839986 * __this, int32_t ___capacity0, Il2CppObject * ___equalityComparer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
extern "C"  void Hashtable__ctor_m741952536 (Hashtable_t909839986 * __this, int32_t ___capacity0, float ___loadFactor1, Il2CppObject * ___equalityComparer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.cctor()
extern "C"  void Hashtable__cctor_m2952659675 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Hashtable_System_Collections_IEnumerable_GetEnumerator_m424477805 (Hashtable_t909839986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_comparer(System.Collections.IComparer)
extern "C"  void Hashtable_set_comparer_m3180045824 (Hashtable_t909839986 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_hcp(System.Collections.IHashCodeProvider)
extern "C"  void Hashtable_set_hcp_m61069857 (Hashtable_t909839986 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::get_Count()
extern "C"  int32_t Hashtable_get_Count_m830088216 (Hashtable_t909839986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_SyncRoot()
extern "C"  Il2CppObject * Hashtable_get_SyncRoot_m3737073257 (Hashtable_t909839986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Keys()
extern "C"  Il2CppObject * Hashtable_get_Keys_m4273499121 (Hashtable_t909839986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Values()
extern "C"  Il2CppObject * Hashtable_get_Values_m1305953313 (Hashtable_t909839986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_Item(System.Object)
extern "C"  Il2CppObject * Hashtable_get_Item_m2241557263 (Hashtable_t909839986 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object)
extern "C"  void Hashtable_set_Item_m2131404282 (Hashtable_t909839986 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyTo(System.Array,System.Int32)
extern "C"  void Hashtable_CopyTo_m2778915805 (Hashtable_t909839986 * __this, Il2CppArray * ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Add(System.Object,System.Object)
extern "C"  void Hashtable_Add_m3939668521 (Hashtable_t909839986 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Clear()
extern "C"  void Hashtable_Clear_m3672070813 (Hashtable_t909839986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::Contains(System.Object)
extern "C"  bool Hashtable_Contains_m3221185613 (Hashtable_t909839986 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator()
extern "C"  Il2CppObject * Hashtable_GetEnumerator_m3331430084 (Hashtable_t909839986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Remove(System.Object)
extern "C"  void Hashtable_Remove_m607079606 (Hashtable_t909839986 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::ContainsKey(System.Object)
extern "C"  bool Hashtable_ContainsKey_m2716576664 (Hashtable_t909839986 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::Clone()
extern "C"  Il2CppObject * Hashtable_Clone_m165405752 (Hashtable_t909839986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Hashtable_GetObjectData_m2946130828 (Hashtable_t909839986 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::OnDeserialization(System.Object)
extern "C"  void Hashtable_OnDeserialization_m4192849898 (Hashtable_t909839986 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Collections.Hashtable::Synchronized(System.Collections.Hashtable)
extern "C"  Hashtable_t909839986 * Hashtable_Synchronized_m225390213 (Il2CppObject * __this /* static, unused */, Hashtable_t909839986 * ___table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::GetHash(System.Object)
extern "C"  int32_t Hashtable_GetHash_m3524485628 (Hashtable_t909839986 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object)
extern "C"  bool Hashtable_KeyEquals_m1433874944 (Hashtable_t909839986 * __this, Il2CppObject * ___item0, Il2CppObject * ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::AdjustThreshold()
extern "C"  void Hashtable_AdjustThreshold_m1839559810 (Hashtable_t909839986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::SetTable(System.Collections.Hashtable/Slot[],System.Int32[])
extern "C"  void Hashtable_SetTable_m539410518 (Hashtable_t909839986 * __this, SlotU5BU5D_t3166395312* ___table0, Int32U5BU5D_t3030399641* ___hashes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::Find(System.Object)
extern "C"  int32_t Hashtable_Find_m3504510125 (Hashtable_t909839986 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Rehash()
extern "C"  void Hashtable_Rehash_m2877670513 (Hashtable_t909839986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::PutImpl(System.Object,System.Object,System.Boolean)
extern "C"  void Hashtable_PutImpl_m3318435614 (Hashtable_t909839986 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, bool ___overwrite2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyToArray(System.Array,System.Int32,System.Collections.Hashtable/EnumeratorMode)
extern "C"  void Hashtable_CopyToArray_m1529158630 (Hashtable_t909839986 * __this, Il2CppArray * ___arr0, int32_t ___i1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::TestPrime(System.Int32)
extern "C"  bool Hashtable_TestPrime_m96697534 (Il2CppObject * __this /* static, unused */, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::CalcPrime(System.Int32)
extern "C"  int32_t Hashtable_CalcPrime_m1835281409 (Il2CppObject * __this /* static, unused */, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::ToPrime(System.Int32)
extern "C"  int32_t Hashtable_ToPrime_m4277665615 (Il2CppObject * __this /* static, unused */, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
