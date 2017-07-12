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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1079703083;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1284510226;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t3373753800;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t14295340;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t607539428;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t3563200854;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t4077730222;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23132015601.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2399727785.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C"  void Dictionary_2__ctor_m955604059_gshared (Dictionary_2_t1079703083 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m955604059(__this, method) ((  void (*) (Dictionary_2_t1079703083 *, const MethodInfo*))Dictionary_2__ctor_m955604059_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3914855494_gshared (Dictionary_2_t1079703083 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m3914855494(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t1079703083 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3914855494_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m779105737_gshared (Dictionary_2_t1079703083 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m779105737(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t1079703083 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m779105737_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m4012179026_gshared (Dictionary_2_t1079703083 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m4012179026(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t1079703083 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m4012179026_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1578051026_gshared (Dictionary_2_t1079703083 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m1578051026(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t1079703083 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1578051026_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m2409148104_gshared (Dictionary_2_t1079703083 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m2409148104(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1079703083 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m2409148104_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m3293450795_gshared (Dictionary_2_t1079703083 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m3293450795(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1079703083 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m3293450795_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1559211244_gshared (Dictionary_2_t1079703083 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1559211244(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1079703083 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1559211244_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m2007979521_gshared (Dictionary_2_t1079703083 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m2007979521(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1079703083 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m2007979521_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m2617445224_gshared (Dictionary_2_t1079703083 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m2617445224(__this, ___key0, method) ((  void (*) (Dictionary_2_t1079703083 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m2617445224_gshared)(__this, ___key0, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1307021207_gshared (Dictionary_2_t1079703083 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1307021207(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1079703083 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1307021207_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2709707065_gshared (Dictionary_2_t1079703083 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2709707065(__this, method) ((  bool (*) (Dictionary_2_t1079703083 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2709707065_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2389991442_gshared (Dictionary_2_t1079703083 * __this, KeyValuePair_2_t3132015601  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2389991442(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t1079703083 *, KeyValuePair_2_t3132015601 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2389991442_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3820892818_gshared (Dictionary_2_t1079703083 * __this, KeyValuePair_2_t3132015601  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3820892818(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1079703083 *, KeyValuePair_2_t3132015601 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3820892818_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2722560982_gshared (Dictionary_2_t1079703083 * __this, KeyValuePair_2U5BU5D_t14295340* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2722560982(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1079703083 *, KeyValuePair_2U5BU5D_t14295340*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2722560982_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3108426043_gshared (Dictionary_2_t1079703083 * __this, KeyValuePair_2_t3132015601  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3108426043(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1079703083 *, KeyValuePair_2_t3132015601 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3108426043_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2030739847_gshared (Dictionary_2_t1079703083 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2030739847(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1079703083 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2030739847_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m204743164_gshared (Dictionary_2_t1079703083 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m204743164(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1079703083 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m204743164_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m930400129_gshared (Dictionary_2_t1079703083 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m930400129(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1079703083 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m930400129_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m671084566_gshared (Dictionary_2_t1079703083 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m671084566(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1079703083 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m671084566_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m1173552103_gshared (Dictionary_2_t1079703083 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1173552103(__this, method) ((  int32_t (*) (Dictionary_2_t1079703083 *, const MethodInfo*))Dictionary_2_get_Count_m1173552103_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C"  int32_t Dictionary_2_get_Item_m3509234246_gshared (Dictionary_2_t1079703083 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m3509234246(__this, ___key0, method) ((  int32_t (*) (Dictionary_2_t1079703083 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m3509234246_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1933786819_gshared (Dictionary_2_t1079703083 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m1933786819(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1079703083 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m1933786819_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m1806198331_gshared (Dictionary_2_t1079703083 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m1806198331(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t1079703083 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m1806198331_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2326971710_gshared (Dictionary_2_t1079703083 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2326971710(__this, ___size0, method) ((  void (*) (Dictionary_2_t1079703083 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2326971710_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2986671872_gshared (Dictionary_2_t1079703083 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2986671872(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1079703083 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2986671872_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t3132015601  Dictionary_2_make_pair_m504234710_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m504234710(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t3132015601  (*) (Il2CppObject * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m504234710_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_key_m3735425568_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m3735425568(__this /* static, unused */, ___key0, ___value1, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m3735425568_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_value_m2254003128_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m2254003128(__this /* static, unused */, ___key0, ___value1, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m2254003128_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3390790255_gshared (Dictionary_2_t1079703083 * __this, KeyValuePair_2U5BU5D_t14295340* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3390790255(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1079703083 *, KeyValuePair_2U5BU5D_t14295340*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3390790255_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C"  void Dictionary_2_Resize_m2592707569_gshared (Dictionary_2_t1079703083 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m2592707569(__this, method) ((  void (*) (Dictionary_2_t1079703083 *, const MethodInfo*))Dictionary_2_Resize_m2592707569_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m905742878_gshared (Dictionary_2_t1079703083 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m905742878(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1079703083 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m905742878_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C"  void Dictionary_2_Clear_m1234384046_gshared (Dictionary_2_t1079703083 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1234384046(__this, method) ((  void (*) (Dictionary_2_t1079703083 *, const MethodInfo*))Dictionary_2_Clear_m1234384046_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1301234230_gshared (Dictionary_2_t1079703083 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1301234230(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1079703083 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m1301234230_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m1984076542_gshared (Dictionary_2_t1079703083 * __this, int32_t ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1984076542(__this, ___value0, method) ((  bool (*) (Dictionary_2_t1079703083 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m1984076542_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m2921989747_gshared (Dictionary_2_t1079703083 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m2921989747(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1079703083 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m2921989747_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m3662399051_gshared (Dictionary_2_t1079703083 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m3662399051(__this, ___sender0, method) ((  void (*) (Dictionary_2_t1079703083 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m3662399051_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1342324050_gshared (Dictionary_2_t1079703083 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m1342324050(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1079703083 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m1342324050_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1731007155_gshared (Dictionary_2_t1079703083 * __this, int32_t ___key0, int32_t* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1731007155(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t1079703083 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m1731007155_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C"  KeyCollection_t3563200854 * Dictionary_2_get_Keys_m1485872402_gshared (Dictionary_2_t1079703083 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1485872402(__this, method) ((  KeyCollection_t3563200854 * (*) (Dictionary_2_t1079703083 *, const MethodInfo*))Dictionary_2_get_Keys_m1485872402_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C"  ValueCollection_t4077730222 * Dictionary_2_get_Values_m2672864802_gshared (Dictionary_2_t1079703083 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2672864802(__this, method) ((  ValueCollection_t4077730222 * (*) (Dictionary_2_t1079703083 *, const MethodInfo*))Dictionary_2_get_Values_m2672864802_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C"  int32_t Dictionary_2_ToTKey_m2140243929_gshared (Dictionary_2_t1079703083 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m2140243929(__this, ___key0, method) ((  int32_t (*) (Dictionary_2_t1079703083 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m2140243929_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C"  int32_t Dictionary_2_ToTValue_m4158929001_gshared (Dictionary_2_t1079703083 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m4158929001(__this, ___value0, method) ((  int32_t (*) (Dictionary_2_t1079703083 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m4158929001_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m2548924835_gshared (Dictionary_2_t1079703083 * __this, KeyValuePair_2_t3132015601  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m2548924835(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t1079703083 *, KeyValuePair_2_t3132015601 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m2548924835_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C"  Enumerator_t2399727785  Dictionary_2_GetEnumerator_m515635886_gshared (Dictionary_2_t1079703083 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m515635886(__this, method) ((  Enumerator_t2399727785  (*) (Dictionary_2_t1079703083 *, const MethodInfo*))Dictionary_2_GetEnumerator_m515635886_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m38146897_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m38146897(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m38146897_gshared)(__this /* static, unused */, ___key0, ___value1, method)
