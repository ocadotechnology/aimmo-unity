#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t994708409;
// WebSocketSharp.Net.ChunkStream
struct ChunkStream_t2067859643;

#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Re775716369.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.ChunkedRequestStream
struct  ChunkedRequestStream_t3311534059  : public RequestStream_t775716369
{
public:
	// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.ChunkedRequestStream::_context
	HttpListenerContext_t994708409 * ____context_8;
	// WebSocketSharp.Net.ChunkStream WebSocketSharp.Net.ChunkedRequestStream::_decoder
	ChunkStream_t2067859643 * ____decoder_9;
	// System.Boolean WebSocketSharp.Net.ChunkedRequestStream::_disposed
	bool ____disposed_10;
	// System.Boolean WebSocketSharp.Net.ChunkedRequestStream::_noMoreData
	bool ____noMoreData_11;

public:
	inline static int32_t get_offset_of__context_8() { return static_cast<int32_t>(offsetof(ChunkedRequestStream_t3311534059, ____context_8)); }
	inline HttpListenerContext_t994708409 * get__context_8() const { return ____context_8; }
	inline HttpListenerContext_t994708409 ** get_address_of__context_8() { return &____context_8; }
	inline void set__context_8(HttpListenerContext_t994708409 * value)
	{
		____context_8 = value;
		Il2CppCodeGenWriteBarrier(&____context_8, value);
	}

	inline static int32_t get_offset_of__decoder_9() { return static_cast<int32_t>(offsetof(ChunkedRequestStream_t3311534059, ____decoder_9)); }
	inline ChunkStream_t2067859643 * get__decoder_9() const { return ____decoder_9; }
	inline ChunkStream_t2067859643 ** get_address_of__decoder_9() { return &____decoder_9; }
	inline void set__decoder_9(ChunkStream_t2067859643 * value)
	{
		____decoder_9 = value;
		Il2CppCodeGenWriteBarrier(&____decoder_9, value);
	}

	inline static int32_t get_offset_of__disposed_10() { return static_cast<int32_t>(offsetof(ChunkedRequestStream_t3311534059, ____disposed_10)); }
	inline bool get__disposed_10() const { return ____disposed_10; }
	inline bool* get_address_of__disposed_10() { return &____disposed_10; }
	inline void set__disposed_10(bool value)
	{
		____disposed_10 = value;
	}

	inline static int32_t get_offset_of__noMoreData_11() { return static_cast<int32_t>(offsetof(ChunkedRequestStream_t3311534059, ____noMoreData_11)); }
	inline bool get__noMoreData_11() const { return ____noMoreData_11; }
	inline bool* get_address_of__noMoreData_11() { return &____noMoreData_11; }
	inline void set__noMoreData_11(bool value)
	{
		____noMoreData_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
