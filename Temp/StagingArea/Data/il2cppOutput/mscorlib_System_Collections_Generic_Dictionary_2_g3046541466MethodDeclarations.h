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

// System.Collections.Generic.Dictionary`2<System.Object,System.Char>
struct Dictionary_2_t3046541466;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.Collections.Generic.IDictionary`2<System.Object,System.Char>
struct IDictionary_2_t1045624887;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>[]
struct KeyValuePair_2U5BU5D_t568370209;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>
struct IEnumerator_1_t2574377811;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Char>
struct KeyCollection_t1235071941;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Char>
struct ValueCollection_t1749601309;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_803886688.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enu71598872.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::.ctor()
extern "C"  void Dictionary_2__ctor_m3141878686_gshared (Dictionary_2_t3046541466 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3141878686(__this, method) ((  void (*) (Dictionary_2_t3046541466 *, const MethodInfo*))Dictionary_2__ctor_m3141878686_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m93368121_gshared (Dictionary_2_t3046541466 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m93368121(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t3046541466 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m93368121_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m2702660964_gshared (Dictionary_2_t3046541466 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m2702660964(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t3046541466 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2702660964_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m1342408223_gshared (Dictionary_2_t3046541466 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m1342408223(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t3046541466 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1342408223_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1060456783_gshared (Dictionary_2_t3046541466 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m1060456783(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t3046541466 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1060456783_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m2137100917_gshared (Dictionary_2_t3046541466 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m2137100917(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t3046541466 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m2137100917_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2076178118_gshared (Dictionary_2_t3046541466 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2076178118(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t3046541466 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2076178118_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m867432361_gshared (Dictionary_2_t3046541466 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m867432361(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3046541466 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m867432361_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m186799884_gshared (Dictionary_2_t3046541466 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m186799884(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3046541466 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m186799884_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m881028189_gshared (Dictionary_2_t3046541466 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m881028189(__this, ___key0, method) ((  void (*) (Dictionary_2_t3046541466 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m881028189_gshared)(__this, ___key0, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m485249154_gshared (Dictionary_2_t3046541466 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m485249154(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3046541466 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m485249154_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1901246216_gshared (Dictionary_2_t3046541466 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1901246216(__this, method) ((  bool (*) (Dictionary_2_t3046541466 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1901246216_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2348888101_gshared (Dictionary_2_t3046541466 * __this, KeyValuePair_2_t803886688  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2348888101(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t3046541466 *, KeyValuePair_2_t803886688 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2348888101_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2966217483_gshared (Dictionary_2_t3046541466 * __this, KeyValuePair_2_t803886688  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2966217483(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t3046541466 *, KeyValuePair_2_t803886688 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2966217483_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2609994417_gshared (Dictionary_2_t3046541466 * __this, KeyValuePair_2U5BU5D_t568370209* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2609994417(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3046541466 *, KeyValuePair_2U5BU5D_t568370209*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2609994417_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m627422498_gshared (Dictionary_2_t3046541466 * __this, KeyValuePair_2_t803886688  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m627422498(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t3046541466 *, KeyValuePair_2_t803886688 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m627422498_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m140262050_gshared (Dictionary_2_t3046541466 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m140262050(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3046541466 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m140262050_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3729042467_gshared (Dictionary_2_t3046541466 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3729042467(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3046541466 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3729042467_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2584247680_gshared (Dictionary_2_t3046541466 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2584247680(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3046541466 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2584247680_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m4084589885_gshared (Dictionary_2_t3046541466 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m4084589885(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3046541466 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m4084589885_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Char>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3677951614_gshared (Dictionary_2_t3046541466 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m3677951614(__this, method) ((  int32_t (*) (Dictionary_2_t3046541466 *, const MethodInfo*))Dictionary_2_get_Count_m3677951614_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Char>::get_Item(TKey)
extern "C"  Il2CppChar Dictionary_2_get_Item_m2810092677_gshared (Dictionary_2_t3046541466 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m2810092677(__this, ___key0, method) ((  Il2CppChar (*) (Dictionary_2_t3046541466 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m2810092677_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2622737880_gshared (Dictionary_2_t3046541466 * __this, Il2CppObject * ___key0, Il2CppChar ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m2622737880(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3046541466 *, Il2CppObject *, Il2CppChar, const MethodInfo*))Dictionary_2_set_Item_m2622737880_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m4084135750_gshared (Dictionary_2_t3046541466 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m4084135750(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t3046541466 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m4084135750_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m3309522395_gshared (Dictionary_2_t3046541466 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m3309522395(__this, ___size0, method) ((  void (*) (Dictionary_2_t3046541466 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m3309522395_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m3801894757_gshared (Dictionary_2_t3046541466 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m3801894757(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3046541466 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m3801894757_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Char>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t803886688  Dictionary_2_make_pair_m241386087_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Il2CppChar ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m241386087(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t803886688  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Il2CppChar, const MethodInfo*))Dictionary_2_make_pair_m241386087_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Char>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m1988019263_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Il2CppChar ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m1988019263(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Il2CppChar, const MethodInfo*))Dictionary_2_pick_key_m1988019263_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Char>::pick_value(TKey,TValue)
extern "C"  Il2CppChar Dictionary_2_pick_value_m2393343215_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Il2CppChar ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m2393343215(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppChar (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Il2CppChar, const MethodInfo*))Dictionary_2_pick_value_m2393343215_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3613027172_gshared (Dictionary_2_t3046541466 * __this, KeyValuePair_2U5BU5D_t568370209* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3613027172(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3046541466 *, KeyValuePair_2U5BU5D_t568370209*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3613027172_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::Resize()
extern "C"  void Dictionary_2_Resize_m4073183220_gshared (Dictionary_2_t3046541466 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m4073183220(__this, method) ((  void (*) (Dictionary_2_t3046541466 *, const MethodInfo*))Dictionary_2_Resize_m4073183220_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m1072328587_gshared (Dictionary_2_t3046541466 * __this, Il2CppObject * ___key0, Il2CppChar ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m1072328587(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3046541466 *, Il2CppObject *, Il2CppChar, const MethodInfo*))Dictionary_2_Add_m1072328587_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::Clear()
extern "C"  void Dictionary_2_Clear_m4067197643_gshared (Dictionary_2_t3046541466 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m4067197643(__this, method) ((  void (*) (Dictionary_2_t3046541466 *, const MethodInfo*))Dictionary_2_Clear_m4067197643_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m3805193917_gshared (Dictionary_2_t3046541466 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m3805193917(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3046541466 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m3805193917_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m1963774061_gshared (Dictionary_2_t3046541466 * __this, Il2CppChar ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1963774061(__this, ___value0, method) ((  bool (*) (Dictionary_2_t3046541466 *, Il2CppChar, const MethodInfo*))Dictionary_2_ContainsValue_m1963774061_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m2911865678_gshared (Dictionary_2_t3046541466 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m2911865678(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t3046541466 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m2911865678_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2464160264_gshared (Dictionary_2_t3046541466 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2464160264(__this, ___sender0, method) ((  void (*) (Dictionary_2_t3046541466 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m2464160264_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m2856088371_gshared (Dictionary_2_t3046541466 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m2856088371(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3046541466 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m2856088371_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m784741884_gshared (Dictionary_2_t3046541466 * __this, Il2CppObject * ___key0, Il2CppChar* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m784741884(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t3046541466 *, Il2CppObject *, Il2CppChar*, const MethodInfo*))Dictionary_2_TryGetValue_m784741884_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Char>::get_Keys()
extern "C"  KeyCollection_t1235071941 * Dictionary_2_get_Keys_m428981073_gshared (Dictionary_2_t3046541466 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m428981073(__this, method) ((  KeyCollection_t1235071941 * (*) (Dictionary_2_t3046541466 *, const MethodInfo*))Dictionary_2_get_Keys_m428981073_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Char>::get_Values()
extern "C"  ValueCollection_t1749601309 * Dictionary_2_get_Values_m2267473337_gshared (Dictionary_2_t3046541466 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2267473337(__this, method) ((  ValueCollection_t1749601309 * (*) (Dictionary_2_t3046541466 *, const MethodInfo*))Dictionary_2_get_Values_m2267473337_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Char>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m3790357170_gshared (Dictionary_2_t3046541466 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m3790357170(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t3046541466 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m3790357170_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Char>::ToTValue(System.Object)
extern "C"  Il2CppChar Dictionary_2_ToTValue_m3784977722_gshared (Dictionary_2_t3046541466 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m3784977722(__this, ___value0, method) ((  Il2CppChar (*) (Dictionary_2_t3046541466 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m3784977722_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m3040868132_gshared (Dictionary_2_t3046541466 * __this, KeyValuePair_2_t803886688  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m3040868132(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t3046541466 *, KeyValuePair_2_t803886688 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m3040868132_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Char>::GetEnumerator()
extern "C"  Enumerator_t71598872  Dictionary_2_GetEnumerator_m1093151619_gshared (Dictionary_2_t3046541466 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1093151619(__this, method) ((  Enumerator_t71598872  (*) (Dictionary_2_t3046541466 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1093151619_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Char>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m510249122_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Il2CppChar ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m510249122(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Il2CppChar, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m510249122_gshared)(__this /* static, unused */, ___key0, ___value1, method)
