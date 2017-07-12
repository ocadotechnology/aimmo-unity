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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t2833400353;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1284510226;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Boolean>
struct IDictionary_2_t832483774;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t551930014;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>>
struct IEnumerator_1_t2361236698;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Boolean>
struct KeyCollection_t1021930828;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>
struct ValueCollection_t1536460196;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_590745575.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E4153425055.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor()
extern "C"  void Dictionary_2__ctor_m2143943682_gshared (Dictionary_2_t2833400353 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m2143943682(__this, method) ((  void (*) (Dictionary_2_t2833400353 *, const MethodInfo*))Dictionary_2__ctor_m2143943682_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1749523566_gshared (Dictionary_2_t2833400353 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m1749523566(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t2833400353 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1749523566_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m1268950071_gshared (Dictionary_2_t2833400353 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m1268950071(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t2833400353 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1268950071_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m4211088046_gshared (Dictionary_2_t2833400353 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m4211088046(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t2833400353 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m4211088046_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3969909262_gshared (Dictionary_2_t2833400353 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m3969909262(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t2833400353 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3969909262_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m1082471288_gshared (Dictionary_2_t2833400353 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m1082471288(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2833400353 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m1082471288_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m1947216065_gshared (Dictionary_2_t2833400353 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1947216065(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2833400353 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1947216065_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m300116512_gshared (Dictionary_2_t2833400353 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m300116512(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2833400353 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m300116512_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3529089727_gshared (Dictionary_2_t2833400353 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3529089727(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2833400353 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3529089727_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m436255980_gshared (Dictionary_2_t2833400353 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m436255980(__this, ___key0, method) ((  void (*) (Dictionary_2_t2833400353 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m436255980_gshared)(__this, ___key0, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2823845449_gshared (Dictionary_2_t2833400353 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2823845449(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2833400353 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2823845449_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m791702739_gshared (Dictionary_2_t2833400353 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m791702739(__this, method) ((  bool (*) (Dictionary_2_t2833400353 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m791702739_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2689554518_gshared (Dictionary_2_t2833400353 * __this, KeyValuePair_2_t590745575  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2689554518(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t2833400353 *, KeyValuePair_2_t590745575 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2689554518_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m174713406_gshared (Dictionary_2_t2833400353 * __this, KeyValuePair_2_t590745575  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m174713406(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2833400353 *, KeyValuePair_2_t590745575 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m174713406_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1861600170_gshared (Dictionary_2_t2833400353 * __this, KeyValuePair_2U5BU5D_t551930014* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1861600170(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2833400353 *, KeyValuePair_2U5BU5D_t551930014*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1861600170_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1766104777_gshared (Dictionary_2_t2833400353 * __this, KeyValuePair_2_t590745575  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1766104777(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2833400353 *, KeyValuePair_2_t590745575 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1766104777_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m3443571417_gshared (Dictionary_2_t2833400353 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m3443571417(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2833400353 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m3443571417_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m273691080_gshared (Dictionary_2_t2833400353 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m273691080(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2833400353 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m273691080_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4074102891_gshared (Dictionary_2_t2833400353 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4074102891(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2833400353 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4074102891_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1909942318_gshared (Dictionary_2_t2833400353 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1909942318(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2833400353 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1909942318_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m1859149501_gshared (Dictionary_2_t2833400353 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1859149501(__this, method) ((  int32_t (*) (Dictionary_2_t2833400353 *, const MethodInfo*))Dictionary_2_get_Count_m1859149501_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::get_Item(TKey)
extern "C"  bool Dictionary_2_get_Item_m1283910152_gshared (Dictionary_2_t2833400353 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m1283910152(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2833400353 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m1283910152_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1410972521_gshared (Dictionary_2_t2833400353 * __this, int32_t ___key0, bool ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m1410972521(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2833400353 *, int32_t, bool, const MethodInfo*))Dictionary_2_set_Item_m1410972521_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m1187229861_gshared (Dictionary_2_t2833400353 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m1187229861(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t2833400353 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m1187229861_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m4137750574_gshared (Dictionary_2_t2833400353 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m4137750574(__this, ___size0, method) ((  void (*) (Dictionary_2_t2833400353 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m4137750574_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m406764660_gshared (Dictionary_2_t2833400353 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m406764660(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2833400353 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m406764660_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t590745575  Dictionary_2_make_pair_m3575167218_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, bool ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m3575167218(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t590745575  (*) (Il2CppObject * /* static, unused */, int32_t, bool, const MethodInfo*))Dictionary_2_make_pair_m3575167218_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::pick_key(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_key_m1113160048_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, bool ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m1113160048(__this /* static, unused */, ___key0, ___value1, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, int32_t, bool, const MethodInfo*))Dictionary_2_pick_key_m1113160048_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::pick_value(TKey,TValue)
extern "C"  bool Dictionary_2_pick_value_m2299112240_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, bool ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m2299112240(__this /* static, unused */, ___key0, ___value1, method) ((  bool (*) (Il2CppObject * /* static, unused */, int32_t, bool, const MethodInfo*))Dictionary_2_pick_value_m2299112240_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m1593229861_gshared (Dictionary_2_t2833400353 * __this, KeyValuePair_2U5BU5D_t551930014* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1593229861(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2833400353 *, KeyValuePair_2U5BU5D_t551930014*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1593229861_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::Resize()
extern "C"  void Dictionary_2_Resize_m3108902167_gshared (Dictionary_2_t2833400353 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m3108902167(__this, method) ((  void (*) (Dictionary_2_t2833400353 *, const MethodInfo*))Dictionary_2_Resize_m3108902167_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m4279144282_gshared (Dictionary_2_t2833400353 * __this, int32_t ___key0, bool ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m4279144282(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2833400353 *, int32_t, bool, const MethodInfo*))Dictionary_2_Add_m4279144282_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::Clear()
extern "C"  void Dictionary_2_Clear_m308609726_gshared (Dictionary_2_t2833400353 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m308609726(__this, method) ((  void (*) (Dictionary_2_t2833400353 *, const MethodInfo*))Dictionary_2_Clear_m308609726_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1572183886_gshared (Dictionary_2_t2833400353 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1572183886(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2833400353 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m1572183886_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m2823948782_gshared (Dictionary_2_t2833400353 * __this, bool ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m2823948782(__this, ___value0, method) ((  bool (*) (Dictionary_2_t2833400353 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m2823948782_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m3395997005_gshared (Dictionary_2_t2833400353 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m3395997005(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2833400353 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m3395997005_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m3488539457_gshared (Dictionary_2_t2833400353 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m3488539457(__this, ___sender0, method) ((  void (*) (Dictionary_2_t2833400353 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m3488539457_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m653642550_gshared (Dictionary_2_t2833400353 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m653642550(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2833400353 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m653642550_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m3661972665_gshared (Dictionary_2_t2833400353 * __this, int32_t ___key0, bool* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m3661972665(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t2833400353 *, int32_t, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m3661972665_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::get_Keys()
extern "C"  KeyCollection_t1021930828 * Dictionary_2_get_Keys_m611355866_gshared (Dictionary_2_t2833400353 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m611355866(__this, method) ((  KeyCollection_t1021930828 * (*) (Dictionary_2_t2833400353 *, const MethodInfo*))Dictionary_2_get_Keys_m611355866_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::get_Values()
extern "C"  ValueCollection_t1536460196 * Dictionary_2_get_Values_m2311068130_gshared (Dictionary_2_t2833400353 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2311068130(__this, method) ((  ValueCollection_t1536460196 * (*) (Dictionary_2_t2833400353 *, const MethodInfo*))Dictionary_2_get_Values_m2311068130_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::ToTKey(System.Object)
extern "C"  int32_t Dictionary_2_ToTKey_m1152757591_gshared (Dictionary_2_t2833400353 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1152757591(__this, ___key0, method) ((  int32_t (*) (Dictionary_2_t2833400353 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m1152757591_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::ToTValue(System.Object)
extern "C"  bool Dictionary_2_ToTValue_m1563588703_gshared (Dictionary_2_t2833400353 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1563588703(__this, ___value0, method) ((  bool (*) (Dictionary_2_t2833400353 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m1563588703_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m1428204993_gshared (Dictionary_2_t2833400353 * __this, KeyValuePair_2_t590745575  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1428204993(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t2833400353 *, KeyValuePair_2_t590745575 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1428204993_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::GetEnumerator()
extern "C"  Enumerator_t4153425055  Dictionary_2_GetEnumerator_m3158399258_gshared (Dictionary_2_t2833400353 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m3158399258(__this, method) ((  Enumerator_t4153425055  (*) (Dictionary_2_t2833400353 *, const MethodInfo*))Dictionary_2_GetEnumerator_m3158399258_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m2742981367_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, bool ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m2742981367(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, int32_t, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m2742981367_gshared)(__this /* static, unused */, ___key0, ___value1, method)
