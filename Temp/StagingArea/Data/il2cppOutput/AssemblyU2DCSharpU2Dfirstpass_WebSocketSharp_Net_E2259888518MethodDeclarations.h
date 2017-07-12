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

// WebSocketSharp.Net.EndPointManager
struct EndPointManager_t2259888518;
// System.String
struct String_t;
// WebSocketSharp.Net.HttpListener
struct HttpListener_t4179429670;
// System.Net.IPAddress
struct IPAddress_t1399971723;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H4179429670.h"
#include "System_System_Net_IPEndPoint2615413766.h"

// System.Void WebSocketSharp.Net.EndPointManager::.cctor()
extern "C"  void EndPointManager__cctor_m4175925050 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointManager::.ctor()
extern "C"  void EndPointManager__ctor_m3408691047 (EndPointManager_t2259888518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointManager::addPrefix(System.String,WebSocketSharp.Net.HttpListener)
extern "C"  void EndPointManager_addPrefix_m3759471932 (Il2CppObject * __this /* static, unused */, String_t* ___uriPrefix0, HttpListener_t4179429670 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress WebSocketSharp.Net.EndPointManager::convertToIPAddress(System.String)
extern "C"  IPAddress_t1399971723 * EndPointManager_convertToIPAddress_m3038569396 (Il2CppObject * __this /* static, unused */, String_t* ___hostname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointManager::removePrefix(System.String,WebSocketSharp.Net.HttpListener)
extern "C"  void EndPointManager_removePrefix_m338458431 (Il2CppObject * __this /* static, unused */, String_t* ___uriPrefix0, HttpListener_t4179429670 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.EndPointManager::RemoveEndPoint(System.Net.IPEndPoint)
extern "C"  bool EndPointManager_RemoveEndPoint_m2983593792 (Il2CppObject * __this /* static, unused */, IPEndPoint_t2615413766 * ___endpoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointManager::AddListener(WebSocketSharp.Net.HttpListener)
extern "C"  void EndPointManager_AddListener_m4006616344 (Il2CppObject * __this /* static, unused */, HttpListener_t4179429670 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointManager::AddPrefix(System.String,WebSocketSharp.Net.HttpListener)
extern "C"  void EndPointManager_AddPrefix_m111607900 (Il2CppObject * __this /* static, unused */, String_t* ___uriPrefix0, HttpListener_t4179429670 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointManager::RemoveListener(WebSocketSharp.Net.HttpListener)
extern "C"  void EndPointManager_RemoveListener_m1954584851 (Il2CppObject * __this /* static, unused */, HttpListener_t4179429670 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointManager::RemovePrefix(System.String,WebSocketSharp.Net.HttpListener)
extern "C"  void EndPointManager_RemovePrefix_m271377183 (Il2CppObject * __this /* static, unused */, String_t* ___uriPrefix0, HttpListener_t4179429670 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
