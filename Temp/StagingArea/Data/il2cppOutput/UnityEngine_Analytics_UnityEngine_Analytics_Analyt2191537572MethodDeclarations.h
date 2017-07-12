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

// UnityEngine.Analytics.AnalyticsTracker
struct AnalyticsTracker_t2191537572;
// System.String
struct String_t;
// UnityEngine.Analytics.TrackableProperty
struct TrackableProperty_t1304606600;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Tracka1304606600.h"

// System.Void UnityEngine.Analytics.AnalyticsTracker::.ctor()
extern "C"  void AnalyticsTracker__ctor_m47609255 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.AnalyticsTracker::get_eventName()
extern "C"  String_t* AnalyticsTracker_get_eventName_m492472474 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::set_eventName(System.String)
extern "C"  void AnalyticsTracker_set_eventName_m3418854143 (AnalyticsTracker_t2191537572 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.TrackableProperty UnityEngine.Analytics.AnalyticsTracker::get_TP()
extern "C"  TrackableProperty_t1304606600 * AnalyticsTracker_get_TP_m2972917566 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::set_TP(UnityEngine.Analytics.TrackableProperty)
extern "C"  void AnalyticsTracker_set_TP_m2860685991 (AnalyticsTracker_t2191537572 * __this, TrackableProperty_t1304606600 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::Awake()
extern "C"  void AnalyticsTracker_Awake_m2456570402 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::Start()
extern "C"  void AnalyticsTracker_Start_m90834595 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnEnable()
extern "C"  void AnalyticsTracker_OnEnable_m1011291651 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnDisable()
extern "C"  void AnalyticsTracker_OnDisable_m2590423102 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnApplicationPause()
extern "C"  void AnalyticsTracker_OnApplicationPause_m112444632 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnDestroy()
extern "C"  void AnalyticsTracker_OnDestroy_m2461673364 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::TriggerEvent()
extern "C"  void AnalyticsTracker_TriggerEvent_m1494303835 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::SendEvent()
extern "C"  void AnalyticsTracker_SendEvent_m374303143 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::BuildParameters()
extern "C"  void AnalyticsTracker_BuildParameters_m1716991151 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
