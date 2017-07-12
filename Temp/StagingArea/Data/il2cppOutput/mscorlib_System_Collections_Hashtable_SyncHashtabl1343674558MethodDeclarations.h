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

// System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_t1343674558;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Array3829468939.h"

// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Collections.Hashtable)
extern "C"  void SyncHashtable__ctor_m3750218498 (SyncHashtable_t1343674558 * __this, Hashtable_t909839986 * ___host0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SyncHashtable__ctor_m2029869827 (SyncHashtable_t1343674558 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable/SyncHashtable::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * SyncHashtable_System_Collections_IEnumerable_GetEnumerator_m1781067581 (SyncHashtable_t1343674558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SyncHashtable_GetObjectData_m3774367030 (SyncHashtable_t1343674558 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable/SyncHashtable::get_Count()
extern "C"  int32_t SyncHashtable_get_Count_m3694444082 (SyncHashtable_t1343674558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::get_SyncRoot()
extern "C"  Il2CppObject * SyncHashtable_get_SyncRoot_m1080095089 (SyncHashtable_t1343674558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Keys()
extern "C"  Il2CppObject * SyncHashtable_get_Keys_m1450767969 (SyncHashtable_t1343674558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Values()
extern "C"  Il2CppObject * SyncHashtable_get_Values_m829681721 (SyncHashtable_t1343674558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::get_Item(System.Object)
extern "C"  Il2CppObject * SyncHashtable_get_Item_m408601391 (SyncHashtable_t1343674558 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::set_Item(System.Object,System.Object)
extern "C"  void SyncHashtable_set_Item_m2261849272 (SyncHashtable_t1343674558 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::CopyTo(System.Array,System.Int32)
extern "C"  void SyncHashtable_CopyTo_m2909908413 (SyncHashtable_t1343674558 * __this, Il2CppArray * ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Add(System.Object,System.Object)
extern "C"  void SyncHashtable_Add_m207712017 (SyncHashtable_t1343674558 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Clear()
extern "C"  void SyncHashtable_Clear_m179269693 (SyncHashtable_t1343674558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::Contains(System.Object)
extern "C"  bool SyncHashtable_Contains_m3042906549 (SyncHashtable_t1343674558 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable/SyncHashtable::GetEnumerator()
extern "C"  Il2CppObject * SyncHashtable_GetEnumerator_m2934066942 (SyncHashtable_t1343674558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Remove(System.Object)
extern "C"  void SyncHashtable_Remove_m694556812 (SyncHashtable_t1343674558 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::ContainsKey(System.Object)
extern "C"  bool SyncHashtable_ContainsKey_m3408601214 (SyncHashtable_t1343674558 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::Clone()
extern "C"  Il2CppObject * SyncHashtable_Clone_m480980630 (SyncHashtable_t1343674558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
