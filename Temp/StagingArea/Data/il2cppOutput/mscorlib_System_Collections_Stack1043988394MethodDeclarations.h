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

// System.Collections.Stack
struct Stack_t1043988394;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Collections.Stack::.ctor()
extern "C"  void Stack__ctor_m521896492 (Stack_t1043988394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::.ctor(System.Collections.ICollection)
extern "C"  void Stack__ctor_m2410583781 (Stack_t1043988394 * __this, Il2CppObject * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::.ctor(System.Int32)
extern "C"  void Stack__ctor_m1075268731 (Stack_t1043988394 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Resize(System.Int32)
extern "C"  void Stack_Resize_m3339638113 (Stack_t1043988394 * __this, int32_t ___ncapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Stack::get_Count()
extern "C"  int32_t Stack_get_Count_m595326012 (Stack_t1043988394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::get_SyncRoot()
extern "C"  Il2CppObject * Stack_get_SyncRoot_m3168081079 (Stack_t1043988394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Clear()
extern "C"  void Stack_Clear_m771767447 (Stack_t1043988394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Clone()
extern "C"  Il2CppObject * Stack_Clone_m3818369224 (Stack_t1043988394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::CopyTo(System.Array,System.Int32)
extern "C"  void Stack_CopyTo_m3668421987 (Stack_t1043988394 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Stack::GetEnumerator()
extern "C"  Il2CppObject * Stack_GetEnumerator_m4080170056 (Stack_t1043988394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Peek()
extern "C"  Il2CppObject * Stack_Peek_m2790636182 (Stack_t1043988394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Pop()
extern "C"  Il2CppObject * Stack_Pop_m3788808882 (Stack_t1043988394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Push(System.Object)
extern "C"  void Stack_Push_m284336154 (Stack_t1043988394 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
