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

// System.Runtime.InteropServices.COMException
struct COMException_t1790481504;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Runtime.InteropServices.COMException::.ctor()
extern "C"  void COMException__ctor_m488488930 (COMException_t1790481504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.COMException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void COMException__ctor_m3964879267 (COMException_t1790481504 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.COMException::ToString()
extern "C"  String_t* COMException_ToString_m2763629127 (COMException_t1790481504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
