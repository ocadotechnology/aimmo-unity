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

// System.Threading.WaitCallback
struct WaitCallback_t2798937288;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_WaitCallback2798937288.h"
#include "mscorlib_System_Object2689449295.h"

// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback)
extern "C"  bool ThreadPool_QueueUserWorkItem_m553039608 (Il2CppObject * __this /* static, unused */, WaitCallback_t2798937288 * ___callBack0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C"  bool ThreadPool_QueueUserWorkItem_m2209660682 (Il2CppObject * __this /* static, unused */, WaitCallback_t2798937288 * ___callBack0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
