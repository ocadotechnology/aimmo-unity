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
// WebSocketSharp.WebSocket
struct WebSocket_t3268376029;

#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_W3488732344.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext
struct  HttpListenerWebSocketContext_t1778866096  : public WebSocketContext_t3488732344
{
public:
	// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::_context
	HttpListenerContext_t994708409 * ____context_0;
	// WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::_websocket
	WebSocket_t3268376029 * ____websocket_1;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(HttpListenerWebSocketContext_t1778866096, ____context_0)); }
	inline HttpListenerContext_t994708409 * get__context_0() const { return ____context_0; }
	inline HttpListenerContext_t994708409 ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(HttpListenerContext_t994708409 * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier(&____context_0, value);
	}

	inline static int32_t get_offset_of__websocket_1() { return static_cast<int32_t>(offsetof(HttpListenerWebSocketContext_t1778866096, ____websocket_1)); }
	inline WebSocket_t3268376029 * get__websocket_1() const { return ____websocket_1; }
	inline WebSocket_t3268376029 ** get_address_of__websocket_1() { return &____websocket_1; }
	inline void set__websocket_1(WebSocket_t3268376029 * value)
	{
		____websocket_1 = value;
		Il2CppCodeGenWriteBarrier(&____websocket_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
