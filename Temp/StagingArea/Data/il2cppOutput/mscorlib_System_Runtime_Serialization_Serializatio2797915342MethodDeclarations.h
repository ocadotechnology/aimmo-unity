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

// System.Runtime.Serialization.SerializationCallbacks
struct SerializationCallbacks_t2797915342;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Runtime.Serialization.SerializationCallbacks::.ctor(System.Type)
extern "C"  void SerializationCallbacks__ctor_m722356782 (SerializationCallbacks_t2797915342 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::.cctor()
extern "C"  void SerializationCallbacks__cctor_m838947604 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationCallbacks::get_HasDeserializedCallbacks()
extern "C"  bool SerializationCallbacks_get_HasDeserializedCallbacks_m2219415823 (SerializationCallbacks_t2797915342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::GetMethodsByAttribute(System.Type,System.Type)
extern "C"  ArrayList_t4252133567 * SerializationCallbacks_GetMethodsByAttribute_m772855716 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___attr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::Invoke(System.Collections.ArrayList,System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationCallbacks_Invoke_m1309910094 (Il2CppObject * __this /* static, unused */, ArrayList_t4252133567 * ___list0, Il2CppObject * ___target1, StreamingContext_t1417235061  ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationCallbacks_RaiseOnDeserializing_m515474780 (SerializationCallbacks_t2797915342 * __this, Il2CppObject * ___target0, StreamingContext_t1417235061  ___contex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationCallbacks_RaiseOnDeserialized_m3943016579 (SerializationCallbacks_t2797915342 * __this, Il2CppObject * ___target0, StreamingContext_t1417235061  ___contex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationCallbacks System.Runtime.Serialization.SerializationCallbacks::GetSerializationCallbacks(System.Type)
extern "C"  SerializationCallbacks_t2797915342 * SerializationCallbacks_GetSerializationCallbacks_m1495197648 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
