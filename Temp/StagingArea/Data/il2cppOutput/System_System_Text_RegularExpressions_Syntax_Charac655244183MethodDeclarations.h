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

// System.Text.RegularExpressions.Syntax.CharacterClass
struct CharacterClass_t655244183;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1521150936;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Category1984577050.h"
#include "System_System_Text_RegularExpressions_Interval2354235237.h"

// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Boolean,System.Boolean)
extern "C"  void CharacterClass__ctor_m3360242115 (CharacterClass_t655244183 * __this, bool ___negate0, bool ___ignore1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Text.RegularExpressions.Category,System.Boolean)
extern "C"  void CharacterClass__ctor_m1318163925 (CharacterClass_t655244183 * __this, uint16_t ___cat0, bool ___negate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.cctor()
extern "C"  void CharacterClass__cctor_m516182374 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCategory(System.Text.RegularExpressions.Category,System.Boolean)
extern "C"  void CharacterClass_AddCategory_m3126609458 (CharacterClass_t655244183 * __this, uint16_t ___cat0, bool ___negate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCharacter(System.Char)
extern "C"  void CharacterClass_AddCharacter_m1104626442 (CharacterClass_t655244183 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddRange(System.Char,System.Char)
extern "C"  void CharacterClass_AddRange_m2531976937 (CharacterClass_t655244183 * __this, Il2CppChar ___lo0, Il2CppChar ___hi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void CharacterClass_Compile_m3558017422 (CharacterClass_t655244183 * __this, Il2CppObject * ___cmp0, bool ___reverse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::GetWidth(System.Int32&,System.Int32&)
extern "C"  void CharacterClass_GetWidth_m29975543 (CharacterClass_t655244183 * __this, int32_t* ___min0, int32_t* ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::IsComplex()
extern "C"  bool CharacterClass_IsComplex_m3669819601 (CharacterClass_t655244183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Text.RegularExpressions.Syntax.CharacterClass::GetIntervalCost(System.Text.RegularExpressions.Interval)
extern "C"  double CharacterClass_GetIntervalCost_m2706255216 (Il2CppObject * __this /* static, unused */, Interval_t2354235237  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
