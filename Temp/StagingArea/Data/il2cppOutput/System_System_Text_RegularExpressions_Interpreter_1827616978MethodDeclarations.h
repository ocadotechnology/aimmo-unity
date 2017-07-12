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

// System.Text.RegularExpressions.Interpreter/RepeatContext
struct RepeatContext_t1827616978;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Interpreter_1827616978.h"

// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::.ctor(System.Text.RegularExpressions.Interpreter/RepeatContext,System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C"  void RepeatContext__ctor_m1528676798 (RepeatContext_t1827616978 * __this, RepeatContext_t1827616978 * ___previous0, int32_t ___min1, int32_t ___max2, bool ___lazy3, int32_t ___expr_pc4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Count()
extern "C"  int32_t RepeatContext_get_Count_m1494501556 (RepeatContext_t1827616978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Count(System.Int32)
extern "C"  void RepeatContext_set_Count_m2351887223 (RepeatContext_t1827616978 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Start()
extern "C"  int32_t RepeatContext_get_Start_m1989972711 (RepeatContext_t1827616978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Start(System.Int32)
extern "C"  void RepeatContext_set_Start_m365632994 (RepeatContext_t1827616978 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMinimum()
extern "C"  bool RepeatContext_get_IsMinimum_m953426621 (RepeatContext_t1827616978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMaximum()
extern "C"  bool RepeatContext_get_IsMaximum_m168299287 (RepeatContext_t1827616978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsLazy()
extern "C"  bool RepeatContext_get_IsLazy_m1620488045 (RepeatContext_t1827616978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Expression()
extern "C"  int32_t RepeatContext_get_Expression_m1655768241 (RepeatContext_t1827616978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter/RepeatContext::get_Previous()
extern "C"  RepeatContext_t1827616978 * RepeatContext_get_Previous_m808449037 (RepeatContext_t1827616978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
