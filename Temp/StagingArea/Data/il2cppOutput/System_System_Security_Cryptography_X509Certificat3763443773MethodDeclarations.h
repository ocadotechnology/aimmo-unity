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

// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t3763443773;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t1320896183;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::.ctor(System.Collections.ArrayList)
extern "C"  void X509ExtensionEnumerator__ctor_m1818832067 (X509ExtensionEnumerator_t3763443773 * __this, ArrayList_t4252133567 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * X509ExtensionEnumerator_System_Collections_IEnumerator_get_Current_m1097473930 (X509ExtensionEnumerator_t3763443773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::get_Current()
extern "C"  X509Extension_t1320896183 * X509ExtensionEnumerator_get_Current_m3926549773 (X509ExtensionEnumerator_t3763443773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::MoveNext()
extern "C"  bool X509ExtensionEnumerator_MoveNext_m1715898942 (X509ExtensionEnumerator_t3763443773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::Reset()
extern "C"  void X509ExtensionEnumerator_Reset_m3200687545 (X509ExtensionEnumerator_t3763443773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
