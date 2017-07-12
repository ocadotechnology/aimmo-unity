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

// WebSocketSharp.Net.HttpStreamAsyncResult
struct HttpStreamAsyncResult_t782812803;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Exception
struct Exception_t1927440687;
// System.Threading.WaitHandle
struct WaitHandle_t677569169;
// System.IAsyncResult
struct IAsyncResult_t1999651008;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void WebSocketSharp.Net.HttpStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void HttpStreamAsyncResult__ctor_m1094832422 (HttpStreamAsyncResult_t782812803 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpStreamAsyncResult::get_Buffer()
extern "C"  ByteU5BU5D_t3397334013* HttpStreamAsyncResult_get_Buffer_m3802936137 (HttpStreamAsyncResult_t782812803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpStreamAsyncResult::set_Buffer(System.Byte[])
extern "C"  void HttpStreamAsyncResult_set_Buffer_m3259334756 (HttpStreamAsyncResult_t782812803 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpStreamAsyncResult::get_Count()
extern "C"  int32_t HttpStreamAsyncResult_get_Count_m4059359450 (HttpStreamAsyncResult_t782812803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpStreamAsyncResult::set_Count(System.Int32)
extern "C"  void HttpStreamAsyncResult_set_Count_m3268269891 (HttpStreamAsyncResult_t782812803 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception WebSocketSharp.Net.HttpStreamAsyncResult::get_Exception()
extern "C"  Exception_t1927440687 * HttpStreamAsyncResult_get_Exception_m625439197 (HttpStreamAsyncResult_t782812803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpStreamAsyncResult::get_HasException()
extern "C"  bool HttpStreamAsyncResult_get_HasException_m1738495752 (HttpStreamAsyncResult_t782812803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpStreamAsyncResult::get_Offset()
extern "C"  int32_t HttpStreamAsyncResult_get_Offset_m2035756798 (HttpStreamAsyncResult_t782812803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpStreamAsyncResult::set_Offset(System.Int32)
extern "C"  void HttpStreamAsyncResult_set_Offset_m2663197729 (HttpStreamAsyncResult_t782812803 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpStreamAsyncResult::get_SyncRead()
extern "C"  int32_t HttpStreamAsyncResult_get_SyncRead_m3772516638 (HttpStreamAsyncResult_t782812803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpStreamAsyncResult::set_SyncRead(System.Int32)
extern "C"  void HttpStreamAsyncResult_set_SyncRead_m1089865165 (HttpStreamAsyncResult_t782812803 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object WebSocketSharp.Net.HttpStreamAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * HttpStreamAsyncResult_get_AsyncState_m3549552449 (HttpStreamAsyncResult_t782812803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle WebSocketSharp.Net.HttpStreamAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t677569169 * HttpStreamAsyncResult_get_AsyncWaitHandle_m968554451 (HttpStreamAsyncResult_t782812803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpStreamAsyncResult::get_CompletedSynchronously()
extern "C"  bool HttpStreamAsyncResult_get_CompletedSynchronously_m1008022920 (HttpStreamAsyncResult_t782812803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpStreamAsyncResult::get_IsCompleted()
extern "C"  bool HttpStreamAsyncResult_get_IsCompleted_m3806015512 (HttpStreamAsyncResult_t782812803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpStreamAsyncResult::Complete()
extern "C"  void HttpStreamAsyncResult_Complete_m1129775637 (HttpStreamAsyncResult_t782812803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpStreamAsyncResult::Complete(System.Exception)
extern "C"  void HttpStreamAsyncResult_Complete_m3856797189 (HttpStreamAsyncResult_t782812803 * __this, Exception_t1927440687 * ___exception0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpStreamAsyncResult::<Complete>m__0(System.IAsyncResult)
extern "C"  void HttpStreamAsyncResult_U3CCompleteU3Em__0_m1557733435 (HttpStreamAsyncResult_t782812803 * __this, Il2CppObject * ___ar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
