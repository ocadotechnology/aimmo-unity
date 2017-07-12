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

// System.Reflection.TypeFilter
struct TypeFilter_t2905709404;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Reflection.TypeFilter::.ctor(System.Object,System.IntPtr)
extern "C"  void TypeFilter__ctor_m1798016172 (TypeFilter_t2905709404 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeFilter::Invoke(System.Type,System.Object)
extern "C"  bool TypeFilter_Invoke_m2156848151 (TypeFilter_t2905709404 * __this, Type_t * ___m0, Il2CppObject * ___filterCriteria1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.TypeFilter::BeginInvoke(System.Type,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TypeFilter_BeginInvoke_m2395188690 (TypeFilter_t2905709404 * __this, Type_t * ___m0, Il2CppObject * ___filterCriteria1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeFilter::EndInvoke(System.IAsyncResult)
extern "C"  bool TypeFilter_EndInvoke_m997625354 (TypeFilter_t2905709404 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
