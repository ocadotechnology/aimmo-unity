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

// System.Threading.EventWaitHandle
struct EventWaitHandle_t2091316307;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_EventResetMode4116945436.h"

// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode)
extern "C"  void EventWaitHandle__ctor_m106135182 (EventWaitHandle_t2091316307 * __this, bool ___initialState0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::IsManualReset(System.Threading.EventResetMode)
extern "C"  bool EventWaitHandle_IsManualReset_m616210854 (EventWaitHandle_t2091316307 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Reset()
extern "C"  bool EventWaitHandle_Reset_m779895263 (EventWaitHandle_t2091316307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C"  bool EventWaitHandle_Set_m2975776670 (EventWaitHandle_t2091316307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
