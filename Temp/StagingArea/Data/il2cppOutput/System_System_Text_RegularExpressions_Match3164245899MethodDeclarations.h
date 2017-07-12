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

// System.Text.RegularExpressions.Match
struct Match_t3164245899;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// System.Text.RegularExpressions.IMachine
struct IMachine_t3406191350;
// System.String
struct String_t;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t939014605;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Regex1803876613.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Text.RegularExpressions.Match::.ctor()
extern "C"  void Match__ctor_m478172746 (Match_t3164245899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Match__ctor_m920678511 (Match_t3164245899 * __this, Regex_t1803876613 * ___regex0, Il2CppObject * ___machine1, String_t* ___text2, int32_t ___text_length3, int32_t ___n_groups4, int32_t ___index5, int32_t ___length6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Match__ctor_m2452513644 (Match_t3164245899 * __this, Regex_t1803876613 * ___regex0, Il2CppObject * ___machine1, String_t* ___text2, int32_t ___text_length3, int32_t ___n_groups4, int32_t ___index5, int32_t ___length6, int32_t ___n_caps7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.cctor()
extern "C"  void Match__cctor_m1223592703 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::get_Empty()
extern "C"  Match_t3164245899 * Match_get_Empty_m3581361913 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups()
extern "C"  GroupCollection_t939014605 * Match_get_Groups_m4052338806 (Match_t3164245899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::NextMatch()
extern "C"  Match_t3164245899 * Match_NextMatch_m1088868049 (Match_t3164245899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::get_Regex()
extern "C"  Regex_t1803876613 * Match_get_Regex_m3526002767 (Match_t3164245899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
