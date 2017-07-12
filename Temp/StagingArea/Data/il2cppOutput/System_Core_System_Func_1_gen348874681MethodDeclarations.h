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

// System.Func`1<System.Object>
struct Func_1_t348874681;
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

// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_1__ctor_m3570736155_gshared (Func_1_t348874681 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_1__ctor_m3570736155(__this, ___object0, ___method1, method) ((  void (*) (Func_1_t348874681 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_1__ctor_m3570736155_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`1<System.Object>::Invoke()
extern "C"  Il2CppObject * Func_1_Invoke_m846324009_gshared (Func_1_t348874681 * __this, const MethodInfo* method);
#define Func_1_Invoke_m846324009(__this, method) ((  Il2CppObject * (*) (Func_1_t348874681 *, const MethodInfo*))Func_1_Invoke_m846324009_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_1_BeginInvoke_m478378364_gshared (Func_1_t348874681 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method);
#define Func_1_BeginInvoke_m478378364(__this, ___callback0, ___object1, method) ((  Il2CppObject * (*) (Func_1_t348874681 *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_1_BeginInvoke_m478378364_gshared)(__this, ___callback0, ___object1, method)
// TResult System.Func`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_1_EndInvoke_m1965878547_gshared (Func_1_t348874681 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_1_EndInvoke_m1965878547(__this, ___result0, method) ((  Il2CppObject * (*) (Func_1_t348874681 *, Il2CppObject *, const MethodInfo*))Func_1_EndInvoke_m1965878547_gshared)(__this, ___result0, method)
