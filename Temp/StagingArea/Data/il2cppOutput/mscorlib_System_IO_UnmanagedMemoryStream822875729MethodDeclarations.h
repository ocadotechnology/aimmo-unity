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

// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t822875729;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Boolean System.IO.UnmanagedMemoryStream::get_CanRead()
extern "C"  bool UnmanagedMemoryStream_get_CanRead_m704145219 (UnmanagedMemoryStream_t822875729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanSeek()
extern "C"  bool UnmanagedMemoryStream_get_CanSeek_m3016188065 (UnmanagedMemoryStream_t822875729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanWrite()
extern "C"  bool UnmanagedMemoryStream_get_CanWrite_m358485232 (UnmanagedMemoryStream_t822875729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::get_Length()
extern "C"  int64_t UnmanagedMemoryStream_get_Length_m587008850 (UnmanagedMemoryStream_t822875729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::get_Position()
extern "C"  int64_t UnmanagedMemoryStream_get_Position_m4093669769 (UnmanagedMemoryStream_t822875729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::set_Position(System.Int64)
extern "C"  void UnmanagedMemoryStream_set_Position_m2829214570 (UnmanagedMemoryStream_t822875729 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnmanagedMemoryStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t UnmanagedMemoryStream_Read_m2169576987 (UnmanagedMemoryStream_t822875729 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnmanagedMemoryStream::ReadByte()
extern "C"  int32_t UnmanagedMemoryStream_ReadByte_m2501145010 (UnmanagedMemoryStream_t822875729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t UnmanagedMemoryStream_Seek_m992298266 (UnmanagedMemoryStream_t822875729 * __this, int64_t ___offset0, int32_t ___loc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::SetLength(System.Int64)
extern "C"  void UnmanagedMemoryStream_SetLength_m1805321486 (UnmanagedMemoryStream_t822875729 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Flush()
extern "C"  void UnmanagedMemoryStream_Flush_m3305300000 (UnmanagedMemoryStream_t822875729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Dispose(System.Boolean)
extern "C"  void UnmanagedMemoryStream_Dispose_m3368003334 (UnmanagedMemoryStream_t822875729 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void UnmanagedMemoryStream_Write_m1076994182 (UnmanagedMemoryStream_t822875729 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::WriteByte(System.Byte)
extern "C"  void UnmanagedMemoryStream_WriteByte_m2348579954 (UnmanagedMemoryStream_t822875729 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
