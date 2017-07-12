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

// System.String
struct String_t;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t4060499430;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ActivatedServiceTypeEntry
struct ActivatedServiceTypeEntry_t3934090848;
// System.Runtime.Remoting.WellKnownClientTypeEntry
struct WellKnownClientTypeEntry_t3314744170;
// System.Runtime.Remoting.WellKnownServiceTypeEntry
struct WellKnownServiceTypeEntry_t1712728956;
// System.Runtime.Remoting.ChannelData
struct ChannelData_t1489610737;
// System.Runtime.Remoting.ProviderData
struct ProviderData_t2518653487;
// System.Collections.ArrayList
struct ArrayList_t4252133567;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTy4060499430.h"
#include "mscorlib_System_Runtime_Remoting_ActivatedServiceT3934090848.h"
#include "mscorlib_System_Runtime_Remoting_WellKnownClientTy3314744170.h"
#include "mscorlib_System_Runtime_Remoting_WellKnownServiceT1712728956.h"
#include "mscorlib_System_Runtime_Remoting_ChannelData1489610737.h"
#include "mscorlib_System_Runtime_Remoting_ProviderData2518653487.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"

// System.Void System.Runtime.Remoting.RemotingConfiguration::.cctor()
extern "C"  void RemotingConfiguration__cctor_m2129988840 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ApplicationName()
extern "C"  String_t* RemotingConfiguration_get_ApplicationName_m374139798 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::set_ApplicationName(System.String)
extern "C"  void RemotingConfiguration_set_ApplicationName_m484446441 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ProcessId()
extern "C"  String_t* RemotingConfiguration_get_ProcessId_m3870172209 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::LoadDefaultDelayedChannels()
extern "C"  void RemotingConfiguration_LoadDefaultDelayedChannels_m3702110176 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ActivatedClientTypeEntry System.Runtime.Remoting.RemotingConfiguration::IsRemotelyActivatedClientType(System.Type)
extern "C"  ActivatedClientTypeEntry_t4060499430 * RemotingConfiguration_IsRemotelyActivatedClientType_m4274128612 (Il2CppObject * __this /* static, unused */, Type_t * ___svrType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedClientType(System.Runtime.Remoting.ActivatedClientTypeEntry)
extern "C"  void RemotingConfiguration_RegisterActivatedClientType_m2207611714 (Il2CppObject * __this /* static, unused */, ActivatedClientTypeEntry_t4060499430 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedServiceType(System.Runtime.Remoting.ActivatedServiceTypeEntry)
extern "C"  void RemotingConfiguration_RegisterActivatedServiceType_m4003543022 (Il2CppObject * __this /* static, unused */, ActivatedServiceTypeEntry_t3934090848 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownClientType(System.Runtime.Remoting.WellKnownClientTypeEntry)
extern "C"  void RemotingConfiguration_RegisterWellKnownClientType_m3116470018 (Il2CppObject * __this /* static, unused */, WellKnownClientTypeEntry_t3314744170 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownServiceType(System.Runtime.Remoting.WellKnownServiceTypeEntry)
extern "C"  void RemotingConfiguration_RegisterWellKnownServiceType_m2491506630 (Il2CppObject * __this /* static, unused */, WellKnownServiceTypeEntry_t1712728956 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannelTemplate(System.Runtime.Remoting.ChannelData)
extern "C"  void RemotingConfiguration_RegisterChannelTemplate_m3410954518 (Il2CppObject * __this /* static, unused */, ChannelData_t1489610737 * ___channel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterClientProviderTemplate(System.Runtime.Remoting.ProviderData)
extern "C"  void RemotingConfiguration_RegisterClientProviderTemplate_m514821425 (Il2CppObject * __this /* static, unused */, ProviderData_t2518653487 * ___prov0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterServerProviderTemplate(System.Runtime.Remoting.ProviderData)
extern "C"  void RemotingConfiguration_RegisterServerProviderTemplate_m2851537389 (Il2CppObject * __this /* static, unused */, ProviderData_t2518653487 * ___prov0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannels(System.Collections.ArrayList,System.Boolean)
extern "C"  void RemotingConfiguration_RegisterChannels_m2036610082 (Il2CppObject * __this /* static, unused */, ArrayList_t4252133567 * ___channels0, bool ___onlyDelayed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterTypes(System.Collections.ArrayList)
extern "C"  void RemotingConfiguration_RegisterTypes_m1739896888 (Il2CppObject * __this /* static, unused */, ArrayList_t4252133567 * ___types0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::SetCustomErrorsMode(System.String)
extern "C"  void RemotingConfiguration_SetCustomErrorsMode_m1844153208 (Il2CppObject * __this /* static, unused */, String_t* ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
