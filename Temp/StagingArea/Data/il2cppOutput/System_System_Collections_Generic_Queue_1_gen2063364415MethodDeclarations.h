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

// System.Collections.Generic.Queue`1<UnityEngine.Vector3>
struct Queue_1_t2063364415;
// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_t4014198703;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "System_System_Collections_Generic_Queue_1_Enumerat2573427495.h"

// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::.ctor()
extern "C"  void Queue_1__ctor_m439177983_gshared (Queue_1_t2063364415 * __this, const MethodInfo* method);
#define Queue_1__ctor_m439177983(__this, method) ((  void (*) (Queue_1_t2063364415 *, const MethodInfo*))Queue_1__ctor_m439177983_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Queue_1_System_Collections_ICollection_CopyTo_m3348282052_gshared (Queue_1_t2063364415 * __this, Il2CppArray * ___array0, int32_t ___idx1, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m3348282052(__this, ___array0, ___idx1, method) ((  void (*) (Queue_1_t2063364415 *, Il2CppArray *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m3348282052_gshared)(__this, ___array0, ___idx1, method)
// System.Object System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Queue_1_System_Collections_ICollection_get_SyncRoot_m2877527758_gshared (Queue_1_t2063364415 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m2877527758(__this, method) ((  Il2CppObject * (*) (Queue_1_t2063364415 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m2877527758_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Il2CppObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2343010646_gshared (Queue_1_t2063364415 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2343010646(__this, method) ((  Il2CppObject* (*) (Queue_1_t2063364415 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2343010646_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Queue_1_System_Collections_IEnumerable_GetEnumerator_m3554378895_gshared (Queue_1_t2063364415 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m3554378895(__this, method) ((  Il2CppObject * (*) (Queue_1_t2063364415 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m3554378895_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Clear()
extern "C"  void Queue_1_Clear_m1137100215_gshared (Queue_1_t2063364415 * __this, const MethodInfo* method);
#define Queue_1_Clear_m1137100215(__this, method) ((  void (*) (Queue_1_t2063364415 *, const MethodInfo*))Queue_1_Clear_m1137100215_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
extern "C"  void Queue_1_CopyTo_m2452730991_gshared (Queue_1_t2063364415 * __this, Vector3U5BU5D_t1172311765* ___array0, int32_t ___idx1, const MethodInfo* method);
#define Queue_1_CopyTo_m2452730991(__this, ___array0, ___idx1, method) ((  void (*) (Queue_1_t2063364415 *, Vector3U5BU5D_t1172311765*, int32_t, const MethodInfo*))Queue_1_CopyTo_m2452730991_gshared)(__this, ___array0, ___idx1, method)
// T System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Dequeue()
extern "C"  Vector3_t2243707580  Queue_1_Dequeue_m1569905525_gshared (Queue_1_t2063364415 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m1569905525(__this, method) ((  Vector3_t2243707580  (*) (Queue_1_t2063364415 *, const MethodInfo*))Queue_1_Dequeue_m1569905525_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Peek()
extern "C"  Vector3_t2243707580  Queue_1_Peek_m574832326_gshared (Queue_1_t2063364415 * __this, const MethodInfo* method);
#define Queue_1_Peek_m574832326(__this, method) ((  Vector3_t2243707580  (*) (Queue_1_t2063364415 *, const MethodInfo*))Queue_1_Peek_m574832326_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Enqueue(T)
extern "C"  void Queue_1_Enqueue_m2854830854_gshared (Queue_1_t2063364415 * __this, Vector3_t2243707580  ___item0, const MethodInfo* method);
#define Queue_1_Enqueue_m2854830854(__this, ___item0, method) ((  void (*) (Queue_1_t2063364415 *, Vector3_t2243707580 , const MethodInfo*))Queue_1_Enqueue_m2854830854_gshared)(__this, ___item0, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::SetCapacity(System.Int32)
extern "C"  void Queue_1_SetCapacity_m3068684133_gshared (Queue_1_t2063364415 * __this, int32_t ___new_size0, const MethodInfo* method);
#define Queue_1_SetCapacity_m3068684133(__this, ___new_size0, method) ((  void (*) (Queue_1_t2063364415 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m3068684133_gshared)(__this, ___new_size0, method)
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Vector3>::get_Count()
extern "C"  int32_t Queue_1_get_Count_m2044212191_gshared (Queue_1_t2063364415 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m2044212191(__this, method) ((  int32_t (*) (Queue_1_t2063364415 *, const MethodInfo*))Queue_1_get_Count_m2044212191_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<UnityEngine.Vector3>::GetEnumerator()
extern "C"  Enumerator_t2573427495  Queue_1_GetEnumerator_m2219165457_gshared (Queue_1_t2063364415 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m2219165457(__this, method) ((  Enumerator_t2573427495  (*) (Queue_1_t2063364415 *, const MethodInfo*))Queue_1_GetEnumerator_m2219165457_gshared)(__this, method)
