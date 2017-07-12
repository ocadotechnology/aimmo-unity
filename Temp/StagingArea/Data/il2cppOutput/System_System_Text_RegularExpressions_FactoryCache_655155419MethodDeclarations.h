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

// System.Text.RegularExpressions.FactoryCache/Key
struct Key_t655155419;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Text_RegularExpressions_RegexOptions2418259727.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Text.RegularExpressions.FactoryCache/Key::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C"  void Key__ctor_m3845666353 (Key_t655155419 * __this, String_t* ___pattern0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.FactoryCache/Key::GetHashCode()
extern "C"  int32_t Key_GetHashCode_m345804220 (Key_t655155419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.FactoryCache/Key::Equals(System.Object)
extern "C"  bool Key_Equals_m2692934312 (Key_t655155419 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.FactoryCache/Key::ToString()
extern "C"  String_t* Key_ToString_m1129871742 (Key_t655155419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
