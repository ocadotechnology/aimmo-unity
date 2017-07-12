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

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Component
struct Component_t3819376471;
// System.Type
struct Type_t;
// UnityEngine.Component[]
struct ComponentU5BU5D_t4136971630;
// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_PrimitiveType2454390065.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_SendMessageOptions1414041951.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void UnityEngine.GameObject::.ctor()
extern "C"  void GameObject__ctor_m498247354 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
extern "C"  GameObject_t1756533147 * GameObject_CreatePrimitive_m973880764 (Il2CppObject * __this /* static, unused */, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C"  Component_t3819376471 * GameObject_GetComponent_m306258075 (GameObject_t1756533147 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type,System.Boolean)
extern "C"  Component_t3819376471 * GameObject_GetComponentInChildren_m4263325740 (GameObject_t1756533147 * __this, Type_t * ___type0, bool ___includeInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
extern "C"  Component_t3819376471 * GameObject_GetComponentInParent_m1235194528 (GameObject_t1756533147 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponents(System.Type)
extern "C"  ComponentU5BU5D_t4136971630* GameObject_GetComponents_m297658252 (GameObject_t1756533147 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponentsInChildren(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t4136971630* GameObject_GetComponentsInChildren_m993725821 (GameObject_t1756533147 * __this, Type_t * ___type0, bool ___includeInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponentsInParent(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t4136971630* GameObject_GetComponentsInParent_m1568786844 (GameObject_t1756533147 * __this, Type_t * ___type0, bool ___includeInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C"  Il2CppArray * GameObject_GetComponentsInternal_m3486524399 (GameObject_t1756533147 * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, Il2CppObject * ___resultList5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m909382139 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
extern "C"  String_t* GameObject_get_tag_m1425941094 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_tag(System.String)
extern "C"  void GameObject_set_tag_m717375123 (GameObject_t1756533147 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void GameObject_SendMessage_m71956653 (GameObject_t1756533147 * __this, String_t* ___methodName0, Il2CppObject * ___value1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C"  Component_t3819376471 * GameObject_Internal_AddComponentWithType_m214735204 (GameObject_t1756533147 * __this, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C"  Component_t3819376471 * GameObject_AddComponent_m3757565614 (GameObject_t1756533147 * __this, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C"  void GameObject_Internal_CreateGameObject_m3428198595 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___mono0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1756533147 * GameObject_Find_m836511350 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
