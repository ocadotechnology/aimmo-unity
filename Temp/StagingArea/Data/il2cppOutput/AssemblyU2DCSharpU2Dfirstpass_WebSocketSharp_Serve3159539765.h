#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`1<System.Object>
struct Func_1_t348874681;
// WebSocketSharp.Logger
struct Logger_t2598199114;
// System.String
struct String_t;
// WebSocketSharp.Server.WebSocketSessionManager
struct WebSocketSessionManager_t2802512518;

#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Server492106494.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>
struct  WebSocketServiceHost_1_t3159539765  : public WebSocketServiceHost_t492106494
{
public:
	// System.Func`1<TBehavior> WebSocketSharp.Server.WebSocketServiceHost`1::_initializer
	Func_1_t348874681 * ____initializer_0;
	// WebSocketSharp.Logger WebSocketSharp.Server.WebSocketServiceHost`1::_logger
	Logger_t2598199114 * ____logger_1;
	// System.String WebSocketSharp.Server.WebSocketServiceHost`1::_path
	String_t* ____path_2;
	// WebSocketSharp.Server.WebSocketSessionManager WebSocketSharp.Server.WebSocketServiceHost`1::_sessions
	WebSocketSessionManager_t2802512518 * ____sessions_3;

public:
	inline static int32_t get_offset_of__initializer_0() { return static_cast<int32_t>(offsetof(WebSocketServiceHost_1_t3159539765, ____initializer_0)); }
	inline Func_1_t348874681 * get__initializer_0() const { return ____initializer_0; }
	inline Func_1_t348874681 ** get_address_of__initializer_0() { return &____initializer_0; }
	inline void set__initializer_0(Func_1_t348874681 * value)
	{
		____initializer_0 = value;
		Il2CppCodeGenWriteBarrier(&____initializer_0, value);
	}

	inline static int32_t get_offset_of__logger_1() { return static_cast<int32_t>(offsetof(WebSocketServiceHost_1_t3159539765, ____logger_1)); }
	inline Logger_t2598199114 * get__logger_1() const { return ____logger_1; }
	inline Logger_t2598199114 ** get_address_of__logger_1() { return &____logger_1; }
	inline void set__logger_1(Logger_t2598199114 * value)
	{
		____logger_1 = value;
		Il2CppCodeGenWriteBarrier(&____logger_1, value);
	}

	inline static int32_t get_offset_of__path_2() { return static_cast<int32_t>(offsetof(WebSocketServiceHost_1_t3159539765, ____path_2)); }
	inline String_t* get__path_2() const { return ____path_2; }
	inline String_t** get_address_of__path_2() { return &____path_2; }
	inline void set__path_2(String_t* value)
	{
		____path_2 = value;
		Il2CppCodeGenWriteBarrier(&____path_2, value);
	}

	inline static int32_t get_offset_of__sessions_3() { return static_cast<int32_t>(offsetof(WebSocketServiceHost_1_t3159539765, ____sessions_3)); }
	inline WebSocketSessionManager_t2802512518 * get__sessions_3() const { return ____sessions_3; }
	inline WebSocketSessionManager_t2802512518 ** get_address_of__sessions_3() { return &____sessions_3; }
	inline void set__sessions_3(WebSocketSessionManager_t2802512518 * value)
	{
		____sessions_3 = value;
		Il2CppCodeGenWriteBarrier(&____sessions_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
