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

// SimpleJSON.JSONNode
struct JSONNode_t1250409636;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_t1542536681;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// SimpleJSON.JSONObject
struct JSONObject_t3061402583;
// System.Object
struct Il2CppObject;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.IO.Stream
struct Stream_t3255436806;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode1250409636.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_IO_BinaryReader2491843768.h"

// System.Void SimpleJSON.JSONNode::.ctor()
extern "C"  void JSONNode__ctor_m2247131117 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32)
extern "C"  JSONNode_t1250409636 * JSONNode_get_Item_m1968274375 (JSONNode_t1250409636 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONNode_set_Item_m4142830686 (JSONNode_t1250409636 * __this, int32_t ___aIndex0, JSONNode_t1250409636 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String)
extern "C"  JSONNode_t1250409636 * JSONNode_get_Item_m166165354 (JSONNode_t1250409636 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONNode_set_Item_m3898397519 (JSONNode_t1250409636 * __this, String_t* ___aKey0, JSONNode_t1250409636 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::get_Value()
extern "C"  String_t* JSONNode_get_Value_m51394302 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Value(System.String)
extern "C"  void JSONNode_set_Value_m3087459801 (JSONNode_t1250409636 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::get_Count()
extern "C"  int32_t JSONNode_get_Count_m4068855145 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::get_IsNumber()
extern "C"  bool JSONNode_get_IsNumber_m661548597 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::get_IsString()
extern "C"  bool JSONNode_get_IsString_m2498324691 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::get_IsBoolean()
extern "C"  bool JSONNode_get_IsBoolean_m400335576 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::get_IsNull()
extern "C"  bool JSONNode_get_IsNull_m1063956205 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::get_IsArray()
extern "C"  bool JSONNode_get_IsArray_m3411563743 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::get_IsObject()
extern "C"  bool JSONNode_get_IsObject_m1912060839 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONNode_Add_m2487311660 (JSONNode_t1250409636 * __this, String_t* ___aKey0, JSONNode_t1250409636 * ___aItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode)
extern "C"  void JSONNode_Add_m1482726356 (JSONNode_t1250409636 * __this, JSONNode_t1250409636 * ___aItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.String)
extern "C"  JSONNode_t1250409636 * JSONNode_Remove_m4217090560 (JSONNode_t1250409636 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.Int32)
extern "C"  JSONNode_t1250409636 * JSONNode_Remove_m857779621 (JSONNode_t1250409636 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(SimpleJSON.JSONNode)
extern "C"  JSONNode_t1250409636 * JSONNode_Remove_m2946855820 (JSONNode_t1250409636 * __this, JSONNode_t1250409636 * ___aNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Children()
extern "C"  Il2CppObject* JSONNode_get_Children_m2823343851 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChildren()
extern "C"  Il2CppObject* JSONNode_get_DeepChildren_m2433975707 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::ToString()
extern "C"  String_t* JSONNode_ToString_m3297010954 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::ToString(System.Int32)
extern "C"  String_t* JSONNode_ToString_m3451160743 (JSONNode_t1250409636 * __this, int32_t ___aIndent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double SimpleJSON.JSONNode::get_AsDouble()
extern "C"  double JSONNode_get_AsDouble_m4194289066 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double)
extern "C"  void JSONNode_set_AsDouble_m958837849 (JSONNode_t1250409636 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::get_AsInt()
extern "C"  int32_t JSONNode_get_AsInt_m2161518307 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32)
extern "C"  void JSONNode_set_AsInt_m2422221002 (JSONNode_t1250409636 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SimpleJSON.JSONNode::get_AsFloat()
extern "C"  float JSONNode_get_AsFloat_m3888105058 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single)
extern "C"  void JSONNode_set_AsFloat_m3870152875 (JSONNode_t1250409636 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::get_AsBool()
extern "C"  bool JSONNode_get_AsBool_m3938091542 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean)
extern "C"  void JSONNode_set_AsBool_m2673138987 (JSONNode_t1250409636 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONArray SimpleJSON.JSONNode::get_AsArray()
extern "C"  JSONArray_t3986483147 * JSONNode_get_AsArray_m2532870305 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONObject SimpleJSON.JSONNode::get_AsObject()
extern "C"  JSONObject_t3061402583 * JSONNode_get_AsObject_m2277625517 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
extern "C"  JSONNode_t1250409636 * JSONNode_op_Implicit_m2456296135 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  String_t* JSONNode_op_Implicit_m3223993463 (Il2CppObject * __this /* static, unused */, JSONNode_t1250409636 * ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Double)
extern "C"  JSONNode_t1250409636 * JSONNode_op_Implicit_m1140462191 (Il2CppObject * __this /* static, unused */, double ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  double JSONNode_op_Implicit_m854361231 (Il2CppObject * __this /* static, unused */, JSONNode_t1250409636 * ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Single)
extern "C"  JSONNode_t1250409636 * JSONNode_op_Implicit_m129057332 (Il2CppObject * __this /* static, unused */, float ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  float JSONNode_op_Implicit_m421049946 (Il2CppObject * __this /* static, unused */, JSONNode_t1250409636 * ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Int32)
extern "C"  JSONNode_t1250409636 * JSONNode_op_Implicit_m1929977886 (Il2CppObject * __this /* static, unused */, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  int32_t JSONNode_op_Implicit_m4270675906 (Il2CppObject * __this /* static, unused */, JSONNode_t1250409636 * ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Boolean)
extern "C"  JSONNode_t1250409636 * JSONNode_op_Implicit_m1721639474 (Il2CppObject * __this /* static, unused */, bool ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  bool JSONNode_op_Implicit_m1312242866 (Il2CppObject * __this /* static, unused */, JSONNode_t1250409636 * ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Equality_m3189593931 (Il2CppObject * __this /* static, unused */, JSONNode_t1250409636 * ___a0, Il2CppObject * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Inequality_m4231613516 (Il2CppObject * __this /* static, unused */, JSONNode_t1250409636 * ___a0, Il2CppObject * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
extern "C"  bool JSONNode_Equals_m3475285658 (JSONNode_t1250409636 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::GetHashCode()
extern "C"  int32_t JSONNode_GetHashCode_m2889787922 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::Escape(System.String)
extern "C"  String_t* JSONNode_Escape_m1661145351 (Il2CppObject * __this /* static, unused */, String_t* ___aText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::ParseElement(SimpleJSON.JSONNode,System.String,System.String,System.Boolean)
extern "C"  void JSONNode_ParseElement_m447736301 (Il2CppObject * __this /* static, unused */, JSONNode_t1250409636 * ___ctx0, String_t* ___token1, String_t* ___tokenName2, bool ___quoted3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
extern "C"  JSONNode_t1250409636 * JSONNode_Parse_m1024344361 (Il2CppObject * __this /* static, unused */, String_t* ___aJSON0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONNode_Serialize_m2765653626 (JSONNode_t1250409636 * __this, BinaryWriter_t3179371318 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToStream(System.IO.Stream)
extern "C"  void JSONNode_SaveToStream_m642877378 (JSONNode_t1250409636 * __this, Stream_t3255436806 * ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToCompressedStream(System.IO.Stream)
extern "C"  void JSONNode_SaveToCompressedStream_m3096239079 (JSONNode_t1250409636 * __this, Stream_t3255436806 * ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToCompressedFile(System.String)
extern "C"  void JSONNode_SaveToCompressedFile_m1752458280 (JSONNode_t1250409636 * __this, String_t* ___aFileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::SaveToCompressedBase64()
extern "C"  String_t* JSONNode_SaveToCompressedBase64_m556857228 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToFile(System.String)
extern "C"  void JSONNode_SaveToFile_m4289831263 (JSONNode_t1250409636 * __this, String_t* ___aFileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::SaveToBase64()
extern "C"  String_t* JSONNode_SaveToBase64_m394928709 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Deserialize(System.IO.BinaryReader)
extern "C"  JSONNode_t1250409636 * JSONNode_Deserialize_m1496264534 (Il2CppObject * __this /* static, unused */, BinaryReader_t2491843768 * ___aReader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedFile(System.String)
extern "C"  JSONNode_t1250409636 * JSONNode_LoadFromCompressedFile_m862429317 (Il2CppObject * __this /* static, unused */, String_t* ___aFileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedStream(System.IO.Stream)
extern "C"  JSONNode_t1250409636 * JSONNode_LoadFromCompressedStream_m44791180 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedBase64(System.String)
extern "C"  JSONNode_t1250409636 * JSONNode_LoadFromCompressedBase64_m1175528026 (Il2CppObject * __this /* static, unused */, String_t* ___aBase640, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromStream(System.IO.Stream)
extern "C"  JSONNode_t1250409636 * JSONNode_LoadFromStream_m2925316421 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromFile(System.String)
extern "C"  JSONNode_t1250409636 * JSONNode_LoadFromFile_m783324186 (Il2CppObject * __this /* static, unused */, String_t* ___aFileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromBase64(System.String)
extern "C"  JSONNode_t1250409636 * JSONNode_LoadFromBase64_m2596384055 (Il2CppObject * __this /* static, unused */, String_t* ___aBase640, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::.cctor()
extern "C"  void JSONNode__cctor_m3025605272 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
