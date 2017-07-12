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

// System.IO.FileLoadException
struct FileLoadException_t3198361301;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.IO.FileLoadException::.ctor()
extern "C"  void FileLoadException__ctor_m1356374414 (FileLoadException_t3198361301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileLoadException__ctor_m918124939 (FileLoadException_t3198361301 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileLoadException::get_Message()
extern "C"  String_t* FileLoadException_get_Message_m1010083703 (FileLoadException_t3198361301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileLoadException_GetObjectData_m2047020314 (FileLoadException_t3198361301 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileLoadException::ToString()
extern "C"  String_t* FileLoadException_ToString_m319701103 (FileLoadException_t3198361301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
