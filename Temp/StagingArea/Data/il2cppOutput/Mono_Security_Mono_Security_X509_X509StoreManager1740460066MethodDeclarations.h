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
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3592472866;

#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_CurrentUser()
extern "C"  X509Stores_t3001420398 * X509StoreManager_get_CurrentUser_m569194374 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_LocalMachine()
extern "C"  X509Stores_t3001420398 * X509StoreManager_get_LocalMachine_m2451390246 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_TrustedRootCertificates()
extern "C"  X509CertificateCollection_t3592472866 * X509StoreManager_get_TrustedRootCertificates_m122138510 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
