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
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketFrame/<dump>c__AnonStorey1
struct  U3CdumpU3Ec__AnonStorey1_t3897361314  : public Il2CppObject
{
public:
	// System.Text.StringBuilder WebSocketSharp.WebSocketFrame/<dump>c__AnonStorey1::output
	StringBuilder_t1221177846 * ___output_0;
	// System.String WebSocketSharp.WebSocketFrame/<dump>c__AnonStorey1::lineFmt
	String_t* ___lineFmt_1;

public:
	inline static int32_t get_offset_of_output_0() { return static_cast<int32_t>(offsetof(U3CdumpU3Ec__AnonStorey1_t3897361314, ___output_0)); }
	inline StringBuilder_t1221177846 * get_output_0() const { return ___output_0; }
	inline StringBuilder_t1221177846 ** get_address_of_output_0() { return &___output_0; }
	inline void set_output_0(StringBuilder_t1221177846 * value)
	{
		___output_0 = value;
		Il2CppCodeGenWriteBarrier(&___output_0, value);
	}

	inline static int32_t get_offset_of_lineFmt_1() { return static_cast<int32_t>(offsetof(U3CdumpU3Ec__AnonStorey1_t3897361314, ___lineFmt_1)); }
	inline String_t* get_lineFmt_1() const { return ___lineFmt_1; }
	inline String_t** get_address_of_lineFmt_1() { return &___lineFmt_1; }
	inline void set_lineFmt_1(String_t* value)
	{
		___lineFmt_1 = value;
		Il2CppCodeGenWriteBarrier(&___lineFmt_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
