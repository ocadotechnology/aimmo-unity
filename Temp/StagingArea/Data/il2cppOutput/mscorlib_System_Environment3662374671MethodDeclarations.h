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
// System.OperatingSystem
struct OperatingSystem_t290860502;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_PlatformID1006634368.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Environment_SpecialFolder1519540278.h"

// System.Boolean System.Environment::get_SocketSecurityEnabled()
extern "C"  bool Environment_get_SocketSecurityEnabled_m1758378561 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::get_NewLine()
extern "C"  String_t* Environment_get_NewLine_m266316410 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.Environment::get_Platform()
extern "C"  int32_t Environment_get_Platform_m2874211026 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetOSVersionString()
extern "C"  String_t* Environment_GetOSVersionString_m3848984846 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.OperatingSystem System.Environment::get_OSVersion()
extern "C"  OperatingSystem_t290860502 * Environment_get_OSVersion_m1247315981 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Environment::get_TickCount()
extern "C"  int32_t Environment_get_TickCount_m3538062563 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::internalGetEnvironmentVariable(System.String)
extern "C"  String_t* Environment_internalGetEnvironmentVariable_m793691779 (Il2CppObject * __this /* static, unused */, String_t* ___variable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetEnvironmentVariable(System.String)
extern "C"  String_t* Environment_GetEnvironmentVariable_m4292917946 (Il2CppObject * __this /* static, unused */, String_t* ___variable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetWindowsFolderPath(System.Int32)
extern "C"  String_t* Environment_GetWindowsFolderPath_m1236279486 (Il2CppObject * __this /* static, unused */, int32_t ___folder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
extern "C"  String_t* Environment_GetFolderPath_m1849163024 (Il2CppObject * __this /* static, unused */, int32_t ___folder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::ReadXdgUserDir(System.String,System.String,System.String,System.String)
extern "C"  String_t* Environment_ReadXdgUserDir_m3426336950 (Il2CppObject * __this /* static, unused */, String_t* ___config_dir0, String_t* ___home_dir1, String_t* ___key2, String_t* ___fallback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::InternalGetFolderPath(System.Environment/SpecialFolder)
extern "C"  String_t* Environment_InternalGetFolderPath_m2949665159 (Il2CppObject * __this /* static, unused */, int32_t ___folder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Environment::get_IsRunningOnWindows()
extern "C"  bool Environment_get_IsRunningOnWindows_m2990729574 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetMachineConfigPath()
extern "C"  String_t* Environment_GetMachineConfigPath_m1118347127 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::internalGetHome()
extern "C"  String_t* Environment_internalGetHome_m264525465 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
