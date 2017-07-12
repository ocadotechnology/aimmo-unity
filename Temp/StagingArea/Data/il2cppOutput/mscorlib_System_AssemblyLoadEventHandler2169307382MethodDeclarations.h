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

// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t2169307382;
// System.Object
struct Il2CppObject;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t4233815743;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AssemblyLoadEventArgs4233815743.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AssemblyLoadEventHandler__ctor_m2819610451 (AssemblyLoadEventHandler_t2169307382 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
extern "C"  void AssemblyLoadEventHandler_Invoke_m108373765 (AssemblyLoadEventHandler_t2169307382 * __this, Il2CppObject * ___sender0, AssemblyLoadEventArgs_t4233815743 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AssemblyLoadEventHandler_BeginInvoke_m1930267734 (AssemblyLoadEventHandler_t2169307382 * __this, Il2CppObject * ___sender0, AssemblyLoadEventArgs_t4233815743 * ___args1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AssemblyLoadEventHandler_EndInvoke_m707253317 (AssemblyLoadEventHandler_t2169307382 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
