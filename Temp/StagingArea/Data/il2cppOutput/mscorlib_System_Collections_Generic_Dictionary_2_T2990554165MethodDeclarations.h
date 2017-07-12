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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>
struct Transform_1_t2990554165;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3569730739_gshared (Transform_1_t2990554165 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3569730739(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2990554165 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3569730739_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::Invoke(TKey,TValue)
extern "C"  bool Transform_1_Invoke_m2906736839_gshared (Transform_1_t2990554165 * __this, Il2CppObject * ___key0, bool ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2906736839(__this, ___key0, ___value1, method) ((  bool (*) (Transform_1_t2990554165 *, Il2CppObject *, bool, const MethodInfo*))Transform_1_Invoke_m2906736839_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3826027984_gshared (Transform_1_t2990554165 * __this, Il2CppObject * ___key0, bool ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3826027984(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2990554165 *, Il2CppObject *, bool, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3826027984_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Transform_1_EndInvoke_m258407721_gshared (Transform_1_t2990554165 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m258407721(__this, ___result0, method) ((  bool (*) (Transform_1_t2990554165 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m258407721_gshared)(__this, ___result0, method)
