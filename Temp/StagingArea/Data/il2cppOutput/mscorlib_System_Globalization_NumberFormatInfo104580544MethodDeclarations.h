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

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t104580544;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t2849799027;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Int32,System.Boolean)
extern "C"  void NumberFormatInfo__ctor_m1404688648 (NumberFormatInfo_t104580544 * __this, int32_t ___lcid0, bool ___read_only1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Boolean)
extern "C"  void NumberFormatInfo__ctor_m1805216409 (NumberFormatInfo_t104580544 * __this, bool ___read_only0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor()
extern "C"  void NumberFormatInfo__ctor_m2752806684 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.cctor()
extern "C"  void NumberFormatInfo__cctor_m823226025 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyDecimalDigits()
extern "C"  int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m3421220553 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyDecimalSeparator()
extern "C"  String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_m3051944543 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyGroupSeparator()
extern "C"  String_t* NumberFormatInfo_get_CurrencyGroupSeparator_m2480433019 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawCurrencyGroupSizes()
extern "C"  Int32U5BU5D_t3030399641* NumberFormatInfo_get_RawCurrencyGroupSizes_m3439524641 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyNegativePattern()
extern "C"  int32_t NumberFormatInfo_get_CurrencyNegativePattern_m3972163809 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyPositivePattern()
extern "C"  int32_t NumberFormatInfo_get_CurrencyPositivePattern_m1112270101 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencySymbol()
extern "C"  String_t* NumberFormatInfo_get_CurrencySymbol_m3976699491 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_CurrentInfo()
extern "C"  NumberFormatInfo_t104580544 * NumberFormatInfo_get_CurrentInfo_m760167169 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
extern "C"  NumberFormatInfo_t104580544 * NumberFormatInfo_get_InvariantInfo_m2658215204 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NaNSymbol()
extern "C"  String_t* NumberFormatInfo_get_NaNSymbol_m524990617 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeInfinitySymbol()
extern "C"  String_t* NumberFormatInfo_get_NegativeInfinitySymbol_m333295133 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeSign()
extern "C"  String_t* NumberFormatInfo_get_NegativeSign_m3735050898 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberDecimalDigits()
extern "C"  int32_t NumberFormatInfo_get_NumberDecimalDigits_m3706097953 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
extern "C"  String_t* NumberFormatInfo_get_NumberDecimalSeparator_m406062319 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberGroupSeparator()
extern "C"  String_t* NumberFormatInfo_get_NumberGroupSeparator_m3576847339 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawNumberGroupSizes()
extern "C"  Int32U5BU5D_t3030399641* NumberFormatInfo_get_RawNumberGroupSizes_m2028994489 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberNegativePattern()
extern "C"  int32_t NumberFormatInfo_get_NumberNegativePattern_m2838968649 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::set_NumberNegativePattern(System.Int32)
extern "C"  void NumberFormatInfo_set_NumberNegativePattern_m1050626150 (NumberFormatInfo_t104580544 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentDecimalDigits()
extern "C"  int32_t NumberFormatInfo_get_PercentDecimalDigits_m142872009 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentDecimalSeparator()
extern "C"  String_t* NumberFormatInfo_get_PercentDecimalSeparator_m951505343 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentGroupSeparator()
extern "C"  String_t* NumberFormatInfo_get_PercentGroupSeparator_m4008260515 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawPercentGroupSizes()
extern "C"  Int32U5BU5D_t3030399641* NumberFormatInfo_get_RawPercentGroupSizes_m4200807101 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentNegativePattern()
extern "C"  int32_t NumberFormatInfo_get_PercentNegativePattern_m1162448153 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentPositivePattern()
extern "C"  int32_t NumberFormatInfo_get_PercentPositivePattern_m3527774229 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentSymbol()
extern "C"  String_t* NumberFormatInfo_get_PercentSymbol_m3885936467 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PerMilleSymbol()
extern "C"  String_t* NumberFormatInfo_get_PerMilleSymbol_m808826920 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveInfinitySymbol()
extern "C"  String_t* NumberFormatInfo_get_PositiveInfinitySymbol_m367632473 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveSign()
extern "C"  String_t* NumberFormatInfo_get_PositiveSign_m3396333026 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::GetFormat(System.Type)
extern "C"  Il2CppObject * NumberFormatInfo_GetFormat_m3247563525 (NumberFormatInfo_t104580544 * __this, Type_t * ___formatType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::Clone()
extern "C"  Il2CppObject * NumberFormatInfo_Clone_m40553114 (NumberFormatInfo_t104580544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
extern "C"  NumberFormatInfo_t104580544 * NumberFormatInfo_GetInstance_m1119800258 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___formatProvider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
