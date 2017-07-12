#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// WebSocketSharp.Net.HttpListener
struct HttpListener_t4179429670;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.HttpListenerPrefix
struct  HttpListenerPrefix_t529778486  : public Il2CppObject
{
public:
	// System.String WebSocketSharp.Net.HttpListenerPrefix::_host
	String_t* ____host_0;
	// WebSocketSharp.Net.HttpListener WebSocketSharp.Net.HttpListenerPrefix::_listener
	HttpListener_t4179429670 * ____listener_1;
	// System.String WebSocketSharp.Net.HttpListenerPrefix::_original
	String_t* ____original_2;
	// System.String WebSocketSharp.Net.HttpListenerPrefix::_path
	String_t* ____path_3;
	// System.String WebSocketSharp.Net.HttpListenerPrefix::_port
	String_t* ____port_4;
	// System.String WebSocketSharp.Net.HttpListenerPrefix::_prefix
	String_t* ____prefix_5;
	// System.Boolean WebSocketSharp.Net.HttpListenerPrefix::_secure
	bool ____secure_6;

public:
	inline static int32_t get_offset_of__host_0() { return static_cast<int32_t>(offsetof(HttpListenerPrefix_t529778486, ____host_0)); }
	inline String_t* get__host_0() const { return ____host_0; }
	inline String_t** get_address_of__host_0() { return &____host_0; }
	inline void set__host_0(String_t* value)
	{
		____host_0 = value;
		Il2CppCodeGenWriteBarrier(&____host_0, value);
	}

	inline static int32_t get_offset_of__listener_1() { return static_cast<int32_t>(offsetof(HttpListenerPrefix_t529778486, ____listener_1)); }
	inline HttpListener_t4179429670 * get__listener_1() const { return ____listener_1; }
	inline HttpListener_t4179429670 ** get_address_of__listener_1() { return &____listener_1; }
	inline void set__listener_1(HttpListener_t4179429670 * value)
	{
		____listener_1 = value;
		Il2CppCodeGenWriteBarrier(&____listener_1, value);
	}

	inline static int32_t get_offset_of__original_2() { return static_cast<int32_t>(offsetof(HttpListenerPrefix_t529778486, ____original_2)); }
	inline String_t* get__original_2() const { return ____original_2; }
	inline String_t** get_address_of__original_2() { return &____original_2; }
	inline void set__original_2(String_t* value)
	{
		____original_2 = value;
		Il2CppCodeGenWriteBarrier(&____original_2, value);
	}

	inline static int32_t get_offset_of__path_3() { return static_cast<int32_t>(offsetof(HttpListenerPrefix_t529778486, ____path_3)); }
	inline String_t* get__path_3() const { return ____path_3; }
	inline String_t** get_address_of__path_3() { return &____path_3; }
	inline void set__path_3(String_t* value)
	{
		____path_3 = value;
		Il2CppCodeGenWriteBarrier(&____path_3, value);
	}

	inline static int32_t get_offset_of__port_4() { return static_cast<int32_t>(offsetof(HttpListenerPrefix_t529778486, ____port_4)); }
	inline String_t* get__port_4() const { return ____port_4; }
	inline String_t** get_address_of__port_4() { return &____port_4; }
	inline void set__port_4(String_t* value)
	{
		____port_4 = value;
		Il2CppCodeGenWriteBarrier(&____port_4, value);
	}

	inline static int32_t get_offset_of__prefix_5() { return static_cast<int32_t>(offsetof(HttpListenerPrefix_t529778486, ____prefix_5)); }
	inline String_t* get__prefix_5() const { return ____prefix_5; }
	inline String_t** get_address_of__prefix_5() { return &____prefix_5; }
	inline void set__prefix_5(String_t* value)
	{
		____prefix_5 = value;
		Il2CppCodeGenWriteBarrier(&____prefix_5, value);
	}

	inline static int32_t get_offset_of__secure_6() { return static_cast<int32_t>(offsetof(HttpListenerPrefix_t529778486, ____secure_6)); }
	inline bool get__secure_6() const { return ____secure_6; }
	inline bool* get_address_of__secure_6() { return &____secure_6; }
	inline void set__secure_6(bool value)
	{
		____secure_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
