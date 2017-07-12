#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t3052225568;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.HttpBase/<readHeaders>c__AnonStorey0
struct  U3CreadHeadersU3Ec__AnonStorey0_t2579283176  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Byte> WebSocketSharp.HttpBase/<readHeaders>c__AnonStorey0::buff
	List_1_t3052225568 * ___buff_0;
	// System.Int32 WebSocketSharp.HttpBase/<readHeaders>c__AnonStorey0::cnt
	int32_t ___cnt_1;

public:
	inline static int32_t get_offset_of_buff_0() { return static_cast<int32_t>(offsetof(U3CreadHeadersU3Ec__AnonStorey0_t2579283176, ___buff_0)); }
	inline List_1_t3052225568 * get_buff_0() const { return ___buff_0; }
	inline List_1_t3052225568 ** get_address_of_buff_0() { return &___buff_0; }
	inline void set_buff_0(List_1_t3052225568 * value)
	{
		___buff_0 = value;
		Il2CppCodeGenWriteBarrier(&___buff_0, value);
	}

	inline static int32_t get_offset_of_cnt_1() { return static_cast<int32_t>(offsetof(U3CreadHeadersU3Ec__AnonStorey0_t2579283176, ___cnt_1)); }
	inline int32_t get_cnt_1() const { return ___cnt_1; }
	inline int32_t* get_address_of_cnt_1() { return &___cnt_1; }
	inline void set_cnt_1(int32_t value)
	{
		___cnt_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
