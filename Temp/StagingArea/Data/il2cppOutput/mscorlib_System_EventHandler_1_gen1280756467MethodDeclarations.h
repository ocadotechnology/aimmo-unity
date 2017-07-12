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

// System.EventHandler`1<System.Object>
struct EventHandler_1_t1280756467;
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

// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void EventHandler_1__ctor_m805401670_gshared (EventHandler_1_t1280756467 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define EventHandler_1__ctor_m805401670(__this, ___object0, ___method1, method) ((  void (*) (EventHandler_1_t1280756467 *, Il2CppObject *, IntPtr_t, const MethodInfo*))EventHandler_1__ctor_m805401670_gshared)(__this, ___object0, ___method1, method)
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
extern "C"  void EventHandler_1_Invoke_m3162899003_gshared (EventHandler_1_t1280756467 * __this, Il2CppObject * ___sender0, Il2CppObject * ___e1, const MethodInfo* method);
#define EventHandler_1_Invoke_m3162899003(__this, ___sender0, ___e1, method) ((  void (*) (EventHandler_1_t1280756467 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))EventHandler_1_Invoke_m3162899003_gshared)(__this, ___sender0, ___e1, method)
// System.IAsyncResult System.EventHandler`1<System.Object>::BeginInvoke(System.Object,TEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventHandler_1_BeginInvoke_m2005697352_gshared (EventHandler_1_t1280756467 * __this, Il2CppObject * ___sender0, Il2CppObject * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define EventHandler_1_BeginInvoke_m2005697352(__this, ___sender0, ___e1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (EventHandler_1_t1280756467 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))EventHandler_1_BeginInvoke_m2005697352_gshared)(__this, ___sender0, ___e1, ___callback2, ___object3, method)
// System.Void System.EventHandler`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void EventHandler_1_EndInvoke_m487063176_gshared (EventHandler_1_t1280756467 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define EventHandler_1_EndInvoke_m487063176(__this, ___result0, method) ((  void (*) (EventHandler_1_t1280756467 *, Il2CppObject *, const MethodInfo*))EventHandler_1_EndInvoke_m487063176_gshared)(__this, ___result0, method)
