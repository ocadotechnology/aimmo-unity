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

// System.Text.RegularExpressions.Syntax.Repetition
struct Repetition_t3426306051;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t368137076;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1521150936;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1392970135;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Syntax_Expres368137076.h"

// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
extern "C"  void Repetition__ctor_m3249835358 (Repetition_t3426306051 * __this, int32_t ___min0, int32_t ___max1, bool ___lazy2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
extern "C"  Expression_t368137076 * Repetition_get_Expression_m3751668675 (Repetition_t3426306051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
extern "C"  void Repetition_set_Expression_m1152577918 (Repetition_t3426306051 * __this, Expression_t368137076 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
extern "C"  int32_t Repetition_get_Minimum_m1523545878 (Repetition_t3426306051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void Repetition_Compile_m3665012016 (Repetition_t3426306051 * __this, Il2CppObject * ___cmp0, bool ___reverse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
extern "C"  void Repetition_GetWidth_m3673029367 (Repetition_t3426306051 * __this, int32_t* ___min0, int32_t* ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
extern "C"  AnchorInfo_t1392970135 * Repetition_GetAnchorInfo_m657715019 (Repetition_t3426306051 * __this, bool ___reverse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
