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

// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t204724213;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t4056456767;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificat4056456767.h"
#include "System_System_Security_Authentication_SslProtocols894678499.h"
#include "System_System_Net_Security_RemoteCertificateValida2756269959.h"

// System.Void WebSocketSharp.Net.ServerSslConfiguration::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  void ServerSslConfiguration__ctor_m3285374220 (ServerSslConfiguration_t204724213 * __this, X509Certificate2_t4056456767 * ___serverCertificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ServerSslConfiguration::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean)
extern "C"  void ServerSslConfiguration__ctor_m695921742 (ServerSslConfiguration_t204724213 * __this, X509Certificate2_t4056456767 * ___serverCertificate0, bool ___clientCertificateRequired1, int32_t ___enabledSslProtocols2, bool ___checkCertificateRevocation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.ServerSslConfiguration::get_ClientCertificateRequired()
extern "C"  bool ServerSslConfiguration_get_ClientCertificateRequired_m4281111120 (ServerSslConfiguration_t204724213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ServerSslConfiguration::set_ClientCertificateRequired(System.Boolean)
extern "C"  void ServerSslConfiguration_set_ClientCertificateRequired_m1487916541 (ServerSslConfiguration_t204724213 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback WebSocketSharp.Net.ServerSslConfiguration::get_ClientCertificateValidationCallback()
extern "C"  RemoteCertificateValidationCallback_t2756269959 * ServerSslConfiguration_get_ClientCertificateValidationCallback_m2685361775 (ServerSslConfiguration_t204724213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ServerSslConfiguration::set_ClientCertificateValidationCallback(System.Net.Security.RemoteCertificateValidationCallback)
extern "C"  void ServerSslConfiguration_set_ClientCertificateValidationCallback_m3892574290 (ServerSslConfiguration_t204724213 * __this, RemoteCertificateValidationCallback_t2756269959 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 WebSocketSharp.Net.ServerSslConfiguration::get_ServerCertificate()
extern "C"  X509Certificate2_t4056456767 * ServerSslConfiguration_get_ServerCertificate_m1181916162 (ServerSslConfiguration_t204724213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ServerSslConfiguration::set_ServerCertificate(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  void ServerSslConfiguration_set_ServerCertificate_m2911878571 (ServerSslConfiguration_t204724213 * __this, X509Certificate2_t4056456767 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
