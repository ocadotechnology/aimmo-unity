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

// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t1254994451;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String
struct String_t;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t1538980900;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.IList
struct IList_t3321498491;
// System.Object
struct Il2CppObject;
// System.Collections.IDictionary
struct IDictionary_t596158605;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
extern "C"  void ConstructionCall__ctor_m1143766850 (ConstructionCall_t1254994451 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConstructionCall__ctor_m3260721094 (ConstructionCall_t1254994451 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
extern "C"  void ConstructionCall_InitDictionary_m4046452035 (ConstructionCall_t1254994451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
extern "C"  void ConstructionCall_set_IsContextOk_m90795526 (ConstructionCall_t1254994451 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern "C"  Type_t * ConstructionCall_get_ActivationType_m2706279506 (ConstructionCall_t1254994451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern "C"  String_t* ConstructionCall_get_ActivationTypeName_m2441234710 (ConstructionCall_t1254994451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern "C"  Il2CppObject * ConstructionCall_get_Activator_m2094779222 (ConstructionCall_t1254994451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern "C"  void ConstructionCall_set_Activator_m305409617 (ConstructionCall_t1254994451 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern "C"  ObjectU5BU5D_t3614634134* ConstructionCall_get_CallSiteActivationAttributes_m1402996937 (ConstructionCall_t1254994451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
extern "C"  void ConstructionCall_SetActivationAttributes_m1878298372 (ConstructionCall_t1254994451 * __this, ObjectU5BU5D_t3614634134* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
extern "C"  Il2CppObject * ConstructionCall_get_ContextProperties_m3726872436 (ConstructionCall_t1254994451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
extern "C"  void ConstructionCall_InitMethodProperty_m735194407 (ConstructionCall_t1254994451 * __this, String_t* ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConstructionCall_GetObjectData_m3974358557 (ConstructionCall_t1254994451 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern "C"  Il2CppObject * ConstructionCall_get_Properties_m3492510759 (ConstructionCall_t1254994451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
