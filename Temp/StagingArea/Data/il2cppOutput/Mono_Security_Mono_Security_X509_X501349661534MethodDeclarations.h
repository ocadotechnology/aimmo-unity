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

// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t924533536;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// Mono.Security.X509.X520/AttributeTypeAndValue
struct AttributeTypeAndValue_t2507749993;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN1924533535.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void Mono.Security.X509.X501::.cctor()
extern "C"  void X501__cctor_m2610532554 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern "C"  String_t* X501_ToString_m4145210560 (Il2CppObject * __this /* static, unused */, ASN1_t924533536 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
extern "C"  String_t* X501_ToString_m3328169518 (Il2CppObject * __this /* static, unused */, ASN1_t924533536 * ___seq0, bool ___reversed1, String_t* ___separator2, bool ___quotes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
extern "C"  void X501_AppendEntry_m768611426 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___sb0, ASN1_t924533536 * ___entry1, bool ___quotes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X520/AttributeTypeAndValue Mono.Security.X509.X501::GetAttributeFromOid(System.String)
extern "C"  AttributeTypeAndValue_t2507749993 * X501_GetAttributeFromOid_m1914504007 (Il2CppObject * __this /* static, unused */, String_t* ___attributeType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X501::IsOid(System.String)
extern "C"  bool X501_IsOid_m2844516361 (Il2CppObject * __this /* static, unused */, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X520/AttributeTypeAndValue Mono.Security.X509.X501::ReadAttribute(System.String,System.Int32&)
extern "C"  AttributeTypeAndValue_t2507749993 * X501_ReadAttribute_m781618640 (Il2CppObject * __this /* static, unused */, String_t* ___value0, int32_t* ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X501::IsHex(System.Char)
extern "C"  bool X501_IsHex_m4169247279 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ReadHex(System.String,System.Int32&)
extern "C"  String_t* X501_ReadHex_m2434678854 (Il2CppObject * __this /* static, unused */, String_t* ___value0, int32_t* ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X501::ReadEscaped(System.Text.StringBuilder,System.String,System.Int32)
extern "C"  int32_t X501_ReadEscaped_m2572645789 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___sb0, String_t* ___value1, int32_t ___pos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X501::ReadQuoted(System.Text.StringBuilder,System.String,System.Int32)
extern "C"  int32_t X501_ReadQuoted_m909319810 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___sb0, String_t* ___value1, int32_t ___pos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ReadValue(System.String,System.Int32&)
extern "C"  String_t* X501_ReadValue_m1012358638 (Il2CppObject * __this /* static, unused */, String_t* ___value0, int32_t* ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X501::FromString(System.String)
extern "C"  ASN1_t924533536 * X501_FromString_m3884319125 (Il2CppObject * __this /* static, unused */, String_t* ___rdn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
