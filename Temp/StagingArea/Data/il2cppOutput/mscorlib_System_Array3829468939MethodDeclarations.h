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

// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Type
struct Type_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Int64[]
struct Int64U5BU5D_t717125112;
// System.Collections.IComparer
struct IComparer_t3952557350;
// System.Array/Swapper
struct Swapper_t2637371637;
// System.Double[]
struct DoubleU5BU5D_t1889952540;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Array_Swapper2637371637.h"

// System.Void System.Array::.ctor()
extern "C"  void Array__ctor_m531674930 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * Array_System_Collections_IList_get_Item_m2088124007 (Il2CppArray * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void Array_System_Collections_IList_set_Item_m4290470392 (Il2CppArray * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.Add(System.Object)
extern "C"  int32_t Array_System_Collections_IList_Add_m1693837354 (Il2CppArray * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Clear()
extern "C"  void Array_System_Collections_IList_Clear_m2184190880 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::System.Collections.IList.Contains(System.Object)
extern "C"  bool Array_System_Collections_IList_Contains_m2996619020 (Il2CppArray * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t Array_System_Collections_IList_IndexOf_m3525625060 (Il2CppArray * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void Array_System_Collections_IList_Insert_m756977623 (Il2CppArray * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Remove(System.Object)
extern "C"  void Array_System_Collections_IList_Remove_m2438892375 (Il2CppArray * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.RemoveAt(System.Int32)
extern "C"  void Array_System_Collections_IList_RemoveAt_m3212908653 (Il2CppArray * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.ICollection.get_Count()
extern "C"  int32_t Array_System_Collections_ICollection_get_Count_m2897196527 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::InternalArray__ICollection_get_Count()
extern "C"  int32_t Array_InternalArray__ICollection_get_Count_m2593513816 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::InternalArray__ICollection_get_IsReadOnly()
extern "C"  bool Array_InternalArray__ICollection_get_IsReadOnly_m3781285045 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__ICollection_Clear()
extern "C"  void Array_InternalArray__ICollection_Clear_m1939687317 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__RemoveAt(System.Int32)
extern "C"  void Array_InternalArray__RemoveAt_m1126483634 (Il2CppArray * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Length()
extern "C"  int32_t Array_get_Length_m1498215565 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::get_LongLength()
extern "C"  int64_t Array_get_LongLength_m2538298538 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Rank()
extern "C"  int32_t Array_get_Rank_m3837250695 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetRank()
extern "C"  int32_t Array_GetRank_m4129149560 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLength(System.Int32)
extern "C"  int32_t Array_GetLength_m2083296647 (Il2CppArray * __this, int32_t ___dimension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::GetLongLength(System.Int32)
extern "C"  int64_t Array_GetLongLength_m3005360186 (Il2CppArray * __this, int32_t ___dimension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLowerBound(System.Int32)
extern "C"  int32_t Array_GetLowerBound_m3733237204 (Il2CppArray * __this, int32_t ___dimension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32[])
extern "C"  Il2CppObject * Array_GetValue_m3550694941 (Il2CppArray * __this, Int32U5BU5D_t3030399641* ___indices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32[])
extern "C"  void Array_SetValue_m2421438042 (Il2CppArray * __this, Il2CppObject * ___value0, Int32U5BU5D_t3030399641* ___indices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValueImpl(System.Int32)
extern "C"  Il2CppObject * Array_GetValueImpl_m2679649099 (Il2CppArray * __this, int32_t ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValueImpl(System.Object,System.Int32)
extern "C"  void Array_SetValueImpl_m1292741952 (Il2CppArray * __this, Il2CppObject * ___value0, int32_t ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::FastCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  bool Array_FastCopy_m933468106 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___source0, int32_t ___source_idx1, Il2CppArray * ___dest2, int32_t ___dest_idx3, int32_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstanceImpl(System.Type,System.Int32[],System.Int32[])
extern "C"  Il2CppArray * Array_CreateInstanceImpl_m614034505 (Il2CppObject * __this /* static, unused */, Type_t * ___elementType0, Int32U5BU5D_t3030399641* ___lengths1, Int32U5BU5D_t3030399641* ___bounds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsSynchronized()
extern "C"  bool Array_get_IsSynchronized_m1423050723 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::get_SyncRoot()
extern "C"  Il2CppObject * Array_get_SyncRoot_m2127481503 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsFixedSize()
extern "C"  bool Array_get_IsFixedSize_m2250877846 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsReadOnly()
extern "C"  bool Array_get_IsReadOnly_m1341198107 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Array::GetEnumerator()
extern "C"  Il2CppObject * Array_GetEnumerator_m2284404958 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetUpperBound(System.Int32)
extern "C"  int32_t Array_GetUpperBound_m1352329707 (Il2CppArray * __this, int32_t ___dimension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32)
extern "C"  Il2CppObject * Array_GetValue_m3284370071 (Il2CppArray * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32)
extern "C"  Il2CppObject * Array_GetValue_m3431538774 (Il2CppArray * __this, int32_t ___index10, int32_t ___index21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32,System.Int32)
extern "C"  Il2CppObject * Array_GetValue_m1302935803 (Il2CppArray * __this, int32_t ___index10, int32_t ___index21, int32_t ___index32, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64)
extern "C"  Il2CppObject * Array_GetValue_m152202090 (Il2CppArray * __this, int64_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64)
extern "C"  Il2CppObject * Array_GetValue_m518505780 (Il2CppArray * __this, int64_t ___index10, int64_t ___index21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64,System.Int64)
extern "C"  Il2CppObject * Array_GetValue_m3182152438 (Il2CppArray * __this, int64_t ___index10, int64_t ___index21, int64_t ___index32, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64)
extern "C"  void Array_SetValue_m1489959987 (Il2CppArray * __this, Il2CppObject * ___value0, int64_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64)
extern "C"  void Array_SetValue_m2671138705 (Il2CppArray * __this, Il2CppObject * ___value0, int64_t ___index11, int64_t ___index22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64,System.Int64)
extern "C"  void Array_SetValue_m2039608971 (Il2CppArray * __this, Il2CppObject * ___value0, int64_t ___index11, int64_t ___index22, int64_t ___index33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32)
extern "C"  void Array_SetValue_m2652759566 (Il2CppArray * __this, Il2CppObject * ___value0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32)
extern "C"  void Array_SetValue_m2469980129 (Il2CppArray * __this, Il2CppObject * ___value0, int32_t ___index11, int32_t ___index22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32,System.Int32)
extern "C"  void Array_SetValue_m3301692024 (Il2CppArray * __this, Il2CppObject * ___value0, int32_t ___index11, int32_t ___index22, int32_t ___index33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
extern "C"  Il2CppArray * Array_CreateInstance_m138919384 (Il2CppObject * __this /* static, unused */, Type_t * ___elementType0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32)
extern "C"  Il2CppArray * Array_CreateInstance_m15016505 (Il2CppObject * __this /* static, unused */, Type_t * ___elementType0, int32_t ___length11, int32_t ___length22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32,System.Int32)
extern "C"  Il2CppArray * Array_CreateInstance_m3310016470 (Il2CppObject * __this /* static, unused */, Type_t * ___elementType0, int32_t ___length11, int32_t ___length22, int32_t ___length33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[])
extern "C"  Il2CppArray * Array_CreateInstance_m3327690220 (Il2CppObject * __this /* static, unused */, Type_t * ___elementType0, Int32U5BU5D_t3030399641* ___lengths1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[],System.Int32[])
extern "C"  Il2CppArray * Array_CreateInstance_m1054139389 (Il2CppObject * __this /* static, unused */, Type_t * ___elementType0, Int32U5BU5D_t3030399641* ___lengths1, Int32U5BU5D_t3030399641* ___lowerBounds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Array::GetIntArray(System.Int64[])
extern "C"  Int32U5BU5D_t3030399641* Array_GetIntArray_m71808116 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int64[])
extern "C"  Il2CppArray * Array_CreateInstance_m679102425 (Il2CppObject * __this /* static, unused */, Type_t * ___elementType0, Int64U5BU5D_t717125112* ___lengths1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64[])
extern "C"  Il2CppObject * Array_GetValue_m1507415734 (Il2CppArray * __this, Int64U5BU5D_t717125112* ___indices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64[])
extern "C"  void Array_SetValue_m169741241 (Il2CppArray * __this, Il2CppObject * ___value0, Int64U5BU5D_t717125112* ___indices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object)
extern "C"  int32_t Array_BinarySearch_m3522310993 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object,System.Collections.IComparer)
extern "C"  int32_t Array_BinarySearch_m1368352453 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___value1, Il2CppObject * ___comparer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object)
extern "C"  int32_t Array_BinarySearch_m2287427837 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, int32_t ___index1, int32_t ___length2, Il2CppObject * ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
extern "C"  int32_t Array_BinarySearch_m3270245097 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, int32_t ___index1, int32_t ___length2, Il2CppObject * ___value3, Il2CppObject * ___comparer4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::DoBinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
extern "C"  int32_t Array_DoBinarySearch_m4044895912 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, int32_t ___index1, int32_t ___length2, Il2CppObject * ___value3, Il2CppObject * ___comparer4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
extern "C"  void Array_Clear_m782967417 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, int32_t ___index1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ClearInternal(System.Array,System.Int32,System.Int32)
extern "C"  void Array_ClearInternal_m4175625514 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___a0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::Clone()
extern "C"  Il2CppObject * Array_Clone_m768574314 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C"  void Array_Copy_m2363740072 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___sourceArray0, Il2CppArray * ___destinationArray1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Array_Copy_m3808317496 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___sourceArray0, int32_t ___sourceIndex1, Il2CppArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
extern "C"  void Array_Copy_m1969461849 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___sourceArray0, int64_t ___sourceIndex1, Il2CppArray * ___destinationArray2, int64_t ___destinationIndex3, int64_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int64)
extern "C"  void Array_Copy_m1557170853 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___sourceArray0, Il2CppArray * ___destinationArray1, int64_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object)
extern "C"  int32_t Array_IndexOf_m77084779 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32)
extern "C"  int32_t Array_IndexOf_m2819632474 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___value1, int32_t ___startIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32,System.Int32)
extern "C"  int32_t Array_IndexOf_m2447301431 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___value1, int32_t ___startIndex2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Initialize()
extern "C"  void Array_Initialize_m3086099726 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object)
extern "C"  int32_t Array_LastIndexOf_m229510321 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32)
extern "C"  int32_t Array_LastIndexOf_m4096535198 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___value1, int32_t ___startIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32,System.Int32)
extern "C"  int32_t Array_LastIndexOf_m512887013 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___value1, int32_t ___startIndex2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array/Swapper System.Array::get_swapper(System.Array)
extern "C"  Swapper_t2637371637 * Array_get_swapper_m2927604103 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array)
extern "C"  void Array_Reverse_m3883292526 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
extern "C"  void Array_Reverse_m3433347928 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, int32_t ___index1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array)
extern "C"  void Array_Sort_m2994254654 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array)
extern "C"  void Array_Sort_m3002148658 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___keys0, Il2CppArray * ___items1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Collections.IComparer)
extern "C"  void Array_Sort_m1417611156 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___comparer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32)
extern "C"  void Array_Sort_m3645766612 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, int32_t ___index1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Collections.IComparer)
extern "C"  void Array_Sort_m4096942812 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___keys0, Il2CppArray * ___items1, Il2CppObject * ___comparer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32)
extern "C"  void Array_Sort_m3500510484 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___keys0, Il2CppArray * ___items1, int32_t ___index2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C"  void Array_Sort_m2323017822 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, int32_t ___index1, int32_t ___length2, Il2CppObject * ___comparer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C"  void Array_Sort_m3742784266 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___keys0, Il2CppArray * ___items1, int32_t ___index2, int32_t ___length3, Il2CppObject * ___comparer4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::int_swapper(System.Int32,System.Int32)
extern "C"  void Array_int_swapper_m2498629762 (Il2CppArray * __this, int32_t ___i0, int32_t ___j1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::obj_swapper(System.Int32,System.Int32)
extern "C"  void Array_obj_swapper_m2156282294 (Il2CppArray * __this, int32_t ___i0, int32_t ___j1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::slow_swapper(System.Int32,System.Int32)
extern "C"  void Array_slow_swapper_m1728818032 (Il2CppArray * __this, int32_t ___i0, int32_t ___j1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::double_swapper(System.Int32,System.Int32)
extern "C"  void Array_double_swapper_m1175307080 (Il2CppArray * __this, int32_t ___i0, int32_t ___j1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::new_gap(System.Int32)
extern "C"  int32_t Array_new_gap_m3938262218 (Il2CppObject * __this /* static, unused */, int32_t ___gap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Double[],System.Int32,System.Int32,System.Array/Swapper)
extern "C"  void Array_combsort_m2084527518 (Il2CppObject * __this /* static, unused */, DoubleU5BU5D_t1889952540* ___array0, int32_t ___start1, int32_t ___size2, Swapper_t2637371637 * ___swap_items3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Int32[],System.Int32,System.Int32,System.Array/Swapper)
extern "C"  void Array_combsort_m2976623007 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___array0, int32_t ___start1, int32_t ___size2, Swapper_t2637371637 * ___swap_items3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Char[],System.Int32,System.Int32,System.Array/Swapper)
extern "C"  void Array_combsort_m2486643569 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___array0, int32_t ___start1, int32_t ___size2, Swapper_t2637371637 * ___swap_items3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::qsort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C"  void Array_qsort_m2724316709 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___keys0, Il2CppArray * ___items1, int32_t ___low02, int32_t ___high03, Il2CppObject * ___comparer4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::swap(System.Array,System.Array,System.Int32,System.Int32)
extern "C"  void Array_swap_m2899996059 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___keys0, Il2CppArray * ___items1, int32_t ___i2, int32_t ___j3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::compare(System.Object,System.Object,System.Collections.IComparer)
extern "C"  int32_t Array_compare_m1449679507 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value10, Il2CppObject * ___value21, Il2CppObject * ___comparer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
extern "C"  void Array_CopyTo_m4061033315 (Il2CppArray * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int64)
extern "C"  void Array_CopyTo_m1950502352 (Il2CppArray * __this, Il2CppArray * ___array0, int64_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ConstrainedCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Array_ConstrainedCopy_m1922927602 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___sourceArray0, int32_t ___sourceIndex1, Il2CppArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
