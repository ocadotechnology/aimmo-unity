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

// System.IO.Compression.DeflateStream
struct DeflateStream_t3198596725;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t1990215745;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_System_IO_Compression_CompressionMode1471062003.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"
#include "System_System_IO_Compression_DeflateStream_Unmanag1990215745.h"

// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
extern "C"  void DeflateStream__ctor_m1924605200 (DeflateStream_t3198596725 * __this, Stream_t3255436806 * ___compressedStream0, int32_t ___mode1, bool ___leaveOpen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
extern "C"  void DeflateStream__ctor_m2642899039 (DeflateStream_t3198596725 * __this, Stream_t3255436806 * ___compressedStream0, int32_t ___mode1, bool ___leaveOpen2, bool ___gzip3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Dispose(System.Boolean)
extern "C"  void DeflateStream_Dispose_m290108336 (DeflateStream_t3198596725 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t DeflateStream_UnmanagedRead_m3972503109 (Il2CppObject * __this /* static, unused */, IntPtr_t ___buffer0, int32_t ___length1, IntPtr_t ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_DeflateStream_UnmanagedRead_m3972503109(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedRead(System.IntPtr,System.Int32)
extern "C"  int32_t DeflateStream_UnmanagedRead_m1789526367 (DeflateStream_t3198596725 * __this, IntPtr_t ___buffer0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t DeflateStream_UnmanagedWrite_m2053312812 (Il2CppObject * __this /* static, unused */, IntPtr_t ___buffer0, int32_t ___length1, IntPtr_t ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_DeflateStream_UnmanagedWrite_m2053312812(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedWrite(System.IntPtr,System.Int32)
extern "C"  int32_t DeflateStream_UnmanagedWrite_m3254658624 (DeflateStream_t3198596725 * __this, IntPtr_t ___buffer0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t DeflateStream_ReadInternal_m1462513020 (DeflateStream_t3198596725 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t DeflateStream_Read_m2906745725 (DeflateStream_t3198596725 * __this, ByteU5BU5D_t3397334013* ___dest0, int32_t ___dest_offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_WriteInternal_m1685486359 (DeflateStream_t3198596725 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_Write_m3722706532 (DeflateStream_t3198596725 * __this, ByteU5BU5D_t3397334013* ___src0, int32_t ___src_offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::CheckResult(System.Int32,System.String)
extern "C"  void DeflateStream_CheckResult_m390537652 (Il2CppObject * __this /* static, unused */, int32_t ___result0, String_t* ___where1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Flush()
extern "C"  void DeflateStream_Flush_m3971344454 (DeflateStream_t3198596725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DeflateStream_BeginRead_m1772882044 (DeflateStream_t3198596725 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___cback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DeflateStream_BeginWrite_m232975127 (DeflateStream_t3198596725 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___cback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
extern "C"  int32_t DeflateStream_EndRead_m1965323294 (DeflateStream_t3198596725 * __this, Il2CppObject * ___async_result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
extern "C"  void DeflateStream_EndWrite_m644759061 (DeflateStream_t3198596725 * __this, Il2CppObject * ___async_result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t DeflateStream_Seek_m125269572 (DeflateStream_t3198596725 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::SetLength(System.Int64)
extern "C"  void DeflateStream_SetLength_m533378364 (DeflateStream_t3198596725 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanRead()
extern "C"  bool DeflateStream_get_CanRead_m3431289753 (DeflateStream_t3198596725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanSeek()
extern "C"  bool DeflateStream_get_CanSeek_m1401569467 (DeflateStream_t3198596725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanWrite()
extern "C"  bool DeflateStream_get_CanWrite_m2090715306 (DeflateStream_t3198596725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::get_Length()
extern "C"  int64_t DeflateStream_get_Length_m3272162824 (DeflateStream_t3198596725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::get_Position()
extern "C"  int64_t DeflateStream_get_Position_m100062355 (DeflateStream_t3198596725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::set_Position(System.Int64)
extern "C"  void DeflateStream_set_Position_m1897718228 (DeflateStream_t3198596725 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.Compression.DeflateStream::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStream/UnmanagedReadOrWrite,System.IntPtr)
extern "C"  IntPtr_t DeflateStream_CreateZStream_m2111962461 (Il2CppObject * __this /* static, unused */, int32_t ___compress0, bool ___gzip1, UnmanagedReadOrWrite_t1990215745 * ___feeder2, IntPtr_t ___data3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::CloseZStream(System.IntPtr)
extern "C"  int32_t DeflateStream_CloseZStream_m1553633498 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::Flush(System.IntPtr)
extern "C"  int32_t DeflateStream_Flush_m2824917332 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::ReadZStream(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  int32_t DeflateStream_ReadZStream_m4150396437 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stream0, IntPtr_t ___buffer1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::WriteZStream(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  int32_t DeflateStream_WriteZStream_m2377915276 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stream0, IntPtr_t ___buffer1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
