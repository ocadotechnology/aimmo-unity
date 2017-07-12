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

// System.Reflection.AssemblyName
struct AssemblyName_t894705941;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String
struct String_t;
// System.Version
struct Version_t1755874712;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Reflection_AssemblyNameFlags1794031440.h"
#include "mscorlib_System_Version1755874712.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Reflection.AssemblyName::.ctor()
extern "C"  void AssemblyName__ctor_m2505746587 (AssemblyName_t894705941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void AssemblyName__ctor_m609734316 (AssemblyName_t894705941 * __this, SerializationInfo_t228987430 * ___si0, StreamingContext_t1417235061  ___sc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_Name()
extern "C"  String_t* AssemblyName_get_Name_m1815759940 (AssemblyName_t894705941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
extern "C"  int32_t AssemblyName_get_Flags_m1290091392 (AssemblyName_t894705941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_FullName()
extern "C"  String_t* AssemblyName_get_FullName_m1606421515 (AssemblyName_t894705941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Reflection.AssemblyName::get_Version()
extern "C"  Version_t1755874712 * AssemblyName_get_Version_m3495645648 (AssemblyName_t894705941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
extern "C"  void AssemblyName_set_Version_m1012722441 (AssemblyName_t894705941 * __this, Version_t1755874712 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::ToString()
extern "C"  String_t* AssemblyName_ToString_m354334942 (AssemblyName_t894705941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
extern "C"  bool AssemblyName_get_IsPublicKeyValid_m188320564 (AssemblyName_t894705941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
extern "C"  ByteU5BU5D_t3397334013* AssemblyName_InternalGetPublicKeyToken_m3706025887 (AssemblyName_t894705941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
extern "C"  ByteU5BU5D_t3397334013* AssemblyName_ComputePublicKeyToken_m2254215863 (AssemblyName_t894705941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
extern "C"  void AssemblyName_SetPublicKey_m1491402438 (AssemblyName_t894705941 * __this, ByteU5BU5D_t3397334013* ___publicKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
extern "C"  void AssemblyName_SetPublicKeyToken_m3032035167 (AssemblyName_t894705941 * __this, ByteU5BU5D_t3397334013* ___publicKeyToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void AssemblyName_GetObjectData_m1221677827 (AssemblyName_t894705941 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.AssemblyName::Clone()
extern "C"  Il2CppObject * AssemblyName_Clone_m3390118349 (AssemblyName_t894705941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
extern "C"  void AssemblyName_OnDeserialization_m2683521459 (AssemblyName_t894705941 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
