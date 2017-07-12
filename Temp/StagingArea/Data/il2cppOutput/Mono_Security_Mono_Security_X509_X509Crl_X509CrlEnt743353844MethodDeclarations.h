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

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t743353844;
// Mono.Security.ASN1
struct ASN1_t924533536;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1640144840;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN1924533535.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C"  void X509CrlEntry__ctor_m3156488776 (X509CrlEntry_t743353844 * __this, ASN1_t924533536 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C"  ByteU5BU5D_t3397334013* X509CrlEntry_get_SerialNumber_m3603416806 (X509CrlEntry_t743353844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C"  DateTime_t693205669  X509CrlEntry_get_RevocationDate_m1257876856 (X509CrlEntry_t743353844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C"  X509ExtensionCollection_t1640144840 * X509CrlEntry_get_Extensions_m79989256 (X509CrlEntry_t743353844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
