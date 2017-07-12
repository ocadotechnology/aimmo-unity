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

// UnitySocketIO.SocketIO.WebGLSocketIO
struct WebGLSocketIO_t4006278438;
// UnitySocketIO.SocketIO.SocketIOSettings
struct SocketIOSettings_t1163596848;
// System.String
struct String_t;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`1<UnitySocketIO.Events.SocketIOEvent>
struct Action_1_t1398723601;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnitySocketIO_Socket1163596848.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnitySocketIO.SocketIO.WebGLSocketIO::.ctor()
extern "C"  void WebGLSocketIO__ctor_m4226586934 (WebGLSocketIO_t4006278438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.WebGLSocketIO::Init(UnitySocketIO.SocketIO.SocketIOSettings)
extern "C"  void WebGLSocketIO_Init_m2764777581 (WebGLSocketIO_t4006278438 * __this, SocketIOSettings_t1163596848 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.WebGLSocketIO::SetSocketID(System.String)
extern "C"  void WebGLSocketIO_SetSocketID_m4110411092 (WebGLSocketIO_t4006278438 * __this, String_t* ___socketID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.WebGLSocketIO::AddSocketIO()
extern "C"  void WebGLSocketIO_AddSocketIO_m2010981352 (WebGLSocketIO_t4006278438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.WebGLSocketIO::AddEventListeners()
extern "C"  void WebGLSocketIO_AddEventListeners_m3086550496 (WebGLSocketIO_t4006278438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.WebGLSocketIO::Connect()
extern "C"  void WebGLSocketIO_Connect_m2498977048 (WebGLSocketIO_t4006278438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.WebGLSocketIO::Close()
extern "C"  void WebGLSocketIO_Close_m610522582 (WebGLSocketIO_t4006278438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.WebGLSocketIO::Emit(System.String)
extern "C"  void WebGLSocketIO_Emit_m1154292769 (WebGLSocketIO_t4006278438 * __this, String_t* ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.WebGLSocketIO::Emit(System.String,System.String)
extern "C"  void WebGLSocketIO_Emit_m707347575 (WebGLSocketIO_t4006278438 * __this, String_t* ___e0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.WebGLSocketIO::Emit(System.String,System.Action`1<System.String>)
extern "C"  void WebGLSocketIO_Emit_m3571321641 (WebGLSocketIO_t4006278438 * __this, String_t* ___e0, Action_1_t1831019615 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.WebGLSocketIO::Emit(System.String,System.String,System.Action`1<System.String>)
extern "C"  void WebGLSocketIO_Emit_m660048027 (WebGLSocketIO_t4006278438 * __this, String_t* ___e0, String_t* ___data1, Action_1_t1831019615 * ___action2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.WebGLSocketIO::On(System.String,System.Action`1<UnitySocketIO.Events.SocketIOEvent>)
extern "C"  void WebGLSocketIO_On_m3616712627 (WebGLSocketIO_t4006278438 * __this, String_t* ___e0, Action_1_t1398723601 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.WebGLSocketIO::Off(System.String,System.Action`1<UnitySocketIO.Events.SocketIOEvent>)
extern "C"  void WebGLSocketIO_Off_m619811305 (WebGLSocketIO_t4006278438 * __this, String_t* ___e0, Action_1_t1398723601 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.WebGLSocketIO::InvokeAck(System.String)
extern "C"  void WebGLSocketIO_InvokeAck_m1433485401 (WebGLSocketIO_t4006278438 * __this, String_t* ___ackJson0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.WebGLSocketIO::InvokeEventCallback(System.String)
extern "C"  void WebGLSocketIO_InvokeEventCallback_m4016400457 (WebGLSocketIO_t4006278438 * __this, String_t* ___eventJson0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
