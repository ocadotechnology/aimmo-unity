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

// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2187473504;
// System.IFormatProvider
struct IFormatProvider_t2849799027;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Globalization.Calendar
struct Calendar_t585061108;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_DateTimeFormatInfo2187473504.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Globalization_Calendar585061108.h"
#include "mscorlib_System_DayOfWeek721777893.h"

// System.Void System.Globalization.DateTimeFormatInfo::.ctor(System.Boolean)
extern "C"  void DateTimeFormatInfo__ctor_m913756651 (DateTimeFormatInfo_t2187473504 * __this, bool ___read_only0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.ctor()
extern "C"  void DateTimeFormatInfo__ctor_m3295851604 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.cctor()
extern "C"  void DateTimeFormatInfo__cctor_m4225377703 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::GetInstance(System.IFormatProvider)
extern "C"  DateTimeFormatInfo_t2187473504 * DateTimeFormatInfo_GetInstance_m3133223810 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.DateTimeFormatInfo::get_IsReadOnly()
extern "C"  bool DateTimeFormatInfo_get_IsReadOnly_m3147682085 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::ReadOnly(System.Globalization.DateTimeFormatInfo)
extern "C"  DateTimeFormatInfo_t2187473504 * DateTimeFormatInfo_ReadOnly_m25186341 (Il2CppObject * __this /* static, unused */, DateTimeFormatInfo_t2187473504 * ___dtfi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::Clone()
extern "C"  Il2CppObject * DateTimeFormatInfo_Clone_m1101948106 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::GetFormat(System.Type)
extern "C"  Il2CppObject * DateTimeFormatInfo_GetFormat_m3676195179 (DateTimeFormatInfo_t2187473504 * __this, Type_t * ___formatType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedMonthName(System.Int32)
extern "C"  String_t* DateTimeFormatInfo_GetAbbreviatedMonthName_m3766388 (DateTimeFormatInfo_t2187473504 * __this, int32_t ___month0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetEraName(System.Int32)
extern "C"  String_t* DateTimeFormatInfo_GetEraName_m1437894363 (DateTimeFormatInfo_t2187473504 * __this, int32_t ___era0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetMonthName(System.Int32)
extern "C"  String_t* DateTimeFormatInfo_GetMonthName_m176552057 (DateTimeFormatInfo_t2187473504 * __this, int32_t ___month0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedDayNames()
extern "C"  StringU5BU5D_t1642385972* DateTimeFormatInfo_get_RawAbbreviatedDayNames_m3998113647 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedMonthNames()
extern "C"  StringU5BU5D_t1642385972* DateTimeFormatInfo_get_RawAbbreviatedMonthNames_m19087795 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawDayNames()
extern "C"  StringU5BU5D_t1642385972* DateTimeFormatInfo_get_RawDayNames_m3789097850 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawMonthNames()
extern "C"  StringU5BU5D_t1642385972* DateTimeFormatInfo_get_RawMonthNames_m485007902 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_AMDesignator()
extern "C"  String_t* DateTimeFormatInfo_get_AMDesignator_m3841245276 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_PMDesignator()
extern "C"  String_t* DateTimeFormatInfo_get_PMDesignator_m2537514795 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_DateSeparator()
extern "C"  String_t* DateTimeFormatInfo_get_DateSeparator_m1869791013 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_TimeSeparator()
extern "C"  String_t* DateTimeFormatInfo_get_TimeSeparator_m2465837654 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongDatePattern()
extern "C"  String_t* DateTimeFormatInfo_get_LongDatePattern_m3041177390 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortDatePattern()
extern "C"  String_t* DateTimeFormatInfo_get_ShortDatePattern_m994817156 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortTimePattern()
extern "C"  String_t* DateTimeFormatInfo_get_ShortTimePattern_m20923983 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongTimePattern()
extern "C"  String_t* DateTimeFormatInfo_get_LongTimePattern_m3747294063 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_MonthDayPattern()
extern "C"  String_t* DateTimeFormatInfo_get_MonthDayPattern_m3957878440 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_YearMonthPattern()
extern "C"  String_t* DateTimeFormatInfo_get_YearMonthPattern_m957892307 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_FullDateTimePattern()
extern "C"  String_t* DateTimeFormatInfo_get_FullDateTimePattern_m2607507656 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_CurrentInfo()
extern "C"  DateTimeFormatInfo_t2187473504 * DateTimeFormatInfo_get_CurrentInfo_m1648708929 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
extern "C"  DateTimeFormatInfo_t2187473504 * DateTimeFormatInfo_get_InvariantInfo_m1865598692 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::get_Calendar()
extern "C"  Calendar_t585061108 * DateTimeFormatInfo_get_Calendar_m532085644 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::set_Calendar(System.Globalization.Calendar)
extern "C"  void DateTimeFormatInfo_set_Calendar_m3919319357 (DateTimeFormatInfo_t2187473504 * __this, Calendar_t585061108 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RFC1123Pattern()
extern "C"  String_t* DateTimeFormatInfo_get_RFC1123Pattern_m1091572742 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RoundtripPattern()
extern "C"  String_t* DateTimeFormatInfo_get_RoundtripPattern_m562440017 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_SortableDateTimePattern()
extern "C"  String_t* DateTimeFormatInfo_get_SortableDateTimePattern_m2363707385 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_UniversalSortableDateTimePattern()
extern "C"  String_t* DateTimeFormatInfo_get_UniversalSortableDateTimePattern_m4182077534 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllDateTimePatternsInternal()
extern "C"  StringU5BU5D_t1642385972* DateTimeFormatInfo_GetAllDateTimePatternsInternal_m1587126173 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillAllDateTimePatterns()
extern "C"  void DateTimeFormatInfo_FillAllDateTimePatterns_m3353633462 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllRawDateTimePatterns(System.Char)
extern "C"  StringU5BU5D_t1642385972* DateTimeFormatInfo_GetAllRawDateTimePatterns_m2765768173 (DateTimeFormatInfo_t2187473504 * __this, Il2CppChar ___format0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetDayName(System.DayOfWeek)
extern "C"  String_t* DateTimeFormatInfo_GetDayName_m1592964076 (DateTimeFormatInfo_t2187473504 * __this, int32_t ___dayofweek0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedDayName(System.DayOfWeek)
extern "C"  String_t* DateTimeFormatInfo_GetAbbreviatedDayName_m654293155 (DateTimeFormatInfo_t2187473504 * __this, int32_t ___dayofweek0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillInvariantPatterns()
extern "C"  void DateTimeFormatInfo_FillInvariantPatterns_m1432816864 (DateTimeFormatInfo_t2187473504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::PopulateCombinedList(System.String[],System.String[])
extern "C"  StringU5BU5D_t1642385972* DateTimeFormatInfo_PopulateCombinedList_m653754210 (DateTimeFormatInfo_t2187473504 * __this, StringU5BU5D_t1642385972* ___dates0, StringU5BU5D_t1642385972* ___times1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
