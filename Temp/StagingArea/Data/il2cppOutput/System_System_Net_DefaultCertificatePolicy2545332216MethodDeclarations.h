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

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t2545332216;
// System.Net.ServicePoint
struct ServicePoint_t2765344313;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.Net.WebRequest
struct WebRequest_t1365124353;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_ServicePoint2765344313.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "System_System_Net_WebRequest1365124353.h"

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C"  void DefaultCertificatePolicy__ctor_m4075407028 (DefaultCertificatePolicy_t2545332216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C"  bool DefaultCertificatePolicy_CheckValidationResult_m1093127521 (DefaultCertificatePolicy_t2545332216 * __this, ServicePoint_t2765344313 * ___point0, X509Certificate_t283079845 * ___certificate1, WebRequest_t1365124353 * ___request2, int32_t ___certificateProblem3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
