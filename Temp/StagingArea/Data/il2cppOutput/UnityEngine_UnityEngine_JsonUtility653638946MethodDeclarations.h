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
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"

// System.String UnityEngine.JsonUtility::ToJson(System.Object)
extern "C"  String_t* JsonUtility_ToJson_m1232500921 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
extern "C"  String_t* JsonUtility_ToJson_m3963821256 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, bool ___prettyPrint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.JsonUtility::FromJson(System.String,System.Type)
extern "C"  Il2CppObject * JsonUtility_FromJson_m4182348567 (Il2CppObject * __this /* static, unused */, String_t* ___json0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
