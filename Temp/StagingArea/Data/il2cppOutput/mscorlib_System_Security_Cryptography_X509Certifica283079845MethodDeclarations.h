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

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1216946873.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[],System.Boolean)
extern "C"  void X509Certificate__ctor_m3860837120 (X509Certificate_t283079845 * __this, ByteU5BU5D_t3397334013* ___data0, bool ___dates1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[])
extern "C"  void X509Certificate__ctor_m1497774341 (X509Certificate_t283079845 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void X509Certificate__ctor_m2046084108 (X509Certificate_t283079845 * __this, X509Certificate_t283079845 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor()
extern "C"  void X509Certificate__ctor_m1864862806 (X509Certificate_t283079845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void X509Certificate__ctor_m785262377 (X509Certificate_t283079845 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void X509Certificate_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m1260592128 (X509Certificate_t283079845 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData_m2555492517 (X509Certificate_t283079845 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::tostr(System.Byte[])
extern "C"  String_t* X509Certificate_tostr_m4167357482 (X509Certificate_t283079845 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  bool X509Certificate_Equals_m3241095591 (X509Certificate_t283079845 * __this, X509Certificate_t283079845 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHash()
extern "C"  ByteU5BU5D_t3397334013* X509Certificate_GetCertHash_m2299453268 (X509Certificate_t283079845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHashString()
extern "C"  String_t* X509Certificate_GetCertHashString_m419611192 (X509Certificate_t283079845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetEffectiveDateString()
extern "C"  String_t* X509Certificate_GetEffectiveDateString_m644894317 (X509Certificate_t283079845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetExpirationDateString()
extern "C"  String_t* X509Certificate_GetExpirationDateString_m2351894475 (X509Certificate_t283079845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate::GetHashCode()
extern "C"  int32_t X509Certificate_GetHashCode_m2206927893 (X509Certificate_t283079845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetIssuerName()
extern "C"  String_t* X509Certificate_GetIssuerName_m3607271213 (X509Certificate_t283079845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetName()
extern "C"  String_t* X509Certificate_GetName_m2354987368 (X509Certificate_t283079845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetPublicKey()
extern "C"  ByteU5BU5D_t3397334013* X509Certificate_GetPublicKey_m2518133072 (X509Certificate_t283079845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetRawCertData()
extern "C"  ByteU5BU5D_t3397334013* X509Certificate_GetRawCertData_m3060866624 (X509Certificate_t283079845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString()
extern "C"  String_t* X509Certificate_ToString_m3833178309 (X509Certificate_t283079845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString(System.Boolean)
extern "C"  String_t* X509Certificate_ToString_m1582581274 (X509Certificate_t283079845 * __this, bool ___fVerbose0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::Load(System.String)
extern "C"  ByteU5BU5D_t3397334013* X509Certificate_Load_m1892824066 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Issuer()
extern "C"  String_t* X509Certificate_get_Issuer_m3750321873 (X509Certificate_t283079845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Subject()
extern "C"  String_t* X509Certificate_get_Subject_m3123435748 (X509Certificate_t283079845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Object)
extern "C"  bool X509Certificate_Equals_m4141136939 (X509Certificate_t283079845 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C"  void X509Certificate_Import_m562956152 (X509Certificate_t283079845 * __this, ByteU5BU5D_t3397334013* ___rawData0, String_t* ___password1, int32_t ___keyStorageFlags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Import(System.String,System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C"  void X509Certificate_Import_m794726169 (X509Certificate_t283079845 * __this, String_t* ___fileName0, String_t* ___password1, int32_t ___keyStorageFlags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Reset()
extern "C"  void X509Certificate_Reset_m1676863543 (X509Certificate_t283079845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
