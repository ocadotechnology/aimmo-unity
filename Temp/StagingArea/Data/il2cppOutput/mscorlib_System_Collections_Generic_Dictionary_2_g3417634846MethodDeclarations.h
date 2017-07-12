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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t3417634846;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t1416718267;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2808320525;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2945471191;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t1606165321;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2120694689;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21174980068.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En442692252.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C"  void Dictionary_2__ctor_m3420539152_gshared (Dictionary_2_t3417634846 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3420539152(__this, method) ((  void (*) (Dictionary_2_t3417634846 *, const MethodInfo*))Dictionary_2__ctor_m3420539152_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m314175613_gshared (Dictionary_2_t3417634846 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m314175613(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t3417634846 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m314175613_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m3898424574_gshared (Dictionary_2_t3417634846 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m3898424574(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t3417634846 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3898424574_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m871840915_gshared (Dictionary_2_t3417634846 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m871840915(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t3417634846 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m871840915_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2413657491_gshared (Dictionary_2_t3417634846 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m2413657491(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t3417634846 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2413657491_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m1854403065_gshared (Dictionary_2_t3417634846 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m1854403065(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t3417634846 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m1854403065_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2237138810_gshared (Dictionary_2_t3417634846 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2237138810(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t3417634846 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2237138810_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m115188189_gshared (Dictionary_2_t3417634846 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m115188189(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3417634846 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m115188189_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3066998246_gshared (Dictionary_2_t3417634846 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3066998246(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3417634846 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3066998246_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m189853969_gshared (Dictionary_2_t3417634846 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m189853969(__this, ___key0, method) ((  void (*) (Dictionary_2_t3417634846 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m189853969_gshared)(__this, ___key0, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2175588702_gshared (Dictionary_2_t3417634846 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2175588702(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3417634846 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2175588702_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1281685210_gshared (Dictionary_2_t3417634846 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1281685210(__this, method) ((  bool (*) (Dictionary_2_t3417634846 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1281685210_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2611662793_gshared (Dictionary_2_t3417634846 * __this, KeyValuePair_2_t1174980068  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2611662793(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t3417634846 *, KeyValuePair_2_t1174980068 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2611662793_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m842343255_gshared (Dictionary_2_t3417634846 * __this, KeyValuePair_2_t1174980068  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m842343255(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t3417634846 *, KeyValuePair_2_t1174980068 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m842343255_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1323252853_gshared (Dictionary_2_t3417634846 * __this, KeyValuePair_2U5BU5D_t2808320525* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1323252853(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3417634846 *, KeyValuePair_2U5BU5D_t2808320525*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1323252853_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2778371972_gshared (Dictionary_2_t3417634846 * __this, KeyValuePair_2_t1174980068  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2778371972(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t3417634846 *, KeyValuePair_2_t1174980068 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2778371972_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2784181332_gshared (Dictionary_2_t3417634846 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2784181332(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3417634846 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2784181332_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1615804423_gshared (Dictionary_2_t3417634846 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1615804423(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3417634846 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1615804423_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m573305608_gshared (Dictionary_2_t3417634846 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m573305608(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3417634846 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m573305608_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m721575733_gshared (Dictionary_2_t3417634846 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m721575733(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3417634846 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m721575733_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m802888472_gshared (Dictionary_2_t3417634846 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m802888472(__this, method) ((  int32_t (*) (Dictionary_2_t3417634846 *, const MethodInfo*))Dictionary_2_get_Count_m802888472_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C"  bool Dictionary_2_get_Item_m2455494681_gshared (Dictionary_2_t3417634846 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m2455494681(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3417634846 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m2455494681_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m3758499254_gshared (Dictionary_2_t3417634846 * __this, Il2CppObject * ___key0, bool ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m3758499254(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3417634846 *, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_set_Item_m3758499254_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3784457680_gshared (Dictionary_2_t3417634846 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m3784457680(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t3417634846 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3784457680_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m4237030359_gshared (Dictionary_2_t3417634846 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m4237030359(__this, ___size0, method) ((  void (*) (Dictionary_2_t3417634846 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m4237030359_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m1638253305_gshared (Dictionary_2_t3417634846 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1638253305(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3417634846 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1638253305_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1174980068  Dictionary_2_make_pair_m394533803_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, bool ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m394533803(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t1174980068  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_make_pair_m394533803_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m61873811_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, bool ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m61873811(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_pick_key_m61873811_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C"  bool Dictionary_2_pick_value_m4072431859_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, bool ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m4072431859(__this /* static, unused */, ___key0, ___value1, method) ((  bool (*) (Il2CppObject * /* static, unused */, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_pick_value_m4072431859_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m765026490_gshared (Dictionary_2_t3417634846 * __this, KeyValuePair_2U5BU5D_t2808320525* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m765026490(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3417634846 *, KeyValuePair_2U5BU5D_t2808320525*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m765026490_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C"  void Dictionary_2_Resize_m2807616086_gshared (Dictionary_2_t3417634846 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m2807616086(__this, method) ((  void (*) (Dictionary_2_t3417634846 *, const MethodInfo*))Dictionary_2_Resize_m2807616086_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3690830839_gshared (Dictionary_2_t3417634846 * __this, Il2CppObject * ___key0, bool ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m3690830839(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3417634846 *, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_Add_m3690830839_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C"  void Dictionary_2_Clear_m3504688039_gshared (Dictionary_2_t3417634846 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m3504688039(__this, method) ((  void (*) (Dictionary_2_t3417634846 *, const MethodInfo*))Dictionary_2_Clear_m3504688039_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1385349577_gshared (Dictionary_2_t3417634846 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1385349577(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3417634846 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m1385349577_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m1839958881_gshared (Dictionary_2_t3417634846 * __this, bool ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1839958881(__this, ___value0, method) ((  bool (*) (Dictionary_2_t3417634846 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m1839958881_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m3012471448_gshared (Dictionary_2_t3417634846 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m3012471448(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t3417634846 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m3012471448_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2870692686_gshared (Dictionary_2_t3417634846 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2870692686(__this, ___sender0, method) ((  void (*) (Dictionary_2_t3417634846 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m2870692686_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1947153975_gshared (Dictionary_2_t3417634846 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m1947153975(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3417634846 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m1947153975_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1169378642_gshared (Dictionary_2_t3417634846 * __this, Il2CppObject * ___key0, bool* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1169378642(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t3417634846 *, Il2CppObject *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m1169378642_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C"  KeyCollection_t1606165321 * Dictionary_2_get_Keys_m18937401_gshared (Dictionary_2_t3417634846 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m18937401(__this, method) ((  KeyCollection_t1606165321 * (*) (Dictionary_2_t3417634846 *, const MethodInfo*))Dictionary_2_get_Keys_m18937401_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C"  ValueCollection_t2120694689 * Dictionary_2_get_Values_m1102170553_gshared (Dictionary_2_t3417634846 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1102170553(__this, method) ((  ValueCollection_t2120694689 * (*) (Dictionary_2_t3417634846 *, const MethodInfo*))Dictionary_2_get_Values_m1102170553_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m965425080_gshared (Dictionary_2_t3417634846 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m965425080(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t3417634846 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m965425080_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C"  bool Dictionary_2_ToTValue_m2304368184_gshared (Dictionary_2_t3417634846 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m2304368184(__this, ___value0, method) ((  bool (*) (Dictionary_2_t3417634846 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m2304368184_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m1328448258_gshared (Dictionary_2_t3417634846 * __this, KeyValuePair_2_t1174980068  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1328448258(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t3417634846 *, KeyValuePair_2_t1174980068 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1328448258_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C"  Enumerator_t442692252  Dictionary_2_GetEnumerator_m2667213667_gshared (Dictionary_2_t3417634846 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m2667213667(__this, method) ((  Enumerator_t442692252  (*) (Dictionary_2_t3417634846 *, const MethodInfo*))Dictionary_2_GetEnumerator_m2667213667_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m2108533866_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, bool ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m2108533866(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m2108533866_gshared)(__this /* static, unused */, ___key0, ___value1, method)
