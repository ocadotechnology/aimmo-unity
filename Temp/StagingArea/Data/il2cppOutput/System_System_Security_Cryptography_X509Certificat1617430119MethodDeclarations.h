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

// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t1617430119;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1108969367;
// Mono.Security.X509.X509Stores
struct X509Stores_t3001420398;
// Mono.Security.X509.X509Store
struct X509Store_t4028973563;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificat2183514610.h"
#include "System_System_Security_Cryptography_X509Certificat1570828128.h"
#include "System_System_Security_Cryptography_X509Certificat2370524385.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Store::.ctor(System.Security.Cryptography.X509Certificates.StoreName,System.Security.Cryptography.X509Certificates.StoreLocation)
extern "C"  void X509Store__ctor_m1573680316 (X509Store_t1617430119 * __this, int32_t ___storeName0, int32_t ___storeLocation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::get_Certificates()
extern "C"  X509Certificate2Collection_t1108969367 * X509Store_get_Certificates_m329642048 (X509Store_t1617430119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Stores System.Security.Cryptography.X509Certificates.X509Store::get_Factory()
extern "C"  X509Stores_t3001420398 * X509Store_get_Factory_m428109475 (X509Store_t1617430119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::get_Store()
extern "C"  X509Store_t4028973563 * X509Store_get_Store_m3940520391 (X509Store_t1617430119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Close()
extern "C"  void X509Store_Close_m2412711366 (X509Store_t1617430119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Open(System.Security.Cryptography.X509Certificates.OpenFlags)
extern "C"  void X509Store_Open_m3416485546 (X509Store_t1617430119 * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
