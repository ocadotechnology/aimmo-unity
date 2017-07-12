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

// WebSocketSharp.Net.EndPointListener
struct EndPointListener_t3937551933;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// System.String
struct String_t;
// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t204724213;
// System.Net.IPAddress
struct IPAddress_t1399971723;
// System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerPrefix>
struct List_1_t4193866914;
// WebSocketSharp.Net.HttpListenerPrefix
struct HttpListenerPrefix_t529778486;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t4229286967;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t4056456767;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// WebSocketSharp.Net.HttpListener
struct HttpListener_t4179429670;
// WebSocketSharp.Net.HttpConnection
struct HttpConnection_t2649486862;
// System.Uri
struct Uri_t19570940;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_IPEndPoint2615413766.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Se204724213.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Ht529778486.h"
#include "System_System_Security_Cryptography_X509Certificat4056456767.h"
#include "System_System_Net_Sockets_Socket3821512045.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_E3937551933.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H2649486862.h"
#include "System_System_Uri19570940.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H4179429670.h"

// System.Void WebSocketSharp.Net.EndPointListener::.cctor()
extern "C"  void EndPointListener__cctor_m673896045 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::.ctor(System.Net.IPEndPoint,System.Boolean,System.String,WebSocketSharp.Net.ServerSslConfiguration,System.Boolean)
extern "C"  void EndPointListener__ctor_m3124875679 (EndPointListener_t3937551933 * __this, IPEndPoint_t2615413766 * ___endpoint0, bool ___secure1, String_t* ___certificateFolderPath2, ServerSslConfiguration_t204724213 * ___sslConfig3, bool ___reuseAddress4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress WebSocketSharp.Net.EndPointListener::get_Address()
extern "C"  IPAddress_t1399971723 * EndPointListener_get_Address_m905819315 (EndPointListener_t3937551933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.EndPointListener::get_IsSecure()
extern "C"  bool EndPointListener_get_IsSecure_m554055204 (EndPointListener_t3937551933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.EndPointListener::get_Port()
extern "C"  int32_t EndPointListener_get_Port_m179382354 (EndPointListener_t3937551933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Net.EndPointListener::get_SslConfiguration()
extern "C"  ServerSslConfiguration_t204724213 * EndPointListener_get_SslConfiguration_m3573851123 (EndPointListener_t3937551933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::addSpecial(System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerPrefix>,WebSocketSharp.Net.HttpListenerPrefix)
extern "C"  void EndPointListener_addSpecial_m1054372908 (Il2CppObject * __this /* static, unused */, List_1_t4193866914 * ___prefixes0, HttpListenerPrefix_t529778486 * ___prefix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSACryptoServiceProvider WebSocketSharp.Net.EndPointListener::createRSAFromFile(System.String)
extern "C"  RSACryptoServiceProvider_t4229286967 * EndPointListener_createRSAFromFile_m170335591 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 WebSocketSharp.Net.EndPointListener::getCertificate(System.Int32,System.String,System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  X509Certificate2_t4056456767 * EndPointListener_getCertificate_m2671179713 (Il2CppObject * __this /* static, unused */, int32_t ___port0, String_t* ___folderPath1, X509Certificate2_t4056456767 * ___defaultCertificate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::leaveIfNoPrefix()
extern "C"  void EndPointListener_leaveIfNoPrefix_m993001255 (EndPointListener_t3937551933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::onAccept(System.IAsyncResult)
extern "C"  void EndPointListener_onAccept_m3906928916 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::processAccepted(System.Net.Sockets.Socket,WebSocketSharp.Net.EndPointListener)
extern "C"  void EndPointListener_processAccepted_m1280338742 (Il2CppObject * __this /* static, unused */, Socket_t3821512045 * ___socket0, EndPointListener_t3937551933 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.EndPointListener::removeSpecial(System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerPrefix>,WebSocketSharp.Net.HttpListenerPrefix)
extern "C"  bool EndPointListener_removeSpecial_m1327051207 (Il2CppObject * __this /* static, unused */, List_1_t4193866914 * ___prefixes0, HttpListenerPrefix_t529778486 * ___prefix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListener WebSocketSharp.Net.EndPointListener::searchHttpListenerFromSpecial(System.String,System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerPrefix>)
extern "C"  HttpListener_t4179429670 * EndPointListener_searchHttpListenerFromSpecial_m3764930710 (Il2CppObject * __this /* static, unused */, String_t* ___path0, List_1_t4193866914 * ___prefixes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.EndPointListener::CertificateExists(System.Int32,System.String)
extern "C"  bool EndPointListener_CertificateExists_m1462524560 (Il2CppObject * __this /* static, unused */, int32_t ___port0, String_t* ___folderPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::RemoveConnection(WebSocketSharp.Net.HttpConnection)
extern "C"  void EndPointListener_RemoveConnection_m3347406462 (EndPointListener_t3937551933 * __this, HttpConnection_t2649486862 * ___connection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.EndPointListener::TrySearchHttpListener(System.Uri,WebSocketSharp.Net.HttpListener&)
extern "C"  bool EndPointListener_TrySearchHttpListener_m1733740638 (EndPointListener_t3937551933 * __this, Uri_t19570940 * ___uri0, HttpListener_t4179429670 ** ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::AddPrefix(WebSocketSharp.Net.HttpListenerPrefix,WebSocketSharp.Net.HttpListener)
extern "C"  void EndPointListener_AddPrefix_m2571055827 (EndPointListener_t3937551933 * __this, HttpListenerPrefix_t529778486 * ___prefix0, HttpListener_t4179429670 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::Close()
extern "C"  void EndPointListener_Close_m1855932904 (EndPointListener_t3937551933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::RemovePrefix(WebSocketSharp.Net.HttpListenerPrefix,WebSocketSharp.Net.HttpListener)
extern "C"  void EndPointListener_RemovePrefix_m2240149748 (EndPointListener_t3937551933 * __this, HttpListenerPrefix_t529778486 * ___prefix0, HttpListener_t4179429670 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
