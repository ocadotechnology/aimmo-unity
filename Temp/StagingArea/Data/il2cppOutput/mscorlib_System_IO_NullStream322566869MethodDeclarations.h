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

// System.IO.NullStream
struct NullStream_t322566869;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void System.IO.NullStream::.ctor()
extern "C"  void NullStream__ctor_m3887432344 (NullStream_t322566869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.NullStream::get_CanRead()
extern "C"  bool NullStream_get_CanRead_m1222233703 (NullStream_t322566869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.NullStream::get_CanSeek()
extern "C"  bool NullStream_get_CanSeek_m1020978853 (NullStream_t322566869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.NullStream::get_CanWrite()
extern "C"  bool NullStream_get_CanWrite_m2249519498 (NullStream_t322566869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.NullStream::get_Length()
extern "C"  int64_t NullStream_get_Length_m872478614 (NullStream_t322566869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.NullStream::get_Position()
extern "C"  int64_t NullStream_get_Position_m2555688953 (NullStream_t322566869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::set_Position(System.Int64)
extern "C"  void NullStream_set_Position_m369548284 (NullStream_t322566869 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::Flush()
extern "C"  void NullStream_Flush_m3137237170 (NullStream_t322566869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.NullStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t NullStream_Read_m1027972127 (NullStream_t322566869 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.NullStream::ReadByte()
extern "C"  int32_t NullStream_ReadByte_m1374945644 (NullStream_t322566869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.NullStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t NullStream_Seek_m1809916110 (NullStream_t322566869 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::SetLength(System.Int64)
extern "C"  void NullStream_SetLength_m702387196 (NullStream_t322566869 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void NullStream_Write_m3213413592 (NullStream_t322566869 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::WriteByte(System.Byte)
extern "C"  void NullStream_WriteByte_m2351908684 (NullStream_t322566869 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
