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

// SimpleJSON.JSONBool
struct JSONBool_t2735681664;
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

// System.Void SimpleJSON.JSONBool::.ctor(System.Boolean)
extern "C"  void JSONBool__ctor_m77057576 (JSONBool_t2735681664 * __this, bool ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONBool::.ctor(System.String)
extern "C"  void JSONBool__ctor_m1073954845 (JSONBool_t2735681664 * __this, String_t* ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNodeType SimpleJSON.JSONBool::get_Tag()
extern "C"  int32_t JSONBool_get_Tag_m663962151 (JSONBool_t2735681664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONBool::get_IsBoolean()
extern "C"  bool JSONBool_get_IsBoolean_m2205502060 (JSONBool_t2735681664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONBool::get_Value()
extern "C"  String_t* JSONBool_get_Value_m2771732526 (JSONBool_t2735681664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONBool::set_Value(System.String)
extern "C"  void JSONBool_set_Value_m2706739663 (JSONBool_t2735681664 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONBool::get_AsBool()
extern "C"  bool JSONBool_get_AsBool_m113174350 (JSONBool_t2735681664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONBool::set_AsBool(System.Boolean)
extern "C"  void JSONBool_set_AsBool_m343789673 (JSONBool_t2735681664 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONBool::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONBool_Serialize_m4117855006 (JSONBool_t2735681664 * __this, BinaryWriter_t3179371318 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONBool::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
extern "C"  void JSONBool_WriteToStringBuilder_m2663088611 (JSONBool_t2735681664 * __this, StringBuilder_t1221177846 * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONBool::Equals(System.Object)
extern "C"  bool JSONBool_Equals_m1282931834 (JSONBool_t2735681664 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONBool::GetHashCode()
extern "C"  int32_t JSONBool_GetHashCode_m3599067142 (JSONBool_t2735681664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
