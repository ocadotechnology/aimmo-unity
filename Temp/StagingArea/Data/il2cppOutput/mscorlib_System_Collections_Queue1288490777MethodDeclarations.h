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

// System.Collections.Queue
struct Queue_t1288490777;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Collections.Queue::.ctor()
extern "C"  void Queue__ctor_m3347147485 (Queue_t1288490777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Int32)
extern "C"  void Queue__ctor_m3550832384 (Queue_t1288490777 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Int32,System.Single)
extern "C"  void Queue__ctor_m214205393 (Queue_t1288490777 * __this, int32_t ___capacity0, float ___growFactor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Queue::get_Count()
extern "C"  int32_t Queue_get_Count_m3458189249 (Queue_t1288490777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::get_SyncRoot()
extern "C"  Il2CppObject * Queue_get_SyncRoot_m1664561188 (Queue_t1288490777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::CopyTo(System.Array,System.Int32)
extern "C"  void Queue_CopyTo_m343630538 (Queue_t1288490777 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Queue::GetEnumerator()
extern "C"  Il2CppObject * Queue_GetEnumerator_m2467698401 (Queue_t1288490777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Clone()
extern "C"  Il2CppObject * Queue_Clone_m1124962851 (Queue_t1288490777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::Clear()
extern "C"  void Queue_Clear_m456406336 (Queue_t1288490777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Dequeue()
extern "C"  Il2CppObject * Queue_Dequeue_m2061796414 (Queue_t1288490777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::Enqueue(System.Object)
extern "C"  void Queue_Enqueue_m1817830121 (Queue_t1288490777 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Peek()
extern "C"  Il2CppObject * Queue_Peek_m2900562607 (Queue_t1288490777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.Queue::ToArray()
extern "C"  ObjectU5BU5D_t3614634134* Queue_ToArray_m2519442486 (Queue_t1288490777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::grow()
extern "C"  void Queue_grow_m3125286298 (Queue_t1288490777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
