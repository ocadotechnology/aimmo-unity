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

// System.Timers.Timer
struct Timer_t4294691011;
// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_t713841488;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Timers_ElapsedEventHandler713841488.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Timers.Timer::.ctor(System.Double)
extern "C"  void Timer__ctor_m3150618866 (Timer_t4294691011 * __this, double ___interval0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::add_Elapsed(System.Timers.ElapsedEventHandler)
extern "C"  void Timer_add_Elapsed_m2965740303 (Timer_t4294691011 * __this, ElapsedEventHandler_t713841488 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::remove_Elapsed(System.Timers.ElapsedEventHandler)
extern "C"  void Timer_remove_Elapsed_m3662398326 (Timer_t4294691011 * __this, ElapsedEventHandler_t713841488 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Timers.Timer::get_Enabled()
extern "C"  bool Timer_get_Enabled_m1770679050 (Timer_t4294691011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::set_Enabled(System.Boolean)
extern "C"  void Timer_set_Enabled_m1101553571 (Timer_t4294691011 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::set_Interval(System.Double)
extern "C"  void Timer_set_Interval_m3341715812 (Timer_t4294691011 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::Close()
extern "C"  void Timer_Close_m2836754252 (Timer_t4294691011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::Dispose(System.Boolean)
extern "C"  void Timer_Dispose_m2625392360 (Timer_t4294691011 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::Callback(System.Object)
extern "C"  void Timer_Callback_m577455115 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
