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

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t3823629320;
// System.IO.Stream
struct Stream_t3255436806;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1197680765;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1951404513;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_System_Security_Cryptography_X509Certificat1197680765.h"
#include "System_System_Net_HttpWebRequest1951404513.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C"  void HttpsClientStream__ctor_m3407922777 (HttpsClientStream_t3823629320 * __this, Stream_t3255436806 * ___stream0, X509CertificateCollection_t1197680765 * ___clientCertificates1, HttpWebRequest_t1951404513 * ___request2, ByteU5BU5D_t3397334013* ___buffer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C"  bool HttpsClientStream_get_TrustFailure_m1980919191 (HttpsClientStream_t3823629320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool HttpsClientStream_RaiseServerCertificateValidation_m3356770426 (HttpsClientStream_t3823629320 * __this, X509Certificate_t283079845 * ___certificate0, Int32U5BU5D_t3030399641* ___certificateErrors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t283079845 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3176353714 (Il2CppObject * __this /* static, unused */, X509CertificateCollection_t1197680765 * ___clientCerts0, X509Certificate_t283079845 * ___serverCertificate1, String_t* ___targetHost2, X509CertificateCollection_t1197680765 * ___serverRequestedCertificates3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C"  AsymmetricAlgorithm_t784058677 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m4293802471 (Il2CppObject * __this /* static, unused */, X509Certificate_t283079845 * ___certificate0, String_t* ___targetHost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
