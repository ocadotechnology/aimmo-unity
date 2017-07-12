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

// System.Text.RegularExpressions.Syntax.CompositeExpression
struct CompositeExpression_t1921307915;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t238836340;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::.ctor()
extern "C"  void CompositeExpression__ctor_m840353431 (CompositeExpression_t1921307915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::get_Expressions()
extern "C"  ExpressionCollection_t238836340 * CompositeExpression_get_Expressions_m641372224 (CompositeExpression_t1921307915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::GetWidth(System.Int32&,System.Int32&,System.Int32)
extern "C"  void CompositeExpression_GetWidth_m2296437360 (CompositeExpression_t1921307915 * __this, int32_t* ___min0, int32_t* ___max1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CompositeExpression::IsComplex()
extern "C"  bool CompositeExpression_IsComplex_m1695349549 (CompositeExpression_t1921307915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
