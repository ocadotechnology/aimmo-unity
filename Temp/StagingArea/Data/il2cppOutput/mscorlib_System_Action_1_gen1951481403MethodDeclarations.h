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

// System.Action`1<System.UInt32>
struct Action_1_t1951481403;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Action`1<System.UInt32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2819391166_gshared (Action_1_t1951481403 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m2819391166(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t1951481403 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m2819391166_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<System.UInt32>::Invoke(T)
extern "C"  void Action_1_Invoke_m2757140084_gshared (Action_1_t1951481403 * __this, uint32_t ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m2757140084(__this, ___obj0, method) ((  void (*) (Action_1_t1951481403 *, uint32_t, const MethodInfo*))Action_1_Invoke_m2757140084_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<System.UInt32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m3414426813_gshared (Action_1_t1951481403 * __this, uint32_t ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m3414426813(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t1951481403 *, uint32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m3414426813_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<System.UInt32>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m1574727936_gshared (Action_1_t1951481403 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m1574727936(__this, ___result0, method) ((  void (*) (Action_1_t1951481403 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m1574727936_gshared)(__this, ___result0, method)
