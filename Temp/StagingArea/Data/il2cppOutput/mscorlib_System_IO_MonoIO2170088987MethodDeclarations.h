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
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_MonoIOError733012845.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_FileAttributes3843045335.h"
#include "mscorlib_System_IO_MonoFileType3095218325.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_IO_MonoIOStat1621921065.h"
#include "mscorlib_System_IO_FileMode236403845.h"
#include "mscorlib_System_IO_FileAccess4282042064.h"
#include "mscorlib_System_IO_FileShare3362491215.h"
#include "mscorlib_System_IO_FileOptions3144759768.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void System.IO.MonoIO::.cctor()
extern "C"  void MonoIO__cctor_m2398680849 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.MonoIO::GetException(System.IO.MonoIOError)
extern "C"  Exception_t1927440687 * MonoIO_GetException_m2577367044 (Il2CppObject * __this /* static, unused */, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.MonoIO::GetException(System.String,System.IO.MonoIOError)
extern "C"  Exception_t1927440687 * MonoIO_GetException_m957022672 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)
extern "C"  bool MonoIO_CreateDirectory_m379525469 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C"  StringU5BU5D_t1642385972* MonoIO_GetFileSystemEntries_m3422848968 (Il2CppObject * __this /* static, unused */, String_t* ___path0, String_t* ___path_with_pattern1, int32_t ___attrs2, int32_t ___mask3, int32_t* ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)
extern "C"  String_t* MonoIO_GetCurrentDirectory_m1509324201 (Il2CppObject * __this /* static, unused */, int32_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)
extern "C"  bool MonoIO_DeleteFile_m3273821223 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileAttributes System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)
extern "C"  int32_t MonoIO_GetFileAttributes_m2061483138 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MonoFileType System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)
extern "C"  int32_t MonoIO_GetFileType_m3310262429 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, int32_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::ExistsFile(System.String,System.IO.MonoIOError&)
extern "C"  bool MonoIO_ExistsFile_m1421941572 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::ExistsDirectory(System.String,System.IO.MonoIOError&)
extern "C"  bool MonoIO_ExistsDirectory_m3152546909 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)
extern "C"  bool MonoIO_GetFileStat_m3146995842 (Il2CppObject * __this /* static, unused */, String_t* ___path0, MonoIOStat_t1621921065 * ___stat1, int32_t* ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)
extern "C"  IntPtr_t MonoIO_Open_m435295363 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, int32_t ___options4, int32_t* ___error5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)
extern "C"  bool MonoIO_Close_m3214088140 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, int32_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C"  int32_t MonoIO_Read_m3756797647 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, ByteU5BU5D_t3397334013* ___dest1, int32_t ___dest_offset2, int32_t ___count3, int32_t* ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C"  int32_t MonoIO_Write_m3531233258 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, ByteU5BU5D_t3397334013* ___src1, int32_t ___src_offset2, int32_t ___count3, int32_t* ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)
extern "C"  int64_t MonoIO_Seek_m3461199288 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, int64_t ___offset1, int32_t ___origin2, int32_t* ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)
extern "C"  int64_t MonoIO_GetLength_m2812344043 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, int32_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)
extern "C"  bool MonoIO_SetLength_m1019790894 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, int64_t ___length1, int32_t* ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleOutput()
extern "C"  IntPtr_t MonoIO_get_ConsoleOutput_m3658567930 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleInput()
extern "C"  IntPtr_t MonoIO_get_ConsoleInput_m2976499023 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleError()
extern "C"  IntPtr_t MonoIO_get_ConsoleError_m592181393 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_VolumeSeparatorChar()
extern "C"  Il2CppChar MonoIO_get_VolumeSeparatorChar_m1105210138 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_DirectorySeparatorChar()
extern "C"  Il2CppChar MonoIO_get_DirectorySeparatorChar_m924021979 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_AltDirectorySeparatorChar()
extern "C"  Il2CppChar MonoIO_get_AltDirectorySeparatorChar_m2795103938 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_PathSeparator()
extern "C"  Il2CppChar MonoIO_get_PathSeparator_m2635828107 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
