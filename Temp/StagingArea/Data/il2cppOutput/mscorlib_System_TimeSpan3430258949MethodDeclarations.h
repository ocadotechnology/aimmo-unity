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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.TimeSpan::.ctor(System.Int64)
extern "C"  void TimeSpan__ctor_m96381766 (TimeSpan_t3430258949 * __this, int64_t ___ticks0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void TimeSpan__ctor_m1888018443 (TimeSpan_t3430258949 * __this, int32_t ___hours0, int32_t ___minutes1, int32_t ___seconds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void TimeSpan__ctor_m1560702407 (TimeSpan_t3430258949 * __this, int32_t ___days0, int32_t ___hours1, int32_t ___minutes2, int32_t ___seconds3, int32_t ___milliseconds4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.cctor()
extern "C"  void TimeSpan__cctor_m2744495097 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::CalculateTicks(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int64_t TimeSpan_CalculateTicks_m2706497924 (Il2CppObject * __this /* static, unused */, int32_t ___days0, int32_t ___hours1, int32_t ___minutes2, int32_t ___seconds3, int32_t ___milliseconds4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Days()
extern "C"  int32_t TimeSpan_get_Days_m1002111510 (TimeSpan_t3430258949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Hours()
extern "C"  int32_t TimeSpan_get_Hours_m3804628138 (TimeSpan_t3430258949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Milliseconds()
extern "C"  int32_t TimeSpan_get_Milliseconds_m4029737139 (TimeSpan_t3430258949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Minutes()
extern "C"  int32_t TimeSpan_get_Minutes_m2575030536 (TimeSpan_t3430258949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Seconds()
extern "C"  int32_t TimeSpan_get_Seconds_m3108432552 (TimeSpan_t3430258949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
extern "C"  int64_t TimeSpan_get_Ticks_m2285358246 (TimeSpan_t3430258949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalDays()
extern "C"  double TimeSpan_get_TotalDays_m3496775483 (TimeSpan_t3430258949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalHours()
extern "C"  double TimeSpan_get_TotalHours_m2301166279 (TimeSpan_t3430258949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMilliseconds()
extern "C"  double TimeSpan_get_TotalMilliseconds_m51604504 (TimeSpan_t3430258949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMinutes()
extern "C"  double TimeSpan_get_TotalMinutes_m1645177229 (TimeSpan_t3430258949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalSeconds()
extern "C"  double TimeSpan_get_TotalSeconds_m1295026915 (TimeSpan_t3430258949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
extern "C"  TimeSpan_t3430258949  TimeSpan_Add_m3228293154 (TimeSpan_t3430258949 * __this, TimeSpan_t3430258949  ___ts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
extern "C"  int32_t TimeSpan_Compare_m127140955 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___t10, TimeSpan_t3430258949  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.Object)
extern "C"  int32_t TimeSpan_CompareTo_m2891128664 (TimeSpan_t3430258949 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
extern "C"  int32_t TimeSpan_CompareTo_m4183101766 (TimeSpan_t3430258949 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.TimeSpan)
extern "C"  bool TimeSpan_Equals_m2029123271 (TimeSpan_t3430258949 * __this, TimeSpan_t3430258949  ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Duration()
extern "C"  TimeSpan_t3430258949  TimeSpan_Duration_m4205681645 (TimeSpan_t3430258949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.Object)
extern "C"  bool TimeSpan_Equals_m4102942751 (TimeSpan_t3430258949 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromDays(System.Double)
extern "C"  TimeSpan_t3430258949  TimeSpan_FromDays_m2859053398 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromHours(System.Double)
extern "C"  TimeSpan_t3430258949  TimeSpan_FromHours_m2521548378 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
extern "C"  TimeSpan_t3430258949  TimeSpan_FromMinutes_m1997633268 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
extern "C"  TimeSpan_t3430258949  TimeSpan_FromSeconds_m2861206200 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
extern "C"  TimeSpan_t3430258949  TimeSpan_FromMilliseconds_m664523225 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::From(System.Double,System.Int64)
extern "C"  TimeSpan_t3430258949  TimeSpan_From_m1249538749 (Il2CppObject * __this /* static, unused */, double ___value0, int64_t ___tickMultiplicator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::GetHashCode()
extern "C"  int32_t TimeSpan_GetHashCode_m550404245 (TimeSpan_t3430258949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Negate()
extern "C"  TimeSpan_t3430258949  TimeSpan_Negate_m4198463235 (TimeSpan_t3430258949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
extern "C"  TimeSpan_t3430258949  TimeSpan_Subtract_m3597791685 (TimeSpan_t3430258949 * __this, TimeSpan_t3430258949  ___ts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeSpan::ToString()
extern "C"  String_t* TimeSpan_ToString_m2947282901 (TimeSpan_t3430258949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
extern "C"  TimeSpan_t3430258949  TimeSpan_op_Addition_m3421801803 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___t10, TimeSpan_t3430258949  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_Equality_m3565136304 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___t10, TimeSpan_t3430258949  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_GreaterThan_m2202243191 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___t10, TimeSpan_t3430258949  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_GreaterThanOrEqual_m3997050520 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___t10, TimeSpan_t3430258949  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_Inequality_m257547441 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___t10, TimeSpan_t3430258949  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_LessThan_m3463318786 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___t10, TimeSpan_t3430258949  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_LessThanOrEqual_m3258610889 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___t10, TimeSpan_t3430258949  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
extern "C"  TimeSpan_t3430258949  TimeSpan_op_Subtraction_m4155695851 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___t10, TimeSpan_t3430258949  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
