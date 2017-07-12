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

// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_t3620182823;
// System.Object
struct Il2CppObject;
// System.Globalization.CompareInfo
struct CompareInfo_t2310920157;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t104580544;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2187473504;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Globalization_NumberFormatInfo104580544.h"
#include "mscorlib_System_Globalization_DateTimeFormatInfo2187473504.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"

// System.Void System.Globalization.CultureInfo::.ctor(System.Int32)
extern "C"  void CultureInfo__ctor_m3417484387 (CultureInfo_t3500843524 * __this, int32_t ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean)
extern "C"  void CultureInfo__ctor_m3007508210 (CultureInfo_t3500843524 * __this, int32_t ___culture0, bool ___useUserOverride1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean,System.Boolean)
extern "C"  void CultureInfo__ctor_m1916039599 (CultureInfo_t3500843524 * __this, int32_t ___culture0, bool ___useUserOverride1, bool ___read_only2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean,System.Boolean)
extern "C"  void CultureInfo__ctor_m182018410 (CultureInfo_t3500843524 * __this, String_t* ___name0, bool ___useUserOverride1, bool ___read_only2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor()
extern "C"  void CultureInfo__ctor_m456863818 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.cctor()
extern "C"  void CultureInfo__cctor_m2290268677 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t3500843524 * CultureInfo_get_InvariantCulture_m398972276 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::CreateSpecificCulture(System.String)
extern "C"  CultureInfo_t3500843524 * CultureInfo_CreateSpecificCulture_m3401773697 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C"  CultureInfo_t3500843524 * CultureInfo_get_CurrentCulture_m711066087 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentUICulture()
extern "C"  CultureInfo_t3500843524 * CultureInfo_get_CurrentUICulture_m3242413191 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentCulture()
extern "C"  CultureInfo_t3500843524 * CultureInfo_ConstructCurrentCulture_m1264488007 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentUICulture()
extern "C"  CultureInfo_t3500843524 * CultureInfo_ConstructCurrentUICulture_m3363349599 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::get_LCID()
extern "C"  int32_t CultureInfo_get_LCID_m1392728055 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_Name()
extern "C"  String_t* CultureInfo_get_Name_m3316229893 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_Parent()
extern "C"  CultureInfo_t3500843524 * CultureInfo_get_Parent_m3248846518 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo()
extern "C"  TextInfo_t3620182823 * CultureInfo_get_TextInfo_m1582311326 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_IcuName()
extern "C"  String_t* CultureInfo_get_IcuName_m2551455630 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::Clone()
extern "C"  Il2CppObject * CultureInfo_Clone_m2970753766 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::Equals(System.Object)
extern "C"  bool CultureInfo_Equals_m1273044155 (CultureInfo_t3500843524 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::GetHashCode()
extern "C"  int32_t CultureInfo_GetHashCode_m927602525 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::ToString()
extern "C"  String_t* CultureInfo_ToString_m2835610349 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo()
extern "C"  CompareInfo_t2310920157 * CultureInfo_get_CompareInfo_m3085280862 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsNeutralCulture()
extern "C"  bool CultureInfo_get_IsNeutralCulture_m3874876470 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::CheckNeutral()
extern "C"  void CultureInfo_CheckNeutral_m2904724585 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat()
extern "C"  NumberFormatInfo_t104580544 * CultureInfo_get_NumberFormat_m724925476 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::set_NumberFormat(System.Globalization.NumberFormatInfo)
extern "C"  void CultureInfo_set_NumberFormat_m1618950525 (CultureInfo_t3500843524 * __this, NumberFormatInfo_t104580544 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.CultureInfo::get_DateTimeFormat()
extern "C"  DateTimeFormatInfo_t2187473504 * CultureInfo_get_DateTimeFormat_m1833759772 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::set_DateTimeFormat(System.Globalization.DateTimeFormatInfo)
extern "C"  void CultureInfo_set_DateTimeFormat_m4021616765 (CultureInfo_t3500843524 * __this, DateTimeFormatInfo_t2187473504 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsReadOnly()
extern "C"  bool CultureInfo_get_IsReadOnly_m1391179347 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::GetFormat(System.Type)
extern "C"  Il2CppObject * CultureInfo_GetFormat_m3560116485 (CultureInfo_t3500843524 * __this, Type_t * ___formatType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::Construct()
extern "C"  void CultureInfo_Construct_m896220827 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromName(System.String)
extern "C"  bool CultureInfo_ConstructInternalLocaleFromName_m2808296363 (CultureInfo_t3500843524 * __this, String_t* ___locale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromLcid(System.Int32)
extern "C"  bool CultureInfo_ConstructInternalLocaleFromLcid_m1929848881 (CultureInfo_t3500843524 * __this, int32_t ___lcid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromSpecificName(System.Globalization.CultureInfo,System.String)
extern "C"  bool CultureInfo_ConstructInternalLocaleFromSpecificName_m1821378649 (Il2CppObject * __this /* static, unused */, CultureInfo_t3500843524 * ___ci0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromCurrentLocale(System.Globalization.CultureInfo)
extern "C"  bool CultureInfo_ConstructInternalLocaleFromCurrentLocale_m1342751405 (Il2CppObject * __this /* static, unused */, CultureInfo_t3500843524 * ___ci0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_lcid(System.Int32)
extern "C"  bool CultureInfo_construct_internal_locale_from_lcid_m498096141 (CultureInfo_t3500843524 * __this, int32_t ___lcid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_name(System.String)
extern "C"  bool CultureInfo_construct_internal_locale_from_name_m971766383 (CultureInfo_t3500843524 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_specific_name(System.Globalization.CultureInfo,System.String)
extern "C"  bool CultureInfo_construct_internal_locale_from_specific_name_m3474931904 (Il2CppObject * __this /* static, unused */, CultureInfo_t3500843524 * ___ci0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_current_locale(System.Globalization.CultureInfo)
extern "C"  bool CultureInfo_construct_internal_locale_from_current_locale_m2029574092 (Il2CppObject * __this /* static, unused */, CultureInfo_t3500843524 * ___ci0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_datetime_format()
extern "C"  void CultureInfo_construct_datetime_format_m268249821 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_number_format()
extern "C"  void CultureInfo_construct_number_format_m2069641695 (CultureInfo_t3500843524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::ConstructInvariant(System.Boolean)
extern "C"  void CultureInfo_ConstructInvariant_m2492947178 (CultureInfo_t3500843524 * __this, bool ___read_only0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::CreateTextInfo(System.Boolean)
extern "C"  TextInfo_t3620182823 * CultureInfo_CreateTextInfo_m2269397562 (CultureInfo_t3500843524 * __this, bool ___readOnly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::CreateCulture(System.String,System.Boolean)
extern "C"  CultureInfo_t3500843524 * CultureInfo_CreateCulture_m4241453908 (Il2CppObject * __this /* static, unused */, String_t* ___name0, bool ___reference1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
