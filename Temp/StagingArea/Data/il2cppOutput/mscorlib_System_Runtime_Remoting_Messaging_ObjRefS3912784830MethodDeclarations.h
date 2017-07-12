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

// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct ObjRefSurrogate_t3912784830;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1912587528;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::.ctor()
extern "C"  void ObjRefSurrogate__ctor_m3732637940 (ObjRefSurrogate_t3912784830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ObjRefSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern "C"  Il2CppObject * ObjRefSurrogate_SetObjectData_m1873902916 (ObjRefSurrogate_t3912784830 * __this, Il2CppObject * ___obj0, SerializationInfo_t228987430 * ___si1, StreamingContext_t1417235061  ___sc2, Il2CppObject * ___selector3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
