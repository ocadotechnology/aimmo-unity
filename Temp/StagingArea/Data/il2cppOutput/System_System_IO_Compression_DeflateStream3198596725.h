#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t3255436806;
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t1990215745;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_System_IO_Compression_CompressionMode1471062003.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandle3409268066.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream
struct  DeflateStream_t3198596725  : public Stream_t3255436806
{
public:
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_t3255436806 * ___base_stream_1;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_2;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_3;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_4;
	// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite System.IO.Compression.DeflateStream::feeder
	UnmanagedReadOrWrite_t1990215745 * ___feeder_5;
	// System.IntPtr System.IO.Compression.DeflateStream::z_stream
	IntPtr_t ___z_stream_6;
	// System.Byte[] System.IO.Compression.DeflateStream::io_buffer
	ByteU5BU5D_t3397334013* ___io_buffer_7;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStream::data
	GCHandle_t3409268066  ___data_8;

public:
	inline static int32_t get_offset_of_base_stream_1() { return static_cast<int32_t>(offsetof(DeflateStream_t3198596725, ___base_stream_1)); }
	inline Stream_t3255436806 * get_base_stream_1() const { return ___base_stream_1; }
	inline Stream_t3255436806 ** get_address_of_base_stream_1() { return &___base_stream_1; }
	inline void set_base_stream_1(Stream_t3255436806 * value)
	{
		___base_stream_1 = value;
		Il2CppCodeGenWriteBarrier(&___base_stream_1, value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(DeflateStream_t3198596725, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_leaveOpen_3() { return static_cast<int32_t>(offsetof(DeflateStream_t3198596725, ___leaveOpen_3)); }
	inline bool get_leaveOpen_3() const { return ___leaveOpen_3; }
	inline bool* get_address_of_leaveOpen_3() { return &___leaveOpen_3; }
	inline void set_leaveOpen_3(bool value)
	{
		___leaveOpen_3 = value;
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(DeflateStream_t3198596725, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_feeder_5() { return static_cast<int32_t>(offsetof(DeflateStream_t3198596725, ___feeder_5)); }
	inline UnmanagedReadOrWrite_t1990215745 * get_feeder_5() const { return ___feeder_5; }
	inline UnmanagedReadOrWrite_t1990215745 ** get_address_of_feeder_5() { return &___feeder_5; }
	inline void set_feeder_5(UnmanagedReadOrWrite_t1990215745 * value)
	{
		___feeder_5 = value;
		Il2CppCodeGenWriteBarrier(&___feeder_5, value);
	}

	inline static int32_t get_offset_of_z_stream_6() { return static_cast<int32_t>(offsetof(DeflateStream_t3198596725, ___z_stream_6)); }
	inline IntPtr_t get_z_stream_6() const { return ___z_stream_6; }
	inline IntPtr_t* get_address_of_z_stream_6() { return &___z_stream_6; }
	inline void set_z_stream_6(IntPtr_t value)
	{
		___z_stream_6 = value;
	}

	inline static int32_t get_offset_of_io_buffer_7() { return static_cast<int32_t>(offsetof(DeflateStream_t3198596725, ___io_buffer_7)); }
	inline ByteU5BU5D_t3397334013* get_io_buffer_7() const { return ___io_buffer_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_io_buffer_7() { return &___io_buffer_7; }
	inline void set_io_buffer_7(ByteU5BU5D_t3397334013* value)
	{
		___io_buffer_7 = value;
		Il2CppCodeGenWriteBarrier(&___io_buffer_7, value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(DeflateStream_t3198596725, ___data_8)); }
	inline GCHandle_t3409268066  get_data_8() const { return ___data_8; }
	inline GCHandle_t3409268066 * get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(GCHandle_t3409268066  value)
	{
		___data_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
