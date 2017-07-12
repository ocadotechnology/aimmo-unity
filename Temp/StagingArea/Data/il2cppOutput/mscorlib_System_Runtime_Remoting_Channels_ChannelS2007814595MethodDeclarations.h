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

// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2189618969;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Channels.IChannelSender
struct IChannelSender_t714647579;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Runtime.Remoting.Channels.IChannel
struct IChannel_t321318132;
// System.Runtime.Remoting.ChannelData
struct ChannelData_t1489610737;
// System.Runtime.Remoting.ProviderData
struct ProviderData_t2518653487;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_Remoting_ChannelData1489610737.h"
#include "mscorlib_System_Runtime_Remoting_ProviderData2518653487.h"

// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
extern "C"  void ChannelServices__cctor_m3534779830 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ChannelServices::CreateClientChannelSinkChain(System.String,System.Object,System.String&)
extern "C"  Il2CppObject * ChannelServices_CreateClientChannelSinkChain_m629385345 (Il2CppObject * __this /* static, unused */, String_t* ___url0, Il2CppObject * ___remoteChannelData1, String_t** ___objectUri2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ChannelServices::CreateClientChannelSinkChain(System.Runtime.Remoting.Channels.IChannelSender,System.String,System.Object[],System.String&)
extern "C"  Il2CppObject * ChannelServices_CreateClientChannelSinkChain_m4271702352 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, String_t* ___url1, ObjectU5BU5D_t3614634134* ___channelDataArray2, String_t** ___objectUri3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern "C"  void ChannelServices_RegisterChannel_m3832858065 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___chnl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
extern "C"  void ChannelServices_RegisterChannel_m557784146 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___chnl0, bool ___ensureSecurity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannelConfig(System.Runtime.Remoting.ChannelData)
extern "C"  void ChannelServices_RegisterChannelConfig_m4091185772 (Il2CppObject * __this /* static, unused */, ChannelData_t1489610737 * ___channel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Channels.ChannelServices::CreateProvider(System.Runtime.Remoting.ProviderData)
extern "C"  Il2CppObject * ChannelServices_CreateProvider_m2046737802 (Il2CppObject * __this /* static, unused */, ProviderData_t2518653487 * ___prov0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
extern "C"  ObjectU5BU5D_t3614634134* ChannelServices_GetCurrentChannelInfo_m4080942430 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
