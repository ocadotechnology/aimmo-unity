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

// System.Net.Security.SslStream
struct SslStream_t1853163792;
// System.IO.Stream
struct Stream_t3255436806;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t3696771181;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1197680765;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_System_Net_Security_RemoteCertificateValida2756269959.h"
#include "System_System_Net_Security_LocalCertificateSelecti3696771181.h"
#include "System_System_Security_Cryptography_X509Certificat1197680765.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Security_Authentication_SslProtocols894678499.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityPr155967584.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback)
extern "C"  void SslStream__ctor_m3611677277 (SslStream_t1853163792 * __this, Stream_t3255436806 * ___innerStream0, bool ___leaveStreamOpen1, RemoteCertificateValidationCallback_t2756269959 * ___certValidationCallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
extern "C"  void SslStream__ctor_m2229021900 (SslStream_t1853163792 * __this, Stream_t3255436806 * ___innerStream0, bool ___leaveStreamOpen1, RemoteCertificateValidationCallback_t2756269959 * ___certValidationCallback2, LocalCertificateSelectionCallback_t3696771181 * ___certSelectionCallback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanRead()
extern "C"  bool SslStream_get_CanRead_m3426417663 (SslStream_t1853163792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanSeek()
extern "C"  bool SslStream_get_CanSeek_m1679024821 (SslStream_t1853163792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanWrite()
extern "C"  bool SslStream_get_CanWrite_m1017625670 (SslStream_t1853163792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Length()
extern "C"  int64_t SslStream_get_Length_m699828492 (SslStream_t1853163792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Position()
extern "C"  int64_t SslStream_get_Position_m1728202797 (SslStream_t1853163792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::set_Position(System.Int64)
extern "C"  void SslStream_set_Position_m275805728 (SslStream_t1853163792 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsAuthenticated()
extern "C"  bool SslStream_get_IsAuthenticated_m960250388 (SslStream_t1853163792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::OnCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t283079845 * SslStream_OnCertificateSelection_m1047859653 (SslStream_t1853163792 * __this, X509CertificateCollection_t1197680765 * ___clientCerts0, X509Certificate_t283079845 * ___serverCert1, String_t* ___targetHost2, X509CertificateCollection_t1197680765 * ___serverRequestedCerts3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslStream_BeginAuthenticateAsClient_m2867913112 (SslStream_t1853163792 * __this, String_t* ___targetHost0, X509CertificateCollection_t1197680765 * ___clientCertificates1, int32_t ___sslProtocolType2, bool ___checkCertificateRevocation3, AsyncCallback_t163412349 * ___asyncCallback4, Il2CppObject * ___asyncState5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslStream_BeginRead_m1539657028 (SslStream_t1853163792 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___asyncCallback3, Il2CppObject * ___asyncState4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslStream_BeginAuthenticateAsServer_m503696975 (SslStream_t1853163792 * __this, X509Certificate_t283079845 * ___serverCertificate0, bool ___clientCertificateRequired1, int32_t ___sslProtocolType2, bool ___checkCertificateRevocation3, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___asyncState5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType System.Net.Security.SslStream::GetMonoSslProtocol(System.Security.Authentication.SslProtocols)
extern "C"  int32_t SslStream_GetMonoSslProtocol_m2874631918 (SslStream_t1853163792 * __this, int32_t ___ms0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslStream_BeginWrite_m393680249 (SslStream_t1853163792 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___asyncCallback3, Il2CppObject * ___asyncState4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::AuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
extern "C"  void SslStream_AuthenticateAsClient_m2196387551 (SslStream_t1853163792 * __this, String_t* ___targetHost0, X509CertificateCollection_t1197680765 * ___clientCertificates1, int32_t ___sslProtocolType2, bool ___checkCertificateRevocation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean)
extern "C"  void SslStream_AuthenticateAsServer_m284863348 (SslStream_t1853163792 * __this, X509Certificate_t283079845 * ___serverCertificate0, bool ___clientCertificateRequired1, int32_t ___sslProtocolType2, bool ___checkCertificateRevocation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Dispose(System.Boolean)
extern "C"  void SslStream_Dispose_m2889656292 (SslStream_t1853163792 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndAuthenticateAsClient(System.IAsyncResult)
extern "C"  void SslStream_EndAuthenticateAsClient_m2927961136 (SslStream_t1853163792 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndAuthenticateAsServer(System.IAsyncResult)
extern "C"  void SslStream_EndAuthenticateAsServer_m1547089204 (SslStream_t1853163792 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::EndRead(System.IAsyncResult)
extern "C"  int32_t SslStream_EndRead_m2850086626 (SslStream_t1853163792 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndWrite(System.IAsyncResult)
extern "C"  void SslStream_EndWrite_m2132566783 (SslStream_t1853163792 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Flush()
extern "C"  void SslStream_Flush_m2636068138 (SslStream_t1853163792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t SslStream_Read_m3532408023 (SslStream_t1853163792 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t SslStream_Seek_m2078978204 (SslStream_t1853163792 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::SetLength(System.Int64)
extern "C"  void SslStream_SetLength_m2390814652 (SslStream_t1853163792 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void SslStream_Write_m2514765412 (SslStream_t1853163792 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::CheckConnectionAuthenticated()
extern "C"  void SslStream_CheckConnectionAuthenticated_m3896508241 (SslStream_t1853163792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
