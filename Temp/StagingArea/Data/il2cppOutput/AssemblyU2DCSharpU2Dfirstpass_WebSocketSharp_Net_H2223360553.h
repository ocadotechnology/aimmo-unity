#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.Encoding
struct Encoding_t663144255;
// System.String
struct String_t;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t994708409;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t4248997468;
// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t1932982249;
// WebSocketSharp.Net.ResponseStream
struct ResponseStream_t3200689523;
// System.Version
struct Version_t1755874712;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.HttpListenerResponse
struct  HttpListenerResponse_t2223360553  : public Il2CppObject
{
public:
	// System.Boolean WebSocketSharp.Net.HttpListenerResponse::_closeConnection
	bool ____closeConnection_0;
	// System.Text.Encoding WebSocketSharp.Net.HttpListenerResponse::_contentEncoding
	Encoding_t663144255 * ____contentEncoding_1;
	// System.Int64 WebSocketSharp.Net.HttpListenerResponse::_contentLength
	int64_t ____contentLength_2;
	// System.String WebSocketSharp.Net.HttpListenerResponse::_contentType
	String_t* ____contentType_3;
	// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.HttpListenerResponse::_context
	HttpListenerContext_t994708409 * ____context_4;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.HttpListenerResponse::_cookies
	CookieCollection_t4248997468 * ____cookies_5;
	// System.Boolean WebSocketSharp.Net.HttpListenerResponse::_disposed
	bool ____disposed_6;
	// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.HttpListenerResponse::_headers
	WebHeaderCollection_t1932982249 * ____headers_7;
	// System.Boolean WebSocketSharp.Net.HttpListenerResponse::_headersSent
	bool ____headersSent_8;
	// System.Boolean WebSocketSharp.Net.HttpListenerResponse::_keepAlive
	bool ____keepAlive_9;
	// System.String WebSocketSharp.Net.HttpListenerResponse::_location
	String_t* ____location_10;
	// WebSocketSharp.Net.ResponseStream WebSocketSharp.Net.HttpListenerResponse::_outputStream
	ResponseStream_t3200689523 * ____outputStream_11;
	// System.Boolean WebSocketSharp.Net.HttpListenerResponse::_sendChunked
	bool ____sendChunked_12;
	// System.Int32 WebSocketSharp.Net.HttpListenerResponse::_statusCode
	int32_t ____statusCode_13;
	// System.String WebSocketSharp.Net.HttpListenerResponse::_statusDescription
	String_t* ____statusDescription_14;
	// System.Version WebSocketSharp.Net.HttpListenerResponse::_version
	Version_t1755874712 * ____version_15;

public:
	inline static int32_t get_offset_of__closeConnection_0() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2223360553, ____closeConnection_0)); }
	inline bool get__closeConnection_0() const { return ____closeConnection_0; }
	inline bool* get_address_of__closeConnection_0() { return &____closeConnection_0; }
	inline void set__closeConnection_0(bool value)
	{
		____closeConnection_0 = value;
	}

	inline static int32_t get_offset_of__contentEncoding_1() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2223360553, ____contentEncoding_1)); }
	inline Encoding_t663144255 * get__contentEncoding_1() const { return ____contentEncoding_1; }
	inline Encoding_t663144255 ** get_address_of__contentEncoding_1() { return &____contentEncoding_1; }
	inline void set__contentEncoding_1(Encoding_t663144255 * value)
	{
		____contentEncoding_1 = value;
		Il2CppCodeGenWriteBarrier(&____contentEncoding_1, value);
	}

	inline static int32_t get_offset_of__contentLength_2() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2223360553, ____contentLength_2)); }
	inline int64_t get__contentLength_2() const { return ____contentLength_2; }
	inline int64_t* get_address_of__contentLength_2() { return &____contentLength_2; }
	inline void set__contentLength_2(int64_t value)
	{
		____contentLength_2 = value;
	}

	inline static int32_t get_offset_of__contentType_3() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2223360553, ____contentType_3)); }
	inline String_t* get__contentType_3() const { return ____contentType_3; }
	inline String_t** get_address_of__contentType_3() { return &____contentType_3; }
	inline void set__contentType_3(String_t* value)
	{
		____contentType_3 = value;
		Il2CppCodeGenWriteBarrier(&____contentType_3, value);
	}

	inline static int32_t get_offset_of__context_4() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2223360553, ____context_4)); }
	inline HttpListenerContext_t994708409 * get__context_4() const { return ____context_4; }
	inline HttpListenerContext_t994708409 ** get_address_of__context_4() { return &____context_4; }
	inline void set__context_4(HttpListenerContext_t994708409 * value)
	{
		____context_4 = value;
		Il2CppCodeGenWriteBarrier(&____context_4, value);
	}

	inline static int32_t get_offset_of__cookies_5() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2223360553, ____cookies_5)); }
	inline CookieCollection_t4248997468 * get__cookies_5() const { return ____cookies_5; }
	inline CookieCollection_t4248997468 ** get_address_of__cookies_5() { return &____cookies_5; }
	inline void set__cookies_5(CookieCollection_t4248997468 * value)
	{
		____cookies_5 = value;
		Il2CppCodeGenWriteBarrier(&____cookies_5, value);
	}

	inline static int32_t get_offset_of__disposed_6() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2223360553, ____disposed_6)); }
	inline bool get__disposed_6() const { return ____disposed_6; }
	inline bool* get_address_of__disposed_6() { return &____disposed_6; }
	inline void set__disposed_6(bool value)
	{
		____disposed_6 = value;
	}

	inline static int32_t get_offset_of__headers_7() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2223360553, ____headers_7)); }
	inline WebHeaderCollection_t1932982249 * get__headers_7() const { return ____headers_7; }
	inline WebHeaderCollection_t1932982249 ** get_address_of__headers_7() { return &____headers_7; }
	inline void set__headers_7(WebHeaderCollection_t1932982249 * value)
	{
		____headers_7 = value;
		Il2CppCodeGenWriteBarrier(&____headers_7, value);
	}

	inline static int32_t get_offset_of__headersSent_8() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2223360553, ____headersSent_8)); }
	inline bool get__headersSent_8() const { return ____headersSent_8; }
	inline bool* get_address_of__headersSent_8() { return &____headersSent_8; }
	inline void set__headersSent_8(bool value)
	{
		____headersSent_8 = value;
	}

	inline static int32_t get_offset_of__keepAlive_9() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2223360553, ____keepAlive_9)); }
	inline bool get__keepAlive_9() const { return ____keepAlive_9; }
	inline bool* get_address_of__keepAlive_9() { return &____keepAlive_9; }
	inline void set__keepAlive_9(bool value)
	{
		____keepAlive_9 = value;
	}

	inline static int32_t get_offset_of__location_10() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2223360553, ____location_10)); }
	inline String_t* get__location_10() const { return ____location_10; }
	inline String_t** get_address_of__location_10() { return &____location_10; }
	inline void set__location_10(String_t* value)
	{
		____location_10 = value;
		Il2CppCodeGenWriteBarrier(&____location_10, value);
	}

	inline static int32_t get_offset_of__outputStream_11() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2223360553, ____outputStream_11)); }
	inline ResponseStream_t3200689523 * get__outputStream_11() const { return ____outputStream_11; }
	inline ResponseStream_t3200689523 ** get_address_of__outputStream_11() { return &____outputStream_11; }
	inline void set__outputStream_11(ResponseStream_t3200689523 * value)
	{
		____outputStream_11 = value;
		Il2CppCodeGenWriteBarrier(&____outputStream_11, value);
	}

	inline static int32_t get_offset_of__sendChunked_12() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2223360553, ____sendChunked_12)); }
	inline bool get__sendChunked_12() const { return ____sendChunked_12; }
	inline bool* get_address_of__sendChunked_12() { return &____sendChunked_12; }
	inline void set__sendChunked_12(bool value)
	{
		____sendChunked_12 = value;
	}

	inline static int32_t get_offset_of__statusCode_13() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2223360553, ____statusCode_13)); }
	inline int32_t get__statusCode_13() const { return ____statusCode_13; }
	inline int32_t* get_address_of__statusCode_13() { return &____statusCode_13; }
	inline void set__statusCode_13(int32_t value)
	{
		____statusCode_13 = value;
	}

	inline static int32_t get_offset_of__statusDescription_14() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2223360553, ____statusDescription_14)); }
	inline String_t* get__statusDescription_14() const { return ____statusDescription_14; }
	inline String_t** get_address_of__statusDescription_14() { return &____statusDescription_14; }
	inline void set__statusDescription_14(String_t* value)
	{
		____statusDescription_14 = value;
		Il2CppCodeGenWriteBarrier(&____statusDescription_14, value);
	}

	inline static int32_t get_offset_of__version_15() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2223360553, ____version_15)); }
	inline Version_t1755874712 * get__version_15() const { return ____version_15; }
	inline Version_t1755874712 ** get_address_of__version_15() { return &____version_15; }
	inline void set__version_15(Version_t1755874712 * value)
	{
		____version_15 = value;
		Il2CppCodeGenWriteBarrier(&____version_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
