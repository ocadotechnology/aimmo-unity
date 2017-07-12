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

// WebSocketSharp.Server.HttpRequestEventArgs
struct HttpRequestEventArgs_t918469868;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t994708409;
// WebSocketSharp.Net.HttpListenerRequest
struct HttpListenerRequest_t2316381291;
// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t2223360553;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Ht994708409.h"

// System.Void WebSocketSharp.Server.HttpRequestEventArgs::.ctor(WebSocketSharp.Net.HttpListenerContext)
extern "C"  void HttpRequestEventArgs__ctor_m2264048088 (HttpRequestEventArgs_t918469868 * __this, HttpListenerContext_t994708409 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerRequest WebSocketSharp.Server.HttpRequestEventArgs::get_Request()
extern "C"  HttpListenerRequest_t2316381291 * HttpRequestEventArgs_get_Request_m634116509 (HttpRequestEventArgs_t918469868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerResponse WebSocketSharp.Server.HttpRequestEventArgs::get_Response()
extern "C"  HttpListenerResponse_t2223360553 * HttpRequestEventArgs_get_Response_m1291776285 (HttpRequestEventArgs_t918469868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
