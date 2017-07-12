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

// System.NumberFormatter/CustomInfo
struct CustomInfo_t128587492;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t104580544;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Globalization_NumberFormatInfo104580544.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void System.NumberFormatter/CustomInfo::.ctor()
extern "C"  void CustomInfo__ctor_m690687810 (CustomInfo_t128587492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter/CustomInfo::GetActiveSection(System.String,System.Boolean&,System.Boolean,System.Int32&,System.Int32&)
extern "C"  void CustomInfo_GetActiveSection_m1871510129 (Il2CppObject * __this /* static, unused */, String_t* ___format0, bool* ___positive1, bool ___zero2, int32_t* ___offset3, int32_t* ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter/CustomInfo System.NumberFormatter/CustomInfo::Parse(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  CustomInfo_t128587492 * CustomInfo_Parse_m3558073058 (Il2CppObject * __this /* static, unused */, String_t* ___format0, int32_t ___offset1, int32_t ___length2, NumberFormatInfo_t104580544 * ___nfi3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter/CustomInfo::Format(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Boolean,System.Text.StringBuilder,System.Text.StringBuilder,System.Text.StringBuilder)
extern "C"  String_t* CustomInfo_Format_m68516551 (CustomInfo_t128587492 * __this, String_t* ___format0, int32_t ___offset1, int32_t ___length2, NumberFormatInfo_t104580544 * ___nfi3, bool ___positive4, StringBuilder_t1221177846 * ___sb_int5, StringBuilder_t1221177846 * ___sb_dec6, StringBuilder_t1221177846 * ___sb_exp7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
