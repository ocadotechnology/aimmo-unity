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

// SimpleJSON.JSONNumber
struct JSONNumber_t1434467529;
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

// System.Void SimpleJSON.JSONNumber::.ctor(System.Double)
extern "C"  void JSONNumber__ctor_m3932833836 (JSONNumber_t1434467529 * __this, double ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNumber::.ctor(System.String)
extern "C"  void JSONNumber__ctor_m3362272056 (JSONNumber_t1434467529 * __this, String_t* ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNodeType SimpleJSON.JSONNumber::get_Tag()
extern "C"  int32_t JSONNumber_get_Tag_m2663552904 (JSONNumber_t1434467529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNumber::get_IsNumber()
extern "C"  bool JSONNumber_get_IsNumber_m4035167558 (JSONNumber_t1434467529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNumber::get_Value()
extern "C"  String_t* JSONNumber_get_Value_m2940007553 (JSONNumber_t1434467529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNumber::set_Value(System.String)
extern "C"  void JSONNumber_set_Value_m2654974822 (JSONNumber_t1434467529 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double SimpleJSON.JSONNumber::get_AsDouble()
extern "C"  double JSONNumber_get_AsDouble_m1456147797 (JSONNumber_t1434467529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNumber::set_AsDouble(System.Double)
extern "C"  void JSONNumber_set_AsDouble_m3595980786 (JSONNumber_t1434467529 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNumber::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONNumber_Serialize_m1161248111 (JSONNumber_t1434467529 * __this, BinaryWriter_t3179371318 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNumber::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
extern "C"  void JSONNumber_WriteToStringBuilder_m1541056202 (JSONNumber_t1434467529 * __this, StringBuilder_t1221177846 * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNumber::IsNumeric(System.Object)
extern "C"  bool JSONNumber_IsNumeric_m2520514745 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNumber::Equals(System.Object)
extern "C"  bool JSONNumber_Equals_m3971481311 (JSONNumber_t1434467529 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNumber::GetHashCode()
extern "C"  int32_t JSONNumber_GetHashCode_m2525946437 (JSONNumber_t1434467529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
