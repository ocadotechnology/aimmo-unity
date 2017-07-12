#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t4248997468;
// WebSocketSharp.Logger
struct Logger_t2598199114;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// WebSocketSharp.HttpRequest
struct HttpRequest_t1845443631;
// System.IO.Stream
struct Stream_t3255436806;
// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// System.Uri
struct Uri_t19570940;
// System.Security.Principal.IPrincipal
struct IPrincipal_t783141777;
// WebSocketSharp.WebSocket
struct WebSocket_t3268376029;

#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_W3488732344.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext
struct  TcpListenerWebSocketContext_t1695227117  : public WebSocketContext_t3488732344
{
public:
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_cookies
	CookieCollection_t4248997468 * ____cookies_0;
	// WebSocketSharp.Logger WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_logger
	Logger_t2598199114 * ____logger_1;
	// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_queryString
	NameValueCollection_t3047564564 * ____queryString_2;
	// WebSocketSharp.HttpRequest WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_request
	HttpRequest_t1845443631 * ____request_3;
	// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_secure
	bool ____secure_4;
	// System.IO.Stream WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_stream
	Stream_t3255436806 * ____stream_5;
	// System.Net.Sockets.TcpClient WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_tcpClient
	TcpClient_t408947970 * ____tcpClient_6;
	// System.Uri WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_uri
	Uri_t19570940 * ____uri_7;
	// System.Security.Principal.IPrincipal WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_user
	Il2CppObject * ____user_8;
	// WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_websocket
	WebSocket_t3268376029 * ____websocket_9;

public:
	inline static int32_t get_offset_of__cookies_0() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t1695227117, ____cookies_0)); }
	inline CookieCollection_t4248997468 * get__cookies_0() const { return ____cookies_0; }
	inline CookieCollection_t4248997468 ** get_address_of__cookies_0() { return &____cookies_0; }
	inline void set__cookies_0(CookieCollection_t4248997468 * value)
	{
		____cookies_0 = value;
		Il2CppCodeGenWriteBarrier(&____cookies_0, value);
	}

	inline static int32_t get_offset_of__logger_1() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t1695227117, ____logger_1)); }
	inline Logger_t2598199114 * get__logger_1() const { return ____logger_1; }
	inline Logger_t2598199114 ** get_address_of__logger_1() { return &____logger_1; }
	inline void set__logger_1(Logger_t2598199114 * value)
	{
		____logger_1 = value;
		Il2CppCodeGenWriteBarrier(&____logger_1, value);
	}

	inline static int32_t get_offset_of__queryString_2() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t1695227117, ____queryString_2)); }
	inline NameValueCollection_t3047564564 * get__queryString_2() const { return ____queryString_2; }
	inline NameValueCollection_t3047564564 ** get_address_of__queryString_2() { return &____queryString_2; }
	inline void set__queryString_2(NameValueCollection_t3047564564 * value)
	{
		____queryString_2 = value;
		Il2CppCodeGenWriteBarrier(&____queryString_2, value);
	}

	inline static int32_t get_offset_of__request_3() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t1695227117, ____request_3)); }
	inline HttpRequest_t1845443631 * get__request_3() const { return ____request_3; }
	inline HttpRequest_t1845443631 ** get_address_of__request_3() { return &____request_3; }
	inline void set__request_3(HttpRequest_t1845443631 * value)
	{
		____request_3 = value;
		Il2CppCodeGenWriteBarrier(&____request_3, value);
	}

	inline static int32_t get_offset_of__secure_4() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t1695227117, ____secure_4)); }
	inline bool get__secure_4() const { return ____secure_4; }
	inline bool* get_address_of__secure_4() { return &____secure_4; }
	inline void set__secure_4(bool value)
	{
		____secure_4 = value;
	}

	inline static int32_t get_offset_of__stream_5() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t1695227117, ____stream_5)); }
	inline Stream_t3255436806 * get__stream_5() const { return ____stream_5; }
	inline Stream_t3255436806 ** get_address_of__stream_5() { return &____stream_5; }
	inline void set__stream_5(Stream_t3255436806 * value)
	{
		____stream_5 = value;
		Il2CppCodeGenWriteBarrier(&____stream_5, value);
	}

	inline static int32_t get_offset_of__tcpClient_6() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t1695227117, ____tcpClient_6)); }
	inline TcpClient_t408947970 * get__tcpClient_6() const { return ____tcpClient_6; }
	inline TcpClient_t408947970 ** get_address_of__tcpClient_6() { return &____tcpClient_6; }
	inline void set__tcpClient_6(TcpClient_t408947970 * value)
	{
		____tcpClient_6 = value;
		Il2CppCodeGenWriteBarrier(&____tcpClient_6, value);
	}

	inline static int32_t get_offset_of__uri_7() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t1695227117, ____uri_7)); }
	inline Uri_t19570940 * get__uri_7() const { return ____uri_7; }
	inline Uri_t19570940 ** get_address_of__uri_7() { return &____uri_7; }
	inline void set__uri_7(Uri_t19570940 * value)
	{
		____uri_7 = value;
		Il2CppCodeGenWriteBarrier(&____uri_7, value);
	}

	inline static int32_t get_offset_of__user_8() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t1695227117, ____user_8)); }
	inline Il2CppObject * get__user_8() const { return ____user_8; }
	inline Il2CppObject ** get_address_of__user_8() { return &____user_8; }
	inline void set__user_8(Il2CppObject * value)
	{
		____user_8 = value;
		Il2CppCodeGenWriteBarrier(&____user_8, value);
	}

	inline static int32_t get_offset_of__websocket_9() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t1695227117, ____websocket_9)); }
	inline WebSocket_t3268376029 * get__websocket_9() const { return ____websocket_9; }
	inline WebSocket_t3268376029 ** get_address_of__websocket_9() { return &____websocket_9; }
	inline void set__websocket_9(WebSocket_t3268376029 * value)
	{
		____websocket_9 = value;
		Il2CppCodeGenWriteBarrier(&____websocket_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
