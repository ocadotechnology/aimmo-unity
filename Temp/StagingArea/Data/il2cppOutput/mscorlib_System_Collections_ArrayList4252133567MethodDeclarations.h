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

// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.IComparer
struct IComparer_t3952557350;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"

// System.Void System.Collections.ArrayList::.ctor()
extern "C"  void ArrayList__ctor_m4012174379 (ArrayList_t4252133567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Collections.ICollection)
extern "C"  void ArrayList__ctor_m194094802 (ArrayList_t4252133567 * __this, Il2CppObject * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
extern "C"  void ArrayList__ctor_m1467563650 (ArrayList_t4252133567 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Object[],System.Int32,System.Int32)
extern "C"  void ArrayList__ctor_m1909233271 (ArrayList_t4252133567 * __this, ObjectU5BU5D_t3614634134* ___array0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.cctor()
extern "C"  void ArrayList__cctor_m2090802806 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_Item(System.Int32)
extern "C"  Il2CppObject * ArrayList_get_Item_m2796150991 (ArrayList_t4252133567 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object)
extern "C"  void ArrayList_set_Item_m1858827078 (ArrayList_t4252133567 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Count()
extern "C"  int32_t ArrayList_get_Count_m523955479 (ArrayList_t4252133567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Capacity()
extern "C"  int32_t ArrayList_get_Capacity_m1776194914 (ArrayList_t4252133567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Capacity(System.Int32)
extern "C"  void ArrayList_set_Capacity_m592558035 (ArrayList_t4252133567 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsReadOnly()
extern "C"  bool ArrayList_get_IsReadOnly_m2706543912 (ArrayList_t4252133567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsSynchronized()
extern "C"  bool ArrayList_get_IsSynchronized_m481976864 (ArrayList_t4252133567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_SyncRoot()
extern "C"  Il2CppObject * ArrayList_get_SyncRoot_m2860154814 (ArrayList_t4252133567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::EnsureCapacity(System.Int32)
extern "C"  void ArrayList_EnsureCapacity_m2769428424 (ArrayList_t4252133567 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Shift(System.Int32,System.Int32)
extern "C"  void ArrayList_Shift_m2896765499 (ArrayList_t4252133567 * __this, int32_t ___index0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::Add(System.Object)
extern "C"  int32_t ArrayList_Add_m1719188324 (ArrayList_t4252133567 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Clear()
extern "C"  void ArrayList_Clear_m3834604134 (ArrayList_t4252133567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::Contains(System.Object)
extern "C"  bool ArrayList_Contains_m1505633338 (ArrayList_t4252133567 * __this, Il2CppObject * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object)
extern "C"  int32_t ArrayList_IndexOf_m2092981366 (ArrayList_t4252133567 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32)
extern "C"  int32_t ArrayList_IndexOf_m3156287629 (ArrayList_t4252133567 * __this, Il2CppObject * ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32,System.Int32)
extern "C"  int32_t ArrayList_IndexOf_m4035947896 (ArrayList_t4252133567 * __this, Il2CppObject * ___value0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object)
extern "C"  void ArrayList_Insert_m351709155 (ArrayList_t4252133567 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection)
extern "C"  void ArrayList_InsertRange_m1478230997 (ArrayList_t4252133567 * __this, int32_t ___index0, Il2CppObject * ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Remove(System.Object)
extern "C"  void ArrayList_Remove_m3941780739 (ArrayList_t4252133567 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::RemoveAt(System.Int32)
extern "C"  void ArrayList_RemoveAt_m2578928333 (ArrayList_t4252133567 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array)
extern "C"  void ArrayList_CopyTo_m1348662971 (ArrayList_t4252133567 * __this, Il2CppArray * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32)
extern "C"  void ArrayList_CopyTo_m2353632788 (ArrayList_t4252133567 * __this, Il2CppArray * ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void ArrayList_CopyTo_m835998412 (ArrayList_t4252133567 * __this, int32_t ___index0, Il2CppArray * ___array1, int32_t ___arrayIndex2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator()
extern "C"  Il2CppObject * ArrayList_GetEnumerator_m2692225347 (ArrayList_t4252133567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection)
extern "C"  void ArrayList_AddRange_m579674390 (ArrayList_t4252133567 * __this, Il2CppObject * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort()
extern "C"  void ArrayList_Sort_m2778059513 (ArrayList_t4252133567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer)
extern "C"  void ArrayList_Sort_m923359189 (ArrayList_t4252133567 * __this, Il2CppObject * ___comparer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList::ToArray()
extern "C"  ObjectU5BU5D_t3614634134* ArrayList_ToArray_m3431354952 (ArrayList_t4252133567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList::ToArray(System.Type)
extern "C"  Il2CppArray * ArrayList_ToArray_m2378888207 (ArrayList_t4252133567 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::Clone()
extern "C"  Il2CppObject * ArrayList_Clone_m118277485 (ArrayList_t4252133567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::ThrowNewArgumentOutOfRangeException(System.String,System.Object,System.String)
extern "C"  void ArrayList_ThrowNewArgumentOutOfRangeException_m3795973535 (Il2CppObject * __this /* static, unused */, String_t* ___name0, Il2CppObject * ___actual1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::Synchronized(System.Collections.ArrayList)
extern "C"  ArrayList_t4252133567 * ArrayList_Synchronized_m2395071980 (Il2CppObject * __this /* static, unused */, ArrayList_t4252133567 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::ReadOnly(System.Collections.ArrayList)
extern "C"  ArrayList_t4252133567 * ArrayList_ReadOnly_m3127181292 (Il2CppObject * __this /* static, unused */, ArrayList_t4252133567 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
