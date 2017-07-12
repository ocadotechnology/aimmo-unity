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

// UnitySocketIO.SocketIOController
struct SocketIOController_t1449623431;
// System.String
struct String_t;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`1<UnitySocketIO.Events.SocketIOEvent>
struct Action_1_t1398723601;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnitySocketIO.SocketIOController::.ctor()
extern "C"  void SocketIOController__ctor_m3315049980 (SocketIOController_t1449623431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnitySocketIO.SocketIOController::get_SocketID()
extern "C"  String_t* SocketIOController_get_SocketID_m3229648050 (SocketIOController_t1449623431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIOController::ResetSettings()
extern "C"  void SocketIOController_ResetSettings_m3091155294 (SocketIOController_t1449623431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIOController::Awake()
extern "C"  void SocketIOController_Awake_m1427240617 (SocketIOController_t1449623431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIOController::Connect()
extern "C"  void SocketIOController_Connect_m3874667086 (SocketIOController_t1449623431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIOController::Close()
extern "C"  void SocketIOController_Close_m739494364 (SocketIOController_t1449623431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIOController::Emit(System.String)
extern "C"  void SocketIOController_Emit_m425410835 (SocketIOController_t1449623431 * __this, String_t* ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIOController::Emit(System.String,System.Action`1<System.String>)
extern "C"  void SocketIOController_Emit_m1104068927 (SocketIOController_t1449623431 * __this, String_t* ___e0, Action_1_t1831019615 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIOController::Emit(System.String,System.String)
extern "C"  void SocketIOController_Emit_m331114021 (SocketIOController_t1449623431 * __this, String_t* ___e0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIOController::Emit(System.String,System.String,System.Action`1<System.String>)
extern "C"  void SocketIOController_Emit_m2804920565 (SocketIOController_t1449623431 * __this, String_t* ___e0, String_t* ___data1, Action_1_t1831019615 * ___action2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIOController::On(System.String,System.Action`1<UnitySocketIO.Events.SocketIOEvent>)
extern "C"  void SocketIOController_On_m2307989793 (SocketIOController_t1449623431 * __this, String_t* ___e0, Action_1_t1398723601 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocketIO.SocketIOController::Off(System.String,System.Action`1<UnitySocketIO.Events.SocketIOEvent>)
extern "C"  void SocketIOController_Off_m327569187 (SocketIOController_t1449623431 * __this, String_t* ___e0, Action_1_t1398723601 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
