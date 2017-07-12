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

// SimpleJSON.JSONObject
struct JSONObject_t3061402583;
// SimpleJSON.JSONNode
struct JSONNode_t1250409636;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_t1542536681;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNodeT3936313412.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode1250409636.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONTextM1598503440.h"

// System.Void SimpleJSON.JSONObject::.ctor()
extern "C"  void JSONObject__ctor_m1543229984 (JSONObject_t3061402583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNodeType SimpleJSON.JSONObject::get_Tag()
extern "C"  int32_t JSONObject_get_Tag_m4253208510 (JSONObject_t3061402583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONObject::get_IsObject()
extern "C"  bool JSONObject_get_IsObject_m4222576838 (JSONObject_t3061402583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONObject::get_Item(System.String)
extern "C"  JSONNode_t1250409636 * JSONObject_get_Item_m2992487373 (JSONObject_t3061402583 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONObject::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONObject_set_Item_m1934408746 (JSONObject_t3061402583 * __this, String_t* ___aKey0, JSONNode_t1250409636 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONObject::get_Item(System.Int32)
extern "C"  JSONNode_t1250409636 * JSONObject_get_Item_m3061979178 (JSONObject_t3061402583 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONObject::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONObject_set_Item_m3765004129 (JSONObject_t3061402583 * __this, int32_t ___aIndex0, JSONNode_t1250409636 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONObject::get_Count()
extern "C"  int32_t JSONObject_get_Count_m2089822114 (JSONObject_t3061402583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONObject::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONObject_Add_m2509362943 (JSONObject_t3061402583 * __this, String_t* ___aKey0, JSONNode_t1250409636 * ___aItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Remove(System.String)
extern "C"  JSONNode_t1250409636 * JSONObject_Remove_m2487106603 (JSONObject_t3061402583 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Remove(System.Int32)
extern "C"  JSONNode_t1250409636 * JSONObject_Remove_m3532773424 (JSONObject_t3061402583 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Remove(SimpleJSON.JSONNode)
extern "C"  JSONNode_t1250409636 * JSONObject_Remove_m1763569257 (JSONObject_t3061402583 * __this, JSONNode_t1250409636 * ___aNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONObject::get_Children()
extern "C"  Il2CppObject* JSONObject_get_Children_m4160281990 (JSONObject_t3061402583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimpleJSON.JSONObject::GetEnumerator()
extern "C"  Il2CppObject * JSONObject_GetEnumerator_m4188764746 (JSONObject_t3061402583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONObject::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONObject_Serialize_m411676677 (JSONObject_t3061402583 * __this, BinaryWriter_t3179371318 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONObject::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
extern "C"  void JSONObject_WriteToStringBuilder_m652950268 (JSONObject_t3061402583 * __this, StringBuilder_t1221177846 * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
