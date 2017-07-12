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

// System.IO.StreamAsyncResult
struct StreamAsyncResult_t458551667;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1927440687;
// System.Threading.WaitHandle
struct WaitHandle_t677569169;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void System.IO.StreamAsyncResult::.ctor(System.Object)
extern "C"  void StreamAsyncResult__ctor_m4256875164 (StreamAsyncResult_t458551667 * __this, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception)
extern "C"  void StreamAsyncResult_SetComplete_m2141125667 (StreamAsyncResult_t458551667 * __this, Exception_t1927440687 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C"  void StreamAsyncResult_SetComplete_m260930860 (StreamAsyncResult_t458551667 * __this, Exception_t1927440687 * ___e0, int32_t ___nbytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.StreamAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * StreamAsyncResult_get_AsyncState_m1487348725 (StreamAsyncResult_t458551667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.StreamAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t677569169 * StreamAsyncResult_get_AsyncWaitHandle_m4218169359 (StreamAsyncResult_t458551667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_IsCompleted()
extern "C"  bool StreamAsyncResult_get_IsCompleted_m1910328978 (StreamAsyncResult_t458551667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.StreamAsyncResult::get_Exception()
extern "C"  Exception_t1927440687 * StreamAsyncResult_get_Exception_m873156465 (StreamAsyncResult_t458551667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamAsyncResult::get_NBytes()
extern "C"  int32_t StreamAsyncResult_get_NBytes_m4009634602 (StreamAsyncResult_t458551667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_Done()
extern "C"  bool StreamAsyncResult_get_Done_m2858832609 (StreamAsyncResult_t458551667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::set_Done(System.Boolean)
extern "C"  void StreamAsyncResult_set_Done_m4272090534 (StreamAsyncResult_t458551667 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
