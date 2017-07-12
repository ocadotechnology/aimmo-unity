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

// UnityEngine.ScriptableObject
struct ScriptableObject_t1975622470;
// System.String
struct String_t;
// System.Type
struct Type_t;
struct ScriptableObject_t1975622470_marshaled_pinvoke;
struct ScriptableObject_t1975622470_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C"  void ScriptableObject__ctor_m2671490429 (ScriptableObject_t1975622470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C"  void ScriptableObject_Internal_CreateScriptableObject_m1778903390 (Il2CppObject * __this /* static, unused */, ScriptableObject_t1975622470 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C"  ScriptableObject_t1975622470 * ScriptableObject_CreateInstance_m3921674852 (Il2CppObject * __this /* static, unused */, String_t* ___className0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C"  ScriptableObject_t1975622470 * ScriptableObject_CreateInstance_m3271154163 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C"  ScriptableObject_t1975622470 * ScriptableObject_CreateInstanceFromType_m4271875689 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ScriptableObject_t1975622470;
struct ScriptableObject_t1975622470_marshaled_pinvoke;

extern "C" void ScriptableObject_t1975622470_marshal_pinvoke(const ScriptableObject_t1975622470& unmarshaled, ScriptableObject_t1975622470_marshaled_pinvoke& marshaled);
extern "C" void ScriptableObject_t1975622470_marshal_pinvoke_back(const ScriptableObject_t1975622470_marshaled_pinvoke& marshaled, ScriptableObject_t1975622470& unmarshaled);
extern "C" void ScriptableObject_t1975622470_marshal_pinvoke_cleanup(ScriptableObject_t1975622470_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ScriptableObject_t1975622470;
struct ScriptableObject_t1975622470_marshaled_com;

extern "C" void ScriptableObject_t1975622470_marshal_com(const ScriptableObject_t1975622470& unmarshaled, ScriptableObject_t1975622470_marshaled_com& marshaled);
extern "C" void ScriptableObject_t1975622470_marshal_com_back(const ScriptableObject_t1975622470_marshaled_com& marshaled, ScriptableObject_t1975622470& unmarshaled);
extern "C" void ScriptableObject_t1975622470_marshal_com_cleanup(ScriptableObject_t1975622470_marshaled_com& marshaled);
