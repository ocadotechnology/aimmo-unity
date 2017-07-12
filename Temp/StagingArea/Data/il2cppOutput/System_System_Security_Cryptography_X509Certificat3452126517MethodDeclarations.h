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

// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t3452126517;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1108969367;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificat2166064554.h"
#include "System_System_Security_Cryptography_X509Certificat2065307963.h"
#include "System_System_Security_Cryptography_X509Certificat2169036324.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor()
extern "C"  void X509ChainPolicy__ctor_m1262497552 (X509ChainPolicy_t3452126517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_ExtraStore()
extern "C"  X509Certificate2Collection_t1108969367 * X509ChainPolicy_get_ExtraStore_m2890873777 (X509ChainPolicy_t3452126517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509RevocationFlag System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_RevocationFlag()
extern "C"  int32_t X509ChainPolicy_get_RevocationFlag_m2635879545 (X509ChainPolicy_t3452126517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509RevocationMode System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_RevocationMode()
extern "C"  int32_t X509ChainPolicy_get_RevocationMode_m3875602137 (X509ChainPolicy_t3452126517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::set_RevocationMode(System.Security.Cryptography.X509Certificates.X509RevocationMode)
extern "C"  void X509ChainPolicy_set_RevocationMode_m1123668238 (X509ChainPolicy_t3452126517 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509VerificationFlags System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_VerificationFlags()
extern "C"  int32_t X509ChainPolicy_get_VerificationFlags_m2677203157 (X509ChainPolicy_t3452126517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_VerificationTime()
extern "C"  DateTime_t693205669  X509ChainPolicy_get_VerificationTime_m4100358726 (X509ChainPolicy_t3452126517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::Reset()
extern "C"  void X509ChainPolicy_Reset_m430244129 (X509ChainPolicy_t3452126517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
