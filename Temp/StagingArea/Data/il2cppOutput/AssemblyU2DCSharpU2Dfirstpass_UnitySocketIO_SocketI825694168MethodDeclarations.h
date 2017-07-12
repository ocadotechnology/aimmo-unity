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

// UnitySocketIO.SocketIO.NativeSocketIO
struct NativeSocketIO_t825694168;
// WebSocketSharp.WebSocket
struct WebSocket_t3268376029;
// UnitySocketIO.SocketIO.SocketIOSettings
struct SocketIOSettings_t1163596848;
// System.String
struct String_t;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`1<UnitySocketIO.Events.SocketIOEvent>
struct Action_1_t1398723601;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t3289624707;
// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_t2890051726;
// WebSocketSharp.ErrorEventArgs
struct ErrorEventArgs_t502222999;
// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t344507773;
// UnitySocketIO.Packet.SocketPacket
struct SocketPacket_t3208513681;
// UnitySocketIO.Events.SocketIOEvent
struct SocketIOEvent_t1596924219;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnitySocketIO_Socket1163596848.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_EventArgs3289624707.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Messa2890051726.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_ErrorE502222999.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_CloseE344507773.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnitySocketIO_Packet3208513681.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnitySocketIO_Events1596924219.h"

// System.Void UnitySocketIO.SocketIO.NativeSocketIO::.ctor()
extern "C"  void NativeSocketIO__ctor_m1071102542 (NativeSocketIO_t825694168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocket UnitySocketIO.SocketIO.NativeSocketIO::get_Socket()
extern "C"  WebSocket_t3268376029 * NativeSocketIO_get_Socket_m536098829 (NativeSocketIO_t825694168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitySocketIO.SocketIO.NativeSocketIO::get_IsConnected()
extern "C"  bool NativeSocketIO_get_IsConnected_m1551616884 (NativeSocketIO_t825694168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::Init(UnitySocketIO.SocketIO.SocketIOSettings)
extern "C"  void NativeSocketIO_Init_m2128706879 (NativeSocketIO_t825694168 * __this, SocketIOSettings_t1163596848 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::Update()
extern "C"  void NativeSocketIO_Update_m1235126609 (NativeSocketIO_t825694168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::Connect()
extern "C"  void NativeSocketIO_Connect_m3978472308 (NativeSocketIO_t825694168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::Close()
extern "C"  void NativeSocketIO_Close_m1513130518 (NativeSocketIO_t825694168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::Emit(System.String)
extern "C"  void NativeSocketIO_Emit_m4013354595 (NativeSocketIO_t825694168 * __this, String_t* ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::Emit(System.String,System.Action`1<System.String>)
extern "C"  void NativeSocketIO_Emit_m3194720511 (NativeSocketIO_t825694168 * __this, String_t* ___e0, Action_1_t1831019615 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::Emit(System.String,System.String)
extern "C"  void NativeSocketIO_Emit_m3935344321 (NativeSocketIO_t825694168 * __this, String_t* ___e0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::Emit(System.String,System.String,System.Action`1<System.String>)
extern "C"  void NativeSocketIO_Emit_m2817257961 (NativeSocketIO_t825694168 * __this, String_t* ___e0, String_t* ___data1, Action_1_t1831019615 * ___action2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::On(System.String,System.Action`1<UnitySocketIO.Events.SocketIOEvent>)
extern "C"  void NativeSocketIO_On_m3908230397 (NativeSocketIO_t825694168 * __this, String_t* ___e0, Action_1_t1398723601 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::Off(System.String,System.Action`1<UnitySocketIO.Events.SocketIOEvent>)
extern "C"  void NativeSocketIO_Off_m408039587 (NativeSocketIO_t825694168 * __this, String_t* ___e0, Action_1_t1398723601 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::OnDestroy()
extern "C"  void NativeSocketIO_OnDestroy_m3129067579 (NativeSocketIO_t825694168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::OnApplicationQuit()
extern "C"  void NativeSocketIO_OnApplicationQuit_m1332198344 (NativeSocketIO_t825694168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::OnSocketOpen(System.Object,System.EventArgs)
extern "C"  void NativeSocketIO_OnSocketOpen_m1574942616 (NativeSocketIO_t825694168 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::OnSocketMessage(System.Object,WebSocketSharp.MessageEventArgs)
extern "C"  void NativeSocketIO_OnSocketMessage_m3100651140 (NativeSocketIO_t825694168 * __this, Il2CppObject * ___sender0, MessageEventArgs_t2890051726 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::OnSocketError(System.Object,WebSocketSharp.ErrorEventArgs)
extern "C"  void NativeSocketIO_OnSocketError_m2864786710 (NativeSocketIO_t825694168 * __this, Il2CppObject * ___sender0, ErrorEventArgs_t502222999 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::OnSocketClose(System.Object,WebSocketSharp.CloseEventArgs)
extern "C"  void NativeSocketIO_OnSocketClose_m1301971582 (NativeSocketIO_t825694168 * __this, Il2CppObject * ___sender0, CloseEventArgs_t344507773 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::SocketThread(System.Object)
extern "C"  void NativeSocketIO_SocketThread_m4120530189 (NativeSocketIO_t825694168 * __this, Il2CppObject * ____obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::PingThread(System.Object)
extern "C"  void NativeSocketIO_PingThread_m1791024 (NativeSocketIO_t825694168 * __this, Il2CppObject * ____obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::HandleOpen(UnitySocketIO.Packet.SocketPacket)
extern "C"  void NativeSocketIO_HandleOpen_m368849783 (NativeSocketIO_t825694168 * __this, SocketPacket_t3208513681 * ___packet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::HandleMessage(UnitySocketIO.Packet.SocketPacket)
extern "C"  void NativeSocketIO_HandleMessage_m4192860068 (NativeSocketIO_t825694168 * __this, SocketPacket_t3208513681 * ___packet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::HandlePing()
extern "C"  void NativeSocketIO_HandlePing_m2000636162 (NativeSocketIO_t825694168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::HandlePong()
extern "C"  void NativeSocketIO_HandlePong_m2000633984 (NativeSocketIO_t825694168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::EmitEvent(System.String)
extern "C"  void NativeSocketIO_EmitEvent_m3449167883 (NativeSocketIO_t825694168 * __this, String_t* ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::EmitEvent(UnitySocketIO.Events.SocketIOEvent)
extern "C"  void NativeSocketIO_EmitEvent_m2502588029 (NativeSocketIO_t825694168 * __this, SocketIOEvent_t1596924219 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::EmitMessage(System.Int32,System.String)
extern "C"  void NativeSocketIO_EmitMessage_m2542968685 (NativeSocketIO_t825694168 * __this, int32_t ___id0, String_t* ___json1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::EmitClose()
extern "C"  void NativeSocketIO_EmitClose_m4243762619 (NativeSocketIO_t825694168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::EmitPacket(UnitySocketIO.Packet.SocketPacket)
extern "C"  void NativeSocketIO_EmitPacket_m3179267244 (NativeSocketIO_t825694168 * __this, SocketPacket_t3208513681 * ___packet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.NativeSocketIO::InvokeAck(UnitySocketIO.Packet.SocketPacket)
extern "C"  void NativeSocketIO_InvokeAck_m3117071064 (NativeSocketIO_t825694168 * __this, SocketPacket_t3208513681 * ___packet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
