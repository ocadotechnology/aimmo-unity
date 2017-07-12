#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.WebSocketFrame
struct WebSocketFrame_t764750278;
// System.Action`1<WebSocketSharp.WebSocketFrame>
struct Action_1_t566549660;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketFrame/<readMaskingKeyAsync>c__AnonStorey5
struct  U3CreadMaskingKeyAsyncU3Ec__AnonStorey5_t3451788521  : public Il2CppObject
{
public:
	// System.Int32 WebSocketSharp.WebSocketFrame/<readMaskingKeyAsync>c__AnonStorey5::len
	int32_t ___len_0;
	// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame/<readMaskingKeyAsync>c__AnonStorey5::frame
	WebSocketFrame_t764750278 * ___frame_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<readMaskingKeyAsync>c__AnonStorey5::completed
	Action_1_t566549660 * ___completed_2;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(U3CreadMaskingKeyAsyncU3Ec__AnonStorey5_t3451788521, ___len_0)); }
	inline int32_t get_len_0() const { return ___len_0; }
	inline int32_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int32_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(U3CreadMaskingKeyAsyncU3Ec__AnonStorey5_t3451788521, ___frame_1)); }
	inline WebSocketFrame_t764750278 * get_frame_1() const { return ___frame_1; }
	inline WebSocketFrame_t764750278 ** get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(WebSocketFrame_t764750278 * value)
	{
		___frame_1 = value;
		Il2CppCodeGenWriteBarrier(&___frame_1, value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CreadMaskingKeyAsyncU3Ec__AnonStorey5_t3451788521, ___completed_2)); }
	inline Action_1_t566549660 * get_completed_2() const { return ___completed_2; }
	inline Action_1_t566549660 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t566549660 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier(&___completed_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
