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

// System.IO.FileSystemInfo
struct FileSystemInfo_t2360991899;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.IO.FileSystemInfo::.ctor()
extern "C"  void FileSystemInfo__ctor_m3955935398 (FileSystemInfo_t2360991899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileSystemInfo__ctor_m1536026477 (FileSystemInfo_t2360991899 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileSystemInfo_GetObjectData_m1755848054 (FileSystemInfo_t2360991899 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileSystemInfo::get_FullName()
extern "C"  String_t* FileSystemInfo_get_FullName_m591376646 (FileSystemInfo_t2360991899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::Refresh(System.Boolean)
extern "C"  void FileSystemInfo_Refresh_m2417089120 (FileSystemInfo_t2360991899 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::InternalRefresh()
extern "C"  void FileSystemInfo_InternalRefresh_m2667615554 (FileSystemInfo_t2360991899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::CheckPath(System.String)
extern "C"  void FileSystemInfo_CheckPath_m731604327 (FileSystemInfo_t2360991899 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
