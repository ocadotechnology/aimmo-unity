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

// WorldControls
struct WorldControls_t3823314646;
// System.String
struct String_t;
// UnitySocketIO.Events.SocketIOEvent
struct SocketIOEvent_t1596924219;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnitySocketIO_Events1596924219.h"

// System.Void WorldControls::.ctor()
extern "C"  void WorldControls__ctor_m403217249 (WorldControls_t3823314646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldControls::SetGameURL(System.String)
extern "C"  void WorldControls_SetGameURL_m1376773896 (WorldControls_t3823314646 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldControls::SetGamePort(System.Int32)
extern "C"  void WorldControls_SetGamePort_m2765679133 (WorldControls_t3823314646 * __this, int32_t ___port0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldControls::EstablishConnection()
extern "C"  void WorldControls_EstablishConnection_m3724340158 (WorldControls_t3823314646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldControls::WorldInit(System.String)
extern "C"  void WorldControls_WorldInit_m156020159 (WorldControls_t3823314646 * __this, String_t* ___rawMap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldControls::WorldUpdate(System.String)
extern "C"  void WorldControls_WorldUpdate_m886270326 (WorldControls_t3823314646 * __this, String_t* ___rawPlayersList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldControls::CreatePlayer(System.String,System.Single,System.Single)
extern "C"  void WorldControls_CreatePlayer_m2161774242 (WorldControls_t3823314646 * __this, String_t* ___id0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldControls::<EstablishConnection>m__0(UnitySocketIO.Events.SocketIOEvent)
extern "C"  void WorldControls_U3CEstablishConnectionU3Em__0_m3125733599 (Il2CppObject * __this /* static, unused */, SocketIOEvent_t1596924219 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldControls::<EstablishConnection>m__1(UnitySocketIO.Events.SocketIOEvent)
extern "C"  void WorldControls_U3CEstablishConnectionU3Em__1_m881444932 (WorldControls_t3823314646 * __this, SocketIOEvent_t1596924219 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldControls::<EstablishConnection>m__2(UnitySocketIO.Events.SocketIOEvent)
extern "C"  void WorldControls_U3CEstablishConnectionU3Em__2_m2962776105 (WorldControls_t3823314646 * __this, SocketIOEvent_t1596924219 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
