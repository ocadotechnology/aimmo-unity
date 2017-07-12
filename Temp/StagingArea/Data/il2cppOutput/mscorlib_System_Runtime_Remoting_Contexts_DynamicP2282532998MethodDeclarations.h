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

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t2282532998;
// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t603529997;
// System.String
struct String_t;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t3044378324;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Runtime.Remoting.Contexts.DynamicPropertyCollection::.ctor()
extern "C"  void DynamicPropertyCollection__ctor_m1159577654 (DynamicPropertyCollection_t2282532998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::get_HasProperties()
extern "C"  bool DynamicPropertyCollection_get_HasProperties_m2092159924 (DynamicPropertyCollection_t2282532998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty)
extern "C"  bool DynamicPropertyCollection_RegisterDynamicProperty_m3083838256 (DynamicPropertyCollection_t2282532998 * __this, Il2CppObject * ___prop0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::UnregisterDynamicProperty(System.String)
extern "C"  bool DynamicPropertyCollection_UnregisterDynamicProperty_m432705250 (DynamicPropertyCollection_t2282532998 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.DynamicPropertyCollection::NotifyMessage(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
extern "C"  void DynamicPropertyCollection_NotifyMessage_m840388347 (DynamicPropertyCollection_t2282532998 * __this, bool ___start0, Il2CppObject * ___msg1, bool ___client_site2, bool ___async3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Contexts.DynamicPropertyCollection::FindProperty(System.String)
extern "C"  int32_t DynamicPropertyCollection_FindProperty_m1233265924 (DynamicPropertyCollection_t2282532998 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
