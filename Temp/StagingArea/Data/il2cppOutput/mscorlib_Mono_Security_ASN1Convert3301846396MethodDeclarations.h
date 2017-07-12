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

// Mono.Security.ASN1
struct ASN1_t924533535;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_Mono_Security_ASN1924533535.h"
#include "mscorlib_System_DateTime693205669.h"

// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromInt32(System.Int32)
extern "C"  ASN1_t924533535 * ASN1Convert_FromInt32_m1541043489 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromOid(System.String)
extern "C"  ASN1_t924533535 * ASN1Convert_FromOid_m3889963396 (Il2CppObject * __this /* static, unused */, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
extern "C"  int32_t ASN1Convert_ToInt32_m2828871616 (Il2CppObject * __this /* static, unused */, ASN1_t924533535 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
extern "C"  String_t* ASN1Convert_ToOid_m2695991795 (Il2CppObject * __this /* static, unused */, ASN1_t924533535 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
extern "C"  DateTime_t693205669  ASN1Convert_ToDateTime_m2613700036 (Il2CppObject * __this /* static, unused */, ASN1_t924533535 * ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
