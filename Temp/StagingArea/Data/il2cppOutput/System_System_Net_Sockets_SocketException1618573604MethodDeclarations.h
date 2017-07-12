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

// System.Net.Sockets.SocketException
struct SocketException_t1618573604;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_Sockets_SocketError307542793.h"

// System.Void System.Net.Sockets.SocketException::.ctor()
extern "C"  void SocketException__ctor_m3091412954 (SocketException_t1618573604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
extern "C"  void SocketException__ctor_m3936563379 (SocketException_t1618573604 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SocketException__ctor_m3168076933 (SocketException_t1618573604 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32,System.String)
extern "C"  void SocketException__ctor_m3265379601 (SocketException_t1618573604 * __this, int32_t ___error0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketException::WSAGetLastError_internal()
extern "C"  int32_t SocketException_WSAGetLastError_internal_m660574837 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketException::get_ErrorCode()
extern "C"  int32_t SocketException_get_ErrorCode_m730814730 (SocketException_t1618573604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
extern "C"  int32_t SocketException_get_SocketErrorCode_m3898993591 (SocketException_t1618573604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Sockets.SocketException::get_Message()
extern "C"  String_t* SocketException_get_Message_m375003705 (SocketException_t1618573604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
