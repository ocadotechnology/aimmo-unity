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

// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// System.String
struct String_t;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.Net.Sockets.LingerOption
struct LingerOption_t1165263720;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t4087230954;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t581172200;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_Sockets_AddressFamily303362630.h"
#include "System_System_Net_Sockets_Socket3821512045.h"
#include "System_System_Net_Sockets_LingerOption1165263720.h"
#include "System_System_Net_IPEndPoint2615413766.h"

// System.Void System.Net.Sockets.TcpClient::.ctor()
extern "C"  void TcpClient__ctor_m1345314116 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::.ctor(System.String,System.Int32)
extern "C"  void TcpClient__ctor_m4115769373 (TcpClient_t408947970 * __this, String_t* ___hostname0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::System.IDisposable.Dispose()
extern "C"  void TcpClient_System_IDisposable_Dispose_m129910969 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Init(System.Net.Sockets.AddressFamily)
extern "C"  void TcpClient_Init_m2339200298 (TcpClient_t408947970 * __this, int32_t ___family0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::get_Client()
extern "C"  Socket_t3821512045 * TcpClient_get_Client_m1235642080 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_Client(System.Net.Sockets.Socket)
extern "C"  void TcpClient_set_Client_m4148144365 (TcpClient_t408947970 * __this, Socket_t3821512045 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::SetTcpClient(System.Net.Sockets.Socket)
extern "C"  void TcpClient_SetTcpClient_m3061804461 (TcpClient_t408947970 * __this, Socket_t3821512045 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_LingerState(System.Net.Sockets.LingerOption)
extern "C"  void TcpClient_set_LingerState_m3477990545 (TcpClient_t408947970 * __this, LingerOption_t1165263720 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_NoDelay(System.Boolean)
extern "C"  void TcpClient_set_NoDelay_m2324075952 (TcpClient_t408947970 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_ReceiveBufferSize(System.Int32)
extern "C"  void TcpClient_set_ReceiveBufferSize_m767850684 (TcpClient_t408947970 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_ReceiveTimeout(System.Int32)
extern "C"  void TcpClient_set_ReceiveTimeout_m4062746526 (TcpClient_t408947970 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_SendBufferSize(System.Int32)
extern "C"  void TcpClient_set_SendBufferSize_m2457309563 (TcpClient_t408947970 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_SendTimeout(System.Int32)
extern "C"  void TcpClient_set_SendTimeout_m99119269 (TcpClient_t408947970 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Close()
extern "C"  void TcpClient_Close_m4260227760 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Connect(System.Net.IPEndPoint)
extern "C"  void TcpClient_Connect_m1389318066 (TcpClient_t408947970 * __this, IPEndPoint_t2615413766 * ___remote_end_point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::SetOptions()
extern "C"  void TcpClient_SetOptions_m4193888196 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Connect(System.String,System.Int32)
extern "C"  void TcpClient_Connect_m3290596007 (TcpClient_t408947970 * __this, String_t* ___hostname0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Connect(System.Net.IPAddress[],System.Int32)
extern "C"  void TcpClient_Connect_m2581176912 (TcpClient_t408947970 * __this, IPAddressU5BU5D_t4087230954* ___ipAddresses0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Dispose(System.Boolean)
extern "C"  void TcpClient_Dispose_m2105752024 (TcpClient_t408947970 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Finalize()
extern "C"  void TcpClient_Finalize_m3794615336 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
extern "C"  NetworkStream_t581172200 * TcpClient_GetStream_m872175179 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::CheckDisposed()
extern "C"  void TcpClient_CheckDisposed_m3605359959 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
