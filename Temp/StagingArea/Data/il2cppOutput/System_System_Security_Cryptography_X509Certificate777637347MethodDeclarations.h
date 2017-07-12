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

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t777637347;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t3452126517;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t830390908;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t4056456767;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t1617430119;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1108969367;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t528874471;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl
struct X509Crl_t1699034837;
// Mono.Security.X509.X509Extension
struct X509Extension_t1439760128;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t743353844;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificat4056456767.h"
#include "System_System_Security_Cryptography_X509Certificate480677120.h"
#include "System_System_Security_Cryptography_X509Certificat1108969367.h"
#include "System_System_Security_Cryptography_X509Certificate528874471.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAlg784058677.h"
#include "Mono_Security_Mono_Security_X509_X509Crl1699034837.h"
#include "Mono_Security_Mono_Security_X509_X509Extension1439760127.h"
#include "Mono_Security_Mono_Security_X509_X509Crl_X509CrlEnt743353844.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
extern "C"  void X509Chain__ctor_m2242540866 (X509Chain_t777637347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
extern "C"  void X509Chain__ctor_m3420342903 (X509Chain_t777637347 * __this, bool ___useMachineContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.cctor()
extern "C"  void X509Chain__cctor_m826131835 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::get_ChainPolicy()
extern "C"  X509ChainPolicy_t3452126517 * X509Chain_get_ChainPolicy_m732957765 (X509Chain_t777637347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::get_ChainStatus()
extern "C"  X509ChainStatusU5BU5D_t830390908* X509Chain_get_ChainStatus_m1863492671 (X509Chain_t777637347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::Build(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509Chain_Build_m2341271288 (X509Chain_t777637347 * __this, X509Certificate2_t4056456767 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Reset()
extern "C"  void X509Chain_Reset_m3078515705 (X509Chain_t777637347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_Roots()
extern "C"  X509Store_t1617430119 * X509Chain_get_Roots_m4104324715 (X509Chain_t777637347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateAuthorities()
extern "C"  X509Store_t1617430119 * X509Chain_get_CertificateAuthorities_m3325663784 (X509Chain_t777637347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateCollection()
extern "C"  X509Certificate2Collection_t1108969367 * X509Chain_get_CertificateCollection_m324631835 (X509Chain_t777637347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::BuildChainFrom(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  int32_t X509Chain_BuildChainFrom_m4135025663 (X509Chain_t777637347 * __this, X509Certificate2_t4056456767 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::SelectBestFromCollection(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C"  X509Certificate2_t4056456767 * X509Chain_SelectBestFromCollection_m2712190957 (X509Chain_t777637347 * __this, X509Certificate2_t4056456767 * ___child0, X509Certificate2Collection_t1108969367 * ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::FindParent(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  X509Certificate2_t4056456767 * X509Chain_FindParent_m404663796 (X509Chain_t777637347 * __this, X509Certificate2_t4056456767 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsChainComplete(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509Chain_IsChainComplete_m3393657586 (X509Chain_t777637347 * __this, X509Certificate2_t4056456767 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSelfIssued(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509Chain_IsSelfIssued_m2009755967 (X509Chain_t777637347 * __this, X509Certificate2_t4056456767 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ValidateChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  void X509Chain_ValidateChain_m1002648716 (X509Chain_t777637347 * __this, int32_t ___flag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Process(System.Int32)
extern "C"  void X509Chain_Process_m2508784250 (X509Chain_t777637347 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::PrepareForNextCertificate(System.Int32)
extern "C"  void X509Chain_PrepareForNextCertificate_m1967807089 (X509Chain_t777637347 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::WrapUp()
extern "C"  void X509Chain_WrapUp_m1072032285 (X509Chain_t777637347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ProcessCertificateExtensions(System.Security.Cryptography.X509Certificates.X509ChainElement)
extern "C"  void X509Chain_ProcessCertificateExtensions_m4191338420 (X509Chain_t777637347 * __this, X509ChainElement_t528874471 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSignedWith(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  bool X509Chain_IsSignedWith_m292245392 (X509Chain_t777637347 * __this, X509Certificate2_t4056456767 * ___signed0, AsymmetricAlgorithm_t784058677 * ___pubkey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetSubjectKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  String_t* X509Chain_GetSubjectKeyIdentifier_m4232927227 (X509Chain_t777637347 * __this, X509Certificate2_t4056456767 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  String_t* X509Chain_GetAuthorityKeyIdentifier_m2607407678 (X509Chain_t777637347 * __this, X509Certificate2_t4056456767 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Crl)
extern "C"  String_t* X509Chain_GetAuthorityKeyIdentifier_m3712667872 (X509Chain_t777637347 * __this, X509Crl_t1699034837 * ___crl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension)
extern "C"  String_t* X509Chain_GetAuthorityKeyIdentifier_m4246284366 (X509Chain_t777637347 * __this, X509Extension_t1439760128 * ___ext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocationOnChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  void X509Chain_CheckRevocationOnChain_m2441901351 (X509Chain_t777637347 * __this, int32_t ___flag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Int32,System.Boolean)
extern "C"  int32_t X509Chain_CheckRevocation_m2480313486 (X509Chain_t777637347 * __this, X509Certificate2_t4056456767 * ___certificate0, int32_t ___ca1, bool ___online2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2,System.Boolean)
extern "C"  int32_t X509Chain_CheckRevocation_m2230738771 (X509Chain_t777637347 * __this, X509Certificate2_t4056456767 * ___certificate0, X509Certificate2_t4056456767 * ___ca_cert1, bool ___online2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl System.Security.Cryptography.X509Certificates.X509Chain::FindCrl(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  X509Crl_t1699034837 * X509Chain_FindCrl_m544748869 (X509Chain_t777637347 * __this, X509Certificate2_t4056456767 * ___caCertificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlExtensions(Mono.Security.X509.X509Crl)
extern "C"  bool X509Chain_ProcessCrlExtensions_m1682068042 (X509Chain_t777637347 * __this, X509Crl_t1699034837 * ___crl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlEntryExtensions(Mono.Security.X509.X509Crl/X509CrlEntry)
extern "C"  bool X509Chain_ProcessCrlEntryExtensions_m919945006 (X509Chain_t777637347 * __this, X509CrlEntry_t743353844 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
