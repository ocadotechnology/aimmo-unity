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

// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1766862959;
// System.Object
struct Il2CppObject;
// System.Delegate
struct Delegate_t3022476291;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Delegate3022476291.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
extern "C"  void AddEventAdapter__ctor_m4122716273 (AddEventAdapter_t1766862959 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
extern "C"  void AddEventAdapter_Invoke_m3970567975 (AddEventAdapter_t1766862959 * __this, Il2CppObject * ____this0, Delegate_t3022476291 * ___dele1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AddEventAdapter_BeginInvoke_m3628937824 (AddEventAdapter_t1766862959 * __this, Il2CppObject * ____this0, Delegate_t3022476291 * ___dele1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
extern "C"  void AddEventAdapter_EndInvoke_m1884114191 (AddEventAdapter_t1766862959 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
