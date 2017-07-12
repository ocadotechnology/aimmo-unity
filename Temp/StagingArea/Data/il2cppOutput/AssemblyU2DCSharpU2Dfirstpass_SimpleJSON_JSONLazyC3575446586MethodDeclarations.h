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

// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_t3575446586;
// SimpleJSON.JSONNode
struct JSONNode_t1250409636;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// SimpleJSON.JSONObject
struct JSONObject_t3061402583;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode1250409636.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNodeT3936313412.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONLazyC3575446586.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONTextM1598503440.h"

// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator__ctor_m2078078555 (JSONLazyCreator_t3575446586 * __this, JSONNode_t1250409636 * ___aNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
extern "C"  void JSONLazyCreator__ctor_m3820486681 (JSONLazyCreator_t3575446586 * __this, JSONNode_t1250409636 * ___aNode0, String_t* ___aKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNodeType SimpleJSON.JSONLazyCreator::get_Tag()
extern "C"  int32_t JSONLazyCreator_get_Tag_m2827181967 (JSONLazyCreator_t3575446586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::Set(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_Set_m1389687305 (JSONLazyCreator_t3575446586 * __this, JSONNode_t1250409636 * ___aVal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.Int32)
extern "C"  JSONNode_t1250409636 * JSONLazyCreator_get_Item_m331838649 (JSONLazyCreator_t3575446586 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_set_Item_m2158621392 (JSONLazyCreator_t3575446586 * __this, int32_t ___aIndex0, JSONNode_t1250409636 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.String)
extern "C"  JSONNode_t1250409636 * JSONLazyCreator_get_Item_m2923227490 (JSONLazyCreator_t3575446586 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_set_Item_m1982140957 (JSONLazyCreator_t3575446586 * __this, String_t* ___aKey0, JSONNode_t1250409636 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::Add(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_Add_m3059383878 (JSONLazyCreator_t3575446586 * __this, JSONNode_t1250409636 * ___aItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_Add_m709767014 (JSONLazyCreator_t3575446586 * __this, String_t* ___aKey0, JSONNode_t1250409636 * ___aItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C"  bool JSONLazyCreator_op_Equality_m2787689035 (Il2CppObject * __this /* static, unused */, JSONLazyCreator_t3575446586 * ___a0, Il2CppObject * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::op_Inequality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C"  bool JSONLazyCreator_op_Inequality_m3031917038 (Il2CppObject * __this /* static, unused */, JSONLazyCreator_t3575446586 * ___a0, Il2CppObject * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::Equals(System.Object)
extern "C"  bool JSONLazyCreator_Equals_m34741876 (JSONLazyCreator_t3575446586 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONLazyCreator::GetHashCode()
extern "C"  int32_t JSONLazyCreator_GetHashCode_m317630832 (JSONLazyCreator_t3575446586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONLazyCreator::get_AsInt()
extern "C"  int32_t JSONLazyCreator_get_AsInt_m3989789929 (JSONLazyCreator_t3575446586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsInt(System.Int32)
extern "C"  void JSONLazyCreator_set_AsInt_m1645232904 (JSONLazyCreator_t3575446586 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SimpleJSON.JSONLazyCreator::get_AsFloat()
extern "C"  float JSONLazyCreator_get_AsFloat_m2098674240 (JSONLazyCreator_t3575446586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsFloat(System.Single)
extern "C"  void JSONLazyCreator_set_AsFloat_m3579896009 (JSONLazyCreator_t3575446586 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double SimpleJSON.JSONLazyCreator::get_AsDouble()
extern "C"  double JSONLazyCreator_get_AsDouble_m2104198326 (JSONLazyCreator_t3575446586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsDouble(System.Double)
extern "C"  void JSONLazyCreator_set_AsDouble_m4034653695 (JSONLazyCreator_t3575446586 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::get_AsBool()
extern "C"  bool JSONLazyCreator_get_AsBool_m2590611456 (JSONLazyCreator_t3575446586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsBool(System.Boolean)
extern "C"  void JSONLazyCreator_set_AsBool_m2630025493 (JSONLazyCreator_t3575446586 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONArray SimpleJSON.JSONLazyCreator::get_AsArray()
extern "C"  JSONArray_t3986483147 * JSONLazyCreator_get_AsArray_m1644782719 (JSONLazyCreator_t3575446586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONObject SimpleJSON.JSONLazyCreator::get_AsObject()
extern "C"  JSONObject_t3061402583 * JSONLazyCreator_get_AsObject_m2389638903 (JSONLazyCreator_t3575446586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
extern "C"  void JSONLazyCreator_WriteToStringBuilder_m252560663 (JSONLazyCreator_t3575446586 * __this, StringBuilder_t1221177846 * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
