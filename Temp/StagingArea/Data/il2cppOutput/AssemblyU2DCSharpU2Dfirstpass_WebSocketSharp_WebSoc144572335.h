#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`4<WebSocketSharp.CloseEventArgs,System.Boolean,System.Boolean,System.Boolean>
struct Action_4_t3723770032;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket/<closeAsync>c__AnonStorey1
struct  U3CcloseAsyncU3Ec__AnonStorey1_t144572335  : public Il2CppObject
{
public:
	// System.Action`4<WebSocketSharp.CloseEventArgs,System.Boolean,System.Boolean,System.Boolean> WebSocketSharp.WebSocket/<closeAsync>c__AnonStorey1::closer
	Action_4_t3723770032 * ___closer_0;

public:
	inline static int32_t get_offset_of_closer_0() { return static_cast<int32_t>(offsetof(U3CcloseAsyncU3Ec__AnonStorey1_t144572335, ___closer_0)); }
	inline Action_4_t3723770032 * get_closer_0() const { return ___closer_0; }
	inline Action_4_t3723770032 ** get_address_of_closer_0() { return &___closer_0; }
	inline void set_closer_0(Action_4_t3723770032 * value)
	{
		___closer_0 = value;
		Il2CppCodeGenWriteBarrier(&___closer_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
