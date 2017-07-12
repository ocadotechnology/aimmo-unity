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

// WebSocketSharp.Net.HttpListenerException
struct HttpListenerException_t543138973;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_String2029220233.h"

// System.Void WebSocketSharp.Net.HttpListenerException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpListenerException__ctor_m602177753 (HttpListenerException_t543138973 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerException::.ctor()
extern "C"  void HttpListenerException__ctor_m233231792 (HttpListenerException_t543138973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerException::.ctor(System.Int32)
extern "C"  void HttpListenerException__ctor_m436315091 (HttpListenerException_t543138973 * __this, int32_t ___errorCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerException::.ctor(System.Int32,System.String)
extern "C"  void HttpListenerException__ctor_m1276268005 (HttpListenerException_t543138973 * __this, int32_t ___errorCode0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpListenerException::get_ErrorCode()
extern "C"  int32_t HttpListenerException_get_ErrorCode_m999180642 (HttpListenerException_t543138973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
