#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;
// WebSocketSharp.Server.WebSocketSessionManager
struct WebSocketSessionManager_t2802512518;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.WebSocketSessionManager/<BroadcastAsync>c__AnonStorey4
struct  U3CBroadcastAsyncU3Ec__AnonStorey4_t824600657  : public Il2CppObject
{
public:
	// System.Int32 WebSocketSharp.Server.WebSocketSessionManager/<BroadcastAsync>c__AnonStorey4::length
	int32_t ___length_0;
	// System.Action WebSocketSharp.Server.WebSocketSessionManager/<BroadcastAsync>c__AnonStorey4::completed
	Action_t3226471752 * ___completed_1;
	// WebSocketSharp.Server.WebSocketSessionManager WebSocketSharp.Server.WebSocketSessionManager/<BroadcastAsync>c__AnonStorey4::$this
	WebSocketSessionManager_t2802512518 * ___U24this_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(U3CBroadcastAsyncU3Ec__AnonStorey4_t824600657, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_completed_1() { return static_cast<int32_t>(offsetof(U3CBroadcastAsyncU3Ec__AnonStorey4_t824600657, ___completed_1)); }
	inline Action_t3226471752 * get_completed_1() const { return ___completed_1; }
	inline Action_t3226471752 ** get_address_of_completed_1() { return &___completed_1; }
	inline void set_completed_1(Action_t3226471752 * value)
	{
		___completed_1 = value;
		Il2CppCodeGenWriteBarrier(&___completed_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CBroadcastAsyncU3Ec__AnonStorey4_t824600657, ___U24this_2)); }
	inline WebSocketSessionManager_t2802512518 * get_U24this_2() const { return ___U24this_2; }
	inline WebSocketSessionManager_t2802512518 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(WebSocketSessionManager_t2802512518 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
