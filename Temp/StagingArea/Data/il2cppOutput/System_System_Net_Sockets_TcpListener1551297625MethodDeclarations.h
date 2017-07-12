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

// System.Net.Sockets.TcpListener
struct TcpListener_t1551297625;
// System.Net.IPAddress
struct IPAddress_t1399971723;
// System.Net.EndPoint
struct EndPoint_t4156119363;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_IPAddress1399971723.h"
#include "System_System_Net_Sockets_AddressFamily303362630.h"
#include "System_System_Net_EndPoint4156119363.h"

// System.Void System.Net.Sockets.TcpListener::.ctor(System.Net.IPAddress,System.Int32)
extern "C"  void TcpListener__ctor_m104423921 (TcpListener_t1551297625 * __this, IPAddress_t1399971723 * ___listen_ip0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Init(System.Net.Sockets.AddressFamily,System.Net.EndPoint)
extern "C"  void TcpListener_Init_m1169079544 (TcpListener_t1551297625 * __this, int32_t ___family0, EndPoint_t4156119363 * ___ep1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::get_Server()
extern "C"  Socket_t3821512045 * TcpListener_get_Server_m2098356889 (TcpListener_t1551297625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::AcceptTcpClient()
extern "C"  TcpClient_t408947970 * TcpListener_AcceptTcpClient_m3428842100 (TcpListener_t1551297625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Finalize()
extern "C"  void TcpListener_Finalize_m998971995 (TcpListener_t1551297625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Start()
extern "C"  void TcpListener_Start_m2176032785 (TcpListener_t1551297625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Start(System.Int32)
extern "C"  void TcpListener_Start_m4269559932 (TcpListener_t1551297625 * __this, int32_t ___backlog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Stop()
extern "C"  void TcpListener_Stop_m3738266225 (TcpListener_t1551297625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
