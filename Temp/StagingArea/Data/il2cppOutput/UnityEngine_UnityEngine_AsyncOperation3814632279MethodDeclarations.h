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

// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;
struct AsyncOperation_t3814632279_marshaled_pinvoke;
struct AsyncOperation_t3814632279_marshaled_com;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C"  void AsyncOperation__ctor_m2914860946 (AsyncOperation_t3814632279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C"  void AsyncOperation_InternalDestroy_m3312061823 (AsyncOperation_t3814632279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C"  void AsyncOperation_Finalize_m67522446 (AsyncOperation_t3814632279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
extern "C"  bool AsyncOperation_get_isDone_m1085614149 (AsyncOperation_t3814632279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AsyncOperation::get_progress()
extern "C"  float AsyncOperation_get_progress_m478775228 (AsyncOperation_t3814632279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AsyncOperation::get_priority()
extern "C"  int32_t AsyncOperation_get_priority_m966065939 (AsyncOperation_t3814632279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::set_priority(System.Int32)
extern "C"  void AsyncOperation_set_priority_m3581020444 (AsyncOperation_t3814632279 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_allowSceneActivation()
extern "C"  bool AsyncOperation_get_allowSceneActivation_m2825451182 (AsyncOperation_t3814632279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
extern "C"  void AsyncOperation_set_allowSceneActivation_m3988498951 (AsyncOperation_t3814632279 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AsyncOperation_t3814632279;
struct AsyncOperation_t3814632279_marshaled_pinvoke;

extern "C" void AsyncOperation_t3814632279_marshal_pinvoke(const AsyncOperation_t3814632279& unmarshaled, AsyncOperation_t3814632279_marshaled_pinvoke& marshaled);
extern "C" void AsyncOperation_t3814632279_marshal_pinvoke_back(const AsyncOperation_t3814632279_marshaled_pinvoke& marshaled, AsyncOperation_t3814632279& unmarshaled);
extern "C" void AsyncOperation_t3814632279_marshal_pinvoke_cleanup(AsyncOperation_t3814632279_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AsyncOperation_t3814632279;
struct AsyncOperation_t3814632279_marshaled_com;

extern "C" void AsyncOperation_t3814632279_marshal_com(const AsyncOperation_t3814632279& unmarshaled, AsyncOperation_t3814632279_marshaled_com& marshaled);
extern "C" void AsyncOperation_t3814632279_marshal_com_back(const AsyncOperation_t3814632279_marshaled_com& marshaled, AsyncOperation_t3814632279& unmarshaled);
extern "C" void AsyncOperation_t3814632279_marshal_com_cleanup(AsyncOperation_t3814632279_marshaled_com& marshaled);
