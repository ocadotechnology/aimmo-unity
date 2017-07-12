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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2315135830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C"  void DefaultComparer__ctor_m3190357794_gshared (DefaultComparer_t2315135830 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m3190357794(__this, method) ((  void (*) (DefaultComparer_t2315135830 *, const MethodInfo*))DefaultComparer__ctor_m3190357794_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m797464561_gshared (DefaultComparer_t2315135830 * __this, DateTime_t693205669  ___obj0, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m797464561(__this, ___obj0, method) ((  int32_t (*) (DefaultComparer_t2315135830 *, DateTime_t693205669 , const MethodInfo*))DefaultComparer_GetHashCode_m797464561_gshared)(__this, ___obj0, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m1600500777_gshared (DefaultComparer_t2315135830 * __this, DateTime_t693205669  ___x0, DateTime_t693205669  ___y1, const MethodInfo* method);
#define DefaultComparer_Equals_m1600500777(__this, ___x0, ___y1, method) ((  bool (*) (DefaultComparer_t2315135830 *, DateTime_t693205669 , DateTime_t693205669 , const MethodInfo*))DefaultComparer_Equals_m1600500777_gshared)(__this, ___x0, ___y1, method)
