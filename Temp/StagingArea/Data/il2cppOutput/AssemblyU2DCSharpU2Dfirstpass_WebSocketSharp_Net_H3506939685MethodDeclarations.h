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

// WebSocketSharp.Net.HttpListenerAsyncResult
struct HttpListenerAsyncResult_t3506939685;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.Threading.WaitHandle
struct WaitHandle_t677569169;
// System.Exception
struct Exception_t1927440687;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t994708409;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H3506939685.h"
#include "mscorlib_System_Exception1927440687.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Ht994708409.h"

// System.Void WebSocketSharp.Net.HttpListenerAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void HttpListenerAsyncResult__ctor_m869989650 (HttpListenerAsyncResult_t3506939685 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerAsyncResult::get_EndCalled()
extern "C"  bool HttpListenerAsyncResult_get_EndCalled_m2541785263 (HttpListenerAsyncResult_t3506939685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerAsyncResult::set_EndCalled(System.Boolean)
extern "C"  void HttpListenerAsyncResult_set_EndCalled_m1091801142 (HttpListenerAsyncResult_t3506939685 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerAsyncResult::get_InGet()
extern "C"  bool HttpListenerAsyncResult_get_InGet_m596825012 (HttpListenerAsyncResult_t3506939685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerAsyncResult::set_InGet(System.Boolean)
extern "C"  void HttpListenerAsyncResult_set_InGet_m622908633 (HttpListenerAsyncResult_t3506939685 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object WebSocketSharp.Net.HttpListenerAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * HttpListenerAsyncResult_get_AsyncState_m522356731 (HttpListenerAsyncResult_t3506939685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle WebSocketSharp.Net.HttpListenerAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t677569169 * HttpListenerAsyncResult_get_AsyncWaitHandle_m2359367429 (HttpListenerAsyncResult_t3506939685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerAsyncResult::get_CompletedSynchronously()
extern "C"  bool HttpListenerAsyncResult_get_CompletedSynchronously_m3080989832 (HttpListenerAsyncResult_t3506939685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerAsyncResult::get_IsCompleted()
extern "C"  bool HttpListenerAsyncResult_get_IsCompleted_m3215205292 (HttpListenerAsyncResult_t3506939685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerAsyncResult::complete(WebSocketSharp.Net.HttpListenerAsyncResult)
extern "C"  void HttpListenerAsyncResult_complete_m2001728076 (Il2CppObject * __this /* static, unused */, HttpListenerAsyncResult_t3506939685 * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerAsyncResult::Complete(System.Exception)
extern "C"  void HttpListenerAsyncResult_Complete_m1822044051 (HttpListenerAsyncResult_t3506939685 * __this, Exception_t1927440687 * ___exception0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerAsyncResult::Complete(WebSocketSharp.Net.HttpListenerContext)
extern "C"  void HttpListenerAsyncResult_Complete_m2574344718 (HttpListenerAsyncResult_t3506939685 * __this, HttpListenerContext_t994708409 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerAsyncResult::Complete(WebSocketSharp.Net.HttpListenerContext,System.Boolean)
extern "C"  void HttpListenerAsyncResult_Complete_m1586571487 (HttpListenerAsyncResult_t3506939685 * __this, HttpListenerContext_t994708409 * ___context0, bool ___syncCompleted1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.HttpListenerAsyncResult::GetContext()
extern "C"  HttpListenerContext_t994708409 * HttpListenerAsyncResult_GetContext_m822953675 (HttpListenerAsyncResult_t3506939685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
