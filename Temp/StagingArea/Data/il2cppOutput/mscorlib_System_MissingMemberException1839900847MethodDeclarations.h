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

// System.MissingMemberException
struct MissingMemberException_t1839900847;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.MissingMemberException::.ctor()
extern "C"  void MissingMemberException__ctor_m4277447068 (MissingMemberException_t1839900847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.String)
extern "C"  void MissingMemberException__ctor_m3710131950 (MissingMemberException_t1839900847 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MissingMemberException__ctor_m2869542203 (MissingMemberException_t1839900847 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.String,System.String)
extern "C"  void MissingMemberException__ctor_m2164043278 (MissingMemberException_t1839900847 * __this, String_t* ___className0, String_t* ___memberName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MissingMemberException_GetObjectData_m2204792624 (MissingMemberException_t1839900847 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingMemberException::get_Message()
extern "C"  String_t* MissingMemberException_get_Message_m2763732423 (MissingMemberException_t1839900847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
