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

// System.Text.RegularExpressions.Interpreter
struct Interpreter_t3731288230;
// System.UInt16[]
struct UInt16U5BU5D_t2527266722;
// System.Text.RegularExpressions.Match
struct Match_t3164245899;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// System.String
struct String_t;
// System.Text.RegularExpressions.Group
struct Group_t3761430853;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Regex1803876613.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Text_RegularExpressions_Interpreter_2395763083.h"
#include "System_System_Text_RegularExpressions_Position3781184359.h"
#include "System_System_Text_RegularExpressions_Group3761430853.h"

// System.Void System.Text.RegularExpressions.Interpreter::.ctor(System.UInt16[])
extern "C"  void Interpreter__ctor_m1139507339 (Interpreter_t3731288230 * __this, UInt16U5BU5D_t2527266722* ___program0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::ReadProgramCount(System.Int32)
extern "C"  int32_t Interpreter_ReadProgramCount_m1520031325 (Interpreter_t3731288230 * __this, int32_t ___ptr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C"  Match_t3164245899 * Interpreter_Scan_m4259907439 (Interpreter_t3731288230 * __this, Regex_t1803876613 * ___regex0, String_t* ___text1, int32_t ___start2, int32_t ___end3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Reset()
extern "C"  void Interpreter_Reset_m316758268 (Interpreter_t3731288230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::Eval(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32)
extern "C"  bool Interpreter_Eval_m1448443064 (Interpreter_t3731288230 * __this, int32_t ___mode0, int32_t* ___ref_ptr1, int32_t ___pc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::EvalChar(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32&,System.Boolean)
extern "C"  bool Interpreter_EvalChar_m1135512271 (Interpreter_t3731288230 * __this, int32_t ___mode0, int32_t* ___ptr1, int32_t* ___pc2, bool ___multi3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::TryMatch(System.Int32&,System.Int32)
extern "C"  bool Interpreter_TryMatch_m3515025641 (Interpreter_t3731288230 * __this, int32_t* ___ref_ptr0, int32_t ___pc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::IsPosition(System.Text.RegularExpressions.Position,System.Int32)
extern "C"  bool Interpreter_IsPosition_m1570996169 (Interpreter_t3731288230 * __this, uint16_t ___pos0, int32_t ___ptr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::IsWordChar(System.Char)
extern "C"  bool Interpreter_IsWordChar_m296836120 (Interpreter_t3731288230 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Interpreter::GetString(System.Int32)
extern "C"  String_t* Interpreter_GetString_m2427752964 (Interpreter_t3731288230 * __this, int32_t ___pc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Open(System.Int32,System.Int32)
extern "C"  void Interpreter_Open_m1604955807 (Interpreter_t3731288230 * __this, int32_t ___gid0, int32_t ___ptr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Close(System.Int32,System.Int32)
extern "C"  void Interpreter_Close_m1500459069 (Interpreter_t3731288230 * __this, int32_t ___gid0, int32_t ___ptr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C"  bool Interpreter_Balance_m3069360007 (Interpreter_t3731288230 * __this, int32_t ___gid0, int32_t ___balance_gid1, bool ___capture2, int32_t ___ptr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::Checkpoint()
extern "C"  int32_t Interpreter_Checkpoint_m1028400787 (Interpreter_t3731288230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Backtrack(System.Int32)
extern "C"  void Interpreter_Backtrack_m965888372 (Interpreter_t3731288230 * __this, int32_t ___cp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::ResetGroups()
extern "C"  void Interpreter_ResetGroups_m2279870744 (Interpreter_t3731288230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::GetLastDefined(System.Int32)
extern "C"  int32_t Interpreter_GetLastDefined_m2450713313 (Interpreter_t3731288230 * __this, int32_t ___gid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::CreateMark(System.Int32)
extern "C"  int32_t Interpreter_CreateMark_m603764609 (Interpreter_t3731288230 * __this, int32_t ___previous0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
extern "C"  void Interpreter_GetGroupInfo_m312421921 (Interpreter_t3731288230 * __this, int32_t ___gid0, int32_t* ___first_mark_index1, int32_t* ___n_caps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
extern "C"  void Interpreter_PopulateGroup_m4098755954 (Interpreter_t3731288230 * __this, Group_t3761430853 * ___g0, int32_t ___first_mark_index1, int32_t ___n_caps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
extern "C"  Match_t3164245899 * Interpreter_GenerateMatch_m4061336978 (Interpreter_t3731288230 * __this, Regex_t1803876613 * ___regex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
