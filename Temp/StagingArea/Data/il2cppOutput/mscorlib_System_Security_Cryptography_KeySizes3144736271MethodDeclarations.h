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

// System.Security.Cryptography.KeySizes
struct KeySizes_t3144736271;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1153004758;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.KeySizes::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void KeySizes__ctor_m3526899007 (KeySizes_t3144736271 * __this, int32_t ___minSize0, int32_t ___maxSize1, int32_t ___skipSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_MaxSize()
extern "C"  int32_t KeySizes_get_MaxSize_m721977912 (KeySizes_t3144736271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_MinSize()
extern "C"  int32_t KeySizes_get_MinSize_m1505815966 (KeySizes_t3144736271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_SkipSize()
extern "C"  int32_t KeySizes_get_SkipSize_m4159777757 (KeySizes_t3144736271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.KeySizes::IsLegal(System.Int32)
extern "C"  bool KeySizes_IsLegal_m4261572796 (KeySizes_t3144736271 * __this, int32_t ___keySize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.KeySizes::IsLegalKeySize(System.Security.Cryptography.KeySizes[],System.Int32)
extern "C"  bool KeySizes_IsLegalKeySize_m3079736784 (Il2CppObject * __this /* static, unused */, KeySizesU5BU5D_t1153004758* ___legalKeys0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
