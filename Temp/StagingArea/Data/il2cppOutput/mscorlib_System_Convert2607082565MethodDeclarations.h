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

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t2849799027;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Convert::.cctor()
extern "C"  void Convert__cctor_m926133987 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Convert::InternalFromBase64String(System.String,System.Boolean)
extern "C"  ByteU5BU5D_t3397334013* Convert_InternalFromBase64String_m3682756716 (Il2CppObject * __this /* static, unused */, String_t* ___str0, bool ___allowWhitespaceOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C"  ByteU5BU5D_t3397334013* Convert_FromBase64String_m3629466114 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToBase64String(System.Byte[])
extern "C"  String_t* Convert_ToBase64String_m1936815455 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___inArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToBase64String(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* Convert_ToBase64String_m1259091507 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___inArray0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Byte)
extern "C"  bool Convert_ToBoolean_m2032547942 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Decimal)
extern "C"  bool Convert_ToBoolean_m609649195 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Double)
extern "C"  bool Convert_ToBoolean_m2764507461 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Single)
extern "C"  bool Convert_ToBoolean_m527095044 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int32)
extern "C"  bool Convert_ToBoolean_m2374595998 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int64)
extern "C"  bool Convert_ToBoolean_m1211796357 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.SByte)
extern "C"  bool Convert_ToBoolean_m3882815225 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int16)
extern "C"  bool Convert_ToBoolean_m48997236 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.String,System.IFormatProvider)
extern "C"  bool Convert_ToBoolean_m3091522205 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt32)
extern "C"  bool Convert_ToBoolean_m2188088811 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt64)
extern "C"  bool Convert_ToBoolean_m3169319766 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt16)
extern "C"  bool Convert_ToBoolean_m2470413809 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Object)
extern "C"  bool Convert_ToBoolean_m3380084829 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Object,System.IFormatProvider)
extern "C"  bool Convert_ToBoolean_m949259033 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Boolean)
extern "C"  uint8_t Convert_ToByte_m3220387780 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Char)
extern "C"  uint8_t Convert_ToByte_m1730472478 (Il2CppObject * __this /* static, unused */, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Decimal)
extern "C"  uint8_t Convert_ToByte_m3700175607 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Double)
extern "C"  uint8_t Convert_ToByte_m1571267017 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Single)
extern "C"  uint8_t Convert_ToByte_m1733800206 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int32)
extern "C"  uint8_t Convert_ToByte_m1201588964 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int64)
extern "C"  uint8_t Convert_ToByte_m395020137 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.SByte)
extern "C"  uint8_t Convert_ToByte_m2303223565 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int16)
extern "C"  uint8_t Convert_ToByte_m3527187858 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.String)
extern "C"  uint8_t Convert_ToByte_m3147313973 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.String,System.IFormatProvider)
extern "C"  uint8_t Convert_ToByte_m1008221737 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt32)
extern "C"  uint8_t Convert_ToByte_m509311047 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt64)
extern "C"  uint8_t Convert_ToByte_m932798552 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt16)
extern "C"  uint8_t Convert_ToByte_m791636053 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Object,System.IFormatProvider)
extern "C"  uint8_t Convert_ToByte_m9159597 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Byte)
extern "C"  Il2CppChar Convert_ToChar_m2170787796 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int32)
extern "C"  Il2CppChar Convert_ToChar_m3827339132 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int64)
extern "C"  Il2CppChar Convert_ToChar_m695171477 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Single)
extern "C"  Il2CppChar Convert_ToChar_m759006262 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.SByte)
extern "C"  Il2CppChar Convert_ToChar_m541258017 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int16)
extern "C"  Il2CppChar Convert_ToChar_m1857970598 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.String,System.IFormatProvider)
extern "C"  Il2CppChar Convert_ToChar_m541531581 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt32)
extern "C"  Il2CppChar Convert_ToChar_m528169935 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt64)
extern "C"  Il2CppChar Convert_ToChar_m951657444 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt16)
extern "C"  Il2CppChar Convert_ToChar_m245844937 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Object,System.IFormatProvider)
extern "C"  Il2CppChar Convert_ToChar_m460260673 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
extern "C"  DateTime_t693205669  Convert_ToDateTime_m261774113 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int16)
extern "C"  DateTime_t693205669  Convert_ToDateTime_m1029759568 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int32)
extern "C"  DateTime_t693205669  Convert_ToDateTime_m2999128102 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int64)
extern "C"  DateTime_t693205669  Convert_ToDateTime_m4161927553 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Single)
extern "C"  DateTime_t693205669  Convert_ToDateTime_m1251728572 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Object,System.IFormatProvider)
extern "C"  DateTime_t693205669  Convert_ToDateTime_m1910077341 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.SByte)
extern "C"  DateTime_t693205669  Convert_ToDateTime_m1020507389 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt16)
extern "C"  DateTime_t693205669  Convert_ToDateTime_m3528521877 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt32)
extern "C"  DateTime_t693205669  Convert_ToDateTime_m3810846875 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt64)
extern "C"  DateTime_t693205669  Convert_ToDateTime_m1626410554 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Boolean)
extern "C"  Decimal_t724701077  Convert_ToDecimal_m3155136770 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Byte)
extern "C"  Decimal_t724701077  Convert_ToDecimal_m255741126 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Decimal)
extern "C"  Decimal_t724701077  Convert_ToDecimal_m2889188811 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Double)
extern "C"  Decimal_t724701077  Convert_ToDecimal_m1354200421 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Single)
extern "C"  Decimal_t724701077  Convert_ToDecimal_m2007036836 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int32)
extern "C"  Decimal_t724701077  Convert_ToDecimal_m4037963518 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int64)
extern "C"  Decimal_t724701077  Convert_ToDecimal_m2875163877 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.SByte)
extern "C"  Decimal_t724701077  Convert_ToDecimal_m2736745817 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int16)
extern "C"  Decimal_t724701077  Convert_ToDecimal_m1712364756 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.String,System.IFormatProvider)
extern "C"  Decimal_t724701077  Convert_ToDecimal_m2284596541 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt32)
extern "C"  Decimal_t724701077  Convert_ToDecimal_m777781771 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt64)
extern "C"  Decimal_t724701077  Convert_ToDecimal_m354294262 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt16)
extern "C"  Decimal_t724701077  Convert_ToDecimal_m1060106769 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
extern "C"  Decimal_t724701077  Convert_ToDecimal_m349440953 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Boolean)
extern "C"  double Convert_ToDouble_m204912726 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Byte)
extern "C"  double Convert_ToDouble_m2673807774 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Decimal)
extern "C"  double Convert_ToDouble_m1210655267 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Double)
extern "C"  double Convert_ToDouble_m1714698801 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Single)
extern "C"  double Convert_ToDouble_m2956884076 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int32)
extern "C"  double Convert_ToDouble_m1550692470 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int64)
extern "C"  double Convert_ToDouble_m2357261297 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.SByte)
extern "C"  double Convert_ToDouble_m2226915533 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int16)
extern "C"  double Convert_ToDouble_m3520060872 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.String,System.IFormatProvider)
extern "C"  double Convert_ToDouble_m2038331505 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt32)
extern "C"  double Convert_ToDouble_m4236754739 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt64)
extern "C"  double Convert_ToDouble_m923018402 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt16)
extern "C"  double Convert_ToDouble_m3954429733 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Object)
extern "C"  double Convert_ToDouble_m3751930225 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
extern "C"  double Convert_ToDouble_m574888941 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Boolean)
extern "C"  int16_t Convert_ToInt16_m1787678274 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Byte)
extern "C"  int16_t Convert_ToInt16_m755091206 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Char)
extern "C"  int16_t Convert_ToInt16_m950730600 (Il2CppObject * __this /* static, unused */, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Decimal)
extern "C"  int16_t Convert_ToInt16_m172393227 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Double)
extern "C"  int16_t Convert_ToInt16_m3001914661 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Single)
extern "C"  int16_t Convert_ToInt16_m416789348 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int32)
extern "C"  int16_t Convert_ToInt16_m3374388286 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int64)
extern "C"  int16_t Convert_ToInt16_m2211588645 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.SByte)
extern "C"  int16_t Convert_ToInt16_m960783641 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int16)
extern "C"  int16_t Convert_ToInt16_m1048789524 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.String,System.IFormatProvider)
extern "C"  int16_t Convert_ToInt16_m3462984061 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt32)
extern "C"  int16_t Convert_ToInt16_m1536565067 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt64)
extern "C"  int16_t Convert_ToInt16_m1113077558 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt16)
extern "C"  int16_t Convert_ToInt16_m1818890065 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Object)
extern "C"  int16_t Convert_ToInt16_m379530301 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Object,System.IFormatProvider)
extern "C"  int16_t Convert_ToInt16_m591571705 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Boolean)
extern "C"  int32_t Convert_ToInt32_m55151042 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Byte)
extern "C"  int32_t Convert_ToInt32_m3487847046 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Char)
extern "C"  int32_t Convert_ToInt32_m3683486440 (Il2CppObject * __this /* static, unused */, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Decimal)
extern "C"  int32_t Convert_ToInt32_m2734833291 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Double)
extern "C"  int32_t Convert_ToInt32_m2988544165 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Single)
extern "C"  int32_t Convert_ToInt32_m403418852 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Int64)
extern "C"  int32_t Convert_ToInt32_m3460593061 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.SByte)
extern "C"  int32_t Convert_ToInt32_m2209788057 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Int16)
extern "C"  int32_t Convert_ToInt32_m2297793940 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.String,System.IFormatProvider)
extern "C"  int32_t Convert_ToInt32_m3676863741 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt32)
extern "C"  int32_t Convert_ToInt32_m1523194571 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt64)
extern "C"  int32_t Convert_ToInt32_m1099707062 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt16)
extern "C"  int32_t Convert_ToInt32_m1805519569 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Object)
extern "C"  int32_t Convert_ToInt32_m366159805 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
extern "C"  int32_t Convert_ToInt32_m805451385 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Boolean)
extern "C"  int64_t Convert_ToInt64_m1988035458 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Byte)
extern "C"  int64_t Convert_ToInt64_m1786777414 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Char)
extern "C"  int64_t Convert_ToInt64_m1982416808 (Il2CppObject * __this /* static, unused */, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Decimal)
extern "C"  int64_t Convert_ToInt64_m1722087499 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Double)
extern "C"  int64_t Convert_ToInt64_m338790373 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Single)
extern "C"  int64_t Convert_ToInt64_m991626788 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int32)
extern "C"  int64_t Convert_ToInt64_m2310639998 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int64)
extern "C"  int64_t Convert_ToInt64_m1147840357 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.SByte)
extern "C"  int64_t Convert_ToInt64_m1009422297 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int16)
extern "C"  int64_t Convert_ToInt64_m4280008532 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.String)
extern "C"  int64_t Convert_ToInt64_m3181519185 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.String,System.IFormatProvider)
extern "C"  int64_t Convert_ToInt64_m1484722109 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt32)
extern "C"  int64_t Convert_ToInt64_m4057339019 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt64)
extern "C"  int64_t Convert_ToInt64_m3633851510 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt16)
extern "C"  int64_t Convert_ToInt64_m44696721 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Object)
extern "C"  int64_t Convert_ToInt64_m954367741 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Object,System.IFormatProvider)
extern "C"  int64_t Convert_ToInt64_m3844533817 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Boolean)
extern "C"  int8_t Convert_ToSByte_m615207682 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Byte)
extern "C"  int8_t Convert_ToSByte_m2470292806 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Char)
extern "C"  int8_t Convert_ToSByte_m2665932200 (Il2CppObject * __this /* static, unused */, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Decimal)
extern "C"  int8_t Convert_ToSByte_m3295168715 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Double)
extern "C"  int8_t Convert_ToSByte_m3768984293 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Single)
extern "C"  int8_t Convert_ToSByte_m1183867428 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int32)
extern "C"  int8_t Convert_ToSByte_m3208712702 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int64)
extern "C"  int8_t Convert_ToSByte_m2045913061 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int16)
extern "C"  int8_t Convert_ToSByte_m883113940 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.String,System.IFormatProvider)
extern "C"  int8_t Convert_ToSByte_m1570938941 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt32)
extern "C"  int8_t Convert_ToSByte_m2303634571 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt64)
extern "C"  int8_t Convert_ToSByte_m1880147062 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt16)
extern "C"  int8_t Convert_ToSByte_m2585959569 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Object,System.IFormatProvider)
extern "C"  int8_t Convert_ToSByte_m1972336057 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Boolean)
extern "C"  float Convert_ToSingle_m3854251972 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Byte)
extern "C"  float Convert_ToSingle_m1780409948 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Decimal)
extern "C"  float Convert_ToSingle_m39351287 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Double)
extern "C"  float Convert_ToSingle_m690748777 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Single)
extern "C"  float Convert_ToSingle_m3602825646 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int32)
extern "C"  float Convert_ToSingle_m915696580 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int64)
extern "C"  float Convert_ToSingle_m109127753 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.SByte)
extern "C"  float Convert_ToSingle_m3186653037 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int16)
extern "C"  float Convert_ToSingle_m3241295474 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.String,System.IFormatProvider)
extern "C"  float Convert_ToSingle_m3854923273 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt32)
extern "C"  float Convert_ToSingle_m2156102599 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt64)
extern "C"  float Convert_ToSingle_m2579590104 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt16)
extern "C"  float Convert_ToSingle_m2438427605 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Object,System.IFormatProvider)
extern "C"  float Convert_ToSingle_m1901383565 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Byte,System.Int32)
extern "C"  String_t* Convert_ToString_m3884855475 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, int32_t ___toBase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Int32)
extern "C"  String_t* Convert_ToString_m2425590390 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Object)
extern "C"  String_t* Convert_ToString_m2915777777 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Object,System.IFormatProvider)
extern "C"  String_t* Convert_ToString_m2031270637 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Boolean)
extern "C"  uint16_t Convert_ToUInt16_m1043031438 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Byte)
extern "C"  uint16_t Convert_ToUInt16_m3860123086 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Char)
extern "C"  uint16_t Convert_ToUInt16_m36213644 (Il2CppObject * __this /* static, unused */, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Decimal)
extern "C"  uint16_t Convert_ToUInt16_m588378195 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Double)
extern "C"  uint16_t Convert_ToUInt16_m3265369225 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Single)
extern "C"  uint16_t Convert_ToUInt16_m3866680988 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int32)
extern "C"  uint16_t Convert_ToUInt16_m1665900934 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int64)
extern "C"  uint16_t Convert_ToUInt16_m2828700513 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.SByte)
extern "C"  uint16_t Convert_ToUInt16_m3982177821 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int16)
extern "C"  uint16_t Convert_ToUInt16_m3991499696 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.String,System.IFormatProvider)
extern "C"  uint16_t Convert_ToUInt16_m1058302913 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.UInt32)
extern "C"  uint16_t Convert_ToUInt16_m2130758075 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.UInt64)
extern "C"  uint16_t Convert_ToUInt16_m4241289050 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Object,System.IFormatProvider)
extern "C"  uint16_t Convert_ToUInt16_m590399293 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Boolean)
extern "C"  uint32_t Convert_ToUInt32_m3686071170 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Byte)
extern "C"  uint32_t Convert_ToUInt32_m3492113030 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Char)
extern "C"  uint32_t Convert_ToUInt32_m797503336 (Il2CppObject * __this /* static, unused */, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Decimal)
extern "C"  uint32_t Convert_ToUInt32_m610956619 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Double)
extern "C"  uint32_t Convert_ToUInt32_m1336475941 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Single)
extern "C"  uint32_t Convert_ToUInt32_m3394039268 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int32)
extern "C"  uint32_t Convert_ToUInt32_m3085255294 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int64)
extern "C"  uint32_t Convert_ToUInt32_m1922455781 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.SByte)
extern "C"  uint32_t Convert_ToUInt32_m671585177 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int16)
extern "C"  uint32_t Convert_ToUInt32_m759656532 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.String,System.IFormatProvider)
extern "C"  uint32_t Convert_ToUInt32_m776714429 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.UInt64)
extern "C"  uint32_t Convert_ToUInt32_m4090244982 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.UInt16)
extern "C"  uint32_t Convert_ToUInt32_m3391339025 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Object,System.IFormatProvider)
extern "C"  uint32_t Convert_ToUInt32_m817681977 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Boolean)
extern "C"  uint64_t Convert_ToUInt64_m1479404080 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Byte)
extern "C"  uint64_t Convert_ToUInt64_m1568624612 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Char)
extern "C"  uint64_t Convert_ToUInt64_m1319798722 (Il2CppObject * __this /* static, unused */, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Decimal)
extern "C"  uint64_t Convert_ToUInt64_m3944965503 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Double)
extern "C"  uint64_t Convert_ToUInt64_m3559662221 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Single)
extern "C"  uint64_t Convert_ToUInt64_m2215781574 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int32)
extern "C"  uint64_t Convert_ToUInt64_m1691869628 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int64)
extern "C"  uint64_t Convert_ToUInt64_m2498438645 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.SByte)
extern "C"  uint64_t Convert_ToUInt64_m2643825617 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int16)
extern "C"  uint64_t Convert_ToUInt64_m3661238030 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.String,System.IFormatProvider)
extern "C"  uint64_t Convert_ToUInt64_m3596570605 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
extern "C"  uint64_t Convert_ToUInt64_m1109896503 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt16)
extern "C"  uint64_t Convert_ToUInt64_m827571497 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Object)
extern "C"  uint64_t Convert_ToUInt64_m1896191125 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Object,System.IFormatProvider)
extern "C"  uint64_t Convert_ToUInt64_m345450801 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Convert::ChangeType(System.Object,System.Type)
extern "C"  Il2CppObject * Convert_ChangeType_m1630780412 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Type_t * ___conversionType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Convert::EndianSwap(System.Byte[]&)
extern "C"  void Convert_EndianSwap_m975554045 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013** ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ConvertToBase2(System.Byte[])
extern "C"  String_t* Convert_ConvertToBase2_m3975215197 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ConvertToBase8(System.Byte[])
extern "C"  String_t* Convert_ConvertToBase8_m2900884003 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ConvertToBase16(System.Byte[])
extern "C"  String_t* Convert_ConvertToBase16_m201400146 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Convert::ToType(System.Object,System.Type,System.IFormatProvider,System.Boolean)
extern "C"  Il2CppObject * Convert_ToType_m1408903144 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Type_t * ___conversionType1, Il2CppObject * ___provider2, bool ___try_target_to_type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
