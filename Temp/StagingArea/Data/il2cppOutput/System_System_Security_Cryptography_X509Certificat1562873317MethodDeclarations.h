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

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t1562873317;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t463456204;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_AsnEncodedData463456204.h"
#include "System_System_Security_Cryptography_AsnDecodeStatu1962003286.h"

// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
extern "C"  void X509BasicConstraintsExtension__ctor_m4017912156 (X509BasicConstraintsExtension_t1562873317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C"  void X509BasicConstraintsExtension__ctor_m3320418592 (X509BasicConstraintsExtension_t1562873317 * __this, AsnEncodedData_t463456204 * ___encodedBasicConstraints0, bool ___critical1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
extern "C"  void X509BasicConstraintsExtension__ctor_m3748651446 (X509BasicConstraintsExtension_t1562873317 * __this, bool ___certificateAuthority0, bool ___hasPathLengthConstraint1, int32_t ___pathLengthConstraint2, bool ___critical3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
extern "C"  bool X509BasicConstraintsExtension_get_CertificateAuthority_m2220022817 (X509BasicConstraintsExtension_t1562873317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
extern "C"  bool X509BasicConstraintsExtension_get_HasPathLengthConstraint_m3788532759 (X509BasicConstraintsExtension_t1562873317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
extern "C"  int32_t X509BasicConstraintsExtension_get_PathLengthConstraint_m3004531343 (X509BasicConstraintsExtension_t1562873317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void X509BasicConstraintsExtension_CopyFrom_m1321548708 (X509BasicConstraintsExtension_t1562873317 * __this, AsnEncodedData_t463456204 * ___asnEncodedData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
extern "C"  int32_t X509BasicConstraintsExtension_Decode_m2821936487 (X509BasicConstraintsExtension_t1562873317 * __this, ByteU5BU5D_t3397334013* ___extension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
extern "C"  ByteU5BU5D_t3397334013* X509BasicConstraintsExtension_Encode_m3505127076 (X509BasicConstraintsExtension_t1562873317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
extern "C"  String_t* X509BasicConstraintsExtension_ToString_m3781281400 (X509BasicConstraintsExtension_t1562873317 * __this, bool ___multiLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
