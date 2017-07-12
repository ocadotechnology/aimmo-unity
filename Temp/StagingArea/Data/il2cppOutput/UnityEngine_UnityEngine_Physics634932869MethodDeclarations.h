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

// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1214023521;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction478029726.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"

// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m2874007225 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, float ___maxDistance2, int32_t ___layerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  bool Physics_Raycast_m89212106 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, float ___maxDistance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Physics_Raycast_m2667915561 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m3475924638 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m1929115794 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, RaycastHit_t87180320 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Physics_Raycast_m2994111303 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, RaycastHit_t87180320 * ___hitInfo2, float ___maxDistance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
extern "C"  bool Physics_Raycast_m4027183840 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, RaycastHit_t87180320 * ___hitInfo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m2036777053 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, RaycastHit_t87180320 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m2691929452 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, float ___maxDistance1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single)
extern "C"  bool Physics_Raycast_m780162053 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, float ___maxDistance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray)
extern "C"  bool Physics_Raycast_m2686676054 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m1844392139 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m2009151399 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, RaycastHit_t87180320 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Physics_Raycast_m2308457076 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, RaycastHit_t87180320 * ___hitInfo1, float ___maxDistance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C"  bool Physics_Raycast_m2736931691 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, RaycastHit_t87180320 * ___hitInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m233619224 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, RaycastHit_t87180320 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  RaycastHitU5BU5D_t1214023521* Physics_RaycastAll_m233036521 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, float ___maxDistance1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single)
extern "C"  RaycastHitU5BU5D_t1214023521* Physics_RaycastAll_m3928448900 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, float ___maxDistance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray)
extern "C"  RaycastHitU5BU5D_t1214023521* Physics_RaycastAll_m1246652201 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1214023521* Physics_RaycastAll_m410413656 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1214023521* Physics_RaycastAll_m3908263591 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C"  RaycastHitU5BU5D_t1214023521* Physics_RaycastAll_m3256436970 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, float ___maxDistance2, int32_t ___layermask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  RaycastHitU5BU5D_t1214023521* Physics_RaycastAll_m3484190429 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, float ___maxDistance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  RaycastHitU5BU5D_t1214023521* Physics_RaycastAll_m3650851272 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1214023521* Physics_INTERNAL_CALL_RaycastAll_m2126789092 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___origin0, Vector3_t2243707580 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Internal_Raycast_m1160243045 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, RaycastHit_t87180320 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_Internal_Raycast_m93849932 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___origin0, Vector3_t2243707580 * ___direction1, RaycastHit_t87180320 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_RaycastTest(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Internal_RaycastTest_m3442924926 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_Internal_RaycastTest_m3440840981 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___origin0, Vector3_t2243707580 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
