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

// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Object
struct Il2CppObject;
// System.UriParser
struct UriParser_t1012511323;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "System_System_UriKind1128731744.h"
#include "System_System_Uri19570940.h"
#include "System_System_UriHostNameType2148127109.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_UriPartial112107391.h"

// System.Void System.Uri::.ctor(System.String)
extern "C"  void Uri__ctor_m3927533881 (Uri_t19570940 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Uri__ctor_m1764202390 (Uri_t19570940 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.UriKind)
extern "C"  void Uri__ctor_m1027317340 (Uri_t19570940 * __this, String_t* ___uriString0, int32_t ___uriKind1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.UriKind,System.Boolean&)
extern "C"  void Uri__ctor_m3448041125 (Uri_t19570940 * __this, String_t* ___uriString0, int32_t ___uriKind1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
extern "C"  void Uri__ctor_m371762263 (Uri_t19570940 * __this, Uri_t19570940 * ___baseUri0, Uri_t19570940 * ___relativeUri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.Boolean)
extern "C"  void Uri__ctor_m3854873816 (Uri_t19570940 * __this, String_t* ___uriString0, bool ___dontEscape1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.cctor()
extern "C"  void Uri__cctor_m1067120252 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m214698768 (Uri_t19570940 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Merge(System.Uri,System.String)
extern "C"  void Uri_Merge_m2181117222 (Uri_t19570940 * __this, Uri_t19570940 * ___baseUri0, String_t* ___relativeUri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsolutePath()
extern "C"  String_t* Uri_get_AbsolutePath_m802771013 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsoluteUri()
extern "C"  String_t* Uri_get_AbsoluteUri_m2120317928 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Authority()
extern "C"  String_t* Uri_get_Authority_m936382664 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Fragment()
extern "C"  String_t* Uri_get_Fragment_m769951107 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Host()
extern "C"  String_t* Uri_get_Host_m2492204157 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::get_HostNameType()
extern "C"  int32_t Uri_get_HostNameType_m3115129436 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsFile()
extern "C"  bool Uri_get_IsFile_m3814355526 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsLoopback()
extern "C"  bool Uri_get_IsLoopback_m2113378011 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsUnc()
extern "C"  bool Uri_get_IsUnc_m2111738174 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_PathAndQuery()
extern "C"  String_t* Uri_get_PathAndQuery_m2303438487 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::get_Port()
extern "C"  int32_t Uri_get_Port_m834512465 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Query()
extern "C"  String_t* Uri_get_Query_m2101975817 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Scheme()
extern "C"  String_t* Uri_get_Scheme_m55908894 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Uri::get_Segments()
extern "C"  StringU5BU5D_t1642385972* Uri_get_Segments_m1593503637 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_DnsSafeHost()
extern "C"  String_t* Uri_get_DnsSafeHost_m795496231 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C"  bool Uri_get_IsAbsoluteUri_m4123650233 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_OriginalString()
extern "C"  String_t* Uri_get_OriginalString_m2475338851 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern "C"  int32_t Uri_CheckHostName_m1287220449 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsIPv4Address(System.String)
extern "C"  bool Uri_IsIPv4Address_m2432278818 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsDomainAddress(System.String)
extern "C"  bool Uri_IsDomainAddress_m2274973493 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern "C"  bool Uri_CheckSchemeName_m3372242109 (Il2CppObject * __this /* static, unused */, String_t* ___schemeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsAlpha(System.Char)
extern "C"  bool Uri_IsAlpha_m558908574 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::Equals(System.Object)
extern "C"  bool Uri_Equals_m3973746240 (Uri_t19570940 * __this, Il2CppObject * ___comparant0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::InternalEquals(System.Uri)
extern "C"  bool Uri_InternalEquals_m3793998582 (Uri_t19570940 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetHashCode()
extern "C"  int32_t Uri_GetHashCode_m1277616868 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetLeftPart(System.UriPartial)
extern "C"  String_t* Uri_GetLeftPart_m2731673534 (Uri_t19570940 * __this, int32_t ___part0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::FromHex(System.Char)
extern "C"  int32_t Uri_FromHex_m2384283021 (Il2CppObject * __this /* static, unused */, Il2CppChar ___digit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::HexEscape(System.Char)
extern "C"  String_t* Uri_HexEscape_m4163162129 (Il2CppObject * __this /* static, unused */, Il2CppChar ___character0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern "C"  bool Uri_IsHexDigit_m4245599548 (Il2CppObject * __this /* static, unused */, Il2CppChar ___digit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
extern "C"  bool Uri_IsHexEncoding_m2681830252 (Il2CppObject * __this /* static, unused */, String_t* ___pattern0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
extern "C"  void Uri_AppendQueryAndFragment_m2358658590 (Uri_t19570940 * __this, String_t** ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ToString()
extern "C"  String_t* Uri_ToString_m544968420 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String)
extern "C"  String_t* Uri_EscapeString_m1753508368 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C"  String_t* Uri_EscapeString_m3852329619 (Il2CppObject * __this /* static, unused */, String_t* ___str0, bool ___escapeReserved1, bool ___escapeHex2, bool ___escapeBrackets3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseUri(System.UriKind)
extern "C"  void Uri_ParseUri_m5711497 (Uri_t19570940 * __this, int32_t ___kind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String)
extern "C"  String_t* Uri_Unescape_m3356737110 (Uri_t19570940 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern "C"  String_t* Uri_Unescape_m3541958225 (Il2CppObject * __this /* static, unused */, String_t* ___str0, bool ___excludeSpecial1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern "C"  void Uri_ParseAsWindowsUNC_m1252728245 (Uri_t19570940 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern "C"  String_t* Uri_ParseAsWindowsAbsoluteFilePath_m1108586962 (Uri_t19570940 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern "C"  void Uri_ParseAsUnixAbsoluteFilePath_m999044698 (Uri_t19570940 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern "C"  void Uri_Parse_m138615641 (Uri_t19570940 * __this, int32_t ___kind0, String_t* ___uriString1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
extern "C"  String_t* Uri_ParseNoExceptions_m1151989845 (Uri_t19570940 * __this, int32_t ___kind0, String_t* ___uriString1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CompactEscaped(System.String)
extern "C"  bool Uri_CompactEscaped_m1050204715 (Il2CppObject * __this /* static, unused */, String_t* ___scheme0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Reduce(System.String,System.Boolean)
extern "C"  String_t* Uri_Reduce_m2577728307 (Il2CppObject * __this /* static, unused */, String_t* ___path0, bool ___compact_escaped1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
extern "C"  Il2CppChar Uri_HexUnescapeMultiByte_m25670899 (Il2CppObject * __this /* static, unused */, String_t* ___pattern0, int32_t* ___index1, Il2CppChar* ___surrogate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern "C"  String_t* Uri_GetSchemeDelimiter_m3479551962 (Il2CppObject * __this /* static, unused */, String_t* ___scheme0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetDefaultPort(System.String)
extern "C"  int32_t Uri_GetDefaultPort_m2114319579 (Il2CppObject * __this /* static, unused */, String_t* ___scheme0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern "C"  String_t* Uri_GetOpaqueWiseSchemeDelimiter_m3686606461 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern "C"  bool Uri_IsPredefinedScheme_m3823323378 (Il2CppObject * __this /* static, unused */, String_t* ___scheme0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.Uri::get_Parser()
extern "C"  UriParser_t1012511323 * Uri_get_Parser_m2250631932 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::TryCreate(System.String,System.UriKind,System.Uri&)
extern "C"  bool Uri_TryCreate_m16561530 (Il2CppObject * __this /* static, unused */, String_t* ___uriString0, int32_t ___uriKind1, Uri_t19570940 ** ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::EnsureAbsoluteUri()
extern "C"  void Uri_EnsureAbsoluteUri_m1892758054 (Uri_t19570940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C"  bool Uri_op_Equality_m110355127 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___u10, Uri_t19570940 * ___u21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern "C"  bool Uri_op_Inequality_m853767938 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___u10, Uri_t19570940 * ___u21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
