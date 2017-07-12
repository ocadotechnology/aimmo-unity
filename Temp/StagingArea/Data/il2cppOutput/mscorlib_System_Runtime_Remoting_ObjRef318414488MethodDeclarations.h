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

// System.Runtime.Remoting.ObjRef
struct ObjRef_t318414488;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Runtime.Remoting.IChannelInfo
struct IChannelInfo_t185176048;
// System.Runtime.Remoting.IEnvoyInfo
struct IEnvoyInfo_t503256512;
// System.Runtime.Remoting.IRemotingTypeInfo
struct IRemotingTypeInfo_t1105948144;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Runtime.Remoting.ObjRef::.ctor()
extern "C"  void ObjRef__ctor_m1486312270 (ObjRef_t318414488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ObjRef__ctor_m12983315 (ObjRef_t318414488 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::.cctor()
extern "C"  void ObjRef__cctor_m2226086515 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.ObjRef::get_IsReferenceToWellKnow()
extern "C"  bool ObjRef_get_IsReferenceToWellKnow_m1201296318 (ObjRef_t318414488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo()
extern "C"  Il2CppObject * ObjRef_get_ChannelInfo_m53840305 (ObjRef_t318414488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo()
extern "C"  Il2CppObject * ObjRef_get_EnvoyInfo_m249826161 (ObjRef_t318414488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo)
extern "C"  void ObjRef_set_EnvoyInfo_m860410508 (ObjRef_t318414488 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo()
extern "C"  Il2CppObject * ObjRef_get_TypeInfo_m3765544442 (ObjRef_t318414488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo)
extern "C"  void ObjRef_set_TypeInfo_m1661789743 (ObjRef_t318414488 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ObjRef::get_URI()
extern "C"  String_t* ObjRef_get_URI_m209751056 (ObjRef_t318414488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String)
extern "C"  void ObjRef_set_URI_m1923766829 (ObjRef_t318414488 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ObjRef_GetObjectData_m3081609242 (ObjRef_t318414488 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.ObjRef::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  Il2CppObject * ObjRef_GetRealObject_m1872300788 (ObjRef_t318414488 * __this, StreamingContext_t1417235061  ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::UpdateChannelInfo()
extern "C"  void ObjRef_UpdateChannelInfo_m2052557678 (ObjRef_t318414488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ObjRef::get_ServerType()
extern "C"  Type_t * ObjRef_get_ServerType_m3922940868 (ObjRef_t318414488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
