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

// System.IO.FileStream
struct FileStream_t1695958676;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_IO_FileAccess4282042064.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_FileMode236403845.h"
#include "mscorlib_System_IO_FileShare3362491215.h"
#include "mscorlib_System_IO_FileOptions3144759768.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void System.IO.FileStream::.ctor(System.IntPtr,System.IO.FileAccess,System.Boolean,System.Int32,System.Boolean,System.Boolean)
extern "C"  void FileStream__ctor_m3026076202 (FileStream_t1695958676 * __this, IntPtr_t ___handle0, int32_t ___access1, bool ___ownsHandle2, int32_t ___bufferSize3, bool ___isAsync4, bool ___noBuffering5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
extern "C"  void FileStream__ctor_m572813458 (FileStream_t1695958676 * __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C"  void FileStream__ctor_m3699774824 (FileStream_t1695958676 * __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean,System.Boolean)
extern "C"  void FileStream__ctor_m756268517 (FileStream_t1695958676 * __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, int32_t ___bufferSize4, bool ___isAsync5, bool ___anonymous6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean,System.IO.FileOptions)
extern "C"  void FileStream__ctor_m3815606687 (FileStream_t1695958676 * __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, int32_t ___bufferSize4, bool ___anonymous5, int32_t ___options6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanRead()
extern "C"  bool FileStream_get_CanRead_m4148920720 (FileStream_t1695958676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanWrite()
extern "C"  bool FileStream_get_CanWrite_m775322953 (FileStream_t1695958676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanSeek()
extern "C"  bool FileStream_get_CanSeek_m1833070492 (FileStream_t1695958676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::get_Length()
extern "C"  int64_t FileStream_get_Length_m2265080501 (FileStream_t1695958676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::get_Position()
extern "C"  int64_t FileStream_get_Position_m465478322 (FileStream_t1695958676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::set_Position(System.Int64)
extern "C"  void FileStream_set_Position_m1177202695 (FileStream_t1695958676 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadByte()
extern "C"  int32_t FileStream_ReadByte_m539591659 (FileStream_t1695958676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::WriteByte(System.Byte)
extern "C"  void FileStream_WriteByte_m26838815 (FileStream_t1695958676 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FileStream_Read_m3880951166 (FileStream_t1695958676 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FileStream_ReadInternal_m2426171121 (FileStream_t1695958676 * __this, ByteU5BU5D_t3397334013* ___dest0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FileStream_BeginRead_m113461779 (FileStream_t1695958676 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___numBytes2, AsyncCallback_t163412349 * ___userCallback3, Il2CppObject * ___stateObject4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::EndRead(System.IAsyncResult)
extern "C"  int32_t FileStream_EndRead_m3203064263 (FileStream_t1695958676 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void FileStream_Write_m368821387 (FileStream_t1695958676 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  void FileStream_WriteInternal_m115274124 (FileStream_t1695958676 * __this, ByteU5BU5D_t3397334013* ___src0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FileStream_BeginWrite_m3895959548 (FileStream_t1695958676 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___numBytes2, AsyncCallback_t163412349 * ___userCallback3, Il2CppObject * ___stateObject4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::EndWrite(System.IAsyncResult)
extern "C"  void FileStream_EndWrite_m2839820194 (FileStream_t1695958676 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t FileStream_Seek_m950719389 (FileStream_t1695958676 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::SetLength(System.Int64)
extern "C"  void FileStream_SetLength_m1881403001 (FileStream_t1695958676 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Flush()
extern "C"  void FileStream_Flush_m2048412453 (FileStream_t1695958676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Finalize()
extern "C"  void FileStream_Finalize_m299593251 (FileStream_t1695958676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Dispose(System.Boolean)
extern "C"  void FileStream_Dispose_m438945577 (FileStream_t1695958676 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadSegment(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FileStream_ReadSegment_m490859393 (FileStream_t1695958676 * __this, ByteU5BU5D_t3397334013* ___dest0, int32_t ___dest_offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::WriteSegment(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FileStream_WriteSegment_m2309113546 (FileStream_t1695958676 * __this, ByteU5BU5D_t3397334013* ___src0, int32_t ___src_offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBuffer(System.IO.Stream)
extern "C"  void FileStream_FlushBuffer_m2594140542 (FileStream_t1695958676 * __this, Stream_t3255436806 * ___st0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBuffer()
extern "C"  void FileStream_FlushBuffer_m4224969569 (FileStream_t1695958676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBufferIfDirty()
extern "C"  void FileStream_FlushBufferIfDirty_m1110148568 (FileStream_t1695958676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::RefillBuffer()
extern "C"  void FileStream_RefillBuffer_m4272011577 (FileStream_t1695958676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadData(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FileStream_ReadData_m3757794362 (FileStream_t1695958676 * __this, IntPtr_t ___handle0, ByteU5BU5D_t3397334013* ___buf1, int32_t ___offset2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::InitBuffer(System.Int32,System.Boolean)
extern "C"  void FileStream_InitBuffer_m2153931481 (FileStream_t1695958676 * __this, int32_t ___size0, bool ___noBuffering1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileStream::GetSecureFileName(System.String)
extern "C"  String_t* FileStream_GetSecureFileName_m508045384 (FileStream_t1695958676 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileStream::GetSecureFileName(System.String,System.Boolean)
extern "C"  String_t* FileStream_GetSecureFileName_m2684907397 (FileStream_t1695958676 * __this, String_t* ___filename0, bool ___full1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
