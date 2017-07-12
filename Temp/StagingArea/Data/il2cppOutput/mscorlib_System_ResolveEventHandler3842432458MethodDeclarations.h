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

// System.ResolveEventHandler
struct ResolveEventHandler_t3842432458;
// System.Object
struct Il2CppObject;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.ResolveEventArgs
struct ResolveEventArgs_t1859808873;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_ResolveEventArgs1859808873.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ResolveEventHandler__ctor_m3098271043 (ResolveEventHandler_t3842432458 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C"  Assembly_t4268412390 * ResolveEventHandler_Invoke_m3343892466 (ResolveEventHandler_t3842432458 * __this, Il2CppObject * ___sender0, ResolveEventArgs_t1859808873 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ResolveEventHandler_BeginInvoke_m916075374 (ResolveEventHandler_t3842432458 * __this, Il2CppObject * ___sender0, ResolveEventArgs_t1859808873 * ___args1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  Assembly_t4268412390 * ResolveEventHandler_EndInvoke_m1489338158 (ResolveEventHandler_t3842432458 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
