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

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t3255443744;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t368137076;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1521150936;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Syntax_Expres368137076.h"

// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::.ctor()
extern "C"  void ExpressionAssertion__ctor_m2408911632 (ExpressionAssertion_t3255443744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Reverse(System.Boolean)
extern "C"  void ExpressionAssertion_set_Reverse_m624216012 (ExpressionAssertion_t3255443744 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Negate(System.Boolean)
extern "C"  void ExpressionAssertion_set_Negate_m1818062688 (ExpressionAssertion_t3255443744 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionAssertion::get_TestExpression()
extern "C"  Expression_t368137076 * ExpressionAssertion_get_TestExpression_m1534563934 (ExpressionAssertion_t3255443744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_TestExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C"  void ExpressionAssertion_set_TestExpression_m3541311597 (ExpressionAssertion_t3255443744 * __this, Expression_t368137076 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void ExpressionAssertion_Compile_m3041130417 (ExpressionAssertion_t3255443744 * __this, Il2CppObject * ___cmp0, bool ___reverse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex()
extern "C"  bool ExpressionAssertion_IsComplex_m783019628 (ExpressionAssertion_t3255443744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
