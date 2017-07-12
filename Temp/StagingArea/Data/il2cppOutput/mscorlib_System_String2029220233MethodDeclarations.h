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

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.IFormatProvider
struct IFormatProvider_t2849799027;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t930005165;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Text.Encoding
struct Encoding_t663144255;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_StringSplitOptions2996162939.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_StringComparison2376310518.h"
#include "mscorlib_System_Globalization_CompareOptions2829943955.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_Text_Encoding663144255.h"

// System.Void System.String::.ctor(System.Char*,System.Int32,System.Int32)
extern "C"  void String__ctor_m2041020387 (String_t* __this, Il2CppChar* ___value0, int32_t ___startIndex1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[],System.Int32,System.Int32)
extern "C"  void String__ctor_m3093010527 (String_t* __this, CharU5BU5D_t1328083999* ___value0, int32_t ___startIndex1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[])
extern "C"  void String__ctor_m372528291 (String_t* __this, CharU5BU5D_t1328083999* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char,System.Int32)
extern "C"  void String__ctor_m757966614 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.cctor()
extern "C"  void String__cctor_m710226597 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool String_System_IConvertible_ToBoolean_m2696751322 (String_t* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.String::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t String_System_IConvertible_ToByte_m2732322410 (String_t* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar String_System_IConvertible_ToChar_m1804118378 (String_t* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.String::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t693205669  String_System_IConvertible_ToDateTime_m1423627978 (String_t* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.String::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t724701077  String_System_IConvertible_ToDecimal_m1150081472 (String_t* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.String::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double String_System_IConvertible_ToDouble_m3860911722 (String_t* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.String::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t String_System_IConvertible_ToInt16_m2365303066 (String_t* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t String_System_IConvertible_ToInt32_m1927223638 (String_t* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.String::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t String_System_IConvertible_ToInt64_m1895913508 (String_t* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.String::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t String_System_IConvertible_ToSByte_m587045588 (String_t* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.String::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float String_System_IConvertible_ToSingle_m1404310570 (String_t* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.String::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  Il2CppObject * String_System_IConvertible_ToType_m512800076 (String_t* __this, Type_t * ___targetType0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.String::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t String_System_IConvertible_ToUInt16_m981183466 (String_t* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.String::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t String_System_IConvertible_ToUInt32_m1549386346 (String_t* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.String::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t String_System_IConvertible_ToUInt64_m3564476970 (String_t* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Char> System.String::System.Collections.Generic.IEnumerable<char>.GetEnumerator()
extern "C"  Il2CppObject* String_System_Collections_Generic_IEnumerableU3CcharU3E_GetEnumerator_m1449564085 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.String::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * String_System_Collections_IEnumerable_GetEnumerator_m252173599 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String,System.String)
extern "C"  bool String_Equals_m3568148125 (Il2CppObject * __this /* static, unused */, String_t* ___a0, String_t* ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.Object)
extern "C"  bool String_Equals_m406432531 (String_t* __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2633592423 (String_t* __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m4230566705 (String_t* __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.String::Clone()
extern "C"  Il2CppObject * String_Clone_m3661987580 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CopyTo(System.Int32,System.Char[],System.Int32,System.Int32)
extern "C"  void String_CopyTo_m3397208344 (String_t* __this, int32_t ___sourceIndex0, CharU5BU5D_t1328083999* ___destination1, int32_t ___destinationIndex2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t1328083999* String_ToCharArray_m870309954 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray(System.Int32,System.Int32)
extern "C"  CharU5BU5D_t1328083999* String_ToCharArray_m324532646 (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1642385972* String_Split_m3326265864 (String_t* __this, CharU5BU5D_t1328083999* ___separator0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32)
extern "C"  StringU5BU5D_t1642385972* String_Split_m3350696563 (String_t* __this, CharU5BU5D_t1328083999* ___separator0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32,System.StringSplitOptions)
extern "C"  StringU5BU5D_t1642385972* String_Split_m1779268055 (String_t* __this, CharU5BU5D_t1328083999* ___separator0, int32_t ___count1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.Int32,System.StringSplitOptions)
extern "C"  StringU5BU5D_t1642385972* String_Split_m394273024 (String_t* __this, StringU5BU5D_t1642385972* ___separator0, int32_t ___count1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
extern "C"  StringU5BU5D_t1642385972* String_Split_m3927740091 (String_t* __this, StringU5BU5D_t1642385972* ___separator0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C"  String_t* String_Substring_m2032624251 (String_t* __this, int32_t ___startIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m12482732 (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::SubstringUnchecked(System.Int32,System.Int32)
extern "C"  String_t* String_SubstringUnchecked_m3297591410 (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim()
extern "C"  String_t* String_Trim_m2668767713 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim(System.Char[])
extern "C"  String_t* String_Trim_m3982520224 (String_t* __this, CharU5BU5D_t1328083999* ___trimChars0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimStart(System.Char[])
extern "C"  String_t* String_TrimStart_m710830036 (String_t* __this, CharU5BU5D_t1328083999* ___trimChars0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimEnd(System.Char[])
extern "C"  String_t* String_TrimEnd_m3153143011 (String_t* __this, CharU5BU5D_t1328083999* ___trimChars0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotWhiteSpace(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t String_FindNotWhiteSpace_m729333788 (String_t* __this, int32_t ___pos0, int32_t ___target1, int32_t ___change2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotInTable(System.Int32,System.Int32,System.Int32,System.Char[])
extern "C"  int32_t String_FindNotInTable_m2094917037 (String_t* __this, int32_t ___pos0, int32_t ___target1, int32_t ___change2, CharU5BU5D_t1328083999* ___table3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String)
extern "C"  int32_t String_Compare_m705567607 (Il2CppObject * __this /* static, unused */, String_t* ___strA0, String_t* ___strB1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
extern "C"  int32_t String_Compare_m2851607672 (Il2CppObject * __this /* static, unused */, String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
extern "C"  int32_t String_Compare_m1847873744 (Il2CppObject * __this /* static, unused */, String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, CultureInfo_t3500843524 * ___culture3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean,System.Globalization.CultureInfo)
extern "C"  int32_t String_Compare_m560208559 (Il2CppObject * __this /* static, unused */, String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, bool ___ignoreCase5, CultureInfo_t3500843524 * ___culture6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
extern "C"  int32_t String_Compare_m3288062998 (Il2CppObject * __this /* static, unused */, String_t* ___strA0, String_t* ___strB1, int32_t ___comparisonType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String,System.StringComparison)
extern "C"  bool String_Equals_m1185277978 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.Object)
extern "C"  int32_t String_CompareTo_m2881181948 (String_t* __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.String)
extern "C"  int32_t String_CompareTo_m3879609894 (String_t* __this, String_t* ___strB0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  int32_t String_CompareOrdinal_m244070001 (Il2CppObject * __this /* static, unused */, String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  int32_t String_CompareOrdinalUnchecked_m3787381712 (Il2CppObject * __this /* static, unused */, String_t* ___strA0, int32_t ___indexA1, int32_t ___lenA2, String_t* ___strB3, int32_t ___indexB4, int32_t ___lenB5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalCaseInsensitiveUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  int32_t String_CompareOrdinalCaseInsensitiveUnchecked_m2002640463 (Il2CppObject * __this /* static, unused */, String_t* ___strA0, int32_t ___indexA1, int32_t ___lenA2, String_t* ___strB3, int32_t ___indexB4, int32_t ___lenB5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::EndsWith(System.String)
extern "C"  bool String_EndsWith_m568509976 (String_t* __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[])
extern "C"  int32_t String_IndexOfAny_m2016554902 (String_t* __this, CharU5BU5D_t1328083999* ___anyOf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32)
extern "C"  int32_t String_IndexOfAny_m2027595557 (String_t* __this, CharU5BU5D_t1328083999* ___anyOf0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t String_IndexOfAny_m2287869096 (String_t* __this, CharU5BU5D_t1328083999* ___anyOf0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t String_IndexOfAnyUnchecked_m1691561612 (String_t* __this, CharU5BU5D_t1328083999* ___anyOf0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
extern "C"  int32_t String_IndexOf_m570401060 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32,System.StringComparison)
extern "C"  int32_t String_IndexOf_m2126171214 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, int32_t ___comparisonType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinal(System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t String_IndexOfOrdinal_m3591623977 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, int32_t ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalUnchecked(System.String,System.Int32,System.Int32)
extern "C"  int32_t String_IndexOfOrdinalUnchecked_m4261050112 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalIgnoreCaseUnchecked(System.String,System.Int32,System.Int32)
extern "C"  int32_t String_IndexOfOrdinalIgnoreCaseUnchecked_m1674098430 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
extern "C"  int32_t String_IndexOf_m2358239236 (String_t* __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
extern "C"  int32_t String_IndexOf_m3890362537 (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32,System.Int32)
extern "C"  int32_t String_IndexOf_m519385554 (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfUnchecked(System.Char,System.Int32,System.Int32)
extern "C"  int32_t String_IndexOfUnchecked_m3356721554 (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String)
extern "C"  int32_t String_IndexOf_m4251815737 (String_t* __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32)
extern "C"  int32_t String_IndexOf_m1887352430 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32)
extern "C"  int32_t String_IndexOf_m3750299821 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[])
extern "C"  int32_t String_LastIndexOfAny_m1473637802 (String_t* __this, CharU5BU5D_t1328083999* ___anyOf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t String_LastIndexOfAnyUnchecked_m3515098196 (String_t* __this, CharU5BU5D_t1328083999* ___anyOf0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char)
extern "C"  int32_t String_LastIndexOf_m3555875680 (String_t* __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32)
extern "C"  int32_t String_LastIndexOf_m3157515271 (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32,System.Int32)
extern "C"  int32_t String_LastIndexOf_m2946019026 (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfUnchecked(System.Char,System.Int32,System.Int32)
extern "C"  int32_t String_LastIndexOfUnchecked_m1575121566 (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String)
extern "C"  int32_t String_LastIndexOf_m1975817115 (String_t* __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String,System.Int32,System.Int32)
extern "C"  int32_t String_LastIndexOf_m290475879 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Contains(System.String)
extern "C"  bool String_Contains_m4017059963 (String_t* __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2802126737 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::PadLeft(System.Int32,System.Char)
extern "C"  String_t* String_PadLeft_m1726975163 (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::PadRight(System.Int32,System.Char)
extern "C"  String_t* String_PadRight_m1043573208 (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String)
extern "C"  bool String_StartsWith_m1841920685 (String_t* __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
extern "C"  bool String_StartsWith_m46695182 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.Char,System.Char)
extern "C"  String_t* String_Replace_m534438427 (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
extern "C"  String_t* String_Replace_m1941156251 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceUnchecked(System.String,System.String)
extern "C"  String_t* String_ReplaceUnchecked_m3931911643 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceFallback(System.String,System.String,System.Int32)
extern "C"  String_t* String_ReplaceFallback_m64616664 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, int32_t ___testedCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Remove(System.Int32,System.Int32)
extern "C"  String_t* String_Remove_m3580114465 (String_t* __this, int32_t ___startIndex0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower()
extern "C"  String_t* String_ToLower_m2994460523 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower(System.Globalization.CultureInfo)
extern "C"  String_t* String_ToLower_m743194025 (String_t* __this, CultureInfo_t3500843524 * ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLowerInvariant()
extern "C"  String_t* String_ToLowerInvariant_m3152527487 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToUpper(System.Globalization.CultureInfo)
extern "C"  String_t* String_ToUpper_m4182653586 (String_t* __this, CultureInfo_t3500843524 * ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToUpperInvariant()
extern "C"  String_t* String_ToUpperInvariant_m528694298 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString()
extern "C"  String_t* String_ToString_m3226660001 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString(System.IFormatProvider)
extern "C"  String_t* String_ToString_m3947034189 (String_t* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2024975688 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___arg01, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m1811873526 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___arg01, Il2CppObject * ___arg12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C"  String_t* String_Format_m4262916296 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___arg01, Il2CppObject * ___arg12, Il2CppObject * ___arg23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m1263743648 (Il2CppObject * __this /* static, unused */, String_t* ___format0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C"  String_t* String_Format_m876527052 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___provider0, String_t* ___format1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.String::FormatHelper(System.Text.StringBuilder,System.IFormatProvider,System.String,System.Object[])
extern "C"  StringBuilder_t1221177846 * String_FormatHelper_m1513692144 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___result0, Il2CppObject * ___provider1, String_t* ___format2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m56707527 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___arg00, Il2CppObject * ___arg11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m2000667605 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___arg00, Il2CppObject * ___arg11, Il2CppObject * ___arg22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m2596409543 (Il2CppObject * __this /* static, unused */, String_t* ___str00, String_t* ___str11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m612901809 (Il2CppObject * __this /* static, unused */, String_t* ___str00, String_t* ___str11, String_t* ___str22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m1561703559 (Il2CppObject * __this /* static, unused */, String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m3881798623 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m626692867 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ConcatInternal(System.String[],System.Int32)
extern "C"  String_t* String_ConcatInternal_m165256365 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___values0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Insert(System.Int32,System.String)
extern "C"  String_t* String_Insert_m1649676359 (String_t* __this, int32_t ___startIndex0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[])
extern "C"  String_t* String_Join_m1966872927 (Il2CppObject * __this /* static, unused */, String_t* ___separator0, StringU5BU5D_t1642385972* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[],System.Int32,System.Int32)
extern "C"  String_t* String_Join_m106492019 (Il2CppObject * __this /* static, unused */, String_t* ___separator0, StringU5BU5D_t1642385972* ___value1, int32_t ___startIndex2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::JoinUnchecked(System.String,System.String[],System.Int32,System.Int32)
extern "C"  String_t* String_JoinUnchecked_m1880555587 (Il2CppObject * __this /* static, unused */, String_t* ___separator0, StringU5BU5D_t1642385972* ___value1, int32_t ___startIndex2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m1606060069 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::ParseFormatSpecifier(System.String,System.Int32&,System.Int32&,System.Int32&,System.Boolean&,System.String&)
extern "C"  void String_ParseFormatSpecifier_m1466397490 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___ptr1, int32_t* ___n2, int32_t* ___width3, bool* ___left_align4, String_t** ___format5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::ParseDecimal(System.String,System.Int32&)
extern "C"  int32_t String_ParseDecimal_m3596063331 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___ptr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetChar(System.Int32,System.Char)
extern "C"  void String_InternalSetChar_m2450944321 (String_t* __this, int32_t ___idx0, Il2CppChar ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetLength(System.Int32)
extern "C"  void String_InternalSetLength_m3006222024 (String_t* __this, int32_t ___newLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetHashCode()
extern "C"  int32_t String_GetHashCode_m931956593 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetCaseInsensitiveHashCode()
extern "C"  int32_t String_GetCaseInsensitiveHashCode_m74381984 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*)
extern "C"  String_t* String_CreateString_m4111788090 (String_t* __this, int8_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32)
extern "C"  String_t* String_CreateString_m197601096 (String_t* __this, int8_t* ___value0, int32_t ___startIndex1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32,System.Text.Encoding)
extern "C"  String_t* String_CreateString_m560359261 (String_t* __this, int8_t* ___value0, int32_t ___startIndex1, int32_t ___length2, Encoding_t663144255 * ___enc3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*)
extern "C"  String_t* String_CreateString_m4236499327 (String_t* __this, Il2CppChar* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
extern "C"  String_t* String_CreateString_m3376998739 (String_t* __this, Il2CppChar* ___value0, int32_t ___startIndex1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
extern "C"  String_t* String_CreateString_m2448464375 (String_t* __this, CharU5BU5D_t1328083999* ___val0, int32_t ___startIndex1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[])
extern "C"  String_t* String_CreateString_m3818307083 (String_t* __this, CharU5BU5D_t1328083999* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C"  String_t* String_CreateString_m2556700934 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy4(System.Byte*,System.Byte*,System.Int32)
extern "C"  void String_memcpy4_m1859035986 (Il2CppObject * __this /* static, unused */, uint8_t* ___dest0, uint8_t* ___src1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy2(System.Byte*,System.Byte*,System.Int32)
extern "C"  void String_memcpy2_m2338403668 (Il2CppObject * __this /* static, unused */, uint8_t* ___dest0, uint8_t* ___src1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy1(System.Byte*,System.Byte*,System.Int32)
extern "C"  void String_memcpy1_m971106965 (Il2CppObject * __this /* static, unused */, uint8_t* ___dest0, uint8_t* ___src1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy(System.Byte*,System.Byte*,System.Int32)
extern "C"  void String_memcpy_m1656639862 (Il2CppObject * __this /* static, unused */, uint8_t* ___dest0, uint8_t* ___src1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.Char*,System.Char*,System.Int32)
extern "C"  void String_CharCopy_m586187774 (Il2CppObject * __this /* static, unused */, Il2CppChar* ___dest0, Il2CppChar* ___src1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.Char*,System.Char*,System.Int32)
extern "C"  void String_CharCopyReverse_m553340332 (Il2CppObject * __this /* static, unused */, Il2CppChar* ___dest0, Il2CppChar* ___src1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  void String_CharCopy_m2071900310 (Il2CppObject * __this /* static, unused */, String_t* ___target0, int32_t ___targetIndex1, String_t* ___source2, int32_t ___sourceIndex3, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.Char[],System.Int32,System.Int32)
extern "C"  void String_CharCopy_m2550399897 (Il2CppObject * __this /* static, unused */, String_t* ___target0, int32_t ___targetIndex1, CharU5BU5D_t1328083999* ___source2, int32_t ___sourceIndex3, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  void String_CharCopyReverse_m3013802708 (Il2CppObject * __this /* static, unused */, String_t* ___target0, int32_t ___targetIndex1, String_t* ___source2, int32_t ___sourceIndex3, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::InternalSplit(System.Char[],System.Int32,System.Int32)
extern "C"  StringU5BU5D_t1642385972* String_InternalSplit_m2820199433 (String_t* __this, CharU5BU5D_t1328083999* ___separator0, int32_t ___count1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::InternalAllocateStr(System.Int32)
extern "C"  String_t* String_InternalAllocateStr_m736211701 (Il2CppObject * __this /* static, unused */, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (Il2CppObject * __this /* static, unused */, String_t* ___a0, String_t* ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m304203149 (Il2CppObject * __this /* static, unused */, String_t* ___a0, String_t* ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
