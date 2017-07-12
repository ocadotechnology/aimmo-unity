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

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_t2508879999;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t463456204;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t870392;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_AsnEncodedData463456204.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Security_Cryptography_X509Certificates_P870392.h"
#include "System_System_Security_Cryptography_X509Certificate110301003.h"
#include "System_System_Security_Cryptography_AsnDecodeStatu1962003286.h"

// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m2959112706 (X509SubjectKeyIdentifierExtension_t2508879999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m2412362046 (X509SubjectKeyIdentifierExtension_t2508879999 * __this, AsnEncodedData_t463456204 * ___encodedSubjectKeyIdentifier0, bool ___critical1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m3950351260 (X509SubjectKeyIdentifierExtension_t2508879999 * __this, ByteU5BU5D_t3397334013* ___subjectKeyIdentifier0, bool ___critical1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m1109455121 (X509SubjectKeyIdentifierExtension_t2508879999 * __this, String_t* ___subjectKeyIdentifier0, bool ___critical1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m3887138480 (X509SubjectKeyIdentifierExtension_t2508879999 * __this, PublicKey_t870392 * ___key0, bool ___critical1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m3728672874 (X509SubjectKeyIdentifierExtension_t2508879999 * __this, PublicKey_t870392 * ___key0, int32_t ___algorithm1, bool ___critical2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
extern "C"  String_t* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_m1477640894 (X509SubjectKeyIdentifierExtension_t2508879999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void X509SubjectKeyIdentifierExtension_CopyFrom_m136762226 (X509SubjectKeyIdentifierExtension_t2508879999 * __this, AsnEncodedData_t463456204 * ___encodedData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
extern "C"  uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m4225129392 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
extern "C"  uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_m2515150420 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c10, Il2CppChar ___c21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
extern "C"  ByteU5BU5D_t3397334013* X509SubjectKeyIdentifierExtension_FromHex_m3272045013 (Il2CppObject * __this /* static, unused */, String_t* ___hex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
extern "C"  int32_t X509SubjectKeyIdentifierExtension_Decode_m4102819207 (X509SubjectKeyIdentifierExtension_t2508879999 * __this, ByteU5BU5D_t3397334013* ___extension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
extern "C"  ByteU5BU5D_t3397334013* X509SubjectKeyIdentifierExtension_Encode_m4237278042 (X509SubjectKeyIdentifierExtension_t2508879999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
extern "C"  String_t* X509SubjectKeyIdentifierExtension_ToString_m4073475390 (X509SubjectKeyIdentifierExtension_t2508879999 * __this, bool ___multiLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
