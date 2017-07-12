#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.Net.HttpListenerPrefix
struct HttpListenerPrefix_t529778486;
// WebSocketSharp.Net.HttpListener
struct HttpListener_t4179429670;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<WebSocketSharp.Net.HttpListenerPrefix,WebSocketSharp.Net.HttpListener>
struct  KeyValuePair_2_t2112148073 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	HttpListenerPrefix_t529778486 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	HttpListener_t4179429670 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2112148073, ___key_0)); }
	inline HttpListenerPrefix_t529778486 * get_key_0() const { return ___key_0; }
	inline HttpListenerPrefix_t529778486 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(HttpListenerPrefix_t529778486 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2112148073, ___value_1)); }
	inline HttpListener_t4179429670 * get_value_1() const { return ___value_1; }
	inline HttpListener_t4179429670 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(HttpListener_t4179429670 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
