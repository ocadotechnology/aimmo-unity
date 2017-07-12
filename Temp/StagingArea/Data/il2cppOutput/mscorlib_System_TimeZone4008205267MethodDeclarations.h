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

// System.TimeZone
struct TimeZone_t4008205267;
// System.Globalization.DaylightTime
struct DaylightTime_t3800227331;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Globalization_DaylightTime3800227331.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.Void System.TimeZone::.ctor()
extern "C"  void TimeZone__ctor_m1737577440 (TimeZone_t4008205267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
extern "C"  void TimeZone__cctor_m3830027651 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C"  TimeZone_t4008205267 * TimeZone_get_CurrentTimeZone_m3729014954 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern "C"  bool TimeZone_IsDaylightSavingTime_m1840774423 (TimeZone_t4008205267 * __this, DateTime_t693205669  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C"  bool TimeZone_IsDaylightSavingTime_m875882154 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___time0, DaylightTime_t3800227331 * ___daylightTimes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern "C"  DateTime_t693205669  TimeZone_ToLocalTime_m50989298 (TimeZone_t4008205267 * __this, DateTime_t693205669  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern "C"  DateTime_t693205669  TimeZone_ToUniversalTime_m1135303300 (TimeZone_t4008205267 * __this, DateTime_t693205669  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern "C"  TimeSpan_t3430258949  TimeZone_GetLocalTimeDiff_m20330162 (TimeZone_t4008205267 * __this, DateTime_t693205669  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C"  TimeSpan_t3430258949  TimeZone_GetLocalTimeDiff_m542327006 (TimeZone_t4008205267 * __this, DateTime_t693205669  ___time0, TimeSpan_t3430258949  ___utc_offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
