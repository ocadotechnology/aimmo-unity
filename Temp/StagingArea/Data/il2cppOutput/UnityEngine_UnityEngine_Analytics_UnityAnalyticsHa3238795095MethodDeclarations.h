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

// UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t3238795095;
// System.String
struct String_t;
// UnityEngine.Analytics.CustomEventData
struct CustomEventData_t1269126727;
struct UnityAnalyticsHandler_t3238795095_marshaled_pinvoke;
struct UnityAnalyticsHandler_t3238795095_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Analytics_AnalyticsResult3037633135.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Analytics_CustomEventData1269126727.h"

// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::.ctor()
extern "C"  void UnityAnalyticsHandler__ctor_m113083880 (UnityAnalyticsHandler_t3238795095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::InternalCreate()
extern "C"  void UnityAnalyticsHandler_InternalCreate_m2198599331 (UnityAnalyticsHandler_t3238795095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::InternalDestroy()
extern "C"  void UnityAnalyticsHandler_InternalDestroy_m485611477 (UnityAnalyticsHandler_t3238795095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::Finalize()
extern "C"  void UnityAnalyticsHandler_Finalize_m1363110228 (UnityAnalyticsHandler_t3238795095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::Dispose()
extern "C"  void UnityAnalyticsHandler_Dispose_m1048126775 (UnityAnalyticsHandler_t3238795095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::CustomEvent(System.String)
extern "C"  int32_t UnityAnalyticsHandler_CustomEvent_m1069747280 (UnityAnalyticsHandler_t3238795095 * __this, String_t* ___customEventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::CustomEvent(UnityEngine.Analytics.CustomEventData)
extern "C"  int32_t UnityAnalyticsHandler_CustomEvent_m2884790978 (UnityAnalyticsHandler_t3238795095 * __this, CustomEventData_t1269126727 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::SendCustomEventName(System.String)
extern "C"  int32_t UnityAnalyticsHandler_SendCustomEventName_m558081333 (UnityAnalyticsHandler_t3238795095 * __this, String_t* ___customEventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::SendCustomEvent(UnityEngine.Analytics.CustomEventData)
extern "C"  int32_t UnityAnalyticsHandler_SendCustomEvent_m375646568 (UnityAnalyticsHandler_t3238795095 * __this, CustomEventData_t1269126727 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct UnityAnalyticsHandler_t3238795095;
struct UnityAnalyticsHandler_t3238795095_marshaled_pinvoke;

extern "C" void UnityAnalyticsHandler_t3238795095_marshal_pinvoke(const UnityAnalyticsHandler_t3238795095& unmarshaled, UnityAnalyticsHandler_t3238795095_marshaled_pinvoke& marshaled);
extern "C" void UnityAnalyticsHandler_t3238795095_marshal_pinvoke_back(const UnityAnalyticsHandler_t3238795095_marshaled_pinvoke& marshaled, UnityAnalyticsHandler_t3238795095& unmarshaled);
extern "C" void UnityAnalyticsHandler_t3238795095_marshal_pinvoke_cleanup(UnityAnalyticsHandler_t3238795095_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct UnityAnalyticsHandler_t3238795095;
struct UnityAnalyticsHandler_t3238795095_marshaled_com;

extern "C" void UnityAnalyticsHandler_t3238795095_marshal_com(const UnityAnalyticsHandler_t3238795095& unmarshaled, UnityAnalyticsHandler_t3238795095_marshaled_com& marshaled);
extern "C" void UnityAnalyticsHandler_t3238795095_marshal_com_back(const UnityAnalyticsHandler_t3238795095_marshaled_com& marshaled, UnityAnalyticsHandler_t3238795095& unmarshaled);
extern "C" void UnityAnalyticsHandler_t3238795095_marshal_com_cleanup(UnityAnalyticsHandler_t3238795095_marshaled_com& marshaled);
