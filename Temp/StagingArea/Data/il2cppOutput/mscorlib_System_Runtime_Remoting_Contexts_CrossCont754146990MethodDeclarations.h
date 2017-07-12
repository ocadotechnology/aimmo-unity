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

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct CrossContextDelegate_t754146990;
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

// System.Void System.Runtime.Remoting.Contexts.CrossContextDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void CrossContextDelegate__ctor_m4092400948 (CrossContextDelegate_t754146990 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.CrossContextDelegate::Invoke()
extern "C"  void CrossContextDelegate_Invoke_m2908136830 (CrossContextDelegate_t754146990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Runtime.Remoting.Contexts.CrossContextDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CrossContextDelegate_BeginInvoke_m4129562277 (CrossContextDelegate_t754146990 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.CrossContextDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void CrossContextDelegate_EndInvoke_m3043989850 (CrossContextDelegate_t754146990 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
