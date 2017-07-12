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
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E4153425055.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_590745575.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void Enumerator__ctor_m2824999713_gshared (Enumerator_t4153425055 * __this, Dictionary_2_t2833400353 * ___dictionary0, const MethodInfo* method);
#define Enumerator__ctor_m2824999713(__this, ___dictionary0, method) ((  void (*) (Enumerator_t4153425055 *, Dictionary_2_t2833400353 *, const MethodInfo*))Enumerator__ctor_m2824999713_gshared)(__this, ___dictionary0, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * Enumerator_System_Collections_IEnumerator_get_Current_m183653518_gshared (Enumerator_t4153425055 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m183653518(__this, method) ((  Il2CppObject * (*) (Enumerator_t4153425055 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m183653518_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m3174266686_gshared (Enumerator_t4153425055 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m3174266686(__this, method) ((  void (*) (Enumerator_t4153425055 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m3174266686_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C"  DictionaryEntry_t3048875398  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m3789520279_gshared (Enumerator_t4153425055 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m3789520279(__this, method) ((  DictionaryEntry_t3048875398  (*) (Enumerator_t4153425055 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m3789520279_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m2609479796_gshared (Enumerator_t4153425055 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m2609479796(__this, method) ((  Il2CppObject * (*) (Enumerator_t4153425055 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m2609479796_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1382712666_gshared (Enumerator_t4153425055 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1382712666(__this, method) ((  Il2CppObject * (*) (Enumerator_t4153425055 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1382712666_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3378326970_gshared (Enumerator_t4153425055 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m3378326970(__this, method) ((  bool (*) (Enumerator_t4153425055 *, const MethodInfo*))Enumerator_MoveNext_m3378326970_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::get_Current()
extern "C"  KeyValuePair_2_t590745575  Enumerator_get_Current_m4040210310_gshared (Enumerator_t4153425055 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m4040210310(__this, method) ((  KeyValuePair_2_t590745575  (*) (Enumerator_t4153425055 *, const MethodInfo*))Enumerator_get_Current_m4040210310_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::get_CurrentKey()
extern "C"  int32_t Enumerator_get_CurrentKey_m2035197517_gshared (Enumerator_t4153425055 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m2035197517(__this, method) ((  int32_t (*) (Enumerator_t4153425055 *, const MethodInfo*))Enumerator_get_CurrentKey_m2035197517_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::get_CurrentValue()
extern "C"  bool Enumerator_get_CurrentValue_m227083629_gshared (Enumerator_t4153425055 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m227083629(__this, method) ((  bool (*) (Enumerator_t4153425055 *, const MethodInfo*))Enumerator_get_CurrentValue_m227083629_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::Reset()
extern "C"  void Enumerator_Reset_m2662124963_gshared (Enumerator_t4153425055 * __this, const MethodInfo* method);
#define Enumerator_Reset_m2662124963(__this, method) ((  void (*) (Enumerator_t4153425055 *, const MethodInfo*))Enumerator_Reset_m2662124963_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::VerifyState()
extern "C"  void Enumerator_VerifyState_m4116862938_gshared (Enumerator_t4153425055 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m4116862938(__this, method) ((  void (*) (Enumerator_t4153425055 *, const MethodInfo*))Enumerator_VerifyState_m4116862938_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::VerifyCurrent()
extern "C"  void Enumerator_VerifyCurrent_m3245226286_gshared (Enumerator_t4153425055 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m3245226286(__this, method) ((  void (*) (Enumerator_t4153425055 *, const MethodInfo*))Enumerator_VerifyCurrent_m3245226286_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::Dispose()
extern "C"  void Enumerator_Dispose_m85524265_gshared (Enumerator_t4153425055 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m85524265(__this, method) ((  void (*) (Enumerator_t4153425055 *, const MethodInfo*))Enumerator_Dispose_m85524265_gshared)(__this, method)
