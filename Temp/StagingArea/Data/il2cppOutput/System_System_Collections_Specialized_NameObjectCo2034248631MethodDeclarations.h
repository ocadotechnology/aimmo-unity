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

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t2034248631;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t2716208158;
// System.Collections.IComparer
struct IComparer_t3952557350;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1980576455;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t633582367;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t3244489099;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
extern "C"  void NameObjectCollectionBase__ctor_m2433753948 (NameObjectCollectionBase_t2034248631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32)
extern "C"  void NameObjectCollectionBase__ctor_m1506404551 (NameObjectCollectionBase_t2034248631 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer,System.Collections.IComparer,System.Collections.IHashCodeProvider)
extern "C"  void NameObjectCollectionBase__ctor_m2025187105 (NameObjectCollectionBase_t2034248631 * __this, Il2CppObject * ___equalityComparer0, Il2CppObject * ___comparer1, Il2CppObject * ___hcp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void NameObjectCollectionBase__ctor_m241668161 (NameObjectCollectionBase_t2034248631 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m1491738 (NameObjectCollectionBase_t2034248631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_m810189168 (NameObjectCollectionBase_t2034248631 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::get_EqualityComparer()
extern "C"  Il2CppObject * NameObjectCollectionBase_get_EqualityComparer_m4192218861 (NameObjectCollectionBase_t2034248631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::get_Comparer()
extern "C"  Il2CppObject * NameObjectCollectionBase_get_Comparer_m97225901 (NameObjectCollectionBase_t2034248631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::get_HashCodeProvider()
extern "C"  Il2CppObject * NameObjectCollectionBase_get_HashCodeProvider_m2797341005 (NameObjectCollectionBase_t2034248631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Init()
extern "C"  void NameObjectCollectionBase_Init_m1271766820 (NameObjectCollectionBase_t2034248631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys()
extern "C"  KeysCollection_t633582367 * NameObjectCollectionBase_get_Keys_m446053925 (NameObjectCollectionBase_t2034248631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
extern "C"  Il2CppObject * NameObjectCollectionBase_GetEnumerator_m646294968 (NameObjectCollectionBase_t2034248631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void NameObjectCollectionBase_GetObjectData_m699981132 (NameObjectCollectionBase_t2034248631 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
extern "C"  int32_t NameObjectCollectionBase_get_Count_m2353593692 (NameObjectCollectionBase_t2034248631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
extern "C"  void NameObjectCollectionBase_OnDeserialization_m3478980442 (NameObjectCollectionBase_t2034248631 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
extern "C"  bool NameObjectCollectionBase_get_IsReadOnly_m3287350911 (NameObjectCollectionBase_t2034248631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
extern "C"  void NameObjectCollectionBase_BaseAdd_m964300824 (NameObjectCollectionBase_t2034248631 * __this, String_t* ___name0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseClear()
extern "C"  void NameObjectCollectionBase_BaseClear_m125195694 (NameObjectCollectionBase_t2034248631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
extern "C"  Il2CppObject * NameObjectCollectionBase_BaseGet_m667273025 (NameObjectCollectionBase_t2034248631 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
extern "C"  Il2CppObject * NameObjectCollectionBase_BaseGet_m3772026934 (NameObjectCollectionBase_t2034248631 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameObjectCollectionBase::BaseGetAllKeys()
extern "C"  StringU5BU5D_t1642385972* NameObjectCollectionBase_BaseGetAllKeys_m2921705363 (NameObjectCollectionBase_t2034248631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
extern "C"  String_t* NameObjectCollectionBase_BaseGetKey_m1766059806 (NameObjectCollectionBase_t2034248631 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemove(System.String)
extern "C"  void NameObjectCollectionBase_BaseRemove_m3247708763 (NameObjectCollectionBase_t2034248631 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
extern "C"  void NameObjectCollectionBase_BaseSet_m1294211025 (NameObjectCollectionBase_t2034248631 * __this, String_t* ___name0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::FindFirstMatchedItem(System.String)
extern "C"  _Item_t3244489099 * NameObjectCollectionBase_FindFirstMatchedItem_m2460648656 (NameObjectCollectionBase_t2034248631 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::Equals(System.String,System.String)
extern "C"  bool NameObjectCollectionBase_Equals_m1130527645 (NameObjectCollectionBase_t2034248631 * __this, String_t* ___s10, String_t* ___s21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
