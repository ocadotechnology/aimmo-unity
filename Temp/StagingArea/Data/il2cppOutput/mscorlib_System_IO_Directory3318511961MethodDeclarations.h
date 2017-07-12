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

// System.IO.DirectoryInfo
struct DirectoryInfo_t1934446453;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_FileAttributes3843045335.h"

// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C"  DirectoryInfo_t1934446453 * Directory_CreateDirectory_m3561886598 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectoriesInternal(System.String)
extern "C"  DirectoryInfo_t1934446453 * Directory_CreateDirectoriesInternal_m2817848291 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Directory::Exists(System.String)
extern "C"  bool Directory_Exists_m2663601042 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Directory::GetCurrentDirectory()
extern "C"  String_t* Directory_GetCurrentDirectory_m44486537 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFiles(System.String,System.String)
extern "C"  StringU5BU5D_t1642385972* Directory_GetFiles_m4036267478 (Il2CppObject * __this /* static, unused */, String_t* ___path0, String_t* ___searchPattern1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFileSystemEntries(System.String,System.String,System.IO.FileAttributes,System.IO.FileAttributes)
extern "C"  StringU5BU5D_t1642385972* Directory_GetFileSystemEntries_m2720389648 (Il2CppObject * __this /* static, unused */, String_t* ___path0, String_t* ___searchPattern1, int32_t ___mask2, int32_t ___attrs3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
