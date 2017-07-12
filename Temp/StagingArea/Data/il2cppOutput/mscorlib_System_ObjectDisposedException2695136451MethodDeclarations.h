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

// System.ObjectDisposedException
struct ObjectDisposedException_t2695136451;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.ObjectDisposedException::.ctor(System.String)
extern "C"  void ObjectDisposedException__ctor_m3156784572 (ObjectDisposedException_t2695136451 * __this, String_t* ___objectName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
extern "C"  void ObjectDisposedException__ctor_m2844841908 (ObjectDisposedException_t2695136451 * __this, String_t* ___objectName0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ObjectDisposedException__ctor_m2122181801 (ObjectDisposedException_t2695136451 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ObjectDisposedException::get_Message()
extern "C"  String_t* ObjectDisposedException_get_Message_m3704234053 (ObjectDisposedException_t2695136451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ObjectDisposedException_GetObjectData_m10776306 (ObjectDisposedException_t2695136451 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
