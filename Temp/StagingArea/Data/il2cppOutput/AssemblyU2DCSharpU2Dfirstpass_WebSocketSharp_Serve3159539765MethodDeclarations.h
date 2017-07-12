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

// WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>
struct WebSocketServiceHost_1_t3159539765;
// System.String
struct String_t;
// System.Func`1<System.Object>
struct Func_1_t348874681;
// WebSocketSharp.Logger
struct Logger_t2598199114;
// WebSocketSharp.Server.WebSocketSessionManager
struct WebSocketSessionManager_t2802512518;
// System.Type
struct Type_t;
// WebSocketSharp.Server.WebSocketBehavior
struct WebSocketBehavior_t3021808769;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Logge2598199114.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.Void WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::.ctor(System.String,System.Func`1<TBehavior>,WebSocketSharp.Logger)
extern "C"  void WebSocketServiceHost_1__ctor_m4163629879_gshared (WebSocketServiceHost_1_t3159539765 * __this, String_t* ___path0, Func_1_t348874681 * ___initializer1, Logger_t2598199114 * ___logger2, const MethodInfo* method);
#define WebSocketServiceHost_1__ctor_m4163629879(__this, ___path0, ___initializer1, ___logger2, method) ((  void (*) (WebSocketServiceHost_1_t3159539765 *, String_t*, Func_1_t348874681 *, Logger_t2598199114 *, const MethodInfo*))WebSocketServiceHost_1__ctor_m4163629879_gshared)(__this, ___path0, ___initializer1, ___logger2, method)
// System.Boolean WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::get_KeepClean()
extern "C"  bool WebSocketServiceHost_1_get_KeepClean_m758544415_gshared (WebSocketServiceHost_1_t3159539765 * __this, const MethodInfo* method);
#define WebSocketServiceHost_1_get_KeepClean_m758544415(__this, method) ((  bool (*) (WebSocketServiceHost_1_t3159539765 *, const MethodInfo*))WebSocketServiceHost_1_get_KeepClean_m758544415_gshared)(__this, method)
// System.Void WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::set_KeepClean(System.Boolean)
extern "C"  void WebSocketServiceHost_1_set_KeepClean_m31395942_gshared (WebSocketServiceHost_1_t3159539765 * __this, bool ___value0, const MethodInfo* method);
#define WebSocketServiceHost_1_set_KeepClean_m31395942(__this, ___value0, method) ((  void (*) (WebSocketServiceHost_1_t3159539765 *, bool, const MethodInfo*))WebSocketServiceHost_1_set_KeepClean_m31395942_gshared)(__this, ___value0, method)
// System.String WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::get_Path()
extern "C"  String_t* WebSocketServiceHost_1_get_Path_m2855513761_gshared (WebSocketServiceHost_1_t3159539765 * __this, const MethodInfo* method);
#define WebSocketServiceHost_1_get_Path_m2855513761(__this, method) ((  String_t* (*) (WebSocketServiceHost_1_t3159539765 *, const MethodInfo*))WebSocketServiceHost_1_get_Path_m2855513761_gshared)(__this, method)
// WebSocketSharp.Server.WebSocketSessionManager WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::get_Sessions()
extern "C"  WebSocketSessionManager_t2802512518 * WebSocketServiceHost_1_get_Sessions_m2896210383_gshared (WebSocketServiceHost_1_t3159539765 * __this, const MethodInfo* method);
#define WebSocketServiceHost_1_get_Sessions_m2896210383(__this, method) ((  WebSocketSessionManager_t2802512518 * (*) (WebSocketServiceHost_1_t3159539765 *, const MethodInfo*))WebSocketServiceHost_1_get_Sessions_m2896210383_gshared)(__this, method)
// System.Type WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::get_Type()
extern "C"  Type_t * WebSocketServiceHost_1_get_Type_m1213689249_gshared (WebSocketServiceHost_1_t3159539765 * __this, const MethodInfo* method);
#define WebSocketServiceHost_1_get_Type_m1213689249(__this, method) ((  Type_t * (*) (WebSocketServiceHost_1_t3159539765 *, const MethodInfo*))WebSocketServiceHost_1_get_Type_m1213689249_gshared)(__this, method)
// System.TimeSpan WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::get_WaitTime()
extern "C"  TimeSpan_t3430258949  WebSocketServiceHost_1_get_WaitTime_m692385082_gshared (WebSocketServiceHost_1_t3159539765 * __this, const MethodInfo* method);
#define WebSocketServiceHost_1_get_WaitTime_m692385082(__this, method) ((  TimeSpan_t3430258949  (*) (WebSocketServiceHost_1_t3159539765 *, const MethodInfo*))WebSocketServiceHost_1_get_WaitTime_m692385082_gshared)(__this, method)
// System.Void WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::set_WaitTime(System.TimeSpan)
extern "C"  void WebSocketServiceHost_1_set_WaitTime_m326081433_gshared (WebSocketServiceHost_1_t3159539765 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method);
#define WebSocketServiceHost_1_set_WaitTime_m326081433(__this, ___value0, method) ((  void (*) (WebSocketServiceHost_1_t3159539765 *, TimeSpan_t3430258949 , const MethodInfo*))WebSocketServiceHost_1_set_WaitTime_m326081433_gshared)(__this, ___value0, method)
// WebSocketSharp.Server.WebSocketBehavior WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::CreateSession()
extern "C"  WebSocketBehavior_t3021808769 * WebSocketServiceHost_1_CreateSession_m1810684936_gshared (WebSocketServiceHost_1_t3159539765 * __this, const MethodInfo* method);
#define WebSocketServiceHost_1_CreateSession_m1810684936(__this, method) ((  WebSocketBehavior_t3021808769 * (*) (WebSocketServiceHost_1_t3159539765 *, const MethodInfo*))WebSocketServiceHost_1_CreateSession_m1810684936_gshared)(__this, method)
