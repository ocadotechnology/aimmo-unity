#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t2223360553;
// System.IO.Stream
struct Stream_t3255436806;
// System.Action`3<System.Byte[],System.Int32,System.Int32>
struct Action_3_t4193041497;

#include "mscorlib_System_IO_Stream3255436806.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.ResponseStream
struct  ResponseStream_t3200689523  : public Stream_t3255436806
{
public:
	// System.IO.MemoryStream WebSocketSharp.Net.ResponseStream::_body
	MemoryStream_t743994179 * ____body_1;
	// System.Boolean WebSocketSharp.Net.ResponseStream::_disposed
	bool ____disposed_3;
	// WebSocketSharp.Net.HttpListenerResponse WebSocketSharp.Net.ResponseStream::_response
	HttpListenerResponse_t2223360553 * ____response_4;
	// System.Boolean WebSocketSharp.Net.ResponseStream::_sendChunked
	bool ____sendChunked_5;
	// System.IO.Stream WebSocketSharp.Net.ResponseStream::_stream
	Stream_t3255436806 * ____stream_6;
	// System.Action`3<System.Byte[],System.Int32,System.Int32> WebSocketSharp.Net.ResponseStream::_write
	Action_3_t4193041497 * ____write_7;
	// System.Action`3<System.Byte[],System.Int32,System.Int32> WebSocketSharp.Net.ResponseStream::_writeBody
	Action_3_t4193041497 * ____writeBody_8;
	// System.Action`3<System.Byte[],System.Int32,System.Int32> WebSocketSharp.Net.ResponseStream::_writeChunked
	Action_3_t4193041497 * ____writeChunked_9;

public:
	inline static int32_t get_offset_of__body_1() { return static_cast<int32_t>(offsetof(ResponseStream_t3200689523, ____body_1)); }
	inline MemoryStream_t743994179 * get__body_1() const { return ____body_1; }
	inline MemoryStream_t743994179 ** get_address_of__body_1() { return &____body_1; }
	inline void set__body_1(MemoryStream_t743994179 * value)
	{
		____body_1 = value;
		Il2CppCodeGenWriteBarrier(&____body_1, value);
	}

	inline static int32_t get_offset_of__disposed_3() { return static_cast<int32_t>(offsetof(ResponseStream_t3200689523, ____disposed_3)); }
	inline bool get__disposed_3() const { return ____disposed_3; }
	inline bool* get_address_of__disposed_3() { return &____disposed_3; }
	inline void set__disposed_3(bool value)
	{
		____disposed_3 = value;
	}

	inline static int32_t get_offset_of__response_4() { return static_cast<int32_t>(offsetof(ResponseStream_t3200689523, ____response_4)); }
	inline HttpListenerResponse_t2223360553 * get__response_4() const { return ____response_4; }
	inline HttpListenerResponse_t2223360553 ** get_address_of__response_4() { return &____response_4; }
	inline void set__response_4(HttpListenerResponse_t2223360553 * value)
	{
		____response_4 = value;
		Il2CppCodeGenWriteBarrier(&____response_4, value);
	}

	inline static int32_t get_offset_of__sendChunked_5() { return static_cast<int32_t>(offsetof(ResponseStream_t3200689523, ____sendChunked_5)); }
	inline bool get__sendChunked_5() const { return ____sendChunked_5; }
	inline bool* get_address_of__sendChunked_5() { return &____sendChunked_5; }
	inline void set__sendChunked_5(bool value)
	{
		____sendChunked_5 = value;
	}

	inline static int32_t get_offset_of__stream_6() { return static_cast<int32_t>(offsetof(ResponseStream_t3200689523, ____stream_6)); }
	inline Stream_t3255436806 * get__stream_6() const { return ____stream_6; }
	inline Stream_t3255436806 ** get_address_of__stream_6() { return &____stream_6; }
	inline void set__stream_6(Stream_t3255436806 * value)
	{
		____stream_6 = value;
		Il2CppCodeGenWriteBarrier(&____stream_6, value);
	}

	inline static int32_t get_offset_of__write_7() { return static_cast<int32_t>(offsetof(ResponseStream_t3200689523, ____write_7)); }
	inline Action_3_t4193041497 * get__write_7() const { return ____write_7; }
	inline Action_3_t4193041497 ** get_address_of__write_7() { return &____write_7; }
	inline void set__write_7(Action_3_t4193041497 * value)
	{
		____write_7 = value;
		Il2CppCodeGenWriteBarrier(&____write_7, value);
	}

	inline static int32_t get_offset_of__writeBody_8() { return static_cast<int32_t>(offsetof(ResponseStream_t3200689523, ____writeBody_8)); }
	inline Action_3_t4193041497 * get__writeBody_8() const { return ____writeBody_8; }
	inline Action_3_t4193041497 ** get_address_of__writeBody_8() { return &____writeBody_8; }
	inline void set__writeBody_8(Action_3_t4193041497 * value)
	{
		____writeBody_8 = value;
		Il2CppCodeGenWriteBarrier(&____writeBody_8, value);
	}

	inline static int32_t get_offset_of__writeChunked_9() { return static_cast<int32_t>(offsetof(ResponseStream_t3200689523, ____writeChunked_9)); }
	inline Action_3_t4193041497 * get__writeChunked_9() const { return ____writeChunked_9; }
	inline Action_3_t4193041497 ** get_address_of__writeChunked_9() { return &____writeChunked_9; }
	inline void set__writeChunked_9(Action_3_t4193041497 * value)
	{
		____writeChunked_9 = value;
		Il2CppCodeGenWriteBarrier(&____writeChunked_9, value);
	}
};

struct ResponseStream_t3200689523_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.Net.ResponseStream::_crlf
	ByteU5BU5D_t3397334013* ____crlf_2;

public:
	inline static int32_t get_offset_of__crlf_2() { return static_cast<int32_t>(offsetof(ResponseStream_t3200689523_StaticFields, ____crlf_2)); }
	inline ByteU5BU5D_t3397334013* get__crlf_2() const { return ____crlf_2; }
	inline ByteU5BU5D_t3397334013** get_address_of__crlf_2() { return &____crlf_2; }
	inline void set__crlf_2(ByteU5BU5D_t3397334013* value)
	{
		____crlf_2 = value;
		Il2CppCodeGenWriteBarrier(&____crlf_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
