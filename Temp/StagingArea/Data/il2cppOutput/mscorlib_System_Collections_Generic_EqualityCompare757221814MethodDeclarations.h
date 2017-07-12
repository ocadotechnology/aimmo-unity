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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t757221814;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C"  void DefaultComparer__ctor_m2518376578_gshared (DefaultComparer_t757221814 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m2518376578(__this, method) ((  void (*) (DefaultComparer_t757221814 *, const MethodInfo*))DefaultComparer__ctor_m2518376578_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m926363525_gshared (DefaultComparer_t757221814 * __this, TimeSpan_t3430258949  ___obj0, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m926363525(__this, ___obj0, method) ((  int32_t (*) (DefaultComparer_t757221814 *, TimeSpan_t3430258949 , const MethodInfo*))DefaultComparer_GetHashCode_m926363525_gshared)(__this, ___obj0, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m2001504109_gshared (DefaultComparer_t757221814 * __this, TimeSpan_t3430258949  ___x0, TimeSpan_t3430258949  ___y1, const MethodInfo* method);
#define DefaultComparer_Equals_m2001504109(__this, ___x0, ___y1, method) ((  bool (*) (DefaultComparer_t757221814 *, TimeSpan_t3430258949 , TimeSpan_t3430258949 , const MethodInfo*))DefaultComparer_Equals_m2001504109_gshared)(__this, ___x0, ___y1, method)
