#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t3255436806;
// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t2223360553;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.HttpListenerResponse/<Close>c__AnonStorey1
struct  U3CCloseU3Ec__AnonStorey1_t1940037592  : public Il2CppObject
{
public:
	// System.IO.Stream WebSocketSharp.Net.HttpListenerResponse/<Close>c__AnonStorey1::output
	Stream_t3255436806 * ___output_0;
	// WebSocketSharp.Net.HttpListenerResponse WebSocketSharp.Net.HttpListenerResponse/<Close>c__AnonStorey1::$this
	HttpListenerResponse_t2223360553 * ___U24this_1;

public:
	inline static int32_t get_offset_of_output_0() { return static_cast<int32_t>(offsetof(U3CCloseU3Ec__AnonStorey1_t1940037592, ___output_0)); }
	inline Stream_t3255436806 * get_output_0() const { return ___output_0; }
	inline Stream_t3255436806 ** get_address_of_output_0() { return &___output_0; }
	inline void set_output_0(Stream_t3255436806 * value)
	{
		___output_0 = value;
		Il2CppCodeGenWriteBarrier(&___output_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CCloseU3Ec__AnonStorey1_t1940037592, ___U24this_1)); }
	inline HttpListenerResponse_t2223360553 * get_U24this_1() const { return ___U24this_1; }
	inline HttpListenerResponse_t2223360553 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(HttpListenerResponse_t2223360553 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
