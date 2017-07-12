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

// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t2051534610;
// System.String
struct String_t;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t633643314;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Text_RegularExpressions_RegexOptions2418259727.h"

// System.Void System.Text.RegularExpressions.FactoryCache::.ctor(System.Int32)
extern "C"  void FactoryCache__ctor_m254400436 (FactoryCache_t2051534610 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.FactoryCache::Add(System.String,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.IMachineFactory)
extern "C"  void FactoryCache_Add_m2602974721 (FactoryCache_t2051534610 * __this, String_t* ___pattern0, int32_t ___options1, Il2CppObject * ___factory2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.FactoryCache::Cleanup()
extern "C"  void FactoryCache_Cleanup_m4130035987 (FactoryCache_t2051534610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.FactoryCache::Lookup(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C"  Il2CppObject * FactoryCache_Lookup_m1681894361 (FactoryCache_t2051534610 * __this, String_t* ___pattern0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
