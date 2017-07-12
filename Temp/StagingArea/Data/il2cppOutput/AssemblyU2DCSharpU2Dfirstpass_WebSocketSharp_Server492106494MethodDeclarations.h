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

// WebSocketSharp.Server.WebSocketServiceHost
struct WebSocketServiceHost_t492106494;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t3488732344;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Serve3054640078.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_W3488732344.h"
#include "mscorlib_System_String2029220233.h"

// System.Void WebSocketSharp.Server.WebSocketServiceHost::.ctor()
extern "C"  void WebSocketServiceHost__ctor_m1436056905 (WebSocketServiceHost_t492106494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Server.ServerState WebSocketSharp.Server.WebSocketServiceHost::get_State()
extern "C"  int32_t WebSocketServiceHost_get_State_m3414512988 (WebSocketServiceHost_t492106494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceHost::Start()
extern "C"  void WebSocketServiceHost_Start_m1646327689 (WebSocketServiceHost_t492106494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceHost::StartSession(WebSocketSharp.Net.WebSockets.WebSocketContext)
extern "C"  void WebSocketServiceHost_StartSession_m669291491 (WebSocketServiceHost_t492106494 * __this, WebSocketContext_t3488732344 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceHost::Stop(System.UInt16,System.String)
extern "C"  void WebSocketServiceHost_Stop_m2525609345 (WebSocketServiceHost_t492106494 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
