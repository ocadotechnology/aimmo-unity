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

// System.Runtime.Remoting.Channels.CrossAppDomainChannel
struct CrossAppDomainChannel_t2471623380;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2189618969;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.ctor()
extern "C"  void CrossAppDomainChannel__ctor_m1339843788 (CrossAppDomainChannel_t2471623380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.cctor()
extern "C"  void CrossAppDomainChannel__cctor_m719086939 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::RegisterCrossAppDomainChannel()
extern "C"  void CrossAppDomainChannel_RegisterCrossAppDomainChannel_m43456045 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelName()
extern "C"  String_t* CrossAppDomainChannel_get_ChannelName_m3211498928 (CrossAppDomainChannel_t2471623380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelPriority()
extern "C"  int32_t CrossAppDomainChannel_get_ChannelPriority_m3276663196 (CrossAppDomainChannel_t2471623380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelData()
extern "C"  Il2CppObject * CrossAppDomainChannel_get_ChannelData_m2208828775 (CrossAppDomainChannel_t2471623380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::StartListening(System.Object)
extern "C"  void CrossAppDomainChannel_StartListening_m3076788403 (CrossAppDomainChannel_t2471623380 * __this, Il2CppObject * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.CrossAppDomainChannel::CreateMessageSink(System.String,System.Object,System.String&)
extern "C"  Il2CppObject * CrossAppDomainChannel_CreateMessageSink_m387874432 (CrossAppDomainChannel_t2471623380 * __this, String_t* ___url0, Il2CppObject * ___data1, String_t** ___uri2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
