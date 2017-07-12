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

// UnitySocketIO.SocketIO.BaseSocketIO
struct BaseSocketIO_t938190752;
// System.String
struct String_t;
// UnitySocketIO.SocketIO.SocketIOSettings
struct SocketIOSettings_t1163596848;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`1<UnitySocketIO.Events.SocketIOEvent>
struct Action_1_t1398723601;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnitySocketIO_Socket1163596848.h"

// System.Void UnitySocketIO.SocketIO.BaseSocketIO::.ctor()
extern "C"  void BaseSocketIO__ctor_m567374796 (BaseSocketIO_t938190752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnitySocketIO.SocketIO.BaseSocketIO::get_SocketID()
extern "C"  String_t* BaseSocketIO_get_SocketID_m2171763948 (BaseSocketIO_t938190752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.BaseSocketIO::set_SocketID(System.String)
extern "C"  void BaseSocketIO_set_SocketID_m3267609775 (BaseSocketIO_t938190752 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.BaseSocketIO::Init(UnitySocketIO.SocketIO.SocketIOSettings)
extern "C"  void BaseSocketIO_Init_m3002828287 (BaseSocketIO_t938190752 * __this, SocketIOSettings_t1163596848 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.BaseSocketIO::Connect()
extern "C"  void BaseSocketIO_Connect_m3894717274 (BaseSocketIO_t938190752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.BaseSocketIO::Close()
extern "C"  void BaseSocketIO_Close_m3904540192 (BaseSocketIO_t938190752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.BaseSocketIO::Emit(System.String)
extern "C"  void BaseSocketIO_Emit_m3238186459 (BaseSocketIO_t938190752 * __this, String_t* ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.BaseSocketIO::Emit(System.String,System.Action`1<System.String>)
extern "C"  void BaseSocketIO_Emit_m3039214071 (BaseSocketIO_t938190752 * __this, String_t* ___e0, Action_1_t1831019615 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.BaseSocketIO::Emit(System.String,System.String)
extern "C"  void BaseSocketIO_Emit_m4050376497 (BaseSocketIO_t938190752 * __this, String_t* ___e0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.BaseSocketIO::Emit(System.String,System.String,System.Action`1<System.String>)
extern "C"  void BaseSocketIO_Emit_m899976409 (BaseSocketIO_t938190752 * __this, String_t* ___e0, String_t* ___data1, Action_1_t1831019615 * ___action2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.BaseSocketIO::On(System.String,System.Action`1<UnitySocketIO.Events.SocketIOEvent>)
extern "C"  void BaseSocketIO_On_m1996595445 (BaseSocketIO_t938190752 * __this, String_t* ___e0, Action_1_t1398723601 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIO.BaseSocketIO::Off(System.String,System.Action`1<UnitySocketIO.Events.SocketIOEvent>)
extern "C"  void BaseSocketIO_Off_m999439291 (BaseSocketIO_t938190752 * __this, String_t* ___e0, Action_1_t1398723601 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
