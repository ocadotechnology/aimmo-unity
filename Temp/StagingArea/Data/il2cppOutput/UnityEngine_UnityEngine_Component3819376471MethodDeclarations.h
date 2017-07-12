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

// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Type
struct Type_t;
// System.String
struct String_t;
// UnityEngine.Component[]
struct ComponentU5BU5D_t4136971630;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t3188497603;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_SendMessageOptions1414041951.h"

// System.Void UnityEngine.Component::.ctor()
extern "C"  void Component__ctor_m205306948 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C"  Component_t3819376471 * Component_GetComponent_m4225719715 (Component_t3819376471 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C"  void Component_GetComponentFastPath_m2700814707 (Component_t3819376471 * __this, Type_t * ___type0, IntPtr_t ___oneFurtherThanResultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.String)
extern "C"  Component_t3819376471 * Component_GetComponent_m2473832642 (Component_t3819376471 * __this, String_t* ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type,System.Boolean)
extern "C"  Component_t3819376471 * Component_GetComponentInChildren_m3925629424 (Component_t3819376471 * __this, Type_t * ___t0, bool ___includeInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C"  Component_t3819376471 * Component_GetComponentInChildren_m3985003615 (Component_t3819376471 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInChildren(System.Type)
extern "C"  ComponentU5BU5D_t4136971630* Component_GetComponentsInChildren_m843288020 (Component_t3819376471 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInChildren(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t4136971630* Component_GetComponentsInChildren_m908027537 (Component_t3819376471 * __this, Type_t * ___t0, bool ___includeInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C"  Component_t3819376471 * Component_GetComponentInParent_m2799402500 (Component_t3819376471 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInParent(System.Type)
extern "C"  ComponentU5BU5D_t4136971630* Component_GetComponentsInParent_m4192184629 (Component_t3819376471 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInParent(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t4136971630* Component_GetComponentsInParent_m1920178904 (Component_t3819376471 * __this, Type_t * ___t0, bool ___includeInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponents(System.Type)
extern "C"  ComponentU5BU5D_t4136971630* Component_GetComponents_m637589504 (Component_t3819376471 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C"  void Component_GetComponentsForListInternal_m4241828391 (Component_t3819376471 * __this, Type_t * ___searchType0, Il2CppObject * ___resultList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  void Component_GetComponents_m3712441745 (Component_t3819376471 * __this, Type_t * ___type0, List_1_t3188497603 * ___results1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Component::get_tag()
extern "C"  String_t* Component_get_tag_m357168014 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::set_tag(System.String)
extern "C"  void Component_set_tag_m4292293503 (Component_t3819376471 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
extern "C"  bool Component_CompareTag_m3443292365 (Component_t3819376471 * __this, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessageUpwards_m2584088787 (Component_t3819376471 * __this, String_t* ___methodName0, Il2CppObject * ___value1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String,System.Object)
extern "C"  void Component_SendMessageUpwards_m325086847 (Component_t3819376471 * __this, String_t* ___methodName0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String)
extern "C"  void Component_SendMessageUpwards_m2041012277 (Component_t3819376471 * __this, String_t* ___methodName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessageUpwards_m19741277 (Component_t3819376471 * __this, String_t* ___methodName0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessage_m2241432133 (Component_t3819376471 * __this, String_t* ___methodName0, Il2CppObject * ___value1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object)
extern "C"  void Component_SendMessage_m913946877 (Component_t3819376471 * __this, String_t* ___methodName0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String)
extern "C"  void Component_SendMessage_m3615678587 (Component_t3819376471 * __this, String_t* ___methodName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessage_m4199581575 (Component_t3819376471 * __this, String_t* ___methodName0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void Component_BroadcastMessage_m2230184532 (Component_t3819376471 * __this, String_t* ___methodName0, Il2CppObject * ___parameter1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object)
extern "C"  void Component_BroadcastMessage_m1308086896 (Component_t3819376471 * __this, String_t* ___methodName0, Il2CppObject * ___parameter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String)
extern "C"  void Component_BroadcastMessage_m1706240890 (Component_t3819376471 * __this, String_t* ___methodName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern "C"  void Component_BroadcastMessage_m444672650 (Component_t3819376471 * __this, String_t* ___methodName0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
