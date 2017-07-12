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

// WebSocketSharp.Server.WebSocketServiceManager
struct WebSocketServiceManager_t1683165547;
// WebSocketSharp.Logger
struct Logger_t2598199114;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Server.WebSocketServiceHost>
struct IEnumerable_1_t784233539;
// WebSocketSharp.Server.WebSocketServiceHost
struct WebSocketServiceHost_t492106494;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Action
struct Action_t3226471752;
// System.IO.Stream
struct Stream_t3255436806;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Boolean>>
struct Dictionary_2_t3360165946;
// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t344507773;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Logge2598199114.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Opcod2313788840.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Server492106494.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_CloseE344507773.h"

// System.Void WebSocketSharp.Server.WebSocketServiceManager::.ctor()
extern "C"  void WebSocketServiceManager__ctor_m1894928698 (WebSocketServiceManager_t1683165547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::.ctor(WebSocketSharp.Logger)
extern "C"  void WebSocketServiceManager__ctor_m1594407217 (WebSocketServiceManager_t1683165547 * __this, Logger_t2598199114 * ___logger0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Server.WebSocketServiceManager::get_Count()
extern "C"  int32_t WebSocketServiceManager_get_Count_m3294099928 (WebSocketServiceManager_t1683165547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Server.WebSocketServiceHost> WebSocketSharp.Server.WebSocketServiceManager::get_Hosts()
extern "C"  Il2CppObject* WebSocketServiceManager_get_Hosts_m1211441776 (WebSocketServiceManager_t1683165547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Server.WebSocketServiceHost WebSocketSharp.Server.WebSocketServiceManager::get_Item(System.String)
extern "C"  WebSocketServiceHost_t492106494 * WebSocketServiceManager_get_Item_m3052112263 (WebSocketServiceManager_t1683165547 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServiceManager::get_KeepClean()
extern "C"  bool WebSocketServiceManager_get_KeepClean_m2827777981 (WebSocketServiceManager_t1683165547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::set_KeepClean(System.Boolean)
extern "C"  void WebSocketServiceManager_set_KeepClean_m4092477106 (WebSocketServiceManager_t1683165547 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Server.WebSocketServiceManager::get_Paths()
extern "C"  Il2CppObject* WebSocketServiceManager_get_Paths_m4028216083 (WebSocketServiceManager_t1683165547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Server.WebSocketServiceManager::get_SessionCount()
extern "C"  int32_t WebSocketServiceManager_get_SessionCount_m1907893152 (WebSocketServiceManager_t1683165547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan WebSocketSharp.Server.WebSocketServiceManager::get_WaitTime()
extern "C"  TimeSpan_t3430258949  WebSocketServiceManager_get_WaitTime_m3520919842 (WebSocketServiceManager_t1683165547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::set_WaitTime(System.TimeSpan)
extern "C"  void WebSocketServiceManager_set_WaitTime_m2826925827 (WebSocketServiceManager_t1683165547 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::broadcast(WebSocketSharp.Opcode,System.Byte[],System.Action)
extern "C"  void WebSocketServiceManager_broadcast_m4141209776 (WebSocketServiceManager_t1683165547 * __this, uint8_t ___opcode0, ByteU5BU5D_t3397334013* ___data1, Action_t3226471752 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::broadcast(WebSocketSharp.Opcode,System.IO.Stream,System.Action)
extern "C"  void WebSocketServiceManager_broadcast_m1420717976 (WebSocketServiceManager_t1683165547 * __this, uint8_t ___opcode0, Stream_t3255436806 * ___stream1, Action_t3226471752 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::broadcastAsync(WebSocketSharp.Opcode,System.Byte[],System.Action)
extern "C"  void WebSocketServiceManager_broadcastAsync_m3038232300 (WebSocketServiceManager_t1683165547 * __this, uint8_t ___opcode0, ByteU5BU5D_t3397334013* ___data1, Action_t3226471752 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::broadcastAsync(WebSocketSharp.Opcode,System.IO.Stream,System.Action)
extern "C"  void WebSocketServiceManager_broadcastAsync_m3849961904 (WebSocketServiceManager_t1683165547 * __this, uint8_t ___opcode0, Stream_t3255436806 * ___stream1, Action_t3226471752 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Boolean>> WebSocketSharp.Server.WebSocketServiceManager::broadping(System.Byte[],System.TimeSpan)
extern "C"  Dictionary_2_t3360165946 * WebSocketServiceManager_broadping_m3287096357 (WebSocketServiceManager_t1683165547 * __this, ByteU5BU5D_t3397334013* ___frameAsBytes0, TimeSpan_t3430258949  ___timeout1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServiceManager::InternalTryGetServiceHost(System.String,WebSocketSharp.Server.WebSocketServiceHost&)
extern "C"  bool WebSocketServiceManager_InternalTryGetServiceHost_m1116833073 (WebSocketServiceManager_t1683165547 * __this, String_t* ___path0, WebSocketServiceHost_t492106494 ** ___host1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServiceManager::Remove(System.String)
extern "C"  bool WebSocketServiceManager_Remove_m102893220 (WebSocketServiceManager_t1683165547 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::Start()
extern "C"  void WebSocketServiceManager_Start_m121897182 (WebSocketServiceManager_t1683165547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::Stop(WebSocketSharp.CloseEventArgs,System.Boolean,System.Boolean)
extern "C"  void WebSocketServiceManager_Stop_m2816554260 (WebSocketServiceManager_t1683165547 * __this, CloseEventArgs_t344507773 * ___e0, bool ___send1, bool ___receive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::Broadcast(System.Byte[])
extern "C"  void WebSocketServiceManager_Broadcast_m132212764 (WebSocketServiceManager_t1683165547 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::Broadcast(System.String)
extern "C"  void WebSocketServiceManager_Broadcast_m2302692375 (WebSocketServiceManager_t1683165547 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::BroadcastAsync(System.Byte[],System.Action)
extern "C"  void WebSocketServiceManager_BroadcastAsync_m1741364693 (WebSocketServiceManager_t1683165547 * __this, ByteU5BU5D_t3397334013* ___data0, Action_t3226471752 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::BroadcastAsync(System.String,System.Action)
extern "C"  void WebSocketServiceManager_BroadcastAsync_m529397984 (WebSocketServiceManager_t1683165547 * __this, String_t* ___data0, Action_t3226471752 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::BroadcastAsync(System.IO.Stream,System.Int32,System.Action)
extern "C"  void WebSocketServiceManager_BroadcastAsync_m3640055608 (WebSocketServiceManager_t1683165547 * __this, Stream_t3255436806 * ___stream0, int32_t ___length1, Action_t3226471752 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Boolean>> WebSocketSharp.Server.WebSocketServiceManager::Broadping()
extern "C"  Dictionary_2_t3360165946 * WebSocketServiceManager_Broadping_m1107495164 (WebSocketServiceManager_t1683165547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Boolean>> WebSocketSharp.Server.WebSocketServiceManager::Broadping(System.String)
extern "C"  Dictionary_2_t3360165946 * WebSocketServiceManager_Broadping_m520568842 (WebSocketServiceManager_t1683165547 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServiceManager::TryGetServiceHost(System.String,WebSocketSharp.Server.WebSocketServiceHost&)
extern "C"  bool WebSocketServiceManager_TryGetServiceHost_m1866334636 (WebSocketServiceManager_t1683165547 * __this, String_t* ___path0, WebSocketServiceHost_t492106494 ** ___host1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
