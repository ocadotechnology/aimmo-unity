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

// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t1610391122;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Exception
struct Exception_t1927440687;
// System.Threading.WaitHandle
struct WaitHandle_t677569169;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C"  void InternalAsyncResult__ctor_m2764854695 (InternalAsyncResult_t1610391122 * __this, AsyncCallback_t163412349 * ___userCallback0, Il2CppObject * ___userState1, ByteU5BU5D_t3397334013* ___buffer2, int32_t ___offset3, int32_t ___count4, bool ___fromWrite5, bool ___proceedAfterHandshake6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_ProceedAfterHandshake()
extern "C"  bool InternalAsyncResult_get_ProceedAfterHandshake_m552962842 (InternalAsyncResult_t1610391122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_FromWrite()
extern "C"  bool InternalAsyncResult_get_FromWrite_m2893408424 (InternalAsyncResult_t1610391122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Buffer()
extern "C"  ByteU5BU5D_t3397334013* InternalAsyncResult_get_Buffer_m163794679 (InternalAsyncResult_t1610391122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Offset()
extern "C"  int32_t InternalAsyncResult_get_Offset_m3458447452 (InternalAsyncResult_t1610391122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Count()
extern "C"  int32_t InternalAsyncResult_get_Count_m1291942796 (InternalAsyncResult_t1610391122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_BytesRead()
extern "C"  int32_t InternalAsyncResult_get_BytesRead_m4243892348 (InternalAsyncResult_t1610391122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * InternalAsyncResult_get_AsyncState_m42006015 (InternalAsyncResult_t1610391122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncException()
extern "C"  Exception_t1927440687 * InternalAsyncResult_get_AsyncException_m3936660437 (InternalAsyncResult_t1610391122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_CompletedWithError()
extern "C"  bool InternalAsyncResult_get_CompletedWithError_m3993955322 (InternalAsyncResult_t1610391122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t677569169 * InternalAsyncResult_get_AsyncWaitHandle_m2297269869 (InternalAsyncResult_t1610391122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted()
extern "C"  bool InternalAsyncResult_get_IsCompleted_m1463732458 (InternalAsyncResult_t1610391122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C"  void InternalAsyncResult_SetComplete_m4011593916 (InternalAsyncResult_t1610391122 * __this, Exception_t1927440687 * ___ex0, int32_t ___bytesRead1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception)
extern "C"  void InternalAsyncResult_SetComplete_m2187159697 (InternalAsyncResult_t1610391122 * __this, Exception_t1927440687 * ___ex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Int32)
extern "C"  void InternalAsyncResult_SetComplete_m200761170 (InternalAsyncResult_t1610391122 * __this, int32_t ___bytesRead0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete()
extern "C"  void InternalAsyncResult_SetComplete_m35987153 (InternalAsyncResult_t1610391122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
