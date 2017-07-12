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

// WebSocketSharp.Server.WebSocketSessionManager
struct WebSocketSessionManager_t2802512518;
// WebSocketSharp.Logger
struct Logger_t2598199114;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// WebSocketSharp.Server.IWebSocketSession
struct IWebSocketSession_t1432056748;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Server.IWebSocketSession>
struct IEnumerable_1_t1724183793;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Action
struct Action_t3226471752;
// System.IO.Stream
struct Stream_t3255436806;
// System.Collections.Generic.Dictionary`2<WebSocketSharp.CompressionMethod,System.Byte[]>
struct Dictionary_2_t1575245043;
// System.Collections.Generic.Dictionary`2<WebSocketSharp.CompressionMethod,System.IO.Stream>
struct Dictionary_2_t1433347836;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1445386684;
// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t344507773;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.Object
struct Il2CppObject;
// System.Timers.ElapsedEventArgs
struct ElapsedEventArgs_t1664828133;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Logge2598199114.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Serve3054640078.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Opcod2313788840.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_CloseE344507773.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Close2945181741.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Timers_ElapsedEventArgs1664828133.h"

// System.Void WebSocketSharp.Server.WebSocketSessionManager::.ctor()
extern "C"  void WebSocketSessionManager__ctor_m55206773 (WebSocketSessionManager_t2802512518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::.ctor(WebSocketSharp.Logger)
extern "C"  void WebSocketSessionManager__ctor_m2602178038 (WebSocketSessionManager_t2802512518 * __this, Logger_t2598199114 * ___logger0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Server.ServerState WebSocketSharp.Server.WebSocketSessionManager::get_State()
extern "C"  int32_t WebSocketSessionManager_get_State_m3037255870 (WebSocketSessionManager_t2802512518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Server.WebSocketSessionManager::get_ActiveIDs()
extern "C"  Il2CppObject* WebSocketSessionManager_get_ActiveIDs_m921646928 (WebSocketSessionManager_t2802512518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Server.WebSocketSessionManager::get_Count()
extern "C"  int32_t WebSocketSessionManager_get_Count_m2985309809 (WebSocketSessionManager_t2802512518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Server.WebSocketSessionManager::get_IDs()
extern "C"  Il2CppObject* WebSocketSessionManager_get_IDs_m1081930278 (WebSocketSessionManager_t2802512518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Server.WebSocketSessionManager::get_InactiveIDs()
extern "C"  Il2CppObject* WebSocketSessionManager_get_InactiveIDs_m3236544039 (WebSocketSessionManager_t2802512518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Server.IWebSocketSession WebSocketSharp.Server.WebSocketSessionManager::get_Item(System.String)
extern "C"  Il2CppObject * WebSocketSessionManager_get_Item_m956899536 (WebSocketSessionManager_t2802512518 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketSessionManager::get_KeepClean()
extern "C"  bool WebSocketSessionManager_get_KeepClean_m3182171978 (WebSocketSessionManager_t2802512518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::set_KeepClean(System.Boolean)
extern "C"  void WebSocketSessionManager_set_KeepClean_m1425391261 (WebSocketSessionManager_t2802512518 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Server.IWebSocketSession> WebSocketSharp.Server.WebSocketSessionManager::get_Sessions()
extern "C"  Il2CppObject* WebSocketSessionManager_get_Sessions_m205604647 (WebSocketSessionManager_t2802512518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan WebSocketSharp.Server.WebSocketSessionManager::get_WaitTime()
extern "C"  TimeSpan_t3430258949  WebSocketSessionManager_get_WaitTime_m209218283 (WebSocketSessionManager_t2802512518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::set_WaitTime(System.TimeSpan)
extern "C"  void WebSocketSessionManager_set_WaitTime_m2799891178 (WebSocketSessionManager_t2802512518 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::broadcast(WebSocketSharp.Opcode,System.Byte[],System.Action)
extern "C"  void WebSocketSessionManager_broadcast_m3999853637 (WebSocketSessionManager_t2802512518 * __this, uint8_t ___opcode0, ByteU5BU5D_t3397334013* ___data1, Action_t3226471752 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::broadcast(WebSocketSharp.Opcode,System.IO.Stream,System.Action)
extern "C"  void WebSocketSessionManager_broadcast_m3147886897 (WebSocketSessionManager_t2802512518 * __this, uint8_t ___opcode0, Stream_t3255436806 * ___stream1, Action_t3226471752 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::broadcastAsync(WebSocketSharp.Opcode,System.Byte[],System.Action)
extern "C"  void WebSocketSessionManager_broadcastAsync_m1611704471 (WebSocketSessionManager_t2802512518 * __this, uint8_t ___opcode0, ByteU5BU5D_t3397334013* ___data1, Action_t3226471752 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::broadcastAsync(WebSocketSharp.Opcode,System.IO.Stream,System.Action)
extern "C"  void WebSocketSessionManager_broadcastAsync_m1935067415 (WebSocketSessionManager_t2802512518 * __this, uint8_t ___opcode0, Stream_t3255436806 * ___stream1, Action_t3226471752 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.WebSocketSessionManager::createID()
extern "C"  String_t* WebSocketSessionManager_createID_m2803102861 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::setSweepTimer(System.Double)
extern "C"  void WebSocketSessionManager_setSweepTimer_m2554761122 (WebSocketSessionManager_t2802512518 * __this, double ___interval0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketSessionManager::tryGetSession(System.String,WebSocketSharp.Server.IWebSocketSession&)
extern "C"  bool WebSocketSessionManager_tryGetSession_m325202478 (WebSocketSessionManager_t2802512518 * __this, String_t* ___id0, Il2CppObject ** ___session1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.WebSocketSessionManager::Add(WebSocketSharp.Server.IWebSocketSession)
extern "C"  String_t* WebSocketSessionManager_Add_m2176169295 (WebSocketSessionManager_t2802512518 * __this, Il2CppObject * ___session0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::Broadcast(WebSocketSharp.Opcode,System.Byte[],System.Collections.Generic.Dictionary`2<WebSocketSharp.CompressionMethod,System.Byte[]>)
extern "C"  void WebSocketSessionManager_Broadcast_m2762631656 (WebSocketSessionManager_t2802512518 * __this, uint8_t ___opcode0, ByteU5BU5D_t3397334013* ___data1, Dictionary_2_t1575245043 * ___cache2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::Broadcast(WebSocketSharp.Opcode,System.IO.Stream,System.Collections.Generic.Dictionary`2<WebSocketSharp.CompressionMethod,System.IO.Stream>)
extern "C"  void WebSocketSessionManager_Broadcast_m1034427024 (WebSocketSessionManager_t2802512518 * __this, uint8_t ___opcode0, Stream_t3255436806 * ___stream1, Dictionary_2_t1433347836 * ___cache2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> WebSocketSharp.Server.WebSocketSessionManager::Broadping(System.Byte[],System.TimeSpan)
extern "C"  Dictionary_2_t1445386684 * WebSocketSessionManager_Broadping_m2612001087 (WebSocketSessionManager_t2802512518 * __this, ByteU5BU5D_t3397334013* ___frameAsBytes0, TimeSpan_t3430258949  ___timeout1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketSessionManager::Remove(System.String)
extern "C"  bool WebSocketSessionManager_Remove_m2445508317 (WebSocketSessionManager_t2802512518 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::Start()
extern "C"  void WebSocketSessionManager_Start_m1988420005 (WebSocketSessionManager_t2802512518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::Stop(WebSocketSharp.CloseEventArgs,System.Byte[],System.Boolean)
extern "C"  void WebSocketSessionManager_Stop_m1022228727 (WebSocketSessionManager_t2802512518 * __this, CloseEventArgs_t344507773 * ___e0, ByteU5BU5D_t3397334013* ___frameAsBytes1, bool ___receive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::Broadcast(System.Byte[])
extern "C"  void WebSocketSessionManager_Broadcast_m3547983281 (WebSocketSessionManager_t2802512518 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::Broadcast(System.String)
extern "C"  void WebSocketSessionManager_Broadcast_m1934338256 (WebSocketSessionManager_t2802512518 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::BroadcastAsync(System.Byte[],System.Action)
extern "C"  void WebSocketSessionManager_BroadcastAsync_m144493274 (WebSocketSessionManager_t2802512518 * __this, ByteU5BU5D_t3397334013* ___data0, Action_t3226471752 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::BroadcastAsync(System.String,System.Action)
extern "C"  void WebSocketSessionManager_BroadcastAsync_m1837483179 (WebSocketSessionManager_t2802512518 * __this, String_t* ___data0, Action_t3226471752 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::BroadcastAsync(System.IO.Stream,System.Int32,System.Action)
extern "C"  void WebSocketSessionManager_BroadcastAsync_m277263343 (WebSocketSessionManager_t2802512518 * __this, Stream_t3255436806 * ___stream0, int32_t ___length1, Action_t3226471752 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> WebSocketSharp.Server.WebSocketSessionManager::Broadping()
extern "C"  Dictionary_2_t1445386684 * WebSocketSessionManager_Broadping_m392708240 (WebSocketSessionManager_t2802512518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> WebSocketSharp.Server.WebSocketSessionManager::Broadping(System.String)
extern "C"  Dictionary_2_t1445386684 * WebSocketSessionManager_Broadping_m918399814 (WebSocketSessionManager_t2802512518 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::CloseSession(System.String)
extern "C"  void WebSocketSessionManager_CloseSession_m3874979703 (WebSocketSessionManager_t2802512518 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::CloseSession(System.String,System.UInt16,System.String)
extern "C"  void WebSocketSessionManager_CloseSession_m3756316567 (WebSocketSessionManager_t2802512518 * __this, String_t* ___id0, uint16_t ___code1, String_t* ___reason2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::CloseSession(System.String,WebSocketSharp.CloseStatusCode,System.String)
extern "C"  void WebSocketSessionManager_CloseSession_m3993252201 (WebSocketSessionManager_t2802512518 * __this, String_t* ___id0, uint16_t ___code1, String_t* ___reason2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketSessionManager::PingTo(System.String)
extern "C"  bool WebSocketSessionManager_PingTo_m38841956 (WebSocketSessionManager_t2802512518 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketSessionManager::PingTo(System.String,System.String)
extern "C"  bool WebSocketSessionManager_PingTo_m537229272 (WebSocketSessionManager_t2802512518 * __this, String_t* ___message0, String_t* ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::SendTo(System.Byte[],System.String)
extern "C"  void WebSocketSessionManager_SendTo_m3719635947 (WebSocketSessionManager_t2802512518 * __this, ByteU5BU5D_t3397334013* ___data0, String_t* ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::SendTo(System.String,System.String)
extern "C"  void WebSocketSessionManager_SendTo_m12154316 (WebSocketSessionManager_t2802512518 * __this, String_t* ___data0, String_t* ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::SendToAsync(System.Byte[],System.String,System.Action`1<System.Boolean>)
extern "C"  void WebSocketSessionManager_SendToAsync_m3519770502 (WebSocketSessionManager_t2802512518 * __this, ByteU5BU5D_t3397334013* ___data0, String_t* ___id1, Action_1_t3627374100 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::SendToAsync(System.String,System.String,System.Action`1<System.Boolean>)
extern "C"  void WebSocketSessionManager_SendToAsync_m4128336653 (WebSocketSessionManager_t2802512518 * __this, String_t* ___data0, String_t* ___id1, Action_1_t3627374100 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::SendToAsync(System.IO.Stream,System.Int32,System.String,System.Action`1<System.Boolean>)
extern "C"  void WebSocketSessionManager_SendToAsync_m4249664789 (WebSocketSessionManager_t2802512518 * __this, Stream_t3255436806 * ___stream0, int32_t ___length1, String_t* ___id2, Action_1_t3627374100 * ___completed3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::Sweep()
extern "C"  void WebSocketSessionManager_Sweep_m1099484241 (WebSocketSessionManager_t2802512518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketSessionManager::TryGetSession(System.String,WebSocketSharp.Server.IWebSocketSession&)
extern "C"  bool WebSocketSessionManager_TryGetSession_m3992989518 (WebSocketSessionManager_t2802512518 * __this, String_t* ___id0, Il2CppObject ** ___session1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::<setSweepTimer>m__0(System.Object,System.Timers.ElapsedEventArgs)
extern "C"  void WebSocketSessionManager_U3CsetSweepTimerU3Em__0_m4226175285 (WebSocketSessionManager_t2802512518 * __this, Il2CppObject * ___sender0, ElapsedEventArgs_t1664828133 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
