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

// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t1932982249;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t633582367;
// System.Action`2<System.String,System.String>
struct Action_2_t4234541925;
// WebSocketSharp.Net.HttpHeaderInfo
struct HttpHeaderInfo_t2096319561;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H1518115223.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H1796288394.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H1325853500.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void WebSocketSharp.Net.WebHeaderCollection::.cctor()
extern "C"  void WebHeaderCollection__cctor_m89534537 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::.ctor(WebSocketSharp.Net.HttpHeaderType,System.Boolean)
extern "C"  void WebHeaderCollection__ctor_m1746919776 (WebHeaderCollection_t1932982249 * __this, int32_t ___state0, bool ___internallyUsed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection__ctor_m2409813273 (WebHeaderCollection_t1932982249 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::.ctor()
extern "C"  void WebHeaderCollection__ctor_m4088641450 (WebHeaderCollection_t1932982249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpHeaderType WebSocketSharp.Net.WebHeaderCollection::get_State()
extern "C"  int32_t WebHeaderCollection_get_State_m2143961024 (WebHeaderCollection_t1932982249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.Net.WebHeaderCollection::get_AllKeys()
extern "C"  StringU5BU5D_t1642385972* WebHeaderCollection_get_AllKeys_m4197002517 (WebHeaderCollection_t1932982249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.WebHeaderCollection::get_Count()
extern "C"  int32_t WebHeaderCollection_get_Count_m1147637672 (WebHeaderCollection_t1932982249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::get_Item(WebSocketSharp.Net.HttpRequestHeader)
extern "C"  String_t* WebHeaderCollection_get_Item_m1665695971 (WebHeaderCollection_t1932982249 * __this, int32_t ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::set_Item(WebSocketSharp.Net.HttpRequestHeader,System.String)
extern "C"  void WebHeaderCollection_set_Item_m3236611800 (WebHeaderCollection_t1932982249 * __this, int32_t ___header0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::get_Item(WebSocketSharp.Net.HttpResponseHeader)
extern "C"  String_t* WebHeaderCollection_get_Item_m428879317 (WebHeaderCollection_t1932982249 * __this, int32_t ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::set_Item(WebSocketSharp.Net.HttpResponseHeader,System.String)
extern "C"  void WebHeaderCollection_set_Item_m727829248 (WebHeaderCollection_t1932982249 * __this, int32_t ___header0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection WebSocketSharp.Net.WebHeaderCollection::get_Keys()
extern "C"  KeysCollection_t633582367 * WebHeaderCollection_get_Keys_m2761784609 (WebHeaderCollection_t1932982249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::add(System.String,System.String,System.Boolean)
extern "C"  void WebHeaderCollection_add_m3963257300 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, String_t* ___value1, bool ___ignoreRestricted2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::addWithoutCheckingName(System.String,System.String)
extern "C"  void WebHeaderCollection_addWithoutCheckingName_m4111986228 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::addWithoutCheckingNameAndRestricted(System.String,System.String)
extern "C"  void WebHeaderCollection_addWithoutCheckingNameAndRestricted_m963219842 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.WebHeaderCollection::checkColonSeparated(System.String)
extern "C"  int32_t WebHeaderCollection_checkColonSeparated_m3402027548 (Il2CppObject * __this /* static, unused */, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpHeaderType WebSocketSharp.Net.WebHeaderCollection::checkHeaderType(System.String)
extern "C"  int32_t WebHeaderCollection_checkHeaderType_m541499707 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::checkName(System.String)
extern "C"  String_t* WebHeaderCollection_checkName_m2180886524 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::checkRestricted(System.String)
extern "C"  void WebHeaderCollection_checkRestricted_m2947531011 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::checkState(System.Boolean)
extern "C"  void WebHeaderCollection_checkState_m164924992 (WebHeaderCollection_t1932982249 * __this, bool ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::checkValue(System.String)
extern "C"  String_t* WebHeaderCollection_checkValue_m1294277634 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::convert(System.String)
extern "C"  String_t* WebHeaderCollection_convert_m1050640012 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::doWithCheckingState(System.Action`2<System.String,System.String>,System.String,System.String,System.Boolean)
extern "C"  void WebHeaderCollection_doWithCheckingState_m2514804686 (WebHeaderCollection_t1932982249 * __this, Action_2_t4234541925 * ___action0, String_t* ___name1, String_t* ___value2, bool ___setState3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::doWithCheckingState(System.Action`2<System.String,System.String>,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  void WebHeaderCollection_doWithCheckingState_m1955399519 (WebHeaderCollection_t1932982249 * __this, Action_2_t4234541925 * ___action0, String_t* ___name1, String_t* ___value2, bool ___response3, bool ___setState4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::doWithoutCheckingName(System.Action`2<System.String,System.String>,System.String,System.String)
extern "C"  void WebHeaderCollection_doWithoutCheckingName_m991532977 (WebHeaderCollection_t1932982249 * __this, Action_2_t4234541925 * ___action0, String_t* ___name1, String_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpHeaderInfo WebSocketSharp.Net.WebHeaderCollection::getHeaderInfo(System.String)
extern "C"  HttpHeaderInfo_t2096319561 * WebHeaderCollection_getHeaderInfo_m1823337899 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::isRestricted(System.String,System.Boolean)
extern "C"  bool WebHeaderCollection_isRestricted_m1671516710 (Il2CppObject * __this /* static, unused */, String_t* ___name0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::removeWithoutCheckingName(System.String,System.String)
extern "C"  void WebHeaderCollection_removeWithoutCheckingName_m4052840533 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, String_t* ___unuse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::setWithoutCheckingName(System.String,System.String)
extern "C"  void WebHeaderCollection_setWithoutCheckingName_m2276012237 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::Convert(WebSocketSharp.Net.HttpRequestHeader)
extern "C"  String_t* WebHeaderCollection_Convert_m3065424200 (Il2CppObject * __this /* static, unused */, int32_t ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::Convert(WebSocketSharp.Net.HttpResponseHeader)
extern "C"  String_t* WebHeaderCollection_Convert_m3661473532 (Il2CppObject * __this /* static, unused */, int32_t ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::InternalRemove(System.String)
extern "C"  void WebHeaderCollection_InternalRemove_m2547299617 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::InternalSet(System.String,System.Boolean)
extern "C"  void WebHeaderCollection_InternalSet_m2530069228 (WebHeaderCollection_t1932982249 * __this, String_t* ___header0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::InternalSet(System.String,System.String,System.Boolean)
extern "C"  void WebHeaderCollection_InternalSet_m4067102560 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, String_t* ___value1, bool ___response2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::IsHeaderName(System.String)
extern "C"  bool WebHeaderCollection_IsHeaderName_m4277832850 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::IsHeaderValue(System.String)
extern "C"  bool WebHeaderCollection_IsHeaderValue_m2027525252 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::IsMultiValue(System.String,System.Boolean)
extern "C"  bool WebHeaderCollection_IsMultiValue_m3924834075 (Il2CppObject * __this /* static, unused */, String_t* ___headerName0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::ToStringMultiValue(System.Boolean)
extern "C"  String_t* WebHeaderCollection_ToStringMultiValue_m508348398 (WebHeaderCollection_t1932982249 * __this, bool ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::AddWithoutValidate(System.String,System.String)
extern "C"  void WebHeaderCollection_AddWithoutValidate_m788224897 (WebHeaderCollection_t1932982249 * __this, String_t* ___headerName0, String_t* ___headerValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Add(System.String)
extern "C"  void WebHeaderCollection_Add_m3055113797 (WebHeaderCollection_t1932982249 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Add(WebSocketSharp.Net.HttpRequestHeader,System.String)
extern "C"  void WebHeaderCollection_Add_m1765740369 (WebHeaderCollection_t1932982249 * __this, int32_t ___header0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Add(WebSocketSharp.Net.HttpResponseHeader,System.String)
extern "C"  void WebHeaderCollection_Add_m3169225295 (WebHeaderCollection_t1932982249 * __this, int32_t ___header0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Add(System.String,System.String)
extern "C"  void WebHeaderCollection_Add_m3676672975 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Clear()
extern "C"  void WebHeaderCollection_Clear_m4006690363 (WebHeaderCollection_t1932982249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::Get(System.Int32)
extern "C"  String_t* WebHeaderCollection_Get_m753117572 (WebHeaderCollection_t1932982249 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::Get(System.String)
extern "C"  String_t* WebHeaderCollection_Get_m3880764147 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WebSocketSharp.Net.WebHeaderCollection::GetEnumerator()
extern "C"  Il2CppObject * WebHeaderCollection_GetEnumerator_m2213524660 (WebHeaderCollection_t1932982249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::GetKey(System.Int32)
extern "C"  String_t* WebHeaderCollection_GetKey_m3682301271 (WebHeaderCollection_t1932982249 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.Net.WebHeaderCollection::GetValues(System.Int32)
extern "C"  StringU5BU5D_t1642385972* WebHeaderCollection_GetValues_m271872102 (WebHeaderCollection_t1932982249 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.Net.WebHeaderCollection::GetValues(System.String)
extern "C"  StringU5BU5D_t1642385972* WebHeaderCollection_GetValues_m2801129097 (WebHeaderCollection_t1932982249 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection_GetObjectData_m3776313714 (WebHeaderCollection_t1932982249 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::IsRestricted(System.String)
extern "C"  bool WebHeaderCollection_IsRestricted_m2090695159 (Il2CppObject * __this /* static, unused */, String_t* ___headerName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::IsRestricted(System.String,System.Boolean)
extern "C"  bool WebHeaderCollection_IsRestricted_m1618659590 (Il2CppObject * __this /* static, unused */, String_t* ___headerName0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::OnDeserialization(System.Object)
extern "C"  void WebHeaderCollection_OnDeserialization_m1137752708 (WebHeaderCollection_t1932982249 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Remove(WebSocketSharp.Net.HttpRequestHeader)
extern "C"  void WebHeaderCollection_Remove_m3133093278 (WebHeaderCollection_t1932982249 * __this, int32_t ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Remove(WebSocketSharp.Net.HttpResponseHeader)
extern "C"  void WebHeaderCollection_Remove_m3737659838 (WebHeaderCollection_t1932982249 * __this, int32_t ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Remove(System.String)
extern "C"  void WebHeaderCollection_Remove_m1943461998 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Set(WebSocketSharp.Net.HttpRequestHeader,System.String)
extern "C"  void WebHeaderCollection_Set_m2448933560 (WebHeaderCollection_t1932982249 * __this, int32_t ___header0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Set(WebSocketSharp.Net.HttpResponseHeader,System.String)
extern "C"  void WebHeaderCollection_Set_m1267855884 (WebHeaderCollection_t1932982249 * __this, int32_t ___header0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Set(System.String,System.String)
extern "C"  void WebHeaderCollection_Set_m1705928072 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.WebHeaderCollection::ToByteArray()
extern "C"  ByteU5BU5D_t3397334013* WebHeaderCollection_ToByteArray_m83697366 (WebHeaderCollection_t1932982249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::ToString()
extern "C"  String_t* WebHeaderCollection_ToString_m328106257 (WebHeaderCollection_t1932982249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_m800360725 (WebHeaderCollection_t1932982249 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
