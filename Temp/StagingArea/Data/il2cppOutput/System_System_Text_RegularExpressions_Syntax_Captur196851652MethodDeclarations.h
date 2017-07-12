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

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t196851652;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t2896011011;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t3690174926;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1521150936;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t3255443744;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Syntax_Liter2896011011.h"
#include "System_System_Text_RegularExpressions_Syntax_Captu3690174926.h"

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C"  void CaptureAssertion__ctor_m446102379 (CaptureAssertion_t196851652 * __this, Literal_t2896011011 * ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C"  void CaptureAssertion_set_CapturingGroup_m1057868585 (CaptureAssertion_t196851652 * __this, CapturingGroup_t3690174926 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void CaptureAssertion_Compile_m2513753015 (CaptureAssertion_t196851652 * __this, Il2CppObject * ___cmp0, bool ___reverse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C"  bool CaptureAssertion_IsComplex_m1433259302 (CaptureAssertion_t196851652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C"  ExpressionAssertion_t3255443744 * CaptureAssertion_get_Alternate_m2729005740 (CaptureAssertion_t196851652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
