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

// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3028142837;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Object
struct Il2CppObject;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t633582367;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Net.WebHeaderCollection::.ctor()
extern "C"  void WebHeaderCollection__ctor_m3030572237 (WebHeaderCollection_t3028142837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection__ctor_m4088938710 (WebHeaderCollection_t3028142837 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Boolean)
extern "C"  void WebHeaderCollection__ctor_m3472091620 (WebHeaderCollection_t3028142837 * __this, bool ___internallyCreated0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.cctor()
extern "C"  void WebHeaderCollection__cctor_m3314500904 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_m3065848444 (WebHeaderCollection_t3028142837 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
extern "C"  void WebHeaderCollection_Add_m1090164380 (WebHeaderCollection_t3028142837 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::AddWithoutValidate(System.String,System.String)
extern "C"  void WebHeaderCollection_AddWithoutValidate_m1479880592 (WebHeaderCollection_t3028142837 * __this, String_t* ___headerName0, String_t* ___headerValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.WebHeaderCollection::GetValues(System.String)
extern "C"  StringU5BU5D_t1642385972* WebHeaderCollection_GetValues_m2723875770 (WebHeaderCollection_t3028142837 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.WebHeaderCollection::GetValues(System.Int32)
extern "C"  StringU5BU5D_t1642385972* WebHeaderCollection_GetValues_m3760479101 (WebHeaderCollection_t3028142837 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsRestricted(System.String)
extern "C"  bool WebHeaderCollection_IsRestricted_m2583169910 (Il2CppObject * __this /* static, unused */, String_t* ___headerName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
extern "C"  void WebHeaderCollection_OnDeserialization_m1255164557 (WebHeaderCollection_t3028142837 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Remove(System.String)
extern "C"  void WebHeaderCollection_Remove_m1873205253 (WebHeaderCollection_t3028142837 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Set(System.String,System.String)
extern "C"  void WebHeaderCollection_Set_m1457958451 (WebHeaderCollection_t3028142837 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::ToString()
extern "C"  String_t* WebHeaderCollection_ToString_m1246460752 (WebHeaderCollection_t3028142837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection_GetObjectData_m3940120977 (WebHeaderCollection_t3028142837 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.WebHeaderCollection::get_AllKeys()
extern "C"  StringU5BU5D_t1642385972* WebHeaderCollection_get_AllKeys_m1074605998 (WebHeaderCollection_t3028142837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebHeaderCollection::get_Count()
extern "C"  int32_t WebHeaderCollection_get_Count_m4107689589 (WebHeaderCollection_t3028142837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Net.WebHeaderCollection::get_Keys()
extern "C"  KeysCollection_t633582367 * WebHeaderCollection_get_Keys_m3829555646 (WebHeaderCollection_t3028142837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.Int32)
extern "C"  String_t* WebHeaderCollection_Get_m3391944907 (WebHeaderCollection_t3028142837 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.String)
extern "C"  String_t* WebHeaderCollection_Get_m790892036 (WebHeaderCollection_t3028142837 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
extern "C"  String_t* WebHeaderCollection_GetKey_m3591063110 (WebHeaderCollection_t3028142837 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Clear()
extern "C"  void WebHeaderCollection_Clear_m163926240 (WebHeaderCollection_t3028142837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
extern "C"  Il2CppObject * WebHeaderCollection_GetEnumerator_m2413245085 (WebHeaderCollection_t3028142837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderValue(System.String)
extern "C"  bool WebHeaderCollection_IsHeaderValue_m1723393133 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderName(System.String)
extern "C"  bool WebHeaderCollection_IsHeaderName_m3758915809 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
