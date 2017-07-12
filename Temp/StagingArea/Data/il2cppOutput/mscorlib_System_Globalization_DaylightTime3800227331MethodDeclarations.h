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

// System.Globalization.DaylightTime
struct DaylightTime_t3800227331;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.Void System.Globalization.DaylightTime::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
extern "C"  void DaylightTime__ctor_m807489965 (DaylightTime_t3800227331 * __this, DateTime_t693205669  ___start0, DateTime_t693205669  ___end1, TimeSpan_t3430258949  ___delta2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
extern "C"  DateTime_t693205669  DaylightTime_get_Start_m4045419007 (DaylightTime_t3800227331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
extern "C"  DateTime_t693205669  DaylightTime_get_End_m2753432204 (DaylightTime_t3800227331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
extern "C"  TimeSpan_t3430258949  DaylightTime_get_Delta_m2316831491 (DaylightTime_t3800227331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
