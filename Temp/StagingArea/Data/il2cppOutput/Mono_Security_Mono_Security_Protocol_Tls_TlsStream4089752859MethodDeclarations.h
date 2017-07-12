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

// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t4089752859;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor()
extern "C"  void TlsStream__ctor_m4117943603 (TlsStream_t4089752859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor(System.Byte[])
extern "C"  void TlsStream__ctor_m2982031560 (TlsStream_t4089752859 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_EOF()
extern "C"  bool TlsStream_get_EOF_m1728604576 (TlsStream_t4089752859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanWrite()
extern "C"  bool TlsStream_get_CanWrite_m79048455 (TlsStream_t4089752859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanRead()
extern "C"  bool TlsStream_get_CanRead_m1860811404 (TlsStream_t4089752859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanSeek()
extern "C"  bool TlsStream_get_CanSeek_m3608197976 (TlsStream_t4089752859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Position()
extern "C"  int64_t TlsStream_get_Position_m3551173234 (TlsStream_t4089752859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::set_Position(System.Int64)
extern "C"  void TlsStream_set_Position_m378064217 (TlsStream_t4089752859 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length()
extern "C"  int64_t TlsStream_get_Length_m1562309511 (TlsStream_t4089752859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadSmallValue(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsStream_ReadSmallValue_m1760325248 (TlsStream_t4089752859 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.TlsStream::ReadByte()
extern "C"  uint8_t TlsStream_ReadByte_m1935235961 (TlsStream_t4089752859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.TlsStream::ReadInt16()
extern "C"  int16_t TlsStream_ReadInt16_m1855118433 (TlsStream_t4089752859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::ReadInt24()
extern "C"  int32_t TlsStream_ReadInt24_m1268450166 (TlsStream_t4089752859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadBytes(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsStream_ReadBytes_m3301522097 (TlsStream_t4089752859 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte)
extern "C"  void TlsStream_Write_m2271546135 (TlsStream_t4089752859 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int16)
extern "C"  void TlsStream_Write_m2055734301 (TlsStream_t4089752859 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::WriteInt24(System.Int32)
extern "C"  void TlsStream_WriteInt24_m1660453494 (TlsStream_t4089752859 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int32)
extern "C"  void TlsStream_Write_m4025102703 (TlsStream_t4089752859 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[])
extern "C"  void TlsStream_Write_m3425460533 (TlsStream_t4089752859 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Reset()
extern "C"  void TlsStream_Reset_m1504601050 (TlsStream_t4089752859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ToArray()
extern "C"  ByteU5BU5D_t3397334013* TlsStream_ToArray_m3731779317 (TlsStream_t4089752859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Flush()
extern "C"  void TlsStream_Flush_m2603881359 (TlsStream_t4089752859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::SetLength(System.Int64)
extern "C"  void TlsStream_SetLength_m1460039587 (TlsStream_t4089752859 * __this, int64_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t TlsStream_Seek_m3898619363 (TlsStream_t4089752859 * __this, int64_t ___offset0, int32_t ___loc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t TlsStream_Read_m2550027598 (TlsStream_t4089752859 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void TlsStream_Write_m418642281 (TlsStream_t4089752859 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
