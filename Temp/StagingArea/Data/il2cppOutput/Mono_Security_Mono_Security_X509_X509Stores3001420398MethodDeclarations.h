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

// Mono.Security.X509.X509Stores
struct X509Stores_t3001420398;
// System.String
struct String_t;
// Mono.Security.X509.X509Store
struct X509Store_t4028973563;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Security.X509.X509Stores::.ctor(System.String)
extern "C"  void X509Stores__ctor_m2453291421 (X509Stores_t3001420398 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_TrustedRoot()
extern "C"  X509Store_t4028973563 * X509Stores_get_TrustedRoot_m3412716694 (X509Stores_t3001420398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::Open(System.String,System.Boolean)
extern "C"  X509Store_t4028973563 * X509Stores_Open_m3570436469 (X509Stores_t3001420398 * __this, String_t* ___storeName0, bool ___create1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
