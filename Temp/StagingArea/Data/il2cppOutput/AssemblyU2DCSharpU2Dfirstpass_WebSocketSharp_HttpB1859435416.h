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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.HttpBase/<Read>c__AnonStorey1`1<System.Object>
struct  U3CReadU3Ec__AnonStorey1_1_t1859435416  : public Il2CppObject
{
public:
	// System.Boolean WebSocketSharp.HttpBase/<Read>c__AnonStorey1`1::timeout
	bool ___timeout_0;
	// System.IO.Stream WebSocketSharp.HttpBase/<Read>c__AnonStorey1`1::stream
	Stream_t3255436806 * ___stream_1;

public:
	inline static int32_t get_offset_of_timeout_0() { return static_cast<int32_t>(offsetof(U3CReadU3Ec__AnonStorey1_1_t1859435416, ___timeout_0)); }
	inline bool get_timeout_0() const { return ___timeout_0; }
	inline bool* get_address_of_timeout_0() { return &___timeout_0; }
	inline void set_timeout_0(bool value)
	{
		___timeout_0 = value;
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(U3CReadU3Ec__AnonStorey1_1_t1859435416, ___stream_1)); }
	inline Stream_t3255436806 * get_stream_1() const { return ___stream_1; }
	inline Stream_t3255436806 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_t3255436806 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier(&___stream_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
