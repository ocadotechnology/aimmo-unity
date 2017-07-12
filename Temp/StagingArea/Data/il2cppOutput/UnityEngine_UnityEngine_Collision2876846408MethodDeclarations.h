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

// UnityEngine.Collision
struct Collision_t2876846408;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1084937515;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Component
struct Component_t3819376471;
struct Collision_t2876846408_marshaled_pinvoke;
struct Collision_t2876846408_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UnityEngine.Collision::.ctor()
extern "C"  void Collision__ctor_m635081107 (Collision_t2876846408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_relativeVelocity()
extern "C"  Vector3_t2243707580  Collision_get_relativeVelocity_m2302609283 (Collision_t2876846408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collision::get_rigidbody()
extern "C"  Rigidbody_t4233889191 * Collision_get_rigidbody_m3671561778 (Collision_t2876846408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.Collision::get_collider()
extern "C"  Collider_t3497673348 * Collision_get_collider_m3340328360 (Collision_t2876846408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Collision::get_transform()
extern "C"  Transform_t3275118058 * Collision_get_transform_m4132935520 (Collision_t2876846408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
extern "C"  GameObject_t1756533147 * Collision_get_gameObject_m1370363400 (Collision_t2876846408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
extern "C"  ContactPointU5BU5D_t1084937515* Collision_get_contacts_m266635379 (Collision_t2876846408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Collision::GetEnumerator()
extern "C"  Il2CppObject * Collision_GetEnumerator_m4009889947 (Collision_t2876846408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_impulse()
extern "C"  Vector3_t2243707580  Collision_get_impulse_m1836134987 (Collision_t2876846408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_impactForceSum()
extern "C"  Vector3_t2243707580  Collision_get_impactForceSum_m521972354 (Collision_t2876846408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_frictionForceSum()
extern "C"  Vector3_t2243707580  Collision_get_frictionForceSum_m3438602686 (Collision_t2876846408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Collision::get_other()
extern "C"  Component_t3819376471 * Collision_get_other_m4238363497 (Collision_t2876846408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Collision_t2876846408;
struct Collision_t2876846408_marshaled_pinvoke;

extern "C" void Collision_t2876846408_marshal_pinvoke(const Collision_t2876846408& unmarshaled, Collision_t2876846408_marshaled_pinvoke& marshaled);
extern "C" void Collision_t2876846408_marshal_pinvoke_back(const Collision_t2876846408_marshaled_pinvoke& marshaled, Collision_t2876846408& unmarshaled);
extern "C" void Collision_t2876846408_marshal_pinvoke_cleanup(Collision_t2876846408_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Collision_t2876846408;
struct Collision_t2876846408_marshaled_com;

extern "C" void Collision_t2876846408_marshal_com(const Collision_t2876846408& unmarshaled, Collision_t2876846408_marshaled_com& marshaled);
extern "C" void Collision_t2876846408_marshal_com_back(const Collision_t2876846408_marshaled_com& marshaled, Collision_t2876846408& unmarshaled);
extern "C" void Collision_t2876846408_marshal_com_cleanup(Collision_t2876846408_marshaled_com& marshaled);
