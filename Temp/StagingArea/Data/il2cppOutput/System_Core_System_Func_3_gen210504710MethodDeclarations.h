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

// System.Func`3<System.Object,System.Object,System.Boolean>
struct Func_3_t210504710;
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

// System.Void System.Func`3<System.Object,System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m2935071758_gshared (Func_3_t210504710 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_3__ctor_m2935071758(__this, ___object0, ___method1, method) ((  void (*) (Func_3_t210504710 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_3__ctor_m2935071758_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`3<System.Object,System.Object,System.Boolean>::Invoke(T1,T2)
extern "C"  bool Func_3_Invoke_m2895338685_gshared (Func_3_t210504710 * __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, const MethodInfo* method);
#define Func_3_Invoke_m2895338685(__this, ___arg10, ___arg21, method) ((  bool (*) (Func_3_t210504710 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Func_3_Invoke_m2895338685_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Func`3<System.Object,System.Object,System.Boolean>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_3_BeginInvoke_m238042980_gshared (Func_3_t210504710 * __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Func_3_BeginInvoke_m238042980(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Func_3_t210504710 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_3_BeginInvoke_m238042980_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// TResult System.Func`3<System.Object,System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_3_EndInvoke_m3692223758_gshared (Func_3_t210504710 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_3_EndInvoke_m3692223758(__this, ___result0, method) ((  bool (*) (Func_3_t210504710 *, Il2CppObject *, const MethodInfo*))Func_3_EndInvoke_m3692223758_gshared)(__this, ___result0, method)
