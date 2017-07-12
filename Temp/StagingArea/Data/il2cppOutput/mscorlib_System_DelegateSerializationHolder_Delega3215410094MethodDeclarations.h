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

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t3215410094;
// System.Delegate
struct Delegate_t3022476291;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Delegate3022476291.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C"  void DelegateEntry__ctor_m2996191962 (DelegateEntry_t3215410094 * __this, Delegate_t3022476291 * ___del0, String_t* ___targetLabel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C"  Delegate_t3022476291 * DelegateEntry_DeserializeDelegate_m1550778090 (DelegateEntry_t3215410094 * __this, SerializationInfo_t228987430 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
