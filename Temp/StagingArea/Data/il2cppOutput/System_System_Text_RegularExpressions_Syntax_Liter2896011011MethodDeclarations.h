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

// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t2896011011;
// System.String
struct String_t;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1521150936;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1392970135;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Text.RegularExpressions.Syntax.Literal::.ctor(System.String,System.Boolean)
extern "C"  void Literal__ctor_m3295919014 (Literal_t2896011011 * __this, String_t* ___str0, bool ___ignore1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::CompileLiteral(System.String,System.Text.RegularExpressions.ICompiler,System.Boolean,System.Boolean)
extern "C"  void Literal_CompileLiteral_m276843152 (Il2CppObject * __this /* static, unused */, String_t* ___str0, Il2CppObject * ___cmp1, bool ___ignore2, bool ___reverse3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void Literal_Compile_m3864266818 (Literal_t2896011011 * __this, Il2CppObject * ___cmp0, bool ___reverse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::GetWidth(System.Int32&,System.Int32&)
extern "C"  void Literal_GetWidth_m1285678191 (Literal_t2896011011 * __this, int32_t* ___min0, int32_t* ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Literal::GetAnchorInfo(System.Boolean)
extern "C"  AnchorInfo_t1392970135 * Literal_GetAnchorInfo_m1274318811 (Literal_t2896011011 * __this, bool ___reverse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::IsComplex()
extern "C"  bool Literal_IsComplex_m1975858693 (Literal_t2896011011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
