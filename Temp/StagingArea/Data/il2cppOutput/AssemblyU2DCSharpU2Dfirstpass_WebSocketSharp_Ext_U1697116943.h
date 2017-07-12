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
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Action`1<System.Int64>
struct Action_1_t710877419;
// System.Action`1<System.Byte[]>
struct Action_1_t3199133395;
// System.Action`1<System.Exception>
struct Action_1_t1729240069;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey4
struct  U3CReadBytesAsyncU3Ec__AnonStorey4_t1697116943  : public Il2CppObject
{
public:
	// System.Int32 WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey4::bufferLength
	int32_t ___bufferLength_0;
	// System.IO.Stream WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey4::stream
	Stream_t3255436806 * ___stream_1;
	// System.Byte[] WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey4::buff
	ByteU5BU5D_t3397334013* ___buff_2;
	// System.IO.MemoryStream WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey4::dest
	MemoryStream_t743994179 * ___dest_3;
	// System.Int32 WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey4::retry
	int32_t ___retry_4;
	// System.Action`1<System.Int64> WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey4::read
	Action_1_t710877419 * ___read_5;
	// System.Action`1<System.Byte[]> WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey4::completed
	Action_1_t3199133395 * ___completed_6;
	// System.Action`1<System.Exception> WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey4::error
	Action_1_t1729240069 * ___error_7;

public:
	inline static int32_t get_offset_of_bufferLength_0() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStorey4_t1697116943, ___bufferLength_0)); }
	inline int32_t get_bufferLength_0() const { return ___bufferLength_0; }
	inline int32_t* get_address_of_bufferLength_0() { return &___bufferLength_0; }
	inline void set_bufferLength_0(int32_t value)
	{
		___bufferLength_0 = value;
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStorey4_t1697116943, ___stream_1)); }
	inline Stream_t3255436806 * get_stream_1() const { return ___stream_1; }
	inline Stream_t3255436806 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_t3255436806 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier(&___stream_1, value);
	}

	inline static int32_t get_offset_of_buff_2() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStorey4_t1697116943, ___buff_2)); }
	inline ByteU5BU5D_t3397334013* get_buff_2() const { return ___buff_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_buff_2() { return &___buff_2; }
	inline void set_buff_2(ByteU5BU5D_t3397334013* value)
	{
		___buff_2 = value;
		Il2CppCodeGenWriteBarrier(&___buff_2, value);
	}

	inline static int32_t get_offset_of_dest_3() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStorey4_t1697116943, ___dest_3)); }
	inline MemoryStream_t743994179 * get_dest_3() const { return ___dest_3; }
	inline MemoryStream_t743994179 ** get_address_of_dest_3() { return &___dest_3; }
	inline void set_dest_3(MemoryStream_t743994179 * value)
	{
		___dest_3 = value;
		Il2CppCodeGenWriteBarrier(&___dest_3, value);
	}

	inline static int32_t get_offset_of_retry_4() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStorey4_t1697116943, ___retry_4)); }
	inline int32_t get_retry_4() const { return ___retry_4; }
	inline int32_t* get_address_of_retry_4() { return &___retry_4; }
	inline void set_retry_4(int32_t value)
	{
		___retry_4 = value;
	}

	inline static int32_t get_offset_of_read_5() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStorey4_t1697116943, ___read_5)); }
	inline Action_1_t710877419 * get_read_5() const { return ___read_5; }
	inline Action_1_t710877419 ** get_address_of_read_5() { return &___read_5; }
	inline void set_read_5(Action_1_t710877419 * value)
	{
		___read_5 = value;
		Il2CppCodeGenWriteBarrier(&___read_5, value);
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStorey4_t1697116943, ___completed_6)); }
	inline Action_1_t3199133395 * get_completed_6() const { return ___completed_6; }
	inline Action_1_t3199133395 ** get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(Action_1_t3199133395 * value)
	{
		___completed_6 = value;
		Il2CppCodeGenWriteBarrier(&___completed_6, value);
	}

	inline static int32_t get_offset_of_error_7() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStorey4_t1697116943, ___error_7)); }
	inline Action_1_t1729240069 * get_error_7() const { return ___error_7; }
	inline Action_1_t1729240069 ** get_address_of_error_7() { return &___error_7; }
	inline void set_error_7(Action_1_t1729240069 * value)
	{
		___error_7 = value;
		Il2CppCodeGenWriteBarrier(&___error_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
