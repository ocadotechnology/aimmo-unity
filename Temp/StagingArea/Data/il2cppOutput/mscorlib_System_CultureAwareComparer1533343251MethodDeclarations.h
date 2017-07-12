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

// System.CultureAwareComparer
struct CultureAwareComparer_t1533343251;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.CultureAwareComparer::.ctor(System.Globalization.CultureInfo,System.Boolean)
extern "C"  void CultureAwareComparer__ctor_m3785348999 (CultureAwareComparer_t1533343251 * __this, CultureInfo_t3500843524 * ___ci0, bool ___ignore_case1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::Compare(System.String,System.String)
extern "C"  int32_t CultureAwareComparer_Compare_m2587353351 (CultureAwareComparer_t1533343251 * __this, String_t* ___x0, String_t* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CultureAwareComparer::Equals(System.String,System.String)
extern "C"  bool CultureAwareComparer_Equals_m3891174449 (CultureAwareComparer_t1533343251 * __this, String_t* ___x0, String_t* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::GetHashCode(System.String)
extern "C"  int32_t CultureAwareComparer_GetHashCode_m3681260951 (CultureAwareComparer_t1533343251 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
