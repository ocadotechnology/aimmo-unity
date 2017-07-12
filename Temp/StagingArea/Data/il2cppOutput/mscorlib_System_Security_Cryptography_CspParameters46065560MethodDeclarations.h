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

// System.Security.Cryptography.CspParameters
struct CspParameters_t46065560;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_Cryptography_CspProviderFl105264000.h"

// System.Void System.Security.Cryptography.CspParameters::.ctor()
extern "C"  void CspParameters__ctor_m2480441577 (CspParameters_t46065560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32)
extern "C"  void CspParameters__ctor_m3051314030 (CspParameters_t46065560 * __this, int32_t ___dwTypeIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String)
extern "C"  void CspParameters__ctor_m2546931874 (CspParameters_t46065560 * __this, int32_t ___dwTypeIn0, String_t* ___strProviderNameIn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String,System.String)
extern "C"  void CspParameters__ctor_m3476491054 (CspParameters_t46065560 * __this, int32_t ___dwTypeIn0, String_t* ___strProviderNameIn1, String_t* ___strContainerNameIn2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspProviderFlags System.Security.Cryptography.CspParameters::get_Flags()
extern "C"  int32_t CspParameters_get_Flags_m3649573501 (CspParameters_t46065560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::set_Flags(System.Security.Cryptography.CspProviderFlags)
extern "C"  void CspParameters_set_Flags_m4131471722 (CspParameters_t46065560 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
