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

// WebSocketSharp.Net.HttpListenerPrefix
struct HttpListenerPrefix_t529778486;
// System.String
struct String_t;
// WebSocketSharp.Net.HttpListener
struct HttpListener_t4179429670;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H4179429670.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void WebSocketSharp.Net.HttpListenerPrefix::.ctor(System.String)
extern "C"  void HttpListenerPrefix__ctor_m463523335 (HttpListenerPrefix_t529778486 * __this, String_t* ___uriPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerPrefix::get_Host()
extern "C"  String_t* HttpListenerPrefix_get_Host_m2191487989 (HttpListenerPrefix_t529778486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerPrefix::get_IsSecure()
extern "C"  bool HttpListenerPrefix_get_IsSecure_m991767137 (HttpListenerPrefix_t529778486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListener WebSocketSharp.Net.HttpListenerPrefix::get_Listener()
extern "C"  HttpListener_t4179429670 * HttpListenerPrefix_get_Listener_m3953785129 (HttpListenerPrefix_t529778486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerPrefix::set_Listener(WebSocketSharp.Net.HttpListener)
extern "C"  void HttpListenerPrefix_set_Listener_m434730374 (HttpListenerPrefix_t529778486 * __this, HttpListener_t4179429670 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerPrefix::get_Original()
extern "C"  String_t* HttpListenerPrefix_get_Original_m321723498 (HttpListenerPrefix_t529778486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerPrefix::get_Path()
extern "C"  String_t* HttpListenerPrefix_get_Path_m386892090 (HttpListenerPrefix_t529778486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerPrefix::get_Port()
extern "C"  String_t* HttpListenerPrefix_get_Port_m104586690 (HttpListenerPrefix_t529778486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerPrefix::parse(System.String)
extern "C"  void HttpListenerPrefix_parse_m2198139842 (HttpListenerPrefix_t529778486 * __this, String_t* ___uriPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerPrefix::CheckPrefix(System.String)
extern "C"  void HttpListenerPrefix_CheckPrefix_m1158838357 (Il2CppObject * __this /* static, unused */, String_t* ___uriPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerPrefix::Equals(System.Object)
extern "C"  bool HttpListenerPrefix_Equals_m507953080 (HttpListenerPrefix_t529778486 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpListenerPrefix::GetHashCode()
extern "C"  int32_t HttpListenerPrefix_GetHashCode_m2666121548 (HttpListenerPrefix_t529778486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerPrefix::ToString()
extern "C"  String_t* HttpListenerPrefix_ToString_m2816075380 (HttpListenerPrefix_t529778486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
