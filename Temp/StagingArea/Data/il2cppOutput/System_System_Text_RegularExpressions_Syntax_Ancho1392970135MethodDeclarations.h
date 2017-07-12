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

// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1392970135;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t368137076;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Syntax_Expres368137076.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Text_RegularExpressions_Position3781184359.h"
#include "System_System_Text_RegularExpressions_Interval2354235237.h"

// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32)
extern "C"  void AnchorInfo__ctor_m1814410658 (AnchorInfo_t1392970135 * __this, Expression_t368137076 * ___expr0, int32_t ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.String,System.Boolean)
extern "C"  void AnchorInfo__ctor_m2079325076 (AnchorInfo_t1392970135 * __this, Expression_t368137076 * ___expr0, int32_t ___offset1, int32_t ___width2, String_t* ___str3, bool ___ignore4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.Text.RegularExpressions.Position)
extern "C"  void AnchorInfo__ctor_m617409099 (AnchorInfo_t1392970135 * __this, Expression_t368137076 * ___expr0, int32_t ___offset1, int32_t ___width2, uint16_t ___pos3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Offset()
extern "C"  int32_t AnchorInfo_get_Offset_m142119297 (AnchorInfo_t1392970135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Width()
extern "C"  int32_t AnchorInfo_get_Width_m3857845144 (AnchorInfo_t1392970135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Length()
extern "C"  int32_t AnchorInfo_get_Length_m1721106162 (AnchorInfo_t1392970135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsUnknownWidth()
extern "C"  bool AnchorInfo_get_IsUnknownWidth_m3747592836 (AnchorInfo_t1392970135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsComplete()
extern "C"  bool AnchorInfo_get_IsComplete_m1247624133 (AnchorInfo_t1392970135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::get_Substring()
extern "C"  String_t* AnchorInfo_get_Substring_m3052067152 (AnchorInfo_t1392970135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IgnoreCase()
extern "C"  bool AnchorInfo_get_IgnoreCase_m2406760852 (AnchorInfo_t1392970135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::get_Position()
extern "C"  uint16_t AnchorInfo_get_Position_m535022324 (AnchorInfo_t1392970135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsSubstring()
extern "C"  bool AnchorInfo_get_IsSubstring_m3166202357 (AnchorInfo_t1392970135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsPosition()
extern "C"  bool AnchorInfo_get_IsPosition_m3791659233 (AnchorInfo_t1392970135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.AnchorInfo::GetInterval(System.Int32)
extern "C"  Interval_t2354235237  AnchorInfo_GetInterval_m842385470 (AnchorInfo_t1392970135 * __this, int32_t ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
