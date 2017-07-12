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

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t3468069089;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"

// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.ctor(System.String,System.Byte[])
extern "C"  void ClientSessionInfo__ctor_m759726440 (ClientSessionInfo_t3468069089 * __this, String_t* ___hostname0, ByteU5BU5D_t3397334013* ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.cctor()
extern "C"  void ClientSessionInfo__cctor_m1353980836 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Finalize()
extern "C"  void ClientSessionInfo_Finalize_m1198775539 (ClientSessionInfo_t3468069089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::get_HostName()
extern "C"  String_t* ClientSessionInfo_get_HostName_m759522668 (ClientSessionInfo_t3468069089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::get_Id()
extern "C"  ByteU5BU5D_t3397334013* ClientSessionInfo_get_Id_m3046630969 (ClientSessionInfo_t3468069089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::get_Valid()
extern "C"  bool ClientSessionInfo_get_Valid_m3589823308 (ClientSessionInfo_t3468069089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::GetContext(Mono.Security.Protocol.Tls.Context)
extern "C"  void ClientSessionInfo_GetContext_m301320023 (ClientSessionInfo_t3468069089 * __this, Context_t4285182719 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::SetContext(Mono.Security.Protocol.Tls.Context)
extern "C"  void ClientSessionInfo_SetContext_m2649357891 (ClientSessionInfo_t3468069089 * __this, Context_t4285182719 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::KeepAlive()
extern "C"  void ClientSessionInfo_KeepAlive_m3125408381 (ClientSessionInfo_t3468069089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose()
extern "C"  void ClientSessionInfo_Dispose_m3315842124 (ClientSessionInfo_t3468069089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose(System.Boolean)
extern "C"  void ClientSessionInfo_Dispose_m2571428025 (ClientSessionInfo_t3468069089 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::CheckDisposed()
extern "C"  void ClientSessionInfo_CheckDisposed_m1394638186 (ClientSessionInfo_t3468069089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
