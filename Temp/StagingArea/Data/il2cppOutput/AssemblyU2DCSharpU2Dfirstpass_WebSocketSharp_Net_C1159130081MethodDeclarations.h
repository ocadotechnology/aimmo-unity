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

// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_t1159130081;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1197680765;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t3696771181;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Security_Cryptography_X509Certificat1197680765.h"
#include "System_System_Security_Authentication_SslProtocols894678499.h"
#include "System_System_Net_Security_LocalCertificateSelecti3696771181.h"
#include "System_System_Net_Security_RemoteCertificateValida2756269959.h"

// System.Void WebSocketSharp.Net.ClientSslConfiguration::.ctor(System.String)
extern "C"  void ClientSslConfiguration__ctor_m3484439528 (ClientSslConfiguration_t1159130081 * __this, String_t* ___targetHost0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ClientSslConfiguration::.ctor(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
extern "C"  void ClientSslConfiguration__ctor_m4162514231 (ClientSslConfiguration_t1159130081 * __this, String_t* ___targetHost0, X509CertificateCollection_t1197680765 * ___clientCertificates1, int32_t ___enabledSslProtocols2, bool ___checkCertificateRevocation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection WebSocketSharp.Net.ClientSslConfiguration::get_ClientCertificates()
extern "C"  X509CertificateCollection_t1197680765 * ClientSslConfiguration_get_ClientCertificates_m87993971 (ClientSslConfiguration_t1159130081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ClientSslConfiguration::set_ClientCertificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  void ClientSslConfiguration_set_ClientCertificates_m2546217924 (ClientSslConfiguration_t1159130081 * __this, X509CertificateCollection_t1197680765 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.LocalCertificateSelectionCallback WebSocketSharp.Net.ClientSslConfiguration::get_ClientCertificateSelectionCallback()
extern "C"  LocalCertificateSelectionCallback_t3696771181 * ClientSslConfiguration_get_ClientCertificateSelectionCallback_m3146515760 (ClientSslConfiguration_t1159130081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ClientSslConfiguration::set_ClientCertificateSelectionCallback(System.Net.Security.LocalCertificateSelectionCallback)
extern "C"  void ClientSslConfiguration_set_ClientCertificateSelectionCallback_m4079688993 (ClientSslConfiguration_t1159130081 * __this, LocalCertificateSelectionCallback_t3696771181 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback WebSocketSharp.Net.ClientSslConfiguration::get_ServerCertificateValidationCallback()
extern "C"  RemoteCertificateValidationCallback_t2756269959 * ClientSslConfiguration_get_ServerCertificateValidationCallback_m67400815 (ClientSslConfiguration_t1159130081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ClientSslConfiguration::set_ServerCertificateValidationCallback(System.Net.Security.RemoteCertificateValidationCallback)
extern "C"  void ClientSslConfiguration_set_ServerCertificateValidationCallback_m1892372690 (ClientSslConfiguration_t1159130081 * __this, RemoteCertificateValidationCallback_t2756269959 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.ClientSslConfiguration::get_TargetHost()
extern "C"  String_t* ClientSslConfiguration_get_TargetHost_m1944328851 (ClientSslConfiguration_t1159130081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ClientSslConfiguration::set_TargetHost(System.String)
extern "C"  void ClientSslConfiguration_set_TargetHost_m3699299728 (ClientSslConfiguration_t1159130081 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
