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

// System.NumberFormatter
struct NumberFormatter_t2933946347;
// System.Threading.Thread
struct Thread_t241561612;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t104580544;
// System.IFormatProvider
struct IFormatProvider_t2849799027;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_Thread241561612.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Globalization_NumberFormatInfo104580544.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void System.NumberFormatter::.ctor(System.Threading.Thread)
extern "C"  void NumberFormatter__ctor_m3779576773 (NumberFormatter_t2933946347 * __this, Thread_t241561612 * ___current0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::.cctor()
extern "C"  void NumberFormatter__cctor_m1641464619 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)
extern "C"  void NumberFormatter_GetFormatterTables_m3205084012 (Il2CppObject * __this /* static, unused */, uint64_t** ___MantissaBitsTable0, int32_t** ___TensExponentTable1, Il2CppChar** ___DigitLowerTable2, Il2CppChar** ___DigitUpperTable3, int64_t** ___TenPowersList4, int32_t** ___DecHexDigits5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.NumberFormatter::GetTenPowerOf(System.Int32)
extern "C"  int64_t NumberFormatter_GetTenPowerOf_m755691503 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32)
extern "C"  void NumberFormatter_InitDecHexDigits_m2036076025 (NumberFormatter_t2933946347 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt64)
extern "C"  void NumberFormatter_InitDecHexDigits_m1612588520 (NumberFormatter_t2933946347 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32,System.UInt64)
extern "C"  void NumberFormatter_InitDecHexDigits_m2103281536 (NumberFormatter_t2933946347 * __this, uint32_t ___hi0, uint64_t ___lo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::FastToDecHex(System.Int32)
extern "C"  uint32_t NumberFormatter_FastToDecHex_m2338753906 (Il2CppObject * __this /* static, unused */, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::ToDecHex(System.Int32)
extern "C"  uint32_t NumberFormatter_ToDecHex_m1474793296 (Il2CppObject * __this /* static, unused */, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::FastDecHexLen(System.Int32)
extern "C"  int32_t NumberFormatter_FastDecHexLen_m3325972675 (Il2CppObject * __this /* static, unused */, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen(System.UInt32)
extern "C"  int32_t NumberFormatter_DecHexLen_m572249244 (Il2CppObject * __this /* static, unused */, uint32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen()
extern "C"  int32_t NumberFormatter_DecHexLen_m1209357602 (NumberFormatter_t2933946347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ScaleOrder(System.Int64)
extern "C"  int32_t NumberFormatter_ScaleOrder_m1915154678 (Il2CppObject * __this /* static, unused */, int64_t ___hi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::InitialFloatingPrecision()
extern "C"  int32_t NumberFormatter_InitialFloatingPrecision_m3709563090 (NumberFormatter_t2933946347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ParsePrecision(System.String)
extern "C"  int32_t NumberFormatter_ParsePrecision_m2392600663 (Il2CppObject * __this /* static, unused */, String_t* ___format0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String)
extern "C"  void NumberFormatter_Init_m1515770916 (NumberFormatter_t2933946347 * __this, String_t* ___format0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitHex(System.UInt64)
extern "C"  void NumberFormatter_InitHex_m131205536 (NumberFormatter_t2933946347 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int32,System.Int32)
extern "C"  void NumberFormatter_Init_m2654758994 (NumberFormatter_t2933946347 * __this, String_t* ___format0, int32_t ___value1, int32_t ___defPrecision2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt32,System.Int32)
extern "C"  void NumberFormatter_Init_m1022036773 (NumberFormatter_t2933946347 * __this, String_t* ___format0, uint32_t ___value1, int32_t ___defPrecision2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int64)
extern "C"  void NumberFormatter_Init_m2452910190 (NumberFormatter_t2933946347 * __this, String_t* ___format0, int64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt64)
extern "C"  void NumberFormatter_Init_m2534584519 (NumberFormatter_t2933946347 * __this, String_t* ___format0, uint64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Double,System.Int32)
extern "C"  void NumberFormatter_Init_m379773259 (NumberFormatter_t2933946347 * __this, String_t* ___format0, double ___value1, int32_t ___defPrecision2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Decimal)
extern "C"  void NumberFormatter_Init_m1460144098 (NumberFormatter_t2933946347 * __this, String_t* ___format0, Decimal_t724701077  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ResetCharBuf(System.Int32)
extern "C"  void NumberFormatter_ResetCharBuf_m3823516989 (NumberFormatter_t2933946347 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Resize(System.Int32)
extern "C"  void NumberFormatter_Resize_m3688000127 (NumberFormatter_t2933946347 * __this, int32_t ___len0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char)
extern "C"  void NumberFormatter_Append_m3268121457 (NumberFormatter_t2933946347 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char,System.Int32)
extern "C"  void NumberFormatter_Append_m2900950408 (NumberFormatter_t2933946347 * __this, Il2CppChar ___c0, int32_t ___cnt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.String)
extern "C"  void NumberFormatter_Append_m402181386 (NumberFormatter_t2933946347 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.NumberFormatter::GetNumberFormatInstance(System.IFormatProvider)
extern "C"  NumberFormatInfo_t104580544 * NumberFormatter_GetNumberFormatInstance_m23478576 (NumberFormatter_t2933946347 * __this, Il2CppObject * ___fp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::set_CurrentCulture(System.Globalization.CultureInfo)
extern "C"  void NumberFormatter_set_CurrentCulture_m2777724942 (NumberFormatter_t2933946347 * __this, CultureInfo_t3500843524 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_IntegerDigits()
extern "C"  int32_t NumberFormatter_get_IntegerDigits_m3972411141 (NumberFormatter_t2933946347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_DecimalDigits()
extern "C"  int32_t NumberFormatter_get_DecimalDigits_m2643327056 (NumberFormatter_t2933946347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsFloatingSource()
extern "C"  bool NumberFormatter_get_IsFloatingSource_m2830957202 (NumberFormatter_t2933946347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZero()
extern "C"  bool NumberFormatter_get_IsZero_m1325357749 (NumberFormatter_t2933946347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZeroInteger()
extern "C"  bool NumberFormatter_get_IsZeroInteger_m478041835 (NumberFormatter_t2933946347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RoundPos(System.Int32)
extern "C"  void NumberFormatter_RoundPos_m1838788799 (NumberFormatter_t2933946347 * __this, int32_t ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundDecimal(System.Int32)
extern "C"  bool NumberFormatter_RoundDecimal_m176606570 (NumberFormatter_t2933946347 * __this, int32_t ___decimals0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundBits(System.Int32)
extern "C"  bool NumberFormatter_RoundBits_m1545255255 (NumberFormatter_t2933946347 * __this, int32_t ___shift0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RemoveTrailingZeros()
extern "C"  void NumberFormatter_RemoveTrailingZeros_m3750121993 (NumberFormatter_t2933946347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AddOneToDecHex()
extern "C"  void NumberFormatter_AddOneToDecHex_m2497358977 (NumberFormatter_t2933946347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::AddOneToDecHex(System.UInt32)
extern "C"  uint32_t NumberFormatter_AddOneToDecHex_m2246616930 (Il2CppObject * __this /* static, unused */, uint32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros()
extern "C"  int32_t NumberFormatter_CountTrailingZeros_m2398864634 (NumberFormatter_t2933946347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros(System.UInt32)
extern "C"  int32_t NumberFormatter_CountTrailingZeros_m1989458300 (Il2CppObject * __this /* static, unused */, uint32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetInstance()
extern "C"  NumberFormatter_t2933946347 * NumberFormatter_GetInstance_m2421260460 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Release()
extern "C"  void NumberFormatter_Release_m3342380221 (NumberFormatter_t2933946347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::SetThreadCurrentCulture(System.Globalization.CultureInfo)
extern "C"  void NumberFormatter_SetThreadCurrentCulture_m44057051 (Il2CppObject * __this /* static, unused */, CultureInfo_t3500843524 * ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.SByte,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m3087110356 (Il2CppObject * __this /* static, unused */, String_t* ___format0, int8_t ___value1, Il2CppObject * ___fp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Byte,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m3684675463 (Il2CppObject * __this /* static, unused */, String_t* ___format0, uint8_t ___value1, Il2CppObject * ___fp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt16,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m395121580 (Il2CppObject * __this /* static, unused */, String_t* ___format0, uint16_t ___value1, Il2CppObject * ___fp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int16,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m126384393 (Il2CppObject * __this /* static, unused */, String_t* ___format0, int16_t ___value1, Il2CppObject * ___fp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m2876111482 (Il2CppObject * __this /* static, unused */, String_t* ___format0, uint32_t ___value1, Il2CppObject * ___fp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m2890741407 (Il2CppObject * __this /* static, unused */, String_t* ___format0, int32_t ___value1, Il2CppObject * ___fp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m1457904777 (Il2CppObject * __this /* static, unused */, String_t* ___format0, uint64_t ___value1, Il2CppObject * ___fp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int64,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m3858766744 (Il2CppObject * __this /* static, unused */, String_t* ___format0, int64_t ___value1, Il2CppObject * ___fp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Single,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m3470728883 (Il2CppObject * __this /* static, unused */, String_t* ___format0, float ___value1, Il2CppObject * ___fp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Double,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m178266682 (Il2CppObject * __this /* static, unused */, String_t* ___format0, double ___value1, Il2CppObject * ___fp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Decimal,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m3429120092 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Decimal_t724701077  ___value1, Il2CppObject * ___fp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m4251434822 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, Il2CppObject * ___fp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m668979517 (Il2CppObject * __this /* static, unused */, int32_t ___value0, Il2CppObject * ___fp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt64,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m2218360331 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, Il2CppObject * ___fp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int64,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m2651018276 (Il2CppObject * __this /* static, unused */, int64_t ___value0, Il2CppObject * ___fp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Single,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m3855209845 (Il2CppObject * __this /* static, unused */, float ___value0, Il2CppObject * ___fp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Double,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m2620669178 (Il2CppObject * __this /* static, unused */, double ___value0, Il2CppObject * ___fp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FastIntegerToString(System.Int32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_FastIntegerToString_m2791454620 (NumberFormatter_t2933946347 * __this, int32_t ___value0, Il2CppObject * ___fp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::IntegerToString(System.String,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_IntegerToString_m2688981059 (NumberFormatter_t2933946347 * __this, String_t* ___format0, Il2CppObject * ___fp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_NumberToString_m1620260148 (NumberFormatter_t2933946347 * __this, String_t* ___format0, NumberFormatInfo_t104580544 * ___nfi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCurrency(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatCurrency_m3700970042 (NumberFormatter_t2933946347 * __this, int32_t ___precision0, NumberFormatInfo_t104580544 * ___nfi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatDecimal(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatDecimal_m1435371940 (NumberFormatter_t2933946347 * __this, int32_t ___precision0, NumberFormatInfo_t104580544 * ___nfi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatHexadecimal(System.Int32)
extern "C"  String_t* NumberFormatter_FormatHexadecimal_m1317851390 (NumberFormatter_t2933946347 * __this, int32_t ___precision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatFixedPoint(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatFixedPoint_m1067655543 (NumberFormatter_t2933946347 * __this, int32_t ___precision0, NumberFormatInfo_t104580544 * ___nfi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Double,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatRoundtrip_m1185970495 (NumberFormatter_t2933946347 * __this, double ___origval0, NumberFormatInfo_t104580544 * ___nfi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Single,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatRoundtrip_m449314798 (NumberFormatter_t2933946347 * __this, float ___origval0, NumberFormatInfo_t104580544 * ___nfi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatGeneral(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatGeneral_m3756178995 (NumberFormatter_t2933946347 * __this, int32_t ___precision0, NumberFormatInfo_t104580544 * ___nfi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatNumber(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatNumber_m1755017476 (NumberFormatter_t2933946347 * __this, int32_t ___precision0, NumberFormatInfo_t104580544 * ___nfi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatPercent(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatPercent_m776769918 (NumberFormatter_t2933946347 * __this, int32_t ___precision0, NumberFormatInfo_t104580544 * ___nfi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatExponential_m4040786568 (NumberFormatter_t2933946347 * __this, int32_t ___precision0, NumberFormatInfo_t104580544 * ___nfi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo,System.Int32)
extern "C"  String_t* NumberFormatter_FormatExponential_m3975285307 (NumberFormatter_t2933946347 * __this, int32_t ___precision0, NumberFormatInfo_t104580544 * ___nfi1, int32_t ___expDigits2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCustom(System.String,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatCustom_m3288822873 (NumberFormatter_t2933946347 * __this, String_t* ___format0, NumberFormatInfo_t104580544 * ___nfi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ZeroTrimEnd(System.Text.StringBuilder,System.Boolean)
extern "C"  void NumberFormatter_ZeroTrimEnd_m1918702516 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___sb0, bool ___canEmpty1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::IsZeroOnly(System.Text.StringBuilder)
extern "C"  bool NumberFormatter_IsZeroOnly_m3495795110 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___sb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendNonNegativeNumber(System.Text.StringBuilder,System.Int32)
extern "C"  void NumberFormatter_AppendNonNegativeNumber_m629862866 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___sb0, int32_t ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32,System.Text.StringBuilder)
extern "C"  void NumberFormatter_AppendIntegerString_m868842252 (NumberFormatter_t2933946347 * __this, int32_t ___minLength0, StringBuilder_t1221177846 * ___sb1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32)
extern "C"  void NumberFormatter_AppendIntegerString_m3787274716 (NumberFormatter_t2933946347 * __this, int32_t ___minLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32,System.Text.StringBuilder)
extern "C"  void NumberFormatter_AppendDecimalString_m3532330813 (NumberFormatter_t2933946347 * __this, int32_t ___precision0, StringBuilder_t1221177846 * ___sb1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32)
extern "C"  void NumberFormatter_AppendDecimalString_m112008349 (NumberFormatter_t2933946347 * __this, int32_t ___precision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerStringWithGroupSeparator(System.Int32[],System.String)
extern "C"  void NumberFormatter_AppendIntegerStringWithGroupSeparator_m1401773574 (NumberFormatter_t2933946347 * __this, Int32U5BU5D_t3030399641* ___groups0, String_t* ___groupSeparator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendExponent(System.Globalization.NumberFormatInfo,System.Int32,System.Int32)
extern "C"  void NumberFormatter_AppendExponent_m1974436055 (NumberFormatter_t2933946347 * __this, NumberFormatInfo_t104580544 * ___nfi0, int32_t ___exponent1, int32_t ___minDigits2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendOneDigit(System.Int32)
extern "C"  void NumberFormatter_AppendOneDigit_m2663704828 (NumberFormatter_t2933946347 * __this, int32_t ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::FastAppendDigits(System.Int32,System.Boolean)
extern "C"  void NumberFormatter_FastAppendDigits_m2324805728 (NumberFormatter_t2933946347 * __this, int32_t ___val0, bool ___force1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32)
extern "C"  void NumberFormatter_AppendDigits_m4272365106 (NumberFormatter_t2933946347 * __this, int32_t ___start0, int32_t ___end1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32,System.Text.StringBuilder)
extern "C"  void NumberFormatter_AppendDigits_m1308372770 (NumberFormatter_t2933946347 * __this, int32_t ___start0, int32_t ___end1, StringBuilder_t1221177846 * ___sb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Multiply10(System.Int32)
extern "C"  void NumberFormatter_Multiply10_m51670316 (NumberFormatter_t2933946347 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Divide10(System.Int32)
extern "C"  void NumberFormatter_Divide10_m2310887631 (NumberFormatter_t2933946347 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetClone()
extern "C"  NumberFormatter_t2933946347 * NumberFormatter_GetClone_m1172338062 (NumberFormatter_t2933946347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
