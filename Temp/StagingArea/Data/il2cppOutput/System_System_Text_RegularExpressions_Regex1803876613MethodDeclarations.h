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

// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t633643314;
// System.Text.RegularExpressions.Match
struct Match_t3164245899;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t3718216671;
// System.Text.RegularExpressions.IMachine
struct IMachine_t3406191350;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Text_RegularExpressions_RegexOptions2418259727.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Text.RegularExpressions.Regex::.ctor()
extern "C"  void Regex__ctor_m3250610064 (Regex_t1803876613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C"  void Regex__ctor_m2794328522 (Regex_t1803876613 * __this, String_t* ___pattern0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C"  void Regex__ctor_m2521903438 (Regex_t1803876613 * __this, String_t* ___pattern0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Regex__ctor_m392221833 (Regex_t1803876613 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.cctor()
extern "C"  void Regex__cctor_m3397544801 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m4035555909 (Regex_t1803876613 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::validate_options(System.Text.RegularExpressions.RegexOptions)
extern "C"  void Regex_validate_options_m3563464259 (Il2CppObject * __this /* static, unused */, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::Init()
extern "C"  void Regex_Init_m1873144192 (Regex_t1803876613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::InitNewRegex()
extern "C"  void Regex_InitNewRegex_m692548389 (Regex_t1803876613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::CreateMachineFactory(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C"  Il2CppObject * Regex_CreateMachineFactory_m3035817687 (Il2CppObject * __this /* static, unused */, String_t* ___pattern0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
extern "C"  int32_t Regex_get_Options_m2450064630 (Regex_t1803876613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
extern "C"  bool Regex_get_RightToLeft_m529734879 (Regex_t1803876613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GetGroupIndex(System.Int32)
extern "C"  int32_t Regex_GetGroupIndex_m1686599756 (Regex_t1803876613 * __this, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::default_startat(System.String)
extern "C"  int32_t Regex_default_startat_m2116037983 (Regex_t1803876613 * __this, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern "C"  bool Regex_IsMatch_m2159202025 (Regex_t1803876613 * __this, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.Int32)
extern "C"  bool Regex_IsMatch_m1286520424 (Regex_t1803876613 * __this, String_t* ___input0, int32_t ___startat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
extern "C"  Match_t3164245899 * Regex_Match_m4277133443 (Regex_t1803876613 * __this, String_t* ___input0, int32_t ___startat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
extern "C"  MatchCollection_t3718216671 * Regex_Matches_m3834294444 (Regex_t1803876613 * __this, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.Int32)
extern "C"  MatchCollection_t3718216671 * Regex_Matches_m1377235443 (Regex_t1803876613 * __this, String_t* ___input0, int32_t ___startat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::ToString()
extern "C"  String_t* Regex_ToString_m3687329849 (Regex_t1803876613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_Gap()
extern "C"  int32_t Regex_get_Gap_m2028850051 (Regex_t1803876613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Regex::CreateMachine()
extern "C"  Il2CppObject * Regex_CreateMachine_m1003508921 (Regex_t1803876613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::GetGroupNamesArray(System.Int32,System.Collections.IDictionary)
extern "C"  StringU5BU5D_t1642385972* Regex_GetGroupNamesArray_m2600772921 (Il2CppObject * __this /* static, unused */, int32_t ___groupCount0, Il2CppObject * ___mapping1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Text.RegularExpressions.Regex::get_GroupNumbers()
extern "C"  Int32U5BU5D_t3030399641* Regex_get_GroupNumbers_m2242327956 (Regex_t1803876613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
