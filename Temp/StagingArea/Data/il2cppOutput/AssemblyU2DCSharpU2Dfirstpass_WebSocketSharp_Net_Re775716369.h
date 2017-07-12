#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;

#include "mscorlib_System_IO_Stream3255436806.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.RequestStream
struct  RequestStream_t775716369  : public Stream_t3255436806
{
public:
	// System.Int64 WebSocketSharp.Net.RequestStream::_bodyLeft
	int64_t ____bodyLeft_1;
	// System.Byte[] WebSocketSharp.Net.RequestStream::_buffer
	ByteU5BU5D_t3397334013* ____buffer_2;
	// System.Int32 WebSocketSharp.Net.RequestStream::_count
	int32_t ____count_3;
	// System.Boolean WebSocketSharp.Net.RequestStream::_disposed
	bool ____disposed_4;
	// System.Int32 WebSocketSharp.Net.RequestStream::_offset
	int32_t ____offset_5;
	// System.IO.Stream WebSocketSharp.Net.RequestStream::_stream
	Stream_t3255436806 * ____stream_6;

public:
	inline static int32_t get_offset_of__bodyLeft_1() { return static_cast<int32_t>(offsetof(RequestStream_t775716369, ____bodyLeft_1)); }
	inline int64_t get__bodyLeft_1() const { return ____bodyLeft_1; }
	inline int64_t* get_address_of__bodyLeft_1() { return &____bodyLeft_1; }
	inline void set__bodyLeft_1(int64_t value)
	{
		____bodyLeft_1 = value;
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(RequestStream_t775716369, ____buffer_2)); }
	inline ByteU5BU5D_t3397334013* get__buffer_2() const { return ____buffer_2; }
	inline ByteU5BU5D_t3397334013** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(ByteU5BU5D_t3397334013* value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier(&____buffer_2, value);
	}

	inline static int32_t get_offset_of__count_3() { return static_cast<int32_t>(offsetof(RequestStream_t775716369, ____count_3)); }
	inline int32_t get__count_3() const { return ____count_3; }
	inline int32_t* get_address_of__count_3() { return &____count_3; }
	inline void set__count_3(int32_t value)
	{
		____count_3 = value;
	}

	inline static int32_t get_offset_of__disposed_4() { return static_cast<int32_t>(offsetof(RequestStream_t775716369, ____disposed_4)); }
	inline bool get__disposed_4() const { return ____disposed_4; }
	inline bool* get_address_of__disposed_4() { return &____disposed_4; }
	inline void set__disposed_4(bool value)
	{
		____disposed_4 = value;
	}

	inline static int32_t get_offset_of__offset_5() { return static_cast<int32_t>(offsetof(RequestStream_t775716369, ____offset_5)); }
	inline int32_t get__offset_5() const { return ____offset_5; }
	inline int32_t* get_address_of__offset_5() { return &____offset_5; }
	inline void set__offset_5(int32_t value)
	{
		____offset_5 = value;
	}

	inline static int32_t get_offset_of__stream_6() { return static_cast<int32_t>(offsetof(RequestStream_t775716369, ____stream_6)); }
	inline Stream_t3255436806 * get__stream_6() const { return ____stream_6; }
	inline Stream_t3255436806 ** get_address_of__stream_6() { return &____stream_6; }
	inline void set__stream_6(Stream_t3255436806 * value)
	{
		____stream_6 = value;
		Il2CppCodeGenWriteBarrier(&____stream_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
