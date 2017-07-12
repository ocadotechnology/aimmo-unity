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

// System.Runtime.Remoting.Identity
struct Identity_t3647548000;
// System.String
struct String_t;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2189618969;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t2282532998;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Runtime.Remoting.Identity::.ctor(System.String)
extern "C"  void Identity__ctor_m3398266716 (Identity_t3647548000 * __this, String_t* ___objectUri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::get_ChannelSink()
extern "C"  Il2CppObject * Identity_get_ChannelSink_m3989446673 (Identity_t3647548000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Identity::set_ChannelSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C"  void Identity_set_ChannelSink_m2409636044 (Identity_t3647548000 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Identity::get_ObjectUri()
extern "C"  String_t* Identity_get_ObjectUri_m2053110803 (Identity_t3647548000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Identity::get_Disposed()
extern "C"  bool Identity_get_Disposed_m720757734 (Identity_t3647548000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Identity::set_Disposed(System.Boolean)
extern "C"  void Identity_set_Disposed_m628843469 (Identity_t3647548000 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::get_ClientDynamicProperties()
extern "C"  DynamicPropertyCollection_t2282532998 * Identity_get_ClientDynamicProperties_m767245959 (Identity_t3647548000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::get_ServerDynamicProperties()
extern "C"  DynamicPropertyCollection_t2282532998 * Identity_get_ServerDynamicProperties_m2264450835 (Identity_t3647548000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
