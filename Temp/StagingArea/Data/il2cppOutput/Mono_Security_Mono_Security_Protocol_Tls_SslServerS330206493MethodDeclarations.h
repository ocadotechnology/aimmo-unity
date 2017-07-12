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

// Mono.Security.Protocol.Tls.SslServerStream
struct SslServerStream_t330206493;
// System.IO.Stream
struct Stream_t3255436806;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t989458295;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t1663566523;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1197680765;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1782558132;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3592472866;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityPr155967584.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Certificat989458295.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKe1663566523.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Security_Cryptography_X509Certificat1197680765.h"
#include "mscorlib_System_String2029220233.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3592472865.h"

// System.Void Mono.Security.Protocol.Tls.SslServerStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C"  void SslServerStream__ctor_m70523818 (SslServerStream_t330206493 * __this, Stream_t3255436806 * ___stream0, X509Certificate_t283079845 * ___serverCertificate1, bool ___clientCertificateRequired2, bool ___ownsStream3, int32_t ___securityProtocolType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Boolean,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C"  void SslServerStream__ctor_m551063039 (SslServerStream_t330206493 * __this, Stream_t3255436806 * ___stream0, X509Certificate_t283079845 * ___serverCertificate1, bool ___clientCertificateRequired2, bool ___requestClientCertificate3, bool ___ownsStream4, int32_t ___securityProtocolType5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::set_ClientCertValidationDelegate(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C"  void SslServerStream_set_ClientCertValidationDelegate_m824229688 (SslServerStream_t330206493 * __this, CertificateValidationCallback_t989458295 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslServerStream::get_PrivateKeyCertSelectionDelegate()
extern "C"  PrivateKeySelectionCallback_t1663566523 * SslServerStream_get_PrivateKeyCertSelectionDelegate_m419755157 (SslServerStream_t330206493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C"  void SslServerStream_set_PrivateKeyCertSelectionDelegate_m249938814 (SslServerStream_t330206493 * __this, PrivateKeySelectionCallback_t1663566523 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::Finalize()
extern "C"  void SslServerStream_Finalize_m4110091455 (SslServerStream_t330206493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::Dispose(System.Boolean)
extern "C"  void SslServerStream_Dispose_m1476242645 (SslServerStream_t330206493 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslServerStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslServerStream_OnBeginNegotiateHandshake_m1801369542 (SslServerStream_t330206493 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
extern "C"  void SslServerStream_OnNegotiateHandshakeCallback_m3573325321 (SslServerStream_t330206493 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslServerStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t283079845 * SslServerStream_OnLocalCertificateSelection_m3144752145 (SslServerStream_t330206493 * __this, X509CertificateCollection_t1197680765 * ___clientCertificates0, X509Certificate_t283079845 * ___serverCertificate1, String_t* ___targetHost2, X509CertificateCollection_t1197680765 * ___serverRequestedCertificates3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslServerStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool SslServerStream_OnRemoteCertificateValidation_m136546535 (SslServerStream_t330206493 * __this, X509Certificate_t283079845 * ___certificate0, Int32U5BU5D_t3030399641* ___errors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslServerStream::get_HaveRemoteValidation2Callback()
extern "C"  bool SslServerStream_get_HaveRemoteValidation2Callback_m428899026 (SslServerStream_t330206493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslServerStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C"  ValidationResult_t1782558132 * SslServerStream_OnRemoteCertificateValidation2_m992689105 (SslServerStream_t330206493 * __this, X509CertificateCollection_t3592472866 * ___collection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslServerStream::RaiseClientCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool SslServerStream_RaiseClientCertificateValidation_m4116432651 (SslServerStream_t330206493 * __this, X509Certificate_t283079845 * ___certificate0, Int32U5BU5D_t3030399641* ___certificateErrors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslServerStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C"  AsymmetricAlgorithm_t784058677 * SslServerStream_OnLocalPrivateKeySelection_m1937205958 (SslServerStream_t330206493 * __this, X509Certificate_t283079845 * ___certificate0, String_t* ___targetHost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslServerStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C"  AsymmetricAlgorithm_t784058677 * SslServerStream_RaisePrivateKeySelection_m3157931598 (SslServerStream_t330206493 * __this, X509Certificate_t283079845 * ___certificate0, String_t* ___targetHost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
