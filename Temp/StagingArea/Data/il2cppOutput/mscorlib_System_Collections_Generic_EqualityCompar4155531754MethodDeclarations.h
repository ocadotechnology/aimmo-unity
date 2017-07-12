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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t4155531754;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid2533601593.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C"  void DefaultComparer__ctor_m71907202_gshared (DefaultComparer_t4155531754 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m71907202(__this, method) ((  void (*) (DefaultComparer_t4155531754 *, const MethodInfo*))DefaultComparer__ctor_m71907202_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m4073394827_gshared (DefaultComparer_t4155531754 * __this, Guid_t2533601593  ___obj0, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m4073394827(__this, ___obj0, method) ((  int32_t (*) (DefaultComparer_t4155531754 *, Guid_t2533601593 , const MethodInfo*))DefaultComparer_GetHashCode_m4073394827_gshared)(__this, ___obj0, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m3573892667_gshared (DefaultComparer_t4155531754 * __this, Guid_t2533601593  ___x0, Guid_t2533601593  ___y1, const MethodInfo* method);
#define DefaultComparer_Equals_m3573892667(__this, ___x0, ___y1, method) ((  bool (*) (DefaultComparer_t4155531754 *, Guid_t2533601593 , Guid_t2533601593 , const MethodInfo*))DefaultComparer_Equals_m3573892667_gshared)(__this, ___x0, ___y1, method)
