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

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct ProxyAttribute_t4031752430;
// System.MarshalByRefObject
struct MarshalByRefObject_t1285298191;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t298428346;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t318414488;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Contexts.Context
struct Context_t502196753;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t2459197515;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Runtime_Remoting_ObjRef318414488.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context502196753.h"

// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern "C"  MarshalByRefObject_t1285298191 * ProxyAttribute_CreateInstance_m546961127 (ProxyAttribute_t4031752430 * __this, Type_t * ___serverType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern "C"  RealProxy_t298428346 * ProxyAttribute_CreateProxy_m2593224783 (ProxyAttribute_t4031752430 * __this, ObjRef_t318414488 * ___objRef0, Type_t * ___serverType1, Il2CppObject * ___serverObject2, Context_t502196753 * ___serverContext3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  void ProxyAttribute_GetPropertiesForNewContext_m3587421540 (ProxyAttribute_t4031752430 * __this, Il2CppObject * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  bool ProxyAttribute_IsContextOK_m2391079277 (ProxyAttribute_t4031752430 * __this, Context_t502196753 * ___ctx0, Il2CppObject * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
