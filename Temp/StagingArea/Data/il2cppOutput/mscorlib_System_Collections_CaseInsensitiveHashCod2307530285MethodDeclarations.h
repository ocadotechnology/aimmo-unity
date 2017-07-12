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

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t2307530285;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Globalization.TextInfo
struct TextInfo_t3620182823;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Globalization_TextInfo3620182823.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor()
extern "C"  void CaseInsensitiveHashCodeProvider__ctor_m3775398833 (CaseInsensitiveHashCodeProvider_t2307530285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor(System.Globalization.CultureInfo)
extern "C"  void CaseInsensitiveHashCodeProvider__ctor_m2400899367 (CaseInsensitiveHashCodeProvider_t2307530285 * __this, CultureInfo_t3500843524 * ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.cctor()
extern "C"  void CaseInsensitiveHashCodeProvider__cctor_m2638678306 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.CultureInfo,System.Globalization.CultureInfo)
extern "C"  bool CaseInsensitiveHashCodeProvider_AreEqual_m2456617355 (Il2CppObject * __this /* static, unused */, CultureInfo_t3500843524 * ___a0, CultureInfo_t3500843524 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.TextInfo,System.Globalization.CultureInfo)
extern "C"  bool CaseInsensitiveHashCodeProvider_AreEqual_m3167652312 (Il2CppObject * __this /* static, unused */, TextInfo_t3620182823 * ___info0, CultureInfo_t3500843524 * ___culture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_DefaultInvariant()
extern "C"  CaseInsensitiveHashCodeProvider_t2307530285 * CaseInsensitiveHashCodeProvider_get_DefaultInvariant_m1293455465 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CaseInsensitiveHashCodeProvider::GetHashCode(System.Object)
extern "C"  int32_t CaseInsensitiveHashCodeProvider_GetHashCode_m3726312478 (CaseInsensitiveHashCodeProvider_t2307530285 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
