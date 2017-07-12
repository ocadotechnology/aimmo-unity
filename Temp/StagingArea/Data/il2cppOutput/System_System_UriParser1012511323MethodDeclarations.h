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

// System.UriParser
struct UriParser_t1012511323;
// System.Uri
struct Uri_t19570940;
// System.UriFormatException
struct UriFormatException_t3682083048;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t909839986;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "System_System_UriFormatException3682083048.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "System_System_UriParser1012511323.h"

// System.Void System.UriParser::.ctor()
extern "C"  void UriParser__ctor_m1282308392 (UriParser_t1012511323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::.cctor()
extern "C"  void UriParser__cctor_m1839415991 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern "C"  void UriParser_InitializeAndValidate_m251943319 (UriParser_t1012511323 * __this, Uri_t19570940 * ___uri0, UriFormatException_t3682083048 ** ___parsingError1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern "C"  void UriParser_OnRegister_m4010407891 (UriParser_t1012511323 * __this, String_t* ___schemeName0, int32_t ___defaultPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C"  void UriParser_set_SchemeName_m3624672465 (UriParser_t1012511323 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriParser::get_DefaultPort()
extern "C"  int32_t UriParser_get_DefaultPort_m1377931533 (UriParser_t1012511323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C"  void UriParser_set_DefaultPort_m1159216960 (UriParser_t1012511323 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::CreateDefaults()
extern "C"  void UriParser_CreateDefaults_m295980432 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern "C"  void UriParser_InternalRegister_m416643159 (Il2CppObject * __this /* static, unused */, Hashtable_t909839986 * ___table0, UriParser_t1012511323 * ___uriParser1, String_t* ___schemeName2, int32_t ___defaultPort3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.UriParser::GetParser(System.String)
extern "C"  UriParser_t1012511323 * UriParser_GetParser_m1453767844 (Il2CppObject * __this /* static, unused */, String_t* ___schemeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
