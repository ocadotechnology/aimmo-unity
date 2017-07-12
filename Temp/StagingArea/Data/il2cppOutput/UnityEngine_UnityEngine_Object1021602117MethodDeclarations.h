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

// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Object[]
struct ObjectU5BU5D_t4217747464;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
struct Object_t1021602117_marshaled_pinvoke;
struct Object_t1021602117_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_HideFlags1434274199.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void UnityEngine.Object::.ctor()
extern "C"  void Object__ctor_m197157284 (Object_t1021602117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C"  Object_t1021602117 * Object_Internal_CloneSingle_m260620116 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingleWithParent(UnityEngine.Object,UnityEngine.Transform,System.Boolean)
extern "C"  Object_t1021602117 * Object_Internal_CloneSingleWithParent_m665572246 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___data0, Transform_t3275118058 * ___parent1, bool ___worldPositionStays2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Object_t1021602117 * Object_Internal_InstantiateSingle_m2776302597 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___data0, Vector3_t2243707580  ___pos1, Quaternion_t4030073918  ___rot2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  Object_t1021602117 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m3932420250 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___data0, Vector3_t2243707580 * ___pos1, Quaternion_t4030073918 * ___rot2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingleWithParent(UnityEngine.Object,UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Object_t1021602117 * Object_Internal_InstantiateSingleWithParent_m509082884 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___data0, Transform_t3275118058 * ___parent1, Vector3_t2243707580  ___pos2, Quaternion_t4030073918  ___rot3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingleWithParent(UnityEngine.Object,UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  Object_t1021602117 * Object_INTERNAL_CALL_Internal_InstantiateSingleWithParent_m1401308849 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___data0, Transform_t3275118058 * ___parent1, Vector3_t2243707580 * ___pos2, Quaternion_t4030073918 * ___rot3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetOffsetOfInstanceIDInCPlusPlusObject()
extern "C"  int32_t Object_GetOffsetOfInstanceIDInCPlusPlusObject_m1587840561 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::EnsureRunningOnMainThread()
extern "C"  void Object_EnsureRunningOnMainThread_m3042842193 (Object_t1021602117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C"  void Object_Destroy_m4279412553 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___obj0, float ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m4145850038 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C"  void Object_DestroyImmediate_m3563317232 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___obj0, bool ___allowDestroyingAssets1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C"  void Object_DestroyImmediate_m95027445 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C"  ObjectU5BU5D_t4217747464* Object_FindObjectsOfType_m2121813744 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m2079638459 (Object_t1021602117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m4157836998 (Object_t1021602117 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m2330762974 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
extern "C"  int32_t Object_get_hideFlags_m4158950869 (Object_t1021602117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C"  void Object_set_hideFlags_m2204253440 (Object_t1021602117 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)
extern "C"  void Object_DestroyObject_m282495858 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___obj0, float ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
extern "C"  void Object_DestroyObject_m2343493981 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindSceneObjectsOfType(System.Type)
extern "C"  ObjectU5BU5D_t4217747464* Object_FindSceneObjectsOfType_m1833688338 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfTypeIncludingAssets(System.Type)
extern "C"  ObjectU5BU5D_t4217747464* Object_FindObjectsOfTypeIncludingAssets_m3988851426 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
extern "C"  String_t* Object_ToString_m1947404527 (Object_t1021602117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::DoesObjectWithInstanceIDExist(System.Int32)
extern "C"  bool Object_DoesObjectWithInstanceIDExist_m2570795274 (Il2CppObject * __this /* static, unused */, int32_t ___instanceID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C"  int32_t Object_GetInstanceID_m1920497914 (Object_t1021602117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C"  int32_t Object_GetHashCode_m3431642059 (Object_t1021602117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern "C"  bool Object_Equals_m4029628913 (Object_t1021602117 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m2856731593 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___exists0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_CompareBaseObjects_m3953996214 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___lhs0, Object_t1021602117 * ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C"  bool Object_IsNativeObjectAlive_m4056217615 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C"  IntPtr_t Object_GetCachedPtr_m943750213 (Object_t1021602117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Object_t1021602117 * Object_Instantiate_m938141395 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___original0, Vector3_t2243707580  ___position1, Quaternion_t4030073918  ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
extern "C"  Object_t1021602117 * Object_Instantiate_m2160322936 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___original0, Vector3_t2243707580  ___position1, Quaternion_t4030073918  ___rotation2, Transform_t3275118058 * ___parent3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
extern "C"  Object_t1021602117 * Object_Instantiate_m2439155489 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___original0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Transform)
extern "C"  Object_t1021602117 * Object_Instantiate_m2177117080 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___original0, Transform_t3275118058 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Transform,System.Boolean)
extern "C"  Object_t1021602117 * Object_Instantiate_m2489341053 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___original0, Transform_t3275118058 * ___parent1, bool ___instantiateInWorldSpace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C"  void Object_CheckNullArgument_m1711119106 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___arg0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C"  Object_t1021602117 * Object_FindObjectOfType_m2330404063 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m3764089466 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___x0, Object_t1021602117 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m2402264703 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___x0, Object_t1021602117 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::.cctor()
extern "C"  void Object__cctor_m2991092887 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Object_t1021602117;
struct Object_t1021602117_marshaled_pinvoke;

extern "C" void Object_t1021602117_marshal_pinvoke(const Object_t1021602117& unmarshaled, Object_t1021602117_marshaled_pinvoke& marshaled);
extern "C" void Object_t1021602117_marshal_pinvoke_back(const Object_t1021602117_marshaled_pinvoke& marshaled, Object_t1021602117& unmarshaled);
extern "C" void Object_t1021602117_marshal_pinvoke_cleanup(Object_t1021602117_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Object_t1021602117;
struct Object_t1021602117_marshaled_com;

extern "C" void Object_t1021602117_marshal_com(const Object_t1021602117& unmarshaled, Object_t1021602117_marshaled_com& marshaled);
extern "C" void Object_t1021602117_marshal_com_back(const Object_t1021602117_marshaled_com& marshaled, Object_t1021602117& unmarshaled);
extern "C" void Object_t1021602117_marshal_com_cleanup(Object_t1021602117_marshaled_com& marshaled);
