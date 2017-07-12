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

// System.Collections.ArrayList/SynchronizedArrayListWrapper
struct SynchronizedArrayListWrapper_t3317806524;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Object
struct Il2CppObject;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.IComparer
struct IComparer_t3952557350;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C"  void SynchronizedArrayListWrapper__ctor_m2251532477 (SynchronizedArrayListWrapper_t3317806524 * __this, ArrayList_t4252133567 * ___innerArrayList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Item(System.Int32)
extern "C"  Il2CppObject * SynchronizedArrayListWrapper_get_Item_m3309425850 (SynchronizedArrayListWrapper_t3317806524 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C"  void SynchronizedArrayListWrapper_set_Item_m1802125193 (SynchronizedArrayListWrapper_t3317806524 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Count()
extern "C"  int32_t SynchronizedArrayListWrapper_get_Count_m4104930530 (SynchronizedArrayListWrapper_t3317806524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Capacity()
extern "C"  int32_t SynchronizedArrayListWrapper_get_Capacity_m2541698837 (SynchronizedArrayListWrapper_t3317806524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Capacity(System.Int32)
extern "C"  void SynchronizedArrayListWrapper_set_Capacity_m3104199284 (SynchronizedArrayListWrapper_t3317806524 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsReadOnly()
extern "C"  bool SynchronizedArrayListWrapper_get_IsReadOnly_m831018743 (SynchronizedArrayListWrapper_t3317806524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsSynchronized()
extern "C"  bool SynchronizedArrayListWrapper_get_IsSynchronized_m242703215 (SynchronizedArrayListWrapper_t3317806524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_SyncRoot()
extern "C"  Il2CppObject * SynchronizedArrayListWrapper_get_SyncRoot_m1466044127 (SynchronizedArrayListWrapper_t3317806524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::Add(System.Object)
extern "C"  int32_t SynchronizedArrayListWrapper_Add_m3593093003 (SynchronizedArrayListWrapper_t3317806524 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Clear()
extern "C"  void SynchronizedArrayListWrapper_Clear_m2966586763 (SynchronizedArrayListWrapper_t3317806524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::Contains(System.Object)
extern "C"  bool SynchronizedArrayListWrapper_Contains_m2259439339 (SynchronizedArrayListWrapper_t3317806524 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object)
extern "C"  int32_t SynchronizedArrayListWrapper_IndexOf_m1005265265 (SynchronizedArrayListWrapper_t3317806524 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32)
extern "C"  int32_t SynchronizedArrayListWrapper_IndexOf_m1200258228 (SynchronizedArrayListWrapper_t3317806524 * __this, Il2CppObject * ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
extern "C"  int32_t SynchronizedArrayListWrapper_IndexOf_m1896304197 (SynchronizedArrayListWrapper_t3317806524 * __this, Il2CppObject * ___value0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Insert(System.Int32,System.Object)
extern "C"  void SynchronizedArrayListWrapper_Insert_m895951826 (SynchronizedArrayListWrapper_t3317806524 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
extern "C"  void SynchronizedArrayListWrapper_InsertRange_m709359548 (SynchronizedArrayListWrapper_t3317806524 * __this, int32_t ___index0, Il2CppObject * ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Remove(System.Object)
extern "C"  void SynchronizedArrayListWrapper_Remove_m2227080756 (SynchronizedArrayListWrapper_t3317806524 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::RemoveAt(System.Int32)
extern "C"  void SynchronizedArrayListWrapper_RemoveAt_m360088244 (SynchronizedArrayListWrapper_t3317806524 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array)
extern "C"  void SynchronizedArrayListWrapper_CopyTo_m595111834 (SynchronizedArrayListWrapper_t3317806524 * __this, Il2CppArray * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array,System.Int32)
extern "C"  void SynchronizedArrayListWrapper_CopyTo_m3318520063 (SynchronizedArrayListWrapper_t3317806524 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void SynchronizedArrayListWrapper_CopyTo_m956887031 (SynchronizedArrayListWrapper_t3317806524 * __this, int32_t ___index0, Il2CppArray * ___array1, int32_t ___arrayIndex2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/SynchronizedArrayListWrapper::GetEnumerator()
extern "C"  Il2CppObject * SynchronizedArrayListWrapper_GetEnumerator_m692973670 (SynchronizedArrayListWrapper_t3317806524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::AddRange(System.Collections.ICollection)
extern "C"  void SynchronizedArrayListWrapper_AddRange_m2255992171 (SynchronizedArrayListWrapper_t3317806524 * __this, Il2CppObject * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::Clone()
extern "C"  Il2CppObject * SynchronizedArrayListWrapper_Clone_m1647639600 (SynchronizedArrayListWrapper_t3317806524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort()
extern "C"  void SynchronizedArrayListWrapper_Sort_m494386848 (SynchronizedArrayListWrapper_t3317806524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort(System.Collections.IComparer)
extern "C"  void SynchronizedArrayListWrapper_Sort_m2372779708 (SynchronizedArrayListWrapper_t3317806524 * __this, Il2CppObject * ___comparer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray()
extern "C"  ObjectU5BU5D_t3614634134* SynchronizedArrayListWrapper_ToArray_m1522185111 (SynchronizedArrayListWrapper_t3317806524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray(System.Type)
extern "C"  Il2CppArray * SynchronizedArrayListWrapper_ToArray_m3788138664 (SynchronizedArrayListWrapper_t3317806524 * __this, Type_t * ___elementType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
