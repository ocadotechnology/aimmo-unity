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

// WebSocketSharp.Net.Cookie
struct Cookie_t1826188460;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Uri
struct Uri_t19570940;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void WebSocketSharp.Net.Cookie::.cctor()
extern "C"  void Cookie__cctor_m1671250352 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::.ctor()
extern "C"  void Cookie__ctor_m2720635867 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::.ctor(System.String,System.String)
extern "C"  void Cookie__ctor_m1493037563 (Cookie_t1826188460 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::.ctor(System.String,System.String,System.String)
extern "C"  void Cookie__ctor_m2628519533 (Cookie_t1826188460 * __this, String_t* ___name0, String_t* ___value1, String_t* ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::.ctor(System.String,System.String,System.String,System.String)
extern "C"  void Cookie__ctor_m3091237051 (Cookie_t1826188460 * __this, String_t* ___name0, String_t* ___value1, String_t* ___path2, String_t* ___domain3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::get_ExactDomain()
extern "C"  bool Cookie_get_ExactDomain_m2840703525 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_ExactDomain(System.Boolean)
extern "C"  void Cookie_set_ExactDomain_m3285683216 (Cookie_t1826188460 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.Cookie::get_MaxAge()
extern "C"  int32_t Cookie_get_MaxAge_m3921587467 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] WebSocketSharp.Net.Cookie::get_Ports()
extern "C"  Int32U5BU5D_t3030399641* Cookie_get_Ports_m1274807196 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::get_Comment()
extern "C"  String_t* Cookie_get_Comment_m2307467110 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Comment(System.String)
extern "C"  void Cookie_set_Comment_m1428335511 (Cookie_t1826188460 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.Net.Cookie::get_CommentUri()
extern "C"  Uri_t19570940 * Cookie_get_CommentUri_m1084416025 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_CommentUri(System.Uri)
extern "C"  void Cookie_set_CommentUri_m1588256638 (Cookie_t1826188460 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::get_Discard()
extern "C"  bool Cookie_get_Discard_m3576139518 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Discard(System.Boolean)
extern "C"  void Cookie_set_Discard_m1317750567 (Cookie_t1826188460 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::get_Domain()
extern "C"  String_t* Cookie_get_Domain_m2428273607 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Domain(System.String)
extern "C"  void Cookie_set_Domain_m3320018982 (Cookie_t1826188460 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::get_Expired()
extern "C"  bool Cookie_get_Expired_m624980705 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Expired(System.Boolean)
extern "C"  void Cookie_set_Expired_m3908951238 (Cookie_t1826188460 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime WebSocketSharp.Net.Cookie::get_Expires()
extern "C"  DateTime_t693205669  Cookie_get_Expires_m182565071 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Expires(System.DateTime)
extern "C"  void Cookie_set_Expires_m2245707876 (Cookie_t1826188460 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::get_HttpOnly()
extern "C"  bool Cookie_get_HttpOnly_m4042135604 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_HttpOnly(System.Boolean)
extern "C"  void Cookie_set_HttpOnly_m1962550889 (Cookie_t1826188460 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::get_Name()
extern "C"  String_t* Cookie_get_Name_m1988054044 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Name(System.String)
extern "C"  void Cookie_set_Name_m1930256271 (Cookie_t1826188460 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::get_Path()
extern "C"  String_t* Cookie_get_Path_m3827162596 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Path(System.String)
extern "C"  void Cookie_set_Path_m3351054865 (Cookie_t1826188460 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::get_Port()
extern "C"  String_t* Cookie_get_Port_m2980181848 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Port(System.String)
extern "C"  void Cookie_set_Port_m2966909657 (Cookie_t1826188460 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::get_Secure()
extern "C"  bool Cookie_get_Secure_m4108164865 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Secure(System.Boolean)
extern "C"  void Cookie_set_Secure_m3572363220 (Cookie_t1826188460 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime WebSocketSharp.Net.Cookie::get_TimeStamp()
extern "C"  DateTime_t693205669  Cookie_get_TimeStamp_m469463529 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::get_Value()
extern "C"  String_t* Cookie_get_Value_m1099128110 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Value(System.String)
extern "C"  void Cookie_set_Value_m3242528479 (Cookie_t1826188460 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.Cookie::get_Version()
extern "C"  int32_t Cookie_get_Version_m662115756 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Version(System.Int32)
extern "C"  void Cookie_set_Version_m3053512701 (Cookie_t1826188460 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::canSetName(System.String,System.String&)
extern "C"  bool Cookie_canSetName_m1954147864 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::canSetValue(System.String,System.String&)
extern "C"  bool Cookie_canSetValue_m1238311630 (Il2CppObject * __this /* static, unused */, String_t* ___value0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.Cookie::hash(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Cookie_hash_m2777980574 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___j1, int32_t ___k2, int32_t ___l3, int32_t ___m4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::toResponseStringVersion0()
extern "C"  String_t* Cookie_toResponseStringVersion0_m3681000825 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::toResponseStringVersion1()
extern "C"  String_t* Cookie_toResponseStringVersion1_m3681000730 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::tryCreatePorts(System.String,System.Int32[]&,System.String&)
extern "C"  bool Cookie_tryCreatePorts_m3363271965 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Int32U5BU5D_t3030399641** ___result1, String_t** ___parseError2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::ToRequestString(System.Uri)
extern "C"  String_t* Cookie_ToRequestString_m3624177952 (Cookie_t1826188460 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::ToResponseString()
extern "C"  String_t* Cookie_ToResponseString_m275321271 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::Equals(System.Object)
extern "C"  bool Cookie_Equals_m4029976858 (Cookie_t1826188460 * __this, Il2CppObject * ___comparand0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.Cookie::GetHashCode()
extern "C"  int32_t Cookie_GetHashCode_m965157086 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::ToString()
extern "C"  String_t* Cookie_ToString_m3705916814 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
