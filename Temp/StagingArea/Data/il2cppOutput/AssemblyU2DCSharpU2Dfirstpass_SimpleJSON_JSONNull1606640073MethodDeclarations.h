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

// SimpleJSON.JSONNull
struct JSONNull_t1606640073;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNodeT3936313412.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONTextM1598503440.h"

// System.Void SimpleJSON.JSONNull::.ctor()
extern "C"  void JSONNull__ctor_m612383234 (JSONNull_t1606640073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNodeType SimpleJSON.JSONNull::get_Tag()
extern "C"  int32_t JSONNull_get_Tag_m282999528 (JSONNull_t1606640073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNull::get_IsNull()
extern "C"  bool JSONNull_get_IsNull_m1552519686 (JSONNull_t1606640073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNull::get_Value()
extern "C"  String_t* JSONNull_get_Value_m456059577 (JSONNull_t1606640073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNull::set_Value(System.String)
extern "C"  void JSONNull_set_Value_m2725560766 (JSONNull_t1606640073 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNull::get_AsBool()
extern "C"  bool JSONNull_get_AsBool_m328456803 (JSONNull_t1606640073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNull::set_AsBool(System.Boolean)
extern "C"  void JSONNull_set_AsBool_m3066626052 (JSONNull_t1606640073 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNull::Equals(System.Object)
extern "C"  bool JSONNull_Equals_m249826135 (JSONNull_t1606640073 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNull::GetHashCode()
extern "C"  int32_t JSONNull_GetHashCode_m610933749 (JSONNull_t1606640073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNull::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONNull_Serialize_m2506669903 (JSONNull_t1606640073 * __this, BinaryWriter_t3179371318 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNull::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
extern "C"  void JSONNull_WriteToStringBuilder_m4076439242 (JSONNull_t1606640073 * __this, StringBuilder_t1221177846 * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
