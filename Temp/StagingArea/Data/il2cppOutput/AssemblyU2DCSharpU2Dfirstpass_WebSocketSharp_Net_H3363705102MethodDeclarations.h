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

// WebSocketSharp.Net.HttpUtility
struct HttpUtility_t3363705102;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Collections.Generic.Dictionary`2<System.String,System.Char>
struct Dictionary_2_t1074293304;
// System.IO.Stream
struct Stream_t3255436806;
// System.Collections.IList
struct IList_t3321498491;
// System.Uri
struct Uri_t19570940;
// System.Security.Principal.IPrincipal
struct IPrincipal_t783141777;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>
struct Func_2_t353436505;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.IO.TextWriter
struct TextWriter_t4027217640;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Aut29593226.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"

// System.Void WebSocketSharp.Net.HttpUtility::.ctor()
extern "C"  void HttpUtility__ctor_m1200856783 (HttpUtility_t3363705102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpUtility::getChar(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t HttpUtility_getChar_m2723704438 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpUtility::getChar(System.String,System.Int32,System.Int32)
extern "C"  int32_t HttpUtility_getChar_m4245232229 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] WebSocketSharp.Net.HttpUtility::getChars(System.IO.MemoryStream,System.Text.Encoding)
extern "C"  CharU5BU5D_t1328083999* HttpUtility_getChars_m1993329937 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___buffer0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Char> WebSocketSharp.Net.HttpUtility::getEntities()
extern "C"  Dictionary_2_t1074293304 * HttpUtility_getEntities_m4201437405 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpUtility::getInt(System.Byte)
extern "C"  int32_t HttpUtility_getInt_m2955967969 (Il2CppObject * __this /* static, unused */, uint8_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::initEntities()
extern "C"  void HttpUtility_initEntities_m97539450 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpUtility::notEncoded(System.Char)
extern "C"  bool HttpUtility_notEncoded_m3019112839 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::urlEncode(System.Char,System.IO.Stream,System.Boolean)
extern "C"  void HttpUtility_urlEncode_m1007275089 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, Stream_t3255436806 * ___result1, bool ___unicode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::urlPathEncode(System.Char,System.IO.Stream)
extern "C"  void HttpUtility_urlPathEncode_m2180935807 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, Stream_t3255436806 * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::writeCharBytes(System.Char,System.Collections.IList,System.Text.Encoding)
extern "C"  void HttpUtility_writeCharBytes_m1007281798 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, Il2CppObject * ___buffer1, Encoding_t663144255 * ___encoding2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.Net.HttpUtility::CreateRequestUrl(System.String,System.String,System.Boolean,System.Boolean)
extern "C"  Uri_t19570940 * HttpUtility_CreateRequestUrl_m1743851175 (Il2CppObject * __this /* static, unused */, String_t* ___requestUri0, String_t* ___host1, bool ___websocketRequest2, bool ___secure3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.IPrincipal WebSocketSharp.Net.HttpUtility::CreateUser(System.String,WebSocketSharp.Net.AuthenticationSchemes,System.String,System.String,System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>)
extern "C"  Il2CppObject * HttpUtility_CreateUser_m1401109013 (Il2CppObject * __this /* static, unused */, String_t* ___response0, int32_t ___scheme1, String_t* ___realm2, String_t* ___method3, Func_2_t353436505 * ___credentialsFinder4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding WebSocketSharp.Net.HttpUtility::GetEncoding(System.String)
extern "C"  Encoding_t663144255 * HttpUtility_GetEncoding_m436700192 (Il2CppObject * __this /* static, unused */, String_t* ___contentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.HttpUtility::InternalParseQueryString(System.String,System.Text.Encoding)
extern "C"  NameValueCollection_t3047564564 * HttpUtility_InternalParseQueryString_m3021297055 (Il2CppObject * __this /* static, unused */, String_t* ___query0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::InternalUrlDecode(System.Byte[],System.Int32,System.Int32,System.Text.Encoding)
extern "C"  String_t* HttpUtility_InternalUrlDecode_m587389454 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, int32_t ___count2, Encoding_t663144255 * ___encoding3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::InternalUrlDecodeToBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* HttpUtility_InternalUrlDecodeToBytes_m1971003288 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::InternalUrlEncodeToBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* HttpUtility_InternalUrlEncodeToBytes_m2289536120 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::InternalUrlEncodeUnicodeToBytes(System.String)
extern "C"  ByteU5BU5D_t3397334013* HttpUtility_InternalUrlEncodeUnicodeToBytes_m1482557364 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::HtmlAttributeEncode(System.String)
extern "C"  String_t* HttpUtility_HtmlAttributeEncode_m141117211 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::HtmlAttributeEncode(System.String,System.IO.TextWriter)
extern "C"  void HttpUtility_HtmlAttributeEncode_m720041259 (Il2CppObject * __this /* static, unused */, String_t* ___s0, TextWriter_t4027217640 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::HtmlDecode(System.String)
extern "C"  String_t* HttpUtility_HtmlDecode_m3855518929 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::HtmlDecode(System.String,System.IO.TextWriter)
extern "C"  void HttpUtility_HtmlDecode_m1437710081 (Il2CppObject * __this /* static, unused */, String_t* ___s0, TextWriter_t4027217640 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::HtmlEncode(System.String)
extern "C"  String_t* HttpUtility_HtmlEncode_m2322909867 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::HtmlEncode(System.String,System.IO.TextWriter)
extern "C"  void HttpUtility_HtmlEncode_m3805170943 (Il2CppObject * __this /* static, unused */, String_t* ___s0, TextWriter_t4027217640 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.HttpUtility::ParseQueryString(System.String)
extern "C"  NameValueCollection_t3047564564 * HttpUtility_ParseQueryString_m724220095 (Il2CppObject * __this /* static, unused */, String_t* ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.HttpUtility::ParseQueryString(System.String,System.Text.Encoding)
extern "C"  NameValueCollection_t3047564564 * HttpUtility_ParseQueryString_m810400730 (Il2CppObject * __this /* static, unused */, String_t* ___query0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlDecode(System.String)
extern "C"  String_t* HttpUtility_UrlDecode_m340569391 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlDecode(System.String,System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlDecode_m876395372 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlDecode(System.Byte[],System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlDecode_m2824275481 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlDecode(System.Byte[],System.Int32,System.Int32,System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlDecode_m199721717 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, int32_t ___count2, Encoding_t663144255 * ___encoding3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlDecodeToBytes(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* HttpUtility_UrlDecodeToBytes_m2945922809 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlDecodeToBytes(System.String)
extern "C"  ByteU5BU5D_t3397334013* HttpUtility_UrlDecodeToBytes_m3802116392 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlDecodeToBytes(System.String,System.Text.Encoding)
extern "C"  ByteU5BU5D_t3397334013* HttpUtility_UrlDecodeToBytes_m21403199 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlDecodeToBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* HttpUtility_UrlDecodeToBytes_m3039387685 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlEncode(System.Byte[])
extern "C"  String_t* HttpUtility_UrlEncode_m419519002 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlEncode(System.String)
extern "C"  String_t* HttpUtility_UrlEncode_m3964975213 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlEncode(System.String,System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlEncode_m1357747480 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlEncode(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* HttpUtility_UrlEncode_m1079875492 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlEncodeToBytes(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* HttpUtility_UrlEncodeToBytes_m2444649039 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlEncodeToBytes(System.String)
extern "C"  ByteU5BU5D_t3397334013* HttpUtility_UrlEncodeToBytes_m3179188356 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlEncodeToBytes(System.String,System.Text.Encoding)
extern "C"  ByteU5BU5D_t3397334013* HttpUtility_UrlEncodeToBytes_m3060995969 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlEncodeToBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* HttpUtility_UrlEncodeToBytes_m4059221443 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlEncodeUnicode(System.String)
extern "C"  String_t* HttpUtility_UrlEncodeUnicode_m1501171146 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlEncodeUnicodeToBytes(System.String)
extern "C"  ByteU5BU5D_t3397334013* HttpUtility_UrlEncodeUnicodeToBytes_m2482577425 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlPathEncode(System.String)
extern "C"  String_t* HttpUtility_UrlPathEncode_m2840430154 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::.cctor()
extern "C"  void HttpUtility__cctor_m3695680974 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
