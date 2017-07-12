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

// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1916531888;
// System.Object
struct Il2CppObject;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t3067050131;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_UnhandledExceptionEventArgs3067050131.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void UnhandledExceptionEventHandler__ctor_m2731559345 (UnhandledExceptionEventHandler_t1916531888 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C"  void UnhandledExceptionEventHandler_Invoke_m60389477 (UnhandledExceptionEventHandler_t1916531888 * __this, Il2CppObject * ___sender0, UnhandledExceptionEventArgs_t3067050131 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnhandledExceptionEventHandler_BeginInvoke_m2643527438 (UnhandledExceptionEventHandler_t1916531888 * __this, Il2CppObject * ___sender0, UnhandledExceptionEventArgs_t3067050131 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void UnhandledExceptionEventHandler_EndInvoke_m2207457167 (UnhandledExceptionEventHandler_t1916531888 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
