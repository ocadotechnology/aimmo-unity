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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1663937576;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t3957988293;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2270685851;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t1191773921;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t4147435347;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t366997419;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23716250094.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2983962278.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C"  void Dictionary_2__ctor_m2457723796_gshared (Dictionary_2_t1663937576 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m2457723796(__this, method) ((  void (*) (Dictionary_2_t1663937576 *, const MethodInfo*))Dictionary_2__ctor_m2457723796_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1950568359_gshared (Dictionary_2_t1663937576 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m1950568359(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t1663937576 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1950568359_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m2539312402_gshared (Dictionary_2_t1663937576 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m2539312402(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t1663937576 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2539312402_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m3043033341_gshared (Dictionary_2_t1663937576 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m3043033341(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t1663937576 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m3043033341_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3269726301_gshared (Dictionary_2_t1663937576 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m3269726301(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t1663937576 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3269726301_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3092740055_gshared (Dictionary_2_t1663937576 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m3092740055(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1663937576 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m3092740055_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m3470597074_gshared (Dictionary_2_t1663937576 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m3470597074(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1663937576 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m3470597074_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m417746447_gshared (Dictionary_2_t1663937576 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m417746447(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1663937576 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m417746447_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3716517866_gshared (Dictionary_2_t1663937576 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3716517866(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1663937576 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3716517866_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m3608354803_gshared (Dictionary_2_t1663937576 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m3608354803(__this, ___key0, method) ((  void (*) (Dictionary_2_t1663937576 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m3608354803_gshared)(__this, ___key0, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1875561618_gshared (Dictionary_2_t1663937576 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1875561618(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1663937576 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1875561618_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1786828978_gshared (Dictionary_2_t1663937576 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1786828978(__this, method) ((  bool (*) (Dictionary_2_t1663937576 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1786828978_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3947094719_gshared (Dictionary_2_t1663937576 * __this, KeyValuePair_2_t3716250094  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3947094719(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t1663937576 *, KeyValuePair_2_t3716250094 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3947094719_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3400497673_gshared (Dictionary_2_t1663937576 * __this, KeyValuePair_2_t3716250094  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3400497673(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1663937576 *, KeyValuePair_2_t3716250094 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3400497673_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1568255451_gshared (Dictionary_2_t1663937576 * __this, KeyValuePair_2U5BU5D_t2270685851* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1568255451(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1663937576 *, KeyValuePair_2U5BU5D_t2270685851*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1568255451_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3503191152_gshared (Dictionary_2_t1663937576 * __this, KeyValuePair_2_t3716250094  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3503191152(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1663937576 *, KeyValuePair_2_t3716250094 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3503191152_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m3945379612_gshared (Dictionary_2_t1663937576 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m3945379612(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1663937576 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m3945379612_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1776836865_gshared (Dictionary_2_t1663937576 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1776836865(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1663937576 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1776836865_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3968773920_gshared (Dictionary_2_t1663937576 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3968773920(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1663937576 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3968773920_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1898098675_gshared (Dictionary_2_t1663937576 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1898098675(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1663937576 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1898098675_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m1099678088_gshared (Dictionary_2_t1663937576 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1099678088(__this, method) ((  int32_t (*) (Dictionary_2_t1663937576 *, const MethodInfo*))Dictionary_2_get_Count_m1099678088_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C"  int32_t Dictionary_2_get_Item_m1434789331_gshared (Dictionary_2_t1663937576 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m1434789331(__this, ___key0, method) ((  int32_t (*) (Dictionary_2_t1663937576 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m1434789331_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m38702350_gshared (Dictionary_2_t1663937576 * __this, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m38702350(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1663937576 *, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m38702350_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m2330162400_gshared (Dictionary_2_t1663937576 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m2330162400(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t1663937576 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m2330162400_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m435313205_gshared (Dictionary_2_t1663937576 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m435313205(__this, ___size0, method) ((  void (*) (Dictionary_2_t1663937576 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m435313205_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2755595307_gshared (Dictionary_2_t1663937576 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2755595307(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1663937576 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2755595307_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t3716250094  Dictionary_2_make_pair_m1307594529_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m1307594529(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t3716250094  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m1307594529_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m364197557_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m364197557(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m364197557_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_value_m3484897877_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m3484897877(__this /* static, unused */, ___key0, ___value1, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m3484897877_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m1385625162_gshared (Dictionary_2_t1663937576 * __this, KeyValuePair_2U5BU5D_t2270685851* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1385625162(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1663937576 *, KeyValuePair_2U5BU5D_t2270685851*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1385625162_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C"  void Dictionary_2_Resize_m3051716242_gshared (Dictionary_2_t1663937576 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m3051716242(__this, method) ((  void (*) (Dictionary_2_t1663937576 *, const MethodInfo*))Dictionary_2_Resize_m3051716242_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m790520409_gshared (Dictionary_2_t1663937576 * __this, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m790520409(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1663937576 *, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_Add_m790520409_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C"  void Dictionary_2_Clear_m602519205_gshared (Dictionary_2_t1663937576 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m602519205(__this, method) ((  void (*) (Dictionary_2_t1663937576 *, const MethodInfo*))Dictionary_2_Clear_m602519205_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m416495915_gshared (Dictionary_2_t1663937576 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m416495915(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1663937576 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m416495915_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m2760581195_gshared (Dictionary_2_t1663937576 * __this, int32_t ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m2760581195(__this, ___value0, method) ((  bool (*) (Dictionary_2_t1663937576 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m2760581195_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m3868399160_gshared (Dictionary_2_t1663937576 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m3868399160(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1663937576 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m3868399160_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m3851228446_gshared (Dictionary_2_t1663937576 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m3851228446(__this, ___sender0, method) ((  void (*) (Dictionary_2_t1663937576 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m3851228446_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m3067952337_gshared (Dictionary_2_t1663937576 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m3067952337(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1663937576 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m3067952337_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m2330758874_gshared (Dictionary_2_t1663937576 * __this, Il2CppObject * ___key0, int32_t* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m2330758874(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t1663937576 *, Il2CppObject *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m2330758874_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C"  KeyCollection_t4147435347 * Dictionary_2_get_Keys_m2972752047_gshared (Dictionary_2_t1663937576 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m2972752047(__this, method) ((  KeyCollection_t4147435347 * (*) (Dictionary_2_t1663937576 *, const MethodInfo*))Dictionary_2_get_Keys_m2972752047_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C"  ValueCollection_t366997419 * Dictionary_2_get_Values_m677714159_gshared (Dictionary_2_t1663937576 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m677714159(__this, method) ((  ValueCollection_t366997419 * (*) (Dictionary_2_t1663937576 *, const MethodInfo*))Dictionary_2_get_Values_m677714159_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m1760276912_gshared (Dictionary_2_t1663937576 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1760276912(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1663937576 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m1760276912_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C"  int32_t Dictionary_2_ToTValue_m542772656_gshared (Dictionary_2_t1663937576 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m542772656(__this, ___value0, method) ((  int32_t (*) (Dictionary_2_t1663937576 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m542772656_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m3818021458_gshared (Dictionary_2_t1663937576 * __this, KeyValuePair_2_t3716250094  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m3818021458(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t1663937576 *, KeyValuePair_2_t3716250094 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m3818021458_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C"  Enumerator_t2983962278  Dictionary_2_GetEnumerator_m3272257185_gshared (Dictionary_2_t1663937576 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m3272257185(__this, method) ((  Enumerator_t2983962278  (*) (Dictionary_2_t1663937576 *, const MethodInfo*))Dictionary_2_GetEnumerator_m3272257185_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m1479035402_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1479035402(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1479035402_gshared)(__this /* static, unused */, ___key0, ___value1, method)
