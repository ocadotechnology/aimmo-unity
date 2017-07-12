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

// System.Func`1<System.Boolean>
struct Func_1_t1485000104;
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

// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_1__ctor_m2216622372_gshared (Func_1_t1485000104 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_1__ctor_m2216622372(__this, ___object0, ___method1, method) ((  void (*) (Func_1_t1485000104 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_1__ctor_m2216622372_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`1<System.Boolean>::Invoke()
extern "C"  bool Func_1_Invoke_m1558989898_gshared (Func_1_t1485000104 * __this, const MethodInfo* method);
#define Func_1_Invoke_m1558989898(__this, method) ((  bool (*) (Func_1_t1485000104 *, const MethodInfo*))Func_1_Invoke_m1558989898_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Boolean>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_1_BeginInvoke_m3627229331_gshared (Func_1_t1485000104 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method);
#define Func_1_BeginInvoke_m3627229331(__this, ___callback0, ___object1, method) ((  Il2CppObject * (*) (Func_1_t1485000104 *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_1_BeginInvoke_m3627229331_gshared)(__this, ___callback0, ___object1, method)
// TResult System.Func`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_1_EndInvoke_m994903314_gshared (Func_1_t1485000104 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_1_EndInvoke_m994903314(__this, ___result0, method) ((  bool (*) (Func_1_t1485000104 *, Il2CppObject *, const MethodInfo*))Func_1_EndInvoke_m994903314_gshared)(__this, ___result0, method)
