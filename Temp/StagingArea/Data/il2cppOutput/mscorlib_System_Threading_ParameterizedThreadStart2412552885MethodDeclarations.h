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

// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t2412552885;
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

// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
extern "C"  void ParameterizedThreadStart__ctor_m1215446210 (ParameterizedThreadStart_t2412552885 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ParameterizedThreadStart::Invoke(System.Object)
extern "C"  void ParameterizedThreadStart_Invoke_m1455339576 (ParameterizedThreadStart_t2412552885 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Threading.ParameterizedThreadStart::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ParameterizedThreadStart_BeginInvoke_m3944353331 (ParameterizedThreadStart_t2412552885 * __this, Il2CppObject * ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ParameterizedThreadStart::EndInvoke(System.IAsyncResult)
extern "C"  void ParameterizedThreadStart_EndInvoke_m134326512 (ParameterizedThreadStart_t2412552885 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
