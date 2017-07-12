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

// System.Array/Swapper
struct Swapper_t2637371637;
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

// System.Void System.Array/Swapper::.ctor(System.Object,System.IntPtr)
extern "C"  void Swapper__ctor_m1954582975 (Swapper_t2637371637 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/Swapper::Invoke(System.Int32,System.Int32)
extern "C"  void Swapper_Invoke_m4145335919 (Swapper_t2637371637 * __this, int32_t ___i0, int32_t ___j1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Array/Swapper::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Swapper_BeginInvoke_m2652511022 (Swapper_t2637371637 * __this, int32_t ___i0, int32_t ___j1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/Swapper::EndInvoke(System.IAsyncResult)
extern "C"  void Swapper_EndInvoke_m677693941 (Swapper_t2637371637 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
