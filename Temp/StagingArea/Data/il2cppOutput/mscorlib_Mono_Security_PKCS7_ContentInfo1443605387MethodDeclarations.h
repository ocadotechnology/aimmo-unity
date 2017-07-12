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

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1443605387;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Mono.Security.ASN1
struct ASN1_t924533535;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_Mono_Security_ASN1924533535.h"

// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
extern "C"  void ContentInfo__ctor_m844369157 (ContentInfo_t1443605387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
extern "C"  void ContentInfo__ctor_m1391613763 (ContentInfo_t1443605387 * __this, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
extern "C"  void ContentInfo__ctor_m2074180116 (ContentInfo_t1443605387 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
extern "C"  void ContentInfo__ctor_m3517696905 (ContentInfo_t1443605387 * __this, ASN1_t924533535 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_ASN1()
extern "C"  ASN1_t924533535 * ContentInfo_get_ASN1_m3249778150 (ContentInfo_t1443605387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
extern "C"  ASN1_t924533535 * ContentInfo_get_Content_m3936257154 (ContentInfo_t1443605387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
extern "C"  void ContentInfo_set_Content_m899108905 (ContentInfo_t1443605387 * __this, ASN1_t924533535 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
extern "C"  String_t* ContentInfo_get_ContentType_m1698383174 (ContentInfo_t1443605387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_ContentType(System.String)
extern "C"  void ContentInfo_set_ContentType_m1091544239 (ContentInfo_t1443605387 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::GetASN1()
extern "C"  ASN1_t924533535 * ContentInfo_GetASN1_m2362464973 (ContentInfo_t1443605387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
