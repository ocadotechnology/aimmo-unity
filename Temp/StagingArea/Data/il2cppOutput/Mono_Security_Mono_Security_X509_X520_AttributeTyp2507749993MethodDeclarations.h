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

// Mono.Security.X509.X520/AttributeTypeAndValue
struct AttributeTypeAndValue_t2507749993;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t924533536;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32)
extern "C"  void AttributeTypeAndValue__ctor_m770375930 (AttributeTypeAndValue_t2507749993 * __this, String_t* ___oid0, int32_t ___upperBound1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32,System.Byte)
extern "C"  void AttributeTypeAndValue__ctor_m3114985241 (AttributeTypeAndValue_t2507749993 * __this, String_t* ___oid0, int32_t ___upperBound1, uint8_t ___encoding2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::set_Value(System.String)
extern "C"  void AttributeTypeAndValue_set_Value_m2026581955 (AttributeTypeAndValue_t2507749993 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::GetASN1(System.Byte)
extern "C"  ASN1_t924533536 * AttributeTypeAndValue_GetASN1_m4092791254 (AttributeTypeAndValue_t2507749993 * __this, uint8_t ___encoding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::GetASN1()
extern "C"  ASN1_t924533536 * AttributeTypeAndValue_GetASN1_m2956679587 (AttributeTypeAndValue_t2507749993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.X509.X520/AttributeTypeAndValue::SelectBestEncoding()
extern "C"  uint8_t AttributeTypeAndValue_SelectBestEncoding_m2034585884 (AttributeTypeAndValue_t2507749993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
