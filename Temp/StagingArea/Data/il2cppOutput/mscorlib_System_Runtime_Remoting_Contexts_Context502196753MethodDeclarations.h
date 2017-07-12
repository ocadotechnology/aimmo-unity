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

// System.Runtime.Remoting.Contexts.Context
struct Context_t502196753;
// System.Runtime.Remoting.Contexts.IContextProperty[]
struct IContextPropertyU5BU5D_t977923046;
// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t603529997;
// System.ContextBoundObject
struct ContextBoundObject_t4264702438;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t2282532998;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t3044378324;
// System.Runtime.Remoting.Contexts.IContextProperty
struct IContextProperty_t287246399;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2189618969;
// System.MarshalByRefObject
struct MarshalByRefObject_t1285298191;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t2459197515;
// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct CrossContextDelegate_t754146990;
// System.LocalDataStoreSlot
struct LocalDataStoreSlot_t486331200;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ContextBoundObject4264702438.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context502196753.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_MarshalByRefObject1285298191.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossCont754146990.h"
#include "mscorlib_System_LocalDataStoreSlot486331200.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Runtime.Remoting.Contexts.Context::.ctor()
extern "C"  void Context__ctor_m3303382579 (Context_t502196753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
extern "C"  void Context__cctor_m3895126354 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
extern "C"  void Context_Finalize_m1386439645 (Context_t502196753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::get_DefaultContext()
extern "C"  Context_t502196753 * Context_get_DefaultContext_m2211922324 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Contexts.Context::get_ContextID()
extern "C"  int32_t Context_get_ContextID_m1615769170 (Context_t502196753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.IContextProperty[] System.Runtime.Remoting.Contexts.Context::get_ContextProperties()
extern "C"  IContextPropertyU5BU5D_t977923046* Context_get_ContextProperties_m2382392632 (Context_t502196753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
extern "C"  bool Context_get_IsDefaultContext_m3300558634 (Context_t502196753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_NeedsContextSink()
extern "C"  bool Context_get_NeedsContextSink_m1907794755 (Context_t502196753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty,System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
extern "C"  bool Context_RegisterDynamicProperty_m2075612383 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___prop0, ContextBoundObject_t4264702438 * ___obj1, Context_t502196753 * ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::UnregisterDynamicProperty(System.String,System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
extern "C"  bool Context_UnregisterDynamicProperty_m4064851633 (Il2CppObject * __this /* static, unused */, String_t* ___name0, ContextBoundObject_t4264702438 * ___obj1, Context_t502196753 * ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::GetDynamicPropertyCollection(System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
extern "C"  DynamicPropertyCollection_t2282532998 * Context_GetDynamicPropertyCollection_m1987747444 (Il2CppObject * __this /* static, unused */, ContextBoundObject_t4264702438 * ___obj0, Context_t502196753 * ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::NotifyGlobalDynamicSinks(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
extern "C"  void Context_NotifyGlobalDynamicSinks_m2916447645 (Il2CppObject * __this /* static, unused */, bool ___start0, Il2CppObject * ___req_msg1, bool ___client_site2, bool ___async3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasGlobalDynamicSinks()
extern "C"  bool Context_get_HasGlobalDynamicSinks_m3205328884 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::NotifyDynamicSinks(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
extern "C"  void Context_NotifyDynamicSinks_m1367144344 (Context_t502196753 * __this, bool ___start0, Il2CppObject * ___req_msg1, bool ___client_site2, bool ___async3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasDynamicSinks()
extern "C"  bool Context_get_HasDynamicSinks_m1998518649 (Context_t502196753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasExitSinks()
extern "C"  bool Context_get_HasExitSinks_m1233814330 (Context_t502196753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
extern "C"  Il2CppObject * Context_GetProperty_m1664740450 (Context_t502196753 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::SetProperty(System.Runtime.Remoting.Contexts.IContextProperty)
extern "C"  void Context_SetProperty_m1208242955 (Context_t502196753 * __this, Il2CppObject * ___prop0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::Freeze()
extern "C"  void Context_Freeze_m1127151596 (Context_t502196753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Contexts.Context::ToString()
extern "C"  String_t* Context_ToString_m3056873882 (Context_t502196753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::GetServerContextSinkChain()
extern "C"  Il2CppObject * Context_GetServerContextSinkChain_m390126977 (Context_t502196753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::GetClientContextSinkChain()
extern "C"  Il2CppObject * Context_GetClientContextSinkChain_m1645078461 (Context_t502196753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::CreateServerObjectSinkChain(System.MarshalByRefObject,System.Boolean)
extern "C"  Il2CppObject * Context_CreateServerObjectSinkChain_m1085388208 (Context_t502196753 * __this, MarshalByRefObject_t1285298191 * ___obj0, bool ___forceInternalExecute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::CreateEnvoySink(System.MarshalByRefObject)
extern "C"  Il2CppObject * Context_CreateEnvoySink_m2626543427 (Context_t502196753 * __this, MarshalByRefObject_t1285298191 * ___serverObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::SwitchToContext(System.Runtime.Remoting.Contexts.Context)
extern "C"  Context_t502196753 * Context_SwitchToContext_m3368914854 (Il2CppObject * __this /* static, unused */, Context_t502196753 * ___newContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::CreateNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  Context_t502196753 * Context_CreateNewContext_m538209045 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::DoCallBack(System.Runtime.Remoting.Contexts.CrossContextDelegate)
extern "C"  void Context_DoCallBack_m1158598055 (Context_t502196753 * __this, CrossContextDelegate_t754146990 * ___deleg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::AllocateDataSlot()
extern "C"  LocalDataStoreSlot_t486331200 * Context_AllocateDataSlot_m2880663534 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::AllocateNamedDataSlot(System.String)
extern "C"  LocalDataStoreSlot_t486331200 * Context_AllocateNamedDataSlot_m3200404053 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::FreeNamedDataSlot(System.String)
extern "C"  void Context_FreeNamedDataSlot_m3938279346 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Contexts.Context::GetData(System.LocalDataStoreSlot)
extern "C"  Il2CppObject * Context_GetData_m3976523785 (Il2CppObject * __this /* static, unused */, LocalDataStoreSlot_t486331200 * ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::GetNamedDataSlot(System.String)
extern "C"  LocalDataStoreSlot_t486331200 * Context_GetNamedDataSlot_m372993642 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::SetData(System.LocalDataStoreSlot,System.Object)
extern "C"  void Context_SetData_m4115952818 (Il2CppObject * __this /* static, unused */, LocalDataStoreSlot_t486331200 * ___slot0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
