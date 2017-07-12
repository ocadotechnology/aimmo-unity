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

// SimpleJSON.JSONString
struct JSONString_t3432753187;
// System.String
struct String_t;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNodeT3936313412.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONTextM1598503440.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void SimpleJSON.JSONString::.ctor(System.String)
extern "C"  void JSONString__ctor_m2588766256 (JSONString_t3432753187 * __this, String_t* ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNodeType SimpleJSON.JSONString::get_Tag()
extern "C"  int32_t JSONString_get_Tag_m2430465880 (JSONString_t3432753187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONString::get_IsString()
extern "C"  bool JSONString_get_IsString_m3713402502 (JSONString_t3432753187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONString::get_Value()
extern "C"  String_t* JSONString_get_Value_m2320684191 (JSONString_t3432753187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONString::set_Value(System.String)
extern "C"  void JSONString_set_Value_m1313047650 (JSONString_t3432753187 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONString::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONString_Serialize_m2391927313 (JSONString_t3432753187 * __this, BinaryWriter_t3179371318 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONString::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
extern "C"  void JSONString_WriteToStringBuilder_m262076194 (JSONString_t3432753187 * __this, StringBuilder_t1221177846 * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONString::Equals(System.Object)
extern "C"  bool JSONString_Equals_m913064069 (JSONString_t3432753187 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONString::GetHashCode()
extern "C"  int32_t JSONString_GetHashCode_m1142524295 (JSONString_t3432753187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
