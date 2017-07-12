#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t3488732344;
// System.Func`3<WebSocketSharp.Net.CookieCollection,WebSocketSharp.Net.CookieCollection,System.Boolean>
struct Func_3_t3137832106;
// System.String
struct String_t;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t1989381442;
// WebSocketSharp.Server.WebSocketSessionManager
struct WebSocketSessionManager_t2802512518;
// WebSocketSharp.WebSocket
struct WebSocket_t3268376029;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.WebSocketBehavior
struct  WebSocketBehavior_t3021808769  : public Il2CppObject
{
public:
	// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.Server.WebSocketBehavior::_context
	WebSocketContext_t3488732344 * ____context_0;
	// System.Func`3<WebSocketSharp.Net.CookieCollection,WebSocketSharp.Net.CookieCollection,System.Boolean> WebSocketSharp.Server.WebSocketBehavior::_cookiesValidator
	Func_3_t3137832106 * ____cookiesValidator_1;
	// System.Boolean WebSocketSharp.Server.WebSocketBehavior::_emitOnPing
	bool ____emitOnPing_2;
	// System.String WebSocketSharp.Server.WebSocketBehavior::_id
	String_t* ____id_3;
	// System.Boolean WebSocketSharp.Server.WebSocketBehavior::_ignoreExtensions
	bool ____ignoreExtensions_4;
	// System.Func`2<System.String,System.Boolean> WebSocketSharp.Server.WebSocketBehavior::_originValidator
	Func_2_t1989381442 * ____originValidator_5;
	// System.String WebSocketSharp.Server.WebSocketBehavior::_protocol
	String_t* ____protocol_6;
	// WebSocketSharp.Server.WebSocketSessionManager WebSocketSharp.Server.WebSocketBehavior::_sessions
	WebSocketSessionManager_t2802512518 * ____sessions_7;
	// System.DateTime WebSocketSharp.Server.WebSocketBehavior::_startTime
	DateTime_t693205669  ____startTime_8;
	// WebSocketSharp.WebSocket WebSocketSharp.Server.WebSocketBehavior::_websocket
	WebSocket_t3268376029 * ____websocket_9;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(WebSocketBehavior_t3021808769, ____context_0)); }
	inline WebSocketContext_t3488732344 * get__context_0() const { return ____context_0; }
	inline WebSocketContext_t3488732344 ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(WebSocketContext_t3488732344 * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier(&____context_0, value);
	}

	inline static int32_t get_offset_of__cookiesValidator_1() { return static_cast<int32_t>(offsetof(WebSocketBehavior_t3021808769, ____cookiesValidator_1)); }
	inline Func_3_t3137832106 * get__cookiesValidator_1() const { return ____cookiesValidator_1; }
	inline Func_3_t3137832106 ** get_address_of__cookiesValidator_1() { return &____cookiesValidator_1; }
	inline void set__cookiesValidator_1(Func_3_t3137832106 * value)
	{
		____cookiesValidator_1 = value;
		Il2CppCodeGenWriteBarrier(&____cookiesValidator_1, value);
	}

	inline static int32_t get_offset_of__emitOnPing_2() { return static_cast<int32_t>(offsetof(WebSocketBehavior_t3021808769, ____emitOnPing_2)); }
	inline bool get__emitOnPing_2() const { return ____emitOnPing_2; }
	inline bool* get_address_of__emitOnPing_2() { return &____emitOnPing_2; }
	inline void set__emitOnPing_2(bool value)
	{
		____emitOnPing_2 = value;
	}

	inline static int32_t get_offset_of__id_3() { return static_cast<int32_t>(offsetof(WebSocketBehavior_t3021808769, ____id_3)); }
	inline String_t* get__id_3() const { return ____id_3; }
	inline String_t** get_address_of__id_3() { return &____id_3; }
	inline void set__id_3(String_t* value)
	{
		____id_3 = value;
		Il2CppCodeGenWriteBarrier(&____id_3, value);
	}

	inline static int32_t get_offset_of__ignoreExtensions_4() { return static_cast<int32_t>(offsetof(WebSocketBehavior_t3021808769, ____ignoreExtensions_4)); }
	inline bool get__ignoreExtensions_4() const { return ____ignoreExtensions_4; }
	inline bool* get_address_of__ignoreExtensions_4() { return &____ignoreExtensions_4; }
	inline void set__ignoreExtensions_4(bool value)
	{
		____ignoreExtensions_4 = value;
	}

	inline static int32_t get_offset_of__originValidator_5() { return static_cast<int32_t>(offsetof(WebSocketBehavior_t3021808769, ____originValidator_5)); }
	inline Func_2_t1989381442 * get__originValidator_5() const { return ____originValidator_5; }
	inline Func_2_t1989381442 ** get_address_of__originValidator_5() { return &____originValidator_5; }
	inline void set__originValidator_5(Func_2_t1989381442 * value)
	{
		____originValidator_5 = value;
		Il2CppCodeGenWriteBarrier(&____originValidator_5, value);
	}

	inline static int32_t get_offset_of__protocol_6() { return static_cast<int32_t>(offsetof(WebSocketBehavior_t3021808769, ____protocol_6)); }
	inline String_t* get__protocol_6() const { return ____protocol_6; }
	inline String_t** get_address_of__protocol_6() { return &____protocol_6; }
	inline void set__protocol_6(String_t* value)
	{
		____protocol_6 = value;
		Il2CppCodeGenWriteBarrier(&____protocol_6, value);
	}

	inline static int32_t get_offset_of__sessions_7() { return static_cast<int32_t>(offsetof(WebSocketBehavior_t3021808769, ____sessions_7)); }
	inline WebSocketSessionManager_t2802512518 * get__sessions_7() const { return ____sessions_7; }
	inline WebSocketSessionManager_t2802512518 ** get_address_of__sessions_7() { return &____sessions_7; }
	inline void set__sessions_7(WebSocketSessionManager_t2802512518 * value)
	{
		____sessions_7 = value;
		Il2CppCodeGenWriteBarrier(&____sessions_7, value);
	}

	inline static int32_t get_offset_of__startTime_8() { return static_cast<int32_t>(offsetof(WebSocketBehavior_t3021808769, ____startTime_8)); }
	inline DateTime_t693205669  get__startTime_8() const { return ____startTime_8; }
	inline DateTime_t693205669 * get_address_of__startTime_8() { return &____startTime_8; }
	inline void set__startTime_8(DateTime_t693205669  value)
	{
		____startTime_8 = value;
	}

	inline static int32_t get_offset_of__websocket_9() { return static_cast<int32_t>(offsetof(WebSocketBehavior_t3021808769, ____websocket_9)); }
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
