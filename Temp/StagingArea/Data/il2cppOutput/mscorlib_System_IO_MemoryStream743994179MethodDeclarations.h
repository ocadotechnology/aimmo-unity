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

// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void System.IO.MemoryStream::.ctor()
extern "C"  void MemoryStream__ctor_m1043059966 (MemoryStream_t743994179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
extern "C"  void MemoryStream__ctor_m1489366847 (MemoryStream_t743994179 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
extern "C"  void MemoryStream__ctor_m4073175573 (MemoryStream_t743994179 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::InternalConstructor(System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C"  void MemoryStream_InternalConstructor_m2423667240 (MemoryStream_t743994179 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___index1, int32_t ___count2, bool ___writable3, bool ___publicallyVisible4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::CheckIfClosedThrowDisposed()
extern "C"  void MemoryStream_CheckIfClosedThrowDisposed_m2253054610 (MemoryStream_t743994179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanRead()
extern "C"  bool MemoryStream_get_CanRead_m3672386853 (MemoryStream_t743994179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanSeek()
extern "C"  bool MemoryStream_get_CanSeek_m1693270243 (MemoryStream_t743994179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanWrite()
extern "C"  bool MemoryStream_get_CanWrite_m3124401240 (MemoryStream_t743994179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::set_Capacity(System.Int32)
extern "C"  void MemoryStream_set_Capacity_m1109414024 (MemoryStream_t743994179 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::get_Length()
extern "C"  int64_t MemoryStream_get_Length_m1517466152 (MemoryStream_t743994179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::get_Position()
extern "C"  int64_t MemoryStream_get_Position_m2312478343 (MemoryStream_t743994179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::set_Position(System.Int64)
extern "C"  void MemoryStream_set_Position_m289126914 (MemoryStream_t743994179 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Dispose(System.Boolean)
extern "C"  void MemoryStream_Dispose_m239202346 (MemoryStream_t743994179 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Flush()
extern "C"  void MemoryStream_Flush_m946731324 (MemoryStream_t743994179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.MemoryStream::GetBuffer()
extern "C"  ByteU5BU5D_t3397334013* MemoryStream_GetBuffer_m3859166056 (MemoryStream_t743994179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t MemoryStream_Read_m2289595005 (MemoryStream_t743994179 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::ReadByte()
extern "C"  int32_t MemoryStream_ReadByte_m4139353774 (MemoryStream_t743994179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t MemoryStream_Seek_m3477913820 (MemoryStream_t743994179 * __this, int64_t ___offset0, int32_t ___loc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::CalculateNewCapacity(System.Int32)
extern "C"  int32_t MemoryStream_CalculateNewCapacity_m3533542025 (MemoryStream_t743994179 * __this, int32_t ___minimum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Expand(System.Int32)
extern "C"  void MemoryStream_Expand_m1359154573 (MemoryStream_t743994179 * __this, int32_t ___newSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::SetLength(System.Int64)
extern "C"  void MemoryStream_SetLength_m925647302 (MemoryStream_t743994179 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.MemoryStream::ToArray()
extern "C"  ByteU5BU5D_t3397334013* MemoryStream_ToArray_m547789004 (MemoryStream_t743994179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void MemoryStream_Write_m2101686738 (MemoryStream_t743994179 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::WriteByte(System.Byte)
extern "C"  void MemoryStream_WriteByte_m3737173846 (MemoryStream_t743994179 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
