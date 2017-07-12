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

// System.Exception
struct Exception_t1927440687;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Reflection.MethodBase
struct MethodBase_t904190842;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_Reflection_MethodBase904190842.h"

// System.Void System.Exception::.ctor()
extern "C"  void Exception__ctor_m3886110570 (Exception_t1927440687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m485833136 (Exception_t1927440687 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Exception__ctor_m3836998015 (Exception_t1927440687 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C"  void Exception__ctor_m2453009240 (Exception_t1927440687 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Exception::get_InnerException()
extern "C"  Exception_t1927440687 * Exception_get_InnerException_m3722561235 (Exception_t1927440687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Exception::get_HResult()
extern "C"  int32_t Exception_get_HResult_m19783860 (Exception_t1927440687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
extern "C"  void Exception_set_HResult_m2376998645 (Exception_t1927440687 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_ClassName()
extern "C"  String_t* Exception_get_ClassName_m2189012117 (Exception_t1927440687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Message()
extern "C"  String_t* Exception_get_Message_m173095527 (Exception_t1927440687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Source()
extern "C"  String_t* Exception_get_Source_m1610892645 (Exception_t1927440687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_StackTrace()
extern "C"  String_t* Exception_get_StackTrace_m2513587087 (Exception_t1927440687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Exception_GetObjectData_m2653827630 (Exception_t1927440687 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::ToString()
extern "C"  String_t* Exception_ToString_m627574695 (Exception_t1927440687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase)
extern "C"  void Exception_GetFullNameForStackTrace_m1429773294 (Exception_t1927440687 * __this, StringBuilder_t1221177846 * ___sb0, MethodBase_t904190842 * ___mi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Exception::GetType()
extern "C"  Type_t * Exception_GetType_m3898489832 (Exception_t1927440687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
