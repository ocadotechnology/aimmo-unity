#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t1932982249;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.WebHeaderCollection/<ToStringMultiValue>c__AnonStorey0
struct  U3CToStringMultiValueU3Ec__AnonStorey0_t1328261099  : public Il2CppObject
{
public:
	// System.Boolean WebSocketSharp.Net.WebHeaderCollection/<ToStringMultiValue>c__AnonStorey0::response
	bool ___response_0;
	// System.Text.StringBuilder WebSocketSharp.Net.WebHeaderCollection/<ToStringMultiValue>c__AnonStorey0::buff
	StringBuilder_t1221177846 * ___buff_1;
	// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.WebHeaderCollection/<ToStringMultiValue>c__AnonStorey0::$this
	WebHeaderCollection_t1932982249 * ___U24this_2;

public:
	inline static int32_t get_offset_of_response_0() { return static_cast<int32_t>(offsetof(U3CToStringMultiValueU3Ec__AnonStorey0_t1328261099, ___response_0)); }
	inline bool get_response_0() const { return ___response_0; }
	inline bool* get_address_of_response_0() { return &___response_0; }
	inline void set_response_0(bool value)
	{
		___response_0 = value;
	}

	inline static int32_t get_offset_of_buff_1() { return static_cast<int32_t>(offsetof(U3CToStringMultiValueU3Ec__AnonStorey0_t1328261099, ___buff_1)); }
	inline StringBuilder_t1221177846 * get_buff_1() const { return ___buff_1; }
	inline StringBuilder_t1221177846 ** get_address_of_buff_1() { return &___buff_1; }
	inline void set_buff_1(StringBuilder_t1221177846 * value)
	{
		___buff_1 = value;
		Il2CppCodeGenWriteBarrier(&___buff_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CToStringMultiValueU3Ec__AnonStorey0_t1328261099, ___U24this_2)); }
	inline WebHeaderCollection_t1932982249 * get_U24this_2() const { return ___U24this_2; }
	inline WebHeaderCollection_t1932982249 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(WebHeaderCollection_t1932982249 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
