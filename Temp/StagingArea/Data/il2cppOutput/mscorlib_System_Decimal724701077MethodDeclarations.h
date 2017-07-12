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
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t2849799027;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t104580544;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Globalization_NumberStyles3408984435.h"
#include "mscorlib_System_Globalization_NumberFormatInfo104580544.h"

// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
extern "C"  void Decimal__ctor_m1770144563 (Decimal_t724701077 * __this, int32_t ___lo0, int32_t ___mid1, int32_t ___hi2, bool ___isNegative3, uint8_t ___scale4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int32)
extern "C"  void Decimal__ctor_m1010012873 (Decimal_t724701077 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt32)
extern "C"  void Decimal__ctor_m1376049078 (Decimal_t724701077 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int64)
extern "C"  void Decimal__ctor_m1991243832 (Decimal_t724701077 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt64)
extern "C"  void Decimal__ctor_m569480123 (Decimal_t724701077 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Single)
extern "C"  void Decimal__ctor_m2078022985 (Decimal_t724701077 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Double)
extern "C"  void Decimal__ctor_m3876694886 (Decimal_t724701077 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.cctor()
extern "C"  void Decimal__cctor_m2600730415 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Decimal::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  Il2CppObject * Decimal_System_IConvertible_ToType_m3828527724 (Decimal_t724701077 * __this, Type_t * ___targetType0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool Decimal_System_IConvertible_ToBoolean_m746732936 (Decimal_t724701077 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t Decimal_System_IConvertible_ToByte_m3432160840 (Decimal_t724701077 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Decimal::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar Decimal_System_IConvertible_ToChar_m2425091200 (Decimal_t724701077 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Decimal::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t693205669  Decimal_System_IConvertible_ToDateTime_m4247760250 (Decimal_t724701077 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t724701077  Decimal_System_IConvertible_ToDecimal_m1541432424 (Decimal_t724701077 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double Decimal_System_IConvertible_ToDouble_m266191986 (Decimal_t724701077 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t Decimal_System_IConvertible_ToInt16_m3159038792 (Decimal_t724701077 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t Decimal_System_IConvertible_ToInt32_m2951299528 (Decimal_t724701077 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t Decimal_System_IConvertible_ToInt64_m2504363272 (Decimal_t724701077 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t Decimal_System_IConvertible_ToSByte_m3745141000 (Decimal_t724701077 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float Decimal_System_IConvertible_ToSingle_m1736019752 (Decimal_t724701077 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t Decimal_System_IConvertible_ToUInt16_m1621568250 (Decimal_t724701077 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t Decimal_System_IConvertible_ToUInt32_m1050425626 (Decimal_t724701077 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t Decimal_System_IConvertible_ToUInt64_m2457277336 (Decimal_t724701077 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Decimal::GetBits(System.Decimal)
extern "C"  Int32U5BU5D_t3030399641* Decimal_GetBits_m3520401316 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Add(System.Decimal,System.Decimal)
extern "C"  Decimal_t724701077  Decimal_Add_m1535064574 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___d10, Decimal_t724701077  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Subtract(System.Decimal,System.Decimal)
extern "C"  Decimal_t724701077  Decimal_Subtract_m505281095 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___d10, Decimal_t724701077  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::GetHashCode()
extern "C"  int32_t Decimal_GetHashCode_m703641627 (Decimal_t724701077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::u64(System.Decimal)
extern "C"  uint64_t Decimal_u64_m3991988111 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::s64(System.Decimal)
extern "C"  int64_t Decimal_s64_m2965457432 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal,System.Decimal)
extern "C"  bool Decimal_Equals_m3067479043 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___d10, Decimal_t724701077  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Object)
extern "C"  bool Decimal_Equals_m1798565377 (Decimal_t724701077 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::IsZero()
extern "C"  bool Decimal_IsZero_m3557909184 (Decimal_t724701077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Floor(System.Decimal)
extern "C"  Decimal_t724701077  Decimal_Floor_m1662853963 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Multiply(System.Decimal,System.Decimal)
extern "C"  Decimal_t724701077  Decimal_Multiply_m1884379383 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___d10, Decimal_t724701077  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Divide(System.Decimal,System.Decimal)
extern "C"  Decimal_t724701077  Decimal_Divide_m600158300 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___d10, Decimal_t724701077  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::Compare(System.Decimal,System.Decimal)
extern "C"  int32_t Decimal_Compare_m1330176085 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___d10, Decimal_t724701077  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Object)
extern "C"  int32_t Decimal_CompareTo_m2454501434 (Decimal_t724701077 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Decimal)
extern "C"  int32_t Decimal_CompareTo_m573986782 (Decimal_t724701077 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal)
extern "C"  bool Decimal_Equals_m1115043331 (Decimal_t724701077 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.IFormatProvider)
extern "C"  Decimal_t724701077  Decimal_Parse_m2662862650 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowAtPos(System.Int32)
extern "C"  void Decimal_ThrowAtPos_m3318712794 (Il2CppObject * __this /* static, unused */, int32_t ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowInvalidExp()
extern "C"  void Decimal_ThrowInvalidExp_m3430267638 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::stripStyles(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.Int32&,System.Boolean&,System.Boolean&,System.Int32&,System.Boolean)
extern "C"  String_t* Decimal_stripStyles_m294582157 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, NumberFormatInfo_t104580544 * ___nfi2, int32_t* ___decPos3, bool* ___isNegative4, bool* ___expFlag5, int32_t* ___exp6, bool ___throwex7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  Decimal_t724701077  Decimal_Parse_m2923785927 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, Il2CppObject * ___provider2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::PerformParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&,System.Boolean)
extern "C"  bool Decimal_PerformParse_m1766978056 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, Il2CppObject * ___provider2, Decimal_t724701077 * ___res3, bool ___throwex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Decimal_ToString_m541380585 (Decimal_t724701077 * __this, String_t* ___format0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString()
extern "C"  String_t* Decimal_ToString_m759431975 (Decimal_t724701077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.IFormatProvider)
extern "C"  String_t* Decimal_ToString_m752193835 (Decimal_t724701077 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2UInt64(System.Decimal&,System.UInt64&)
extern "C"  int32_t Decimal_decimal2UInt64_m2090419396 (Il2CppObject * __this /* static, unused */, Decimal_t724701077 * ___val0, uint64_t* ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2Int64(System.Decimal&,System.Int64&)
extern "C"  int32_t Decimal_decimal2Int64_m792823028 (Il2CppObject * __this /* static, unused */, Decimal_t724701077 * ___val0, int64_t* ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalIncr(System.Decimal&,System.Decimal&)
extern "C"  int32_t Decimal_decimalIncr_m2819722623 (Il2CppObject * __this /* static, unused */, Decimal_t724701077 * ___d10, Decimal_t724701077 * ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::string2decimal(System.Decimal&,System.String,System.UInt32,System.Int32)
extern "C"  int32_t Decimal_string2decimal_m2359307539 (Il2CppObject * __this /* static, unused */, Decimal_t724701077 * ___val0, String_t* ___sDigits1, uint32_t ___decPos2, int32_t ___sign3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalSetExponent(System.Decimal&,System.Int32)
extern "C"  int32_t Decimal_decimalSetExponent_m138220099 (Il2CppObject * __this /* static, unused */, Decimal_t724701077 * ___val0, int32_t ___exp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::decimal2double(System.Decimal&)
extern "C"  double Decimal_decimal2double_m3083866663 (Il2CppObject * __this /* static, unused */, Decimal_t724701077 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::decimalFloorAndTrunc(System.Decimal&,System.Int32)
extern "C"  void Decimal_decimalFloorAndTrunc_m3655683429 (Il2CppObject * __this /* static, unused */, Decimal_t724701077 * ___val0, int32_t ___floorFlag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalMult(System.Decimal&,System.Decimal&)
extern "C"  int32_t Decimal_decimalMult_m3318413437 (Il2CppObject * __this /* static, unused */, Decimal_t724701077 * ___pd10, Decimal_t724701077 * ___pd21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalDiv(System.Decimal&,System.Decimal&,System.Decimal&)
extern "C"  int32_t Decimal_decimalDiv_m900036616 (Il2CppObject * __this /* static, unused */, Decimal_t724701077 * ___pc0, Decimal_t724701077 * ___pa1, Decimal_t724701077 * ___pb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalCompare(System.Decimal&,System.Decimal&)
extern "C"  int32_t Decimal_decimalCompare_m26009298 (Il2CppObject * __this /* static, unused */, Decimal_t724701077 * ___d10, Decimal_t724701077 * ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Increment(System.Decimal)
extern "C"  Decimal_t724701077  Decimal_op_Increment_m2012286538 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Subtraction(System.Decimal,System.Decimal)
extern "C"  Decimal_t724701077  Decimal_op_Subtraction_m4281620403 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___d10, Decimal_t724701077  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
extern "C"  Decimal_t724701077  Decimal_op_Multiply_m363076371 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___d10, Decimal_t724701077  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
extern "C"  Decimal_t724701077  Decimal_op_Division_m1099836590 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___d10, Decimal_t724701077  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::op_Explicit(System.Decimal)
extern "C"  uint8_t Decimal_op_Explicit_m1053293908 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::op_Explicit(System.Decimal)
extern "C"  int8_t Decimal_op_Explicit_m2135374155 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::op_Explicit(System.Decimal)
extern "C"  int16_t Decimal_op_Explicit_m3315432402 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::op_Explicit(System.Decimal)
extern "C"  uint16_t Decimal_op_Explicit_m1986696267 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::op_Explicit(System.Decimal)
extern "C"  int32_t Decimal_op_Explicit_m2494894232 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::op_Explicit(System.Decimal)
extern "C"  uint32_t Decimal_op_Explicit_m714968249 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
extern "C"  int64_t Decimal_op_Explicit_m682912811 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::op_Explicit(System.Decimal)
extern "C"  uint64_t Decimal_op_Explicit_m383920456 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Byte)
extern "C"  Decimal_t724701077  Decimal_op_Implicit_m2971610317 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.SByte)
extern "C"  Decimal_t724701077  Decimal_op_Implicit_m623319612 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int16)
extern "C"  Decimal_t724701077  Decimal_op_Implicit_m987128055 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt16)
extern "C"  Decimal_t724701077  Decimal_op_Implicit_m233687092 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int32)
extern "C"  Decimal_t724701077  Decimal_op_Implicit_m3312726949 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt32)
extern "C"  Decimal_t724701077  Decimal_op_Implicit_m4246329390 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int64)
extern "C"  Decimal_t724701077  Decimal_op_Implicit_m2149927308 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
extern "C"  Decimal_t724701077  Decimal_op_Implicit_m2135798419 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Single)
extern "C"  Decimal_t724701077  Decimal_op_Explicit_m185184148 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Double)
extern "C"  Decimal_t724701077  Decimal_op_Explicit_m1194935507 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::op_Explicit(System.Decimal)
extern "C"  float Decimal_op_Explicit_m729046406 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::op_Explicit(System.Decimal)
extern "C"  double Decimal_op_Explicit_m16014099 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
extern "C"  bool Decimal_op_Inequality_m519758535 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___d10, Decimal_t724701077  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
extern "C"  bool Decimal_op_Equality_m2278618154 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___d10, Decimal_t724701077  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_GreaterThan(System.Decimal,System.Decimal)
extern "C"  bool Decimal_op_GreaterThan_m1625379433 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___d10, Decimal_t724701077  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_LessThan(System.Decimal,System.Decimal)
extern "C"  bool Decimal_op_LessThan_m3672626320 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___d10, Decimal_t724701077  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
