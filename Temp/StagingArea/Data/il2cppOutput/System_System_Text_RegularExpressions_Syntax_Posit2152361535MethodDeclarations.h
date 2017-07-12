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

// System.Text.RegularExpressions.Syntax.PositionAssertion
struct PositionAssertion_t2152361535;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1521150936;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1392970135;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Position3781184359.h"

// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::.ctor(System.Text.RegularExpressions.Position)
extern "C"  void PositionAssertion__ctor_m3703837499 (PositionAssertion_t2152361535 * __this, uint16_t ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void PositionAssertion_Compile_m519727600 (PositionAssertion_t2152361535 * __this, Il2CppObject * ___cmp0, bool ___reverse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::GetWidth(System.Int32&,System.Int32&)
extern "C"  void PositionAssertion_GetWidth_m2294218483 (PositionAssertion_t2152361535 * __this, int32_t* ___min0, int32_t* ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.PositionAssertion::IsComplex()
extern "C"  bool PositionAssertion_IsComplex_m240804153 (PositionAssertion_t2152361535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.PositionAssertion::GetAnchorInfo(System.Boolean)
extern "C"  AnchorInfo_t1392970135 * PositionAssertion_GetAnchorInfo_m66049431 (PositionAssertion_t2152361535 * __this, bool ___revers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
