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

// System.Collections.SortedList
struct SortedList_t3004938869;
// System.Collections.IComparer
struct IComparer_t3952557350;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Object
struct Il2CppObject;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Array
struct Il2CppArray;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Array3829468939.h"

// System.Void System.Collections.SortedList::.ctor()
extern "C"  void SortedList__ctor_m2018398549 (SortedList_t3004938869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Int32)
extern "C"  void SortedList__ctor_m3698381356 (SortedList_t3004938869 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer,System.Int32)
extern "C"  void SortedList__ctor_m3874385060 (SortedList_t3004938869 * __this, Il2CppObject * ___comparer0, int32_t ___capacity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IDictionary,System.Collections.IComparer)
extern "C"  void SortedList__ctor_m1831582390 (SortedList_t3004938869 * __this, Il2CppObject * ___d0, Il2CppObject * ___comparer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.cctor()
extern "C"  void SortedList__cctor_m2875591912 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * SortedList_System_Collections_IEnumerable_GetEnumerator_m561951806 (SortedList_t3004938869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Count()
extern "C"  int32_t SortedList_get_Count_m989621893 (SortedList_t3004938869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_SyncRoot()
extern "C"  Il2CppObject * SortedList_get_SyncRoot_m3299704254 (SortedList_t3004938869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsFixedSize()
extern "C"  bool SortedList_get_IsFixedSize_m2529229381 (SortedList_t3004938869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsReadOnly()
extern "C"  bool SortedList_get_IsReadOnly_m3706327226 (SortedList_t3004938869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_Item(System.Object)
extern "C"  Il2CppObject * SortedList_get_Item_m736581006 (SortedList_t3004938869 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Item(System.Object,System.Object)
extern "C"  void SortedList_set_Item_m3109168821 (SortedList_t3004938869 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Capacity()
extern "C"  int32_t SortedList_get_Capacity_m887547236 (SortedList_t3004938869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Capacity(System.Int32)
extern "C"  void SortedList_set_Capacity_m1978575685 (SortedList_t3004938869 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Add(System.Object,System.Object)
extern "C"  void SortedList_Add_m3160058320 (SortedList_t3004938869 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::Contains(System.Object)
extern "C"  bool SortedList_Contains_m89042552 (SortedList_t3004938869 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.SortedList::GetEnumerator()
extern "C"  Il2CppObject * SortedList_GetEnumerator_m1318483481 (SortedList_t3004938869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Remove(System.Object)
extern "C"  void SortedList_Remove_m2105729849 (SortedList_t3004938869 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyTo(System.Array,System.Int32)
extern "C"  void SortedList_CopyTo_m1203849358 (SortedList_t3004938869 * __this, Il2CppArray * ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::Clone()
extern "C"  Il2CppObject * SortedList_Clone_m885781019 (SortedList_t3004938869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::RemoveAt(System.Int32)
extern "C"  void SortedList_RemoveAt_m3447877283 (SortedList_t3004938869 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::IndexOfKey(System.Object)
extern "C"  int32_t SortedList_IndexOfKey_m1840737949 (SortedList_t3004938869 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::ContainsKey(System.Object)
extern "C"  bool SortedList_ContainsKey_m1389662883 (SortedList_t3004938869 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetByIndex(System.Int32)
extern "C"  Il2CppObject * SortedList_GetByIndex_m322337214 (SortedList_t3004938869 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::EnsureCapacity(System.Int32,System.Int32)
extern "C"  void SortedList_EnsureCapacity_m464504063 (SortedList_t3004938869 * __this, int32_t ___n0, int32_t ___free1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::PutImpl(System.Object,System.Object,System.Boolean)
extern "C"  void SortedList_PutImpl_m890050679 (SortedList_t3004938869 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, bool ___overwrite2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetImpl(System.Object)
extern "C"  Il2CppObject * SortedList_GetImpl_m1166576832 (SortedList_t3004938869 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::InitTable(System.Int32,System.Boolean)
extern "C"  void SortedList_InitTable_m460350503 (SortedList_t3004938869 * __this, int32_t ___capacity0, bool ___forceSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::Find(System.Object)
extern "C"  int32_t SortedList_Find_m1529794918 (SortedList_t3004938869 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
