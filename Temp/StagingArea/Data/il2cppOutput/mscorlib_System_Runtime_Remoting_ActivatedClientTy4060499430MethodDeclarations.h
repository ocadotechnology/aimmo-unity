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

// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t4060499430;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.IContextAttribute[]
struct IContextAttributeU5BU5D_t435398453;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Runtime.Remoting.ActivatedClientTypeEntry::.ctor(System.String,System.String,System.String)
extern "C"  void ActivatedClientTypeEntry__ctor_m2437890002 (ActivatedClientTypeEntry_t4060499430 * __this, String_t* ___typeName0, String_t* ___assemblyName1, String_t* ___appUrl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::get_ApplicationUrl()
extern "C"  String_t* ActivatedClientTypeEntry_get_ApplicationUrl_m444137483 (ActivatedClientTypeEntry_t4060499430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.IContextAttribute[] System.Runtime.Remoting.ActivatedClientTypeEntry::get_ContextAttributes()
extern "C"  IContextAttributeU5BU5D_t435398453* ActivatedClientTypeEntry_get_ContextAttributes_m53051138 (ActivatedClientTypeEntry_t4060499430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::get_ObjectType()
extern "C"  Type_t * ActivatedClientTypeEntry_get_ObjectType_m1284334298 (ActivatedClientTypeEntry_t4060499430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::ToString()
extern "C"  String_t* ActivatedClientTypeEntry_ToString_m1505819693 (ActivatedClientTypeEntry_t4060499430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
