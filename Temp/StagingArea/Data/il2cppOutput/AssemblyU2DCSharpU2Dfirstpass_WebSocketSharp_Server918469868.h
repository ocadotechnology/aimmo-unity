#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.Net.HttpListenerRequest
struct HttpListenerRequest_t2316381291;
// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t2223360553;

#include "mscorlib_System_EventArgs3289624707.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.HttpRequestEventArgs
struct  HttpRequestEventArgs_t918469868  : public EventArgs_t3289624707
{
public:
	// WebSocketSharp.Net.HttpListenerRequest WebSocketSharp.Server.HttpRequestEventArgs::_request
	HttpListenerRequest_t2316381291 * ____request_1;
	// WebSocketSharp.Net.HttpListenerResponse WebSocketSharp.Server.HttpRequestEventArgs::_response
	HttpListenerResponse_t2223360553 * ____response_2;

public:
	inline static int32_t get_offset_of__request_1() { return static_cast<int32_t>(offsetof(HttpRequestEventArgs_t918469868, ____request_1)); }
	inline HttpListenerRequest_t2316381291 * get__request_1() const { return ____request_1; }
	inline HttpListenerRequest_t2316381291 ** get_address_of__request_1() { return &____request_1; }
	inline void set__request_1(HttpListenerRequest_t2316381291 * value)
	{
		____request_1 = value;
		Il2CppCodeGenWriteBarrier(&____request_1, value);
	}

	inline static int32_t get_offset_of__response_2() { return static_cast<int32_t>(offsetof(HttpRequestEventArgs_t918469868, ____response_2)); }
	inline HttpListenerResponse_t2223360553 * get__response_2() const { return ____response_2; }
	inline HttpListenerResponse_t2223360553 ** get_address_of__response_2() { return &____response_2; }
	inline void set__response_2(HttpListenerResponse_t2223360553 * value)
	{
		____response_2 = value;
		Il2CppCodeGenWriteBarrier(&____response_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
