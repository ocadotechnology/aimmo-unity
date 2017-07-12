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

// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t2959281146;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.Object
struct Il2CppObject;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Collections.Queue
struct Queue_t1288490777;
// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t3737776727;
// System.Net.Sockets.Socket/Worker
struct Worker_t1317165246;
// System.Exception
struct Exception_t1927440687;
// System.Threading.WaitHandle
struct WaitHandle_t677569169;
struct SocketAsyncResult_t2959281146_marshaled_pinvoke;
struct SocketAsyncResult_t2959281146_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket3821512045.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "System_System_Net_Sockets_Socket_SocketOperation3328960782.h"
#include "mscorlib_System_Collections_Queue1288490777.h"
#include "System_System_Net_Sockets_Socket_Worker1317165246.h"
#include "mscorlib_System_Exception1927440687.h"
#include "System_System_Net_Sockets_SocketError307542793.h"

// System.Void System.Net.Sockets.Socket/SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.Object,System.AsyncCallback,System.Net.Sockets.Socket/SocketOperation)
extern "C"  void SocketAsyncResult__ctor_m3610384401 (SocketAsyncResult_t2959281146 * __this, Socket_t3821512045 * ___sock0, Il2CppObject * ___state1, AsyncCallback_t163412349 * ___callback2, int32_t ___operation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CheckIfThrowDelayedException()
extern "C"  void SocketAsyncResult_CheckIfThrowDelayedException_m2680742 (SocketAsyncResult_t2959281146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteAllOnDispose(System.Collections.Queue)
extern "C"  void SocketAsyncResult_CompleteAllOnDispose_m1527088695 (SocketAsyncResult_t2959281146 * __this, Queue_t1288490777 * ___queue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteDisposed(System.Object)
extern "C"  void SocketAsyncResult_CompleteDisposed_m3930996852 (SocketAsyncResult_t2959281146 * __this, Il2CppObject * ___unused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete()
extern "C"  void SocketAsyncResult_Complete_m3262128441 (SocketAsyncResult_t2959281146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket/SocketAsyncCall System.Net.Sockets.Socket/SocketAsyncResult::GetDelegate(System.Net.Sockets.Socket/Worker,System.Net.Sockets.Socket/SocketOperation)
extern "C"  SocketAsyncCall_t3737776727 * SocketAsyncResult_GetDelegate_m3612551969 (SocketAsyncResult_t2959281146 * __this, Worker_t1317165246 * ___worker0, int32_t ___op1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Int32)
extern "C"  void SocketAsyncResult_Complete_m3498292430 (SocketAsyncResult_t2959281146 * __this, int32_t ___total0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Exception)
extern "C"  void SocketAsyncResult_Complete_m3680801433 (SocketAsyncResult_t2959281146 * __this, Exception_t1927440687 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Net.Sockets.Socket)
extern "C"  void SocketAsyncResult_Complete_m3800568714 (SocketAsyncResult_t2959281146 * __this, Socket_t3821512045 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * SocketAsyncResult_get_AsyncState_m1332753569 (SocketAsyncResult_t2959281146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t677569169 * SocketAsyncResult_get_AsyncWaitHandle_m2157367075 (SocketAsyncResult_t2959281146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::get_IsCompleted()
extern "C"  bool SocketAsyncResult_get_IsCompleted_m3547199576 (SocketAsyncResult_t2959281146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_IsCompleted(System.Boolean)
extern "C"  void SocketAsyncResult_set_IsCompleted_m954671257 (SocketAsyncResult_t2959281146 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::get_Socket()
extern "C"  Socket_t3821512045 * SocketAsyncResult_get_Socket_m698072348 (SocketAsyncResult_t2959281146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::get_Total()
extern "C"  int32_t SocketAsyncResult_get_Total_m995672677 (SocketAsyncResult_t2959281146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_Total(System.Int32)
extern "C"  void SocketAsyncResult_set_Total_m54998826 (SocketAsyncResult_t2959281146 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.Socket/SocketAsyncResult::get_ErrorCode()
extern "C"  int32_t SocketAsyncResult_get_ErrorCode_m3838729530 (SocketAsyncResult_t2959281146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SocketAsyncResult_t2959281146;
struct SocketAsyncResult_t2959281146_marshaled_pinvoke;

extern "C" void SocketAsyncResult_t2959281146_marshal_pinvoke(const SocketAsyncResult_t2959281146& unmarshaled, SocketAsyncResult_t2959281146_marshaled_pinvoke& marshaled);
extern "C" void SocketAsyncResult_t2959281146_marshal_pinvoke_back(const SocketAsyncResult_t2959281146_marshaled_pinvoke& marshaled, SocketAsyncResult_t2959281146& unmarshaled);
extern "C" void SocketAsyncResult_t2959281146_marshal_pinvoke_cleanup(SocketAsyncResult_t2959281146_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SocketAsyncResult_t2959281146;
struct SocketAsyncResult_t2959281146_marshaled_com;

extern "C" void SocketAsyncResult_t2959281146_marshal_com(const SocketAsyncResult_t2959281146& unmarshaled, SocketAsyncResult_t2959281146_marshaled_com& marshaled);
extern "C" void SocketAsyncResult_t2959281146_marshal_com_back(const SocketAsyncResult_t2959281146_marshaled_com& marshaled, SocketAsyncResult_t2959281146& unmarshaled);
extern "C" void SocketAsyncResult_t2959281146_marshal_com_cleanup(SocketAsyncResult_t2959281146_marshaled_com& marshaled);
