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

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t2254682501;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t318414488;
// System.MarshalByRefObject
struct MarshalByRefObject_t1285298191;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Remoting_ObjRef318414488.h"
#include "mscorlib_System_MarshalByRefObject1285298191.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C"  void ClientIdentity__ctor_m1342022863 (ClientIdentity_t2254682501 * __this, String_t* ___objectUri0, ObjRef_t318414488 * ___objRef1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C"  MarshalByRefObject_t1285298191 * ClientIdentity_get_ClientProxy_m4052942792 (ClientIdentity_t2254682501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C"  void ClientIdentity_set_ClientProxy_m3932647473 (ClientIdentity_t2254682501 * __this, MarshalByRefObject_t1285298191 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C"  ObjRef_t318414488 * ClientIdentity_CreateObjRef_m3625915063 (ClientIdentity_t2254682501 * __this, Type_t * ___requestedType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C"  String_t* ClientIdentity_get_TargetUri_m1801235322 (ClientIdentity_t2254682501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
