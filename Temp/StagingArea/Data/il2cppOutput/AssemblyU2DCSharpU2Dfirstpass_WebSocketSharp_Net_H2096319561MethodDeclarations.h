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

// WebSocketSharp.Net.HttpHeaderInfo
struct HttpHeaderInfo_t2096319561;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H1518115223.h"

// System.Void WebSocketSharp.Net.HttpHeaderInfo::.ctor(System.String,WebSocketSharp.Net.HttpHeaderType)
extern "C"  void HttpHeaderInfo__ctor_m1894990865 (HttpHeaderInfo_t2096319561 * __this, String_t* ___name0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::get_IsMultiValueInRequest()
extern "C"  bool HttpHeaderInfo_get_IsMultiValueInRequest_m3207365013 (HttpHeaderInfo_t2096319561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::get_IsMultiValueInResponse()
extern "C"  bool HttpHeaderInfo_get_IsMultiValueInResponse_m1528304699 (HttpHeaderInfo_t2096319561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::get_IsRequest()
extern "C"  bool HttpHeaderInfo_get_IsRequest_m4268247512 (HttpHeaderInfo_t2096319561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::get_IsResponse()
extern "C"  bool HttpHeaderInfo_get_IsResponse_m2385122710 (HttpHeaderInfo_t2096319561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpHeaderInfo::get_Name()
extern "C"  String_t* HttpHeaderInfo_get_Name_m489635645 (HttpHeaderInfo_t2096319561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpHeaderType WebSocketSharp.Net.HttpHeaderInfo::get_Type()
extern "C"  int32_t HttpHeaderInfo_get_Type_m4246569017 (HttpHeaderInfo_t2096319561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::IsMultiValue(System.Boolean)
extern "C"  bool HttpHeaderInfo_IsMultiValue_m2007244821 (HttpHeaderInfo_t2096319561 * __this, bool ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::IsRestricted(System.Boolean)
extern "C"  bool HttpHeaderInfo_IsRestricted_m1938932692 (HttpHeaderInfo_t2096319561 * __this, bool ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
