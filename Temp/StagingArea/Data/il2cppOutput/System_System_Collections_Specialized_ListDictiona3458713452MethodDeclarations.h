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

// System.Collections.Specialized.ListDictionary
struct ListDictionary_t3458713452;
// System.Collections.IComparer
struct IComparer_t3952557350;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t2725637098;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Collections_Specialized_ListDictiona2725637098.h"
#include "mscorlib_System_Array3829468939.h"

// System.Void System.Collections.Specialized.ListDictionary::.ctor()
extern "C"  void ListDictionary__ctor_m3573908233 (ListDictionary_t3458713452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
extern "C"  void ListDictionary__ctor_m319558045 (ListDictionary_t3458713452 * __this, Il2CppObject * ___comparer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ListDictionary_System_Collections_IEnumerable_GetEnumerator_m2244736244 (ListDictionary_t3458713452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object)
extern "C"  DictionaryNode_t2725637098 * ListDictionary_FindEntry_m1690278153 (ListDictionary_t3458713452 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode&)
extern "C"  DictionaryNode_t2725637098 * ListDictionary_FindEntry_m432748847 (ListDictionary_t3458713452 * __this, Il2CppObject * ___key0, DictionaryNode_t2725637098 ** ___prev1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::AddImpl(System.Object,System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode)
extern "C"  void ListDictionary_AddImpl_m2604632092 (ListDictionary_t3458713452 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, DictionaryNode_t2725637098 * ___prev2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
extern "C"  int32_t ListDictionary_get_Count_m2397535557 (ListDictionary_t3458713452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
extern "C"  Il2CppObject * ListDictionary_get_SyncRoot_m1212356752 (ListDictionary_t3458713452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
extern "C"  void ListDictionary_CopyTo_m1124479600 (ListDictionary_t3458713452 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
extern "C"  Il2CppObject * ListDictionary_get_Item_m3967158800 (ListDictionary_t3458713452 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
extern "C"  void ListDictionary_set_Item_m972551921 (ListDictionary_t3458713452 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
extern "C"  void ListDictionary_Add_m4276262662 (ListDictionary_t3458713452 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Clear()
extern "C"  void ListDictionary_Clear_m3646179034 (ListDictionary_t3458713452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
extern "C"  Il2CppObject * ListDictionary_GetEnumerator_m1511032609 (ListDictionary_t3458713452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Remove(System.Object)
extern "C"  void ListDictionary_Remove_m2294694061 (ListDictionary_t3458713452 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
