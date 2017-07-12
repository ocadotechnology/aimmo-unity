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

// System.IFormatProvider
struct IFormatProvider_t2849799027;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2187473504;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_DateTimeKind2186819611.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_DateTime_Which4078252770.h"
#include "mscorlib_System_DayOfWeek721777893.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Globalization_DateTimeStyles370343085.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Globalization_DateTimeFormatInfo2187473504.h"

// System.Void System.DateTime::.ctor(System.Int64)
extern "C"  void DateTime__ctor_m2586249130 (DateTime_t693205669 * __this, int64_t ___ticks0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void DateTime__ctor_m1112320635 (DateTime_t693205669 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void DateTime__ctor_m2857738939 (DateTime_t693205669 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Boolean,System.TimeSpan)
extern "C"  void DateTime__ctor_m3604679583 (DateTime_t693205669 * __this, bool ___check0, TimeSpan_t3430258949  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int64,System.DateTimeKind)
extern "C"  void DateTime__ctor_m1100326092 (DateTime_t693205669 * __this, int64_t ___ticks0, int32_t ___kind1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.cctor()
extern "C"  void DateTime__cctor_m2173182045 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool DateTime_System_IConvertible_ToBoolean_m2185335074 (DateTime_t693205669 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.DateTime::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t DateTime_System_IConvertible_ToByte_m2670443498 (DateTime_t693205669 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.DateTime::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar DateTime_System_IConvertible_ToChar_m2489529194 (DateTime_t693205669 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t693205669  DateTime_System_IConvertible_ToDateTime_m943300266 (DateTime_t693205669 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.DateTime::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t724701077  DateTime_System_IConvertible_ToDecimal_m736194296 (DateTime_t693205669 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.DateTime::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double DateTime_System_IConvertible_ToDouble_m1431748426 (DateTime_t693205669 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.DateTime::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t DateTime_System_IConvertible_ToInt16_m825738946 (DateTime_t693205669 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t DateTime_System_IConvertible_ToInt32_m2789391054 (DateTime_t693205669 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t DateTime_System_IConvertible_ToInt64_m2773806612 (DateTime_t693205669 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.DateTime::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t DateTime_System_IConvertible_ToSByte_m2575078084 (DateTime_t693205669 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.DateTime::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float DateTime_System_IConvertible_ToSingle_m3927769066 (DateTime_t693205669 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DateTime::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  Il2CppObject * DateTime_System_IConvertible_ToType_m3821835592 (DateTime_t693205669 * __this, Type_t * ___targetType0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.DateTime::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t DateTime_System_IConvertible_ToUInt16_m2200165578 (DateTime_t693205669 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.DateTime::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t DateTime_System_IConvertible_ToUInt32_m1363211018 (DateTime_t693205669 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.DateTime::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t DateTime_System_IConvertible_ToUInt64_m2788957482 (DateTime_t693205669 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::AbsoluteDays(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t DateTime_AbsoluteDays_m3061694073 (Il2CppObject * __this /* static, unused */, int32_t ___year0, int32_t ___month1, int32_t ___day2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::FromTicks(System.DateTime/Which)
extern "C"  int32_t DateTime_FromTicks_m75527956 (DateTime_t693205669 * __this, int32_t ___what0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Month()
extern "C"  int32_t DateTime_get_Month_m1464831817 (DateTime_t693205669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Day()
extern "C"  int32_t DateTime_get_Day_m2066530041 (DateTime_t693205669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.DateTime::get_DayOfWeek()
extern "C"  int32_t DateTime_get_DayOfWeek_m2345429939 (DateTime_t693205669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Hour()
extern "C"  int32_t DateTime_get_Hour_m2925715777 (DateTime_t693205669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Minute()
extern "C"  int32_t DateTime_get_Minute_m803043551 (DateTime_t693205669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Second()
extern "C"  int32_t DateTime_get_Second_m853575361 (DateTime_t693205669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetTimeMonotonic()
extern "C"  int64_t DateTime_GetTimeMonotonic_m4135038456 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetNow()
extern "C"  int64_t DateTime_GetNow_m1004310079 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
extern "C"  DateTime_t693205669  DateTime_get_Now_m24136300 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::get_Ticks()
extern "C"  int64_t DateTime_get_Ticks_m310281298 (DateTime_t693205669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Today()
extern "C"  DateTime_t693205669  DateTime_get_Today_m1321851425 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_UtcNow()
extern "C"  DateTime_t693205669  DateTime_get_UtcNow_m1309841468 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Year()
extern "C"  int32_t DateTime_get_Year_m1985210972 (DateTime_t693205669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind System.DateTime::get_Kind()
extern "C"  int32_t DateTime_get_Kind_m1331920314 (DateTime_t693205669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Add(System.TimeSpan)
extern "C"  DateTime_t693205669  DateTime_Add_m4237489122 (DateTime_t693205669 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddTicks(System.Int64)
extern "C"  DateTime_t693205669  DateTime_AddTicks_m3057746860 (DateTime_t693205669 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
extern "C"  DateTime_t693205669  DateTime_AddMilliseconds_m1813199744 (DateTime_t693205669 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddSeconds(System.Double)
extern "C"  DateTime_t693205669  DateTime_AddSeconds_m722082155 (DateTime_t693205669 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::Compare(System.DateTime,System.DateTime)
extern "C"  int32_t DateTime_Compare_m1637090411 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___t10, DateTime_t693205669  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.Object)
extern "C"  int32_t DateTime_CompareTo_m3372173896 (DateTime_t693205669 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.DateTime)
extern "C"  int32_t DateTime_CompareTo_m1511117942 (DateTime_t693205669 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.DateTime)
extern "C"  bool DateTime_Equals_m1104060551 (DateTime_t693205669 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::FromBinary(System.Int64)
extern "C"  DateTime_t693205669  DateTime_FromBinary_m2672557910 (Il2CppObject * __this /* static, unused */, int64_t ___dateData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
extern "C"  DateTime_t693205669  DateTime_SpecifyKind_m1282445794 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___value0, int32_t ___kind1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::DaysInMonth(System.Int32,System.Int32)
extern "C"  int32_t DateTime_DaysInMonth_m2275365236 (Il2CppObject * __this /* static, unused */, int32_t ___year0, int32_t ___month1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.Object)
extern "C"  bool DateTime_Equals_m2562884703 (DateTime_t693205669 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckDateTimeKind(System.DateTimeKind)
extern "C"  void DateTime_CheckDateTimeKind_m329345155 (DateTime_t693205669 * __this, int32_t ___kind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::GetHashCode()
extern "C"  int32_t DateTime_GetHashCode_m974799321 (DateTime_t693205669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLeapYear(System.Int32)
extern "C"  bool DateTime_IsLeapYear_m2906714770 (Il2CppObject * __this /* static, unused */, int32_t ___year0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider)
extern "C"  DateTime_t693205669  DateTime_Parse_m894006266 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C"  DateTime_t693205669  DateTime_Parse_m1628430317 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Il2CppObject * ___provider1, int32_t ___styles2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::CoreParse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&,System.DateTimeOffset&,System.Boolean,System.Exception&)
extern "C"  bool DateTime_CoreParse_m2014268103 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Il2CppObject * ___provider1, int32_t ___styles2, DateTime_t693205669 * ___result3, DateTimeOffset_t1362988906 * ___dto4, bool ___setExceptionOnError5, Exception_t1927440687 ** ___exception6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::YearMonthDayFormats(System.Globalization.DateTimeFormatInfo,System.Boolean,System.Exception&)
extern "C"  StringU5BU5D_t1642385972* DateTime_YearMonthDayFormats_m4204607055 (Il2CppObject * __this /* static, unused */, DateTimeFormatInfo_t2187473504 * ___dfi0, bool ___setExceptionOnError1, Exception_t1927440687 ** ___exc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseNumber(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
extern "C"  int32_t DateTime__ParseNumber_m2544572129 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___valuePos1, int32_t ___min_digits2, int32_t ___digits3, bool ___leadingzero4, bool ___sloppy_parsing5, int32_t* ___num_parsed6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseEnum(System.String,System.Int32,System.String[],System.String[],System.Boolean,System.Int32&)
extern "C"  int32_t DateTime__ParseEnum_m1687953250 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___sPos1, StringU5BU5D_t1642385972* ___values2, StringU5BU5D_t1642385972* ___invValues3, bool ___exact4, int32_t* ___num_parsed5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseString(System.String,System.Int32,System.Int32,System.String,System.Int32&)
extern "C"  bool DateTime__ParseString_m2623687350 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___sPos1, int32_t ___maxlength2, String_t* ___value3, int32_t* ___num_parsed4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseAmPm(System.String,System.Int32,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&,System.Int32&)
extern "C"  bool DateTime__ParseAmPm_m1540123584 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___valuePos1, int32_t ___num2, DateTimeFormatInfo_t2187473504 * ___dfi3, bool ___exact4, int32_t* ___num_parsed5, int32_t* ___ampm6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseTimeSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
extern "C"  bool DateTime__ParseTimeSeparator_m1796113879 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___sPos1, DateTimeFormatInfo_t2187473504 * ___dfi2, bool ___exact3, int32_t* ___num_parsed4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseDateSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
extern "C"  bool DateTime__ParseDateSeparator_m3057421308 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___sPos1, DateTimeFormatInfo_t2187473504 * ___dfi2, bool ___exact3, int32_t* ___num_parsed4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLetter(System.String,System.Int32)
extern "C"  bool DateTime_IsLetter_m2265381909 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_DoParse(System.String,System.String,System.String,System.Boolean,System.DateTime&,System.DateTimeOffset&,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.Boolean,System.Boolean&,System.Boolean&)
extern "C"  bool DateTime__DoParse_m2575003737 (Il2CppObject * __this /* static, unused */, String_t* ___s0, String_t* ___firstPart1, String_t* ___secondPart2, bool ___exact3, DateTime_t693205669 * ___result4, DateTimeOffset_t1362988906 * ___dto5, DateTimeFormatInfo_t2187473504 * ___dfi6, int32_t ___style7, bool ___firstPartIsDate8, bool* ___incompleteFormat9, bool* ___longYear10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C"  DateTime_t693205669  DateTime_ParseExact_m1833429974 (Il2CppObject * __this /* static, unused */, String_t* ___s0, String_t* ___format1, Il2CppObject * ___provider2, int32_t ___style3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C"  DateTime_t693205669  DateTime_ParseExact_m2170554314 (Il2CppObject * __this /* static, unused */, String_t* ___s0, StringU5BU5D_t1642385972* ___formats1, Il2CppObject * ___provider2, int32_t ___style3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckStyle(System.Globalization.DateTimeStyles)
extern "C"  void DateTime_CheckStyle_m642182680 (Il2CppObject * __this /* static, unused */, int32_t ___style0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::TryParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&)
extern "C"  bool DateTime_TryParseExact_m1935997846 (Il2CppObject * __this /* static, unused */, String_t* ___s0, StringU5BU5D_t1642385972* ___formats1, Il2CppObject * ___provider2, int32_t ___style3, DateTime_t693205669 * ___result4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::ParseExact(System.String,System.String[],System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTime&,System.Boolean,System.Boolean&,System.Boolean,System.Exception&)
extern "C"  bool DateTime_ParseExact_m3381652132 (Il2CppObject * __this /* static, unused */, String_t* ___s0, StringU5BU5D_t1642385972* ___formats1, DateTimeFormatInfo_t2187473504 * ___dfi2, int32_t ___style3, DateTime_t693205669 * ___ret4, bool ___exact5, bool* ___longYear6, bool ___setExceptionOnError7, Exception_t1927440687 ** ___exception8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
extern "C"  TimeSpan_t3430258949  DateTime_Subtract_m315489093 (DateTime_t693205669 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Subtract(System.TimeSpan)
extern "C"  DateTime_t693205669  DateTime_Subtract_m698282245 (DateTime_t693205669 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString()
extern "C"  String_t* DateTime_ToString_m1117481977 (DateTime_t693205669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.IFormatProvider)
extern "C"  String_t* DateTime_ToString_m3108726445 (DateTime_t693205669 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* DateTime_ToString_m2276663647 (DateTime_t693205669 * __this, String_t* ___format0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToLocalTime()
extern "C"  DateTime_t693205669  DateTime_ToLocalTime_m1957689902 (DateTime_t693205669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToUniversalTime()
extern "C"  DateTime_t693205669  DateTime_ToUniversalTime_m1815024752 (DateTime_t693205669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
extern "C"  DateTime_t693205669  DateTime_op_Addition_m1268923147 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___d0, TimeSpan_t3430258949  ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_Equality_m1867073872 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___d10, DateTime_t693205669  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_GreaterThan_m2730200039 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___t10, DateTime_t693205669  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThanOrEqual(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_GreaterThanOrEqual_m3818963848 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___t10, DateTime_t693205669  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Inequality(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_Inequality_m1607380213 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___d10, DateTime_t693205669  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_LessThan_m3944619870 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___t10, DateTime_t693205669  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThanOrEqual(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_LessThanOrEqual_m2191641069 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___t10, DateTime_t693205669  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
extern "C"  TimeSpan_t3430258949  DateTime_op_Subtraction_m3246456251 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___d10, DateTime_t693205669  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Subtraction(System.DateTime,System.TimeSpan)
extern "C"  DateTime_t693205669  DateTime_op_Subtraction_m813614715 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___d0, TimeSpan_t3430258949  ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
