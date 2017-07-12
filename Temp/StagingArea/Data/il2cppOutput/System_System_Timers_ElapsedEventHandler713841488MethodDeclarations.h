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

// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_t713841488;
// System.Object
struct Il2CppObject;
// System.Timers.ElapsedEventArgs
struct ElapsedEventArgs_t1664828133;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Timers_ElapsedEventArgs1664828133.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Timers.ElapsedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ElapsedEventHandler__ctor_m2667701629 (ElapsedEventHandler_t713841488 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.ElapsedEventHandler::Invoke(System.Object,System.Timers.ElapsedEventArgs)
extern "C"  void ElapsedEventHandler_Invoke_m2855723163 (ElapsedEventHandler_t713841488 * __this, Il2CppObject * ___sender0, ElapsedEventArgs_t1664828133 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Timers.ElapsedEventHandler::BeginInvoke(System.Object,System.Timers.ElapsedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ElapsedEventHandler_BeginInvoke_m443859436 (ElapsedEventHandler_t713841488 * __this, Il2CppObject * ___sender0, ElapsedEventArgs_t1664828133 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.ElapsedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ElapsedEventHandler_EndInvoke_m3555518875 (ElapsedEventHandler_t713841488 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
