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

// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t298428346;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t2254682501;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Identity
struct Identity_t3647548000;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Runtime_Remoting_ClientIdentity2254682501.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
extern "C"  void RealProxy__ctor_m2147093603 (RealProxy_t298428346 * __this, Type_t * ___classToProxy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern "C"  void RealProxy__ctor_m2505535530 (RealProxy_t298428346 * __this, Type_t * ___classToProxy0, ClientIdentity_t2254682501 * ___identity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
extern "C"  void RealProxy__ctor_m3041043303 (RealProxy_t298428346 * __this, Type_t * ___classToProxy0, IntPtr_t ___stub1, Il2CppObject * ___stubData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
extern "C"  Type_t * RealProxy_InternalGetProxyType_m858618403 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___transparentProxy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
extern "C"  Type_t * RealProxy_GetProxiedType_m3072222907 (RealProxy_t298428346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::get_ObjectIdentity()
extern "C"  Identity_t3647548000 * RealProxy_get_ObjectIdentity_m1633976845 (RealProxy_t298428346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
extern "C"  Il2CppObject * RealProxy_InternalGetTransparentProxy_m3415358600 (RealProxy_t298428346 * __this, String_t* ___className0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
extern "C"  Il2CppObject * RealProxy_GetTransparentProxy_m4192467161 (RealProxy_t298428346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
extern "C"  void RealProxy_SetTargetDomain_m3940877656 (RealProxy_t298428346 * __this, int32_t ___domainId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
