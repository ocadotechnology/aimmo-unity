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

// System.Text.RegularExpressions.Syntax.Group
struct Group_t2558408851;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t368137076;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1521150936;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1392970135;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Syntax_Expres368137076.h"

// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
extern "C"  void Group__ctor_m2959569275 (Group_t2558408851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C"  void Group_AppendExpression_m3263885171 (Group_t2558408851 * __this, Expression_t368137076 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void Group_Compile_m3714610238 (Group_t2558408851 * __this, Il2CppObject * ___cmp0, bool ___reverse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
extern "C"  void Group_GetWidth_m3083120091 (Group_t2558408851 * __this, int32_t* ___min0, int32_t* ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
extern "C"  AnchorInfo_t1392970135 * Group_GetAnchorInfo_m2066989791 (Group_t2558408851 * __this, bool ___reverse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
