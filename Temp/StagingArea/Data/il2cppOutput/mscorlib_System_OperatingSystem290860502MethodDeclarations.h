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

// System.OperatingSystem
struct OperatingSystem_t290860502;
// System.Version
struct Version_t1755874712;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_PlatformID1006634368.h"
#include "mscorlib_System_Version1755874712.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.OperatingSystem::.ctor(System.PlatformID,System.Version)
extern "C"  void OperatingSystem__ctor_m988315539 (OperatingSystem_t290860502 * __this, int32_t ___platform0, Version_t1755874712 * ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.OperatingSystem::get_Platform()
extern "C"  int32_t OperatingSystem_get_Platform_m2260343279 (OperatingSystem_t290860502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.OperatingSystem::Clone()
extern "C"  Il2CppObject * OperatingSystem_Clone_m1943707477 (OperatingSystem_t290860502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OperatingSystem::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void OperatingSystem_GetObjectData_m2276196875 (OperatingSystem_t290860502 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.OperatingSystem::ToString()
extern "C"  String_t* OperatingSystem_ToString_m2365121878 (OperatingSystem_t290860502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
