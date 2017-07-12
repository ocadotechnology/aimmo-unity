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

// Mono.Security.Protocol.Tls.TlsException
struct TlsException_t583514812;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t3405955216;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLeve1706602846.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescr844791462.h"

// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.String)
extern "C"  void TlsException__ctor_m3885720020 (TlsException_t583514812 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TlsException__ctor_m1249020603 (TlsException_t583514812 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void TlsException__ctor_m2205512412 (TlsException_t583514812 * __this, uint8_t ___level0, uint8_t ___description1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription,System.String)
extern "C"  void TlsException__ctor_m3747188020 (TlsException_t583514812 * __this, uint8_t ___level0, uint8_t ___description1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void TlsException__ctor_m2436420036 (TlsException_t583514812 * __this, uint8_t ___description0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription,System.String)
extern "C"  void TlsException__ctor_m1988757560 (TlsException_t583514812 * __this, uint8_t ___description0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::get_Alert()
extern "C"  Alert_t3405955216 * TlsException_get_Alert_m4022765752 (TlsException_t583514812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
