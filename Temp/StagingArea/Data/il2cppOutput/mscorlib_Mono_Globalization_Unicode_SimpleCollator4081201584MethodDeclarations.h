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

// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t4081201584;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t1073906970;
// Mono.Globalization.Unicode.Contraction
struct Contraction_t1673853792;
// System.String
struct String_t;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t4233480993;
// System.Globalization.SortKey
struct SortKey_t1270563137;
// Mono.Globalization.Unicode.SortKeyBuffer
struct SortKeyBuffer_t1759538423;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndex1073906970.h"
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator1556892101.h"
#include "mscorlib_System_Globalization_CompareOptions2829943955.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_Mono_Globalization_Unicode_SortKeyBuffer1759538423.h"
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator2636657155.h"
#include "mscorlib_Mono_Globalization_Unicode_Contraction1673853792.h"

// System.Void Mono.Globalization.Unicode.SimpleCollator::.ctor(System.Globalization.CultureInfo)
extern "C"  void SimpleCollator__ctor_m3789916787 (SimpleCollator_t4081201584 * __this, CultureInfo_t3500843524 * ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::.cctor()
extern "C"  void SimpleCollator__cctor_m2693747668 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::SetCJKTable(System.Globalization.CultureInfo,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C"  void SimpleCollator_SetCJKTable_m1356471502 (SimpleCollator_t4081201584 * __this, CultureInfo_t3500843524 * ___culture0, CodePointIndexer_t1073906970 ** ___cjkIndexer1, uint8_t** ___catTable2, uint8_t** ___lv1Table3, CodePointIndexer_t1073906970 ** ___lv2Indexer4, uint8_t** ___lv2Table5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo Mono.Globalization.Unicode.SimpleCollator::GetNeutralCulture(System.Globalization.CultureInfo)
extern "C"  CultureInfo_t3500843524 * SimpleCollator_GetNeutralCulture_m740567665 (Il2CppObject * __this /* static, unused */, CultureInfo_t3500843524 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Category(System.Int32)
extern "C"  uint8_t SimpleCollator_Category_m1504096908 (SimpleCollator_t4081201584 * __this, int32_t ___cp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Level1(System.Int32)
extern "C"  uint8_t SimpleCollator_Level1_m3813786941 (SimpleCollator_t4081201584 * __this, int32_t ___cp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Level2(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType)
extern "C"  uint8_t SimpleCollator_Level2_m2254535125 (SimpleCollator_t4081201584 * __this, int32_t ___cp0, int32_t ___ext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsHalfKana(System.Int32,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsHalfKana_m4255579023 (Il2CppObject * __this /* static, unused */, int32_t ___cp0, int32_t ___opt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetContraction(System.String,System.Int32,System.Int32)
extern "C"  Contraction_t1673853792 * SimpleCollator_GetContraction_m3674789701 (SimpleCollator_t4081201584 * __this, String_t* ___s0, int32_t ___start1, int32_t ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetContraction(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.Contraction[])
extern "C"  Contraction_t1673853792 * SimpleCollator_GetContraction_m1391584430 (SimpleCollator_t4081201584 * __this, String_t* ___s0, int32_t ___start1, int32_t ___end2, ContractionU5BU5D_t4233480993* ___clist3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetTailContraction(System.String,System.Int32,System.Int32)
extern "C"  Contraction_t1673853792 * SimpleCollator_GetTailContraction_m374819833 (SimpleCollator_t4081201584 * __this, String_t* ___s0, int32_t ___start1, int32_t ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetTailContraction(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.Contraction[])
extern "C"  Contraction_t1673853792 * SimpleCollator_GetTailContraction_m1037943844 (SimpleCollator_t4081201584 * __this, String_t* ___s0, int32_t ___start1, int32_t ___end2, ContractionU5BU5D_t4233480993* ___clist3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::FilterOptions(System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t SimpleCollator_FilterOptions_m4044781893 (SimpleCollator_t4081201584 * __this, int32_t ___i0, int32_t ___opt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.SimpleCollator/ExtenderType Mono.Globalization.Unicode.SimpleCollator::GetExtenderType(System.Int32)
extern "C"  int32_t SimpleCollator_GetExtenderType_m976831551 (SimpleCollator_t4081201584 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::ToDashTypeValue(Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Globalization.CompareOptions)
extern "C"  uint8_t SimpleCollator_ToDashTypeValue_m2069376469 (Il2CppObject * __this /* static, unused */, int32_t ___ext0, int32_t ___opt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::FilterExtender(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Globalization.CompareOptions)
extern "C"  int32_t SimpleCollator_FilterExtender_m2624562651 (SimpleCollator_t4081201584 * __this, int32_t ___i0, int32_t ___ext1, int32_t ___opt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsIgnorable(System.Int32,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsIgnorable_m2485013022 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___opt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSafe(System.Int32)
extern "C"  bool SimpleCollator_IsSafe_m2555643371 (SimpleCollator_t4081201584 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Globalization.CompareOptions)
extern "C"  SortKey_t1270563137 * SimpleCollator_GetSortKey_m540875593 (SimpleCollator_t4081201584 * __this, String_t* ___s0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  SortKey_t1270563137 * SimpleCollator_GetSortKey_m1317491197 (SimpleCollator_t4081201584 * __this, String_t* ___s0, int32_t ___start1, int32_t ___length2, int32_t ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.SortKeyBuffer,System.Globalization.CompareOptions)
extern "C"  void SimpleCollator_GetSortKey_m2188419329 (SimpleCollator_t4081201584 * __this, String_t* ___s0, int32_t ___start1, int32_t ___end2, SortKeyBuffer_t1759538423 * ___buf3, int32_t ___opt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::FillSortKeyRaw(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.SortKeyBuffer,System.Globalization.CompareOptions)
extern "C"  void SimpleCollator_FillSortKeyRaw_m2488618624 (SimpleCollator_t4081201584 * __this, int32_t ___i0, int32_t ___ext1, SortKeyBuffer_t1759538423 * ___buf2, int32_t ___opt3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::FillSurrogateSortKeyRaw(System.Int32,Mono.Globalization.Unicode.SortKeyBuffer)
extern "C"  void SimpleCollator_FillSurrogateSortKeyRaw_m2423780110 (SimpleCollator_t4081201584 * __this, int32_t ___i0, SortKeyBuffer_t1759538423 * ___buf1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareOrdinal(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_CompareOrdinal_m2176988387 (SimpleCollator_t4081201584 * __this, String_t* ___s10, int32_t ___idx11, int32_t ___len12, String_t* ___s23, int32_t ___idx24, int32_t ___len25, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareQuick(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Boolean&,System.Boolean&,System.Boolean)
extern "C"  int32_t SimpleCollator_CompareQuick_m619038530 (SimpleCollator_t4081201584 * __this, String_t* ___s10, int32_t ___idx11, int32_t ___len12, String_t* ___s23, int32_t ___idx24, int32_t ___len25, bool* ___sourceConsumed6, bool* ___targetConsumed7, bool ___immediateBreakup8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareOrdinalIgnoreCase(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_CompareOrdinalIgnoreCase_m3195572467 (SimpleCollator_t4081201584 * __this, String_t* ___s10, int32_t ___idx11, int32_t ___len12, String_t* ___s23, int32_t ___idx24, int32_t ___len25, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t SimpleCollator_Compare_m168545919 (SimpleCollator_t4081201584 * __this, String_t* ___s10, int32_t ___idx11, int32_t ___len12, String_t* ___s23, int32_t ___idx24, int32_t ___len25, int32_t ___options6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::ClearBuffer(System.Byte*,System.Int32)
extern "C"  void SimpleCollator_ClearBuffer_m1828762230 (SimpleCollator_t4081201584 * __this, uint8_t* ___buffer0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::QuickCheckPossible(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  bool SimpleCollator_QuickCheckPossible_m3145784891 (SimpleCollator_t4081201584 * __this, String_t* ___s10, int32_t ___idx11, int32_t ___end12, String_t* ___s23, int32_t ___idx24, int32_t ___end25, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareInternal(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Boolean&,System.Boolean&,System.Boolean,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  int32_t SimpleCollator_CompareInternal_m280569710 (SimpleCollator_t4081201584 * __this, String_t* ___s10, int32_t ___idx11, int32_t ___len12, String_t* ___s23, int32_t ___idx24, int32_t ___len25, bool* ___targetConsumed6, bool* ___sourceConsumed7, bool ___skipHeadingExtenders8, bool ___immediateBreakup9, Context_t2636657155 * ___ctx10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareFlagPair(System.Boolean,System.Boolean)
extern "C"  int32_t SimpleCollator_CompareFlagPair_m1777501184 (SimpleCollator_t4081201584 * __this, bool ___b10, bool ___b21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsPrefix_m3427394972 (SimpleCollator_t4081201584 * __this, String_t* ___src0, String_t* ___target1, int32_t ___opt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsPrefix_m2438516594 (SimpleCollator_t4081201584 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, int32_t ___opt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Int32,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  bool SimpleCollator_IsPrefix_m363535963 (SimpleCollator_t4081201584 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, bool ___skipHeadingExtenders4, Context_t2636657155 * ___ctx5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSuffix(System.String,System.String,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsSuffix_m3137828155 (SimpleCollator_t4081201584 * __this, String_t* ___src0, String_t* ___target1, int32_t ___opt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSuffix(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsSuffix_m740049399 (SimpleCollator_t4081201584 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, int32_t ___opt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::QuickIndexOf(System.String,System.String,System.Int32,System.Int32,System.Boolean&)
extern "C"  int32_t SimpleCollator_QuickIndexOf_m2912556610 (SimpleCollator_t4081201584 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, bool* ___testWasUnable4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t SimpleCollator_IndexOf_m2575613007 (SimpleCollator_t4081201584 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, int32_t ___opt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfOrdinal(System.String,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_IndexOfOrdinal_m3089683139 (SimpleCollator_t4081201584 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfOrdinalIgnoreCase(System.String,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_IndexOfOrdinalIgnoreCase_m2778858347 (SimpleCollator_t4081201584 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfSortKey(System.String,System.Int32,System.Int32,System.Byte*,System.Char,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  int32_t SimpleCollator_IndexOfSortKey_m874776224 (SimpleCollator_t4081201584 * __this, String_t* ___s0, int32_t ___start1, int32_t ___length2, uint8_t* ___sortkey3, Il2CppChar ___target4, int32_t ___ti5, bool ___noLv46, Context_t2636657155 * ___ctx7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Byte*,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  int32_t SimpleCollator_IndexOf_m1409042748 (SimpleCollator_t4081201584 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, uint8_t* ___targetSortKey4, Context_t2636657155 * ___ctx5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t SimpleCollator_LastIndexOf_m3919677393 (SimpleCollator_t4081201584 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, int32_t ___opt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfOrdinal(System.String,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_LastIndexOfOrdinal_m45234497 (SimpleCollator_t4081201584 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfOrdinalIgnoreCase(System.String,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_LastIndexOfOrdinalIgnoreCase_m550798345 (SimpleCollator_t4081201584 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfSortKey(System.String,System.Int32,System.Int32,System.Int32,System.Byte*,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  int32_t SimpleCollator_LastIndexOfSortKey_m1695731400 (SimpleCollator_t4081201584 * __this, String_t* ___s0, int32_t ___start1, int32_t ___orgStart2, int32_t ___length3, uint8_t* ___sortkey4, int32_t ___ti5, bool ___noLv46, Context_t2636657155 * ___ctx7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOf(System.String,System.String,System.Int32,System.Int32,System.Byte*,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  int32_t SimpleCollator_LastIndexOf_m440117924 (SimpleCollator_t4081201584 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, uint8_t* ___targetSortKey4, Context_t2636657155 * ___ctx5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesForward(System.String,System.Int32&,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  bool SimpleCollator_MatchesForward_m3790525709 (SimpleCollator_t4081201584 * __this, String_t* ___s0, int32_t* ___idx1, int32_t ___end2, int32_t ___ti3, uint8_t* ___sortkey4, bool ___noLv45, Context_t2636657155 * ___ctx6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesForwardCore(System.String,System.Int32&,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.Contraction&,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  bool SimpleCollator_MatchesForwardCore_m558011650 (SimpleCollator_t4081201584 * __this, String_t* ___s0, int32_t* ___idx1, int32_t ___end2, int32_t ___ti3, uint8_t* ___sortkey4, bool ___noLv45, int32_t ___ext6, Contraction_t1673853792 ** ___ct7, Context_t2636657155 * ___ctx8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesPrimitive(System.Globalization.CompareOptions,System.Byte*,System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Byte*,System.Int32,System.Boolean)
extern "C"  bool SimpleCollator_MatchesPrimitive_m1158768094 (SimpleCollator_t4081201584 * __this, int32_t ___opt0, uint8_t* ___source1, int32_t ___si2, int32_t ___ext3, uint8_t* ___target4, int32_t ___ti5, bool ___noLv46, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesBackward(System.String,System.Int32&,System.Int32,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  bool SimpleCollator_MatchesBackward_m2208209332 (SimpleCollator_t4081201584 * __this, String_t* ___s0, int32_t* ___idx1, int32_t ___end2, int32_t ___orgStart3, int32_t ___ti4, uint8_t* ___sortkey5, bool ___noLv46, Context_t2636657155 * ___ctx7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesBackwardCore(System.String,System.Int32&,System.Int32,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.Contraction&,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  bool SimpleCollator_MatchesBackwardCore_m1884994267 (SimpleCollator_t4081201584 * __this, String_t* ___s0, int32_t* ___idx1, int32_t ___end2, int32_t ___orgStart3, int32_t ___ti4, uint8_t* ___sortkey5, bool ___noLv46, int32_t ___ext7, Contraction_t1673853792 ** ___ct8, Context_t2636657155 * ___ctx9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
