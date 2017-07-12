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

// WebSocketSharp.Server.WebSocketBehavior
struct WebSocketBehavior_t3021808769;
// WebSocketSharp.Logger
struct Logger_t2598199114;
// WebSocketSharp.Server.WebSocketSessionManager
struct WebSocketSessionManager_t2802512518;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t3488732344;
// System.Func`3<WebSocketSharp.Net.CookieCollection,WebSocketSharp.Net.CookieCollection,System.Boolean>
struct Func_3_t3137832106;
// System.String
struct String_t;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t1989381442;
// System.Object
struct Il2CppObject;
// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t344507773;
// WebSocketSharp.ErrorEventArgs
struct ErrorEventArgs_t502222999;
// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_t2890051726;
// System.EventArgs
struct EventArgs_t3289624707;
// System.Exception
struct Exception_t1927440687;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.FileInfo
struct FileInfo_t3153503742;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_DateTime693205669.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_WebSo2935910988.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_W3488732344.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_CloseE344507773.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_ErrorE502222999.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Messa2890051726.h"
#include "mscorlib_System_EventArgs3289624707.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Serve2802512518.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_IO_FileInfo3153503742.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void WebSocketSharp.Server.WebSocketBehavior::.ctor()
extern "C"  void WebSocketBehavior__ctor_m2690325146 (WebSocketBehavior_t3021808769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Logger WebSocketSharp.Server.WebSocketBehavior::get_Log()
extern "C"  Logger_t2598199114 * WebSocketBehavior_get_Log_m2313525609 (WebSocketBehavior_t3021808769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Server.WebSocketSessionManager WebSocketSharp.Server.WebSocketBehavior::get_Sessions()
extern "C"  WebSocketSessionManager_t2802512518 * WebSocketBehavior_get_Sessions_m3014764635 (WebSocketBehavior_t3021808769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.Server.WebSocketBehavior::get_Context()
extern "C"  WebSocketContext_t3488732344 * WebSocketBehavior_get_Context_m279695177 (WebSocketBehavior_t3021808769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`3<WebSocketSharp.Net.CookieCollection,WebSocketSharp.Net.CookieCollection,System.Boolean> WebSocketSharp.Server.WebSocketBehavior::get_CookiesValidator()
extern "C"  Func_3_t3137832106 * WebSocketBehavior_get_CookiesValidator_m3539851008 (WebSocketBehavior_t3021808769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::set_CookiesValidator(System.Func`3<WebSocketSharp.Net.CookieCollection,WebSocketSharp.Net.CookieCollection,System.Boolean>)
extern "C"  void WebSocketBehavior_set_CookiesValidator_m587584083 (WebSocketBehavior_t3021808769 * __this, Func_3_t3137832106 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketBehavior::get_EmitOnPing()
extern "C"  bool WebSocketBehavior_get_EmitOnPing_m483213409 (WebSocketBehavior_t3021808769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::set_EmitOnPing(System.Boolean)
extern "C"  void WebSocketBehavior_set_EmitOnPing_m541613482 (WebSocketBehavior_t3021808769 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.WebSocketBehavior::get_ID()
extern "C"  String_t* WebSocketBehavior_get_ID_m3151167145 (WebSocketBehavior_t3021808769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketBehavior::get_IgnoreExtensions()
extern "C"  bool WebSocketBehavior_get_IgnoreExtensions_m3551571975 (WebSocketBehavior_t3021808769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::set_IgnoreExtensions(System.Boolean)
extern "C"  void WebSocketBehavior_set_IgnoreExtensions_m1884455680 (WebSocketBehavior_t3021808769 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.String,System.Boolean> WebSocketSharp.Server.WebSocketBehavior::get_OriginValidator()
extern "C"  Func_2_t1989381442 * WebSocketBehavior_get_OriginValidator_m3653611438 (WebSocketBehavior_t3021808769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::set_OriginValidator(System.Func`2<System.String,System.Boolean>)
extern "C"  void WebSocketBehavior_set_OriginValidator_m1603808479 (WebSocketBehavior_t3021808769 * __this, Func_2_t1989381442 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.WebSocketBehavior::get_Protocol()
extern "C"  String_t* WebSocketBehavior_get_Protocol_m2230269842 (WebSocketBehavior_t3021808769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::set_Protocol(System.String)
extern "C"  void WebSocketBehavior_set_Protocol_m1697763649 (WebSocketBehavior_t3021808769 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime WebSocketSharp.Server.WebSocketBehavior::get_StartTime()
extern "C"  DateTime_t693205669  WebSocketBehavior_get_StartTime_m1678578941 (WebSocketBehavior_t3021808769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketState WebSocketSharp.Server.WebSocketBehavior::get_State()
extern "C"  uint16_t WebSocketBehavior_get_State_m4202978790 (WebSocketBehavior_t3021808769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.WebSocketBehavior::checkHandshakeRequest(WebSocketSharp.Net.WebSockets.WebSocketContext)
extern "C"  String_t* WebSocketBehavior_checkHandshakeRequest_m2634811993 (WebSocketBehavior_t3021808769 * __this, WebSocketContext_t3488732344 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::onClose(System.Object,WebSocketSharp.CloseEventArgs)
extern "C"  void WebSocketBehavior_onClose_m662593531 (WebSocketBehavior_t3021808769 * __this, Il2CppObject * ___sender0, CloseEventArgs_t344507773 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::onError(System.Object,WebSocketSharp.ErrorEventArgs)
extern "C"  void WebSocketBehavior_onError_m807423267 (WebSocketBehavior_t3021808769 * __this, Il2CppObject * ___sender0, ErrorEventArgs_t502222999 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::onMessage(System.Object,WebSocketSharp.MessageEventArgs)
extern "C"  void WebSocketBehavior_onMessage_m1861917255 (WebSocketBehavior_t3021808769 * __this, Il2CppObject * ___sender0, MessageEventArgs_t2890051726 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::onOpen(System.Object,System.EventArgs)
extern "C"  void WebSocketBehavior_onOpen_m3167938091 (WebSocketBehavior_t3021808769 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::Start(WebSocketSharp.Net.WebSockets.WebSocketContext,WebSocketSharp.Server.WebSocketSessionManager)
extern "C"  void WebSocketBehavior_Start_m3030451672 (WebSocketBehavior_t3021808769 * __this, WebSocketContext_t3488732344 * ___context0, WebSocketSessionManager_t2802512518 * ___sessions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::Error(System.String,System.Exception)
extern "C"  void WebSocketBehavior_Error_m4195602626 (WebSocketBehavior_t3021808769 * __this, String_t* ___message0, Exception_t1927440687 * ___exception1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::OnClose(WebSocketSharp.CloseEventArgs)
extern "C"  void WebSocketBehavior_OnClose_m3916387533 (WebSocketBehavior_t3021808769 * __this, CloseEventArgs_t344507773 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::OnError(WebSocketSharp.ErrorEventArgs)
extern "C"  void WebSocketBehavior_OnError_m91780465 (WebSocketBehavior_t3021808769 * __this, ErrorEventArgs_t502222999 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::OnMessage(WebSocketSharp.MessageEventArgs)
extern "C"  void WebSocketBehavior_OnMessage_m1450630105 (WebSocketBehavior_t3021808769 * __this, MessageEventArgs_t2890051726 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::OnOpen()
extern "C"  void WebSocketBehavior_OnOpen_m3241351489 (WebSocketBehavior_t3021808769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::Send(System.Byte[])
extern "C"  void WebSocketBehavior_Send_m2527888683 (WebSocketBehavior_t3021808769 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::Send(System.IO.FileInfo)
extern "C"  void WebSocketBehavior_Send_m213037431 (WebSocketBehavior_t3021808769 * __this, FileInfo_t3153503742 * ___file0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::Send(System.String)
extern "C"  void WebSocketBehavior_Send_m2169618252 (WebSocketBehavior_t3021808769 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::SendAsync(System.Byte[],System.Action`1<System.Boolean>)
extern "C"  void WebSocketBehavior_SendAsync_m520068254 (WebSocketBehavior_t3021808769 * __this, ByteU5BU5D_t3397334013* ___data0, Action_1_t3627374100 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::SendAsync(System.IO.FileInfo,System.Action`1<System.Boolean>)
extern "C"  void WebSocketBehavior_SendAsync_m2430568056 (WebSocketBehavior_t3021808769 * __this, FileInfo_t3153503742 * ___file0, Action_1_t3627374100 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::SendAsync(System.String,System.Action`1<System.Boolean>)
extern "C"  void WebSocketBehavior_SendAsync_m1918874853 (WebSocketBehavior_t3021808769 * __this, String_t* ___data0, Action_1_t3627374100 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::SendAsync(System.IO.Stream,System.Int32,System.Action`1<System.Boolean>)
extern "C"  void WebSocketBehavior_SendAsync_m2920243701 (WebSocketBehavior_t3021808769 * __this, Stream_t3255436806 * ___stream0, int32_t ___length1, Action_1_t3627374100 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
