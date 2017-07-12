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

// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// System.IO.Stream
struct Stream_t3255436806;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "mscorlib_System_Decimal724701077.h"

// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
extern "C"  void BinaryReader__ctor_m4190061006 (BinaryReader_t2491843768 * __this, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void BinaryReader__ctor_m1387916481 (BinaryReader_t2491843768 * __this, Stream_t3255436806 * ___input0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::System.IDisposable.Dispose()
extern "C"  void BinaryReader_System_IDisposable_Dispose_m3287119524 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.IO.BinaryReader::get_BaseStream()
extern "C"  Stream_t3255436806 * BinaryReader_get_BaseStream_m3266136693 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Close()
extern "C"  void BinaryReader_Close_m2907786247 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Dispose(System.Boolean)
extern "C"  void BinaryReader_Dispose_m4249456877 (BinaryReader_t2491843768 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::FillBuffer(System.Int32)
extern "C"  void BinaryReader_FillBuffer_m3097603599 (BinaryReader_t2491843768 * __this, int32_t ___numBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read()
extern "C"  int32_t BinaryReader_Read_m992299333 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t BinaryReader_Read_m999452678 (BinaryReader_t2491843768 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t BinaryReader_Read_m2752548816 (BinaryReader_t2491843768 * __this, CharU5BU5D_t1328083999* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadCharBytes(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C"  int32_t BinaryReader_ReadCharBytes_m443749540 (BinaryReader_t2491843768 * __this, CharU5BU5D_t1328083999* ___buffer0, int32_t ___index1, int32_t ___count2, int32_t* ___bytes_read3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read7BitEncodedInt()
extern "C"  int32_t BinaryReader_Read7BitEncodedInt_m1039249966 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.BinaryReader::ReadBoolean()
extern "C"  bool BinaryReader_ReadBoolean_m2892291883 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.IO.BinaryReader::ReadByte()
extern "C"  uint8_t BinaryReader_ReadByte_m99061455 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* BinaryReader_ReadBytes_m3617766455 (BinaryReader_t2491843768 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.BinaryReader::ReadChar()
extern "C"  Il2CppChar BinaryReader_ReadChar_m3415197543 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.IO.BinaryReader::ReadDecimal()
extern "C"  Decimal_t724701077  BinaryReader_ReadDecimal_m3164824427 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.IO.BinaryReader::ReadDouble()
extern "C"  double BinaryReader_ReadDouble_m488089323 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.IO.BinaryReader::ReadInt16()
extern "C"  int16_t BinaryReader_ReadInt16_m309163147 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadInt32()
extern "C"  int32_t BinaryReader_ReadInt32_m1811936587 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.BinaryReader::ReadInt64()
extern "C"  int64_t BinaryReader_ReadInt64_m1752540011 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.IO.BinaryReader::ReadSByte()
extern "C"  int8_t BinaryReader_ReadSByte_m1712621355 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.BinaryReader::ReadString()
extern "C"  String_t* BinaryReader_ReadString_m2084208171 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.IO.BinaryReader::ReadSingle()
extern "C"  float BinaryReader_ReadSingle_m4288435823 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.IO.BinaryReader::ReadUInt16()
extern "C"  uint16_t BinaryReader_ReadUInt16_m2664161107 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.IO.BinaryReader::ReadUInt32()
extern "C"  uint32_t BinaryReader_ReadUInt32_m1363572147 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.IO.BinaryReader::ReadUInt64()
extern "C"  uint64_t BinaryReader_ReadUInt64_m1893783375 (BinaryReader_t2491843768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::CheckBuffer(System.Int32)
extern "C"  void BinaryReader_CheckBuffer_m1059275266 (BinaryReader_t2491843768 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
