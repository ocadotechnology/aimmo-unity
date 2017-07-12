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

// Mono.Security.X509.X509Chain
struct X509Chain_t1938971907;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3592472866;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051958;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3592472865.h"
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFl2843686920.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate324051957.h"

// System.Void Mono.Security.X509.X509Chain::.ctor()
extern "C"  void X509Chain__ctor_m3522797144 (X509Chain_t1938971907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C"  void X509Chain__ctor_m1113875360 (X509Chain_t1938971907 * __this, X509CertificateCollection_t3592472866 * ___chain0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::get_Status()
extern "C"  int32_t X509Chain_get_Status_m2726750609 (X509Chain_t1938971907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
extern "C"  X509CertificateCollection_t3592472866 * X509Chain_get_TrustAnchors_m930867182 (X509Chain_t1938971907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_Build_m175470596 (X509Chain_t1938971907 * __this, X509Certificate_t324051958 * ___leaf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsValid_m4184995162 (X509Chain_t1938971907 * __this, X509Certificate_t324051958 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
extern "C"  X509Certificate_t324051958 * X509Chain_FindCertificateParent_m3122224229 (X509Chain_t1938971907 * __this, X509Certificate_t324051958 * ___child0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
extern "C"  X509Certificate_t324051958 * X509Chain_FindCertificateRoot_m589250107 (X509Chain_t1938971907 * __this, X509Certificate_t324051958 * ___potentialRoot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsTrusted_m2834338719 (X509Chain_t1938971907 * __this, X509Certificate_t324051958 * ___potentialTrusted0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsParent_m2578316632 (X509Chain_t1938971907 * __this, X509Certificate_t324051958 * ___child0, X509Certificate_t324051958 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
