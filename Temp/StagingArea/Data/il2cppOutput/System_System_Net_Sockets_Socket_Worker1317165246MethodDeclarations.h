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

// System.Net.Sockets.Socket/Worker
struct Worker_t1317165246;
// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t2959281146;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket_SocketAsyncResult2959281146.h"

// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult)
extern "C"  void Worker__ctor_m3071371468 (Worker_t1317165246 * __this, SocketAsyncResult_t2959281146 * ___ares0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult,System.Boolean)
extern "C"  void Worker__ctor_m3317444489 (Worker_t1317165246 * __this, SocketAsyncResult_t2959281146 * ___ares0, bool ___requireSocketSecurity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Accept()
extern "C"  void Worker_Accept_m2504503650 (Worker_t1317165246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Receive()
extern "C"  void Worker_Receive_m3556746871 (Worker_t1317165246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::ReceiveFrom()
extern "C"  void Worker_ReceiveFrom_m2868815513 (Worker_t1317165246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::UpdateSendValues(System.Int32)
extern "C"  void Worker_UpdateSendValues_m767212130 (Worker_t1317165246 * __this, int32_t ___last_sent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Send()
extern "C"  void Worker_Send_m4287108668 (Worker_t1317165246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::SendTo()
extern "C"  void Worker_SendTo_m2040706919 (Worker_t1317165246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
