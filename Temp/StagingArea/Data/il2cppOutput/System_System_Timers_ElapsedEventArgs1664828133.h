#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_EventArgs3289624707.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Timers.ElapsedEventArgs
struct  ElapsedEventArgs_t1664828133  : public EventArgs_t3289624707
{
public:
	// System.DateTime System.Timers.ElapsedEventArgs::time
	DateTime_t693205669  ___time_1;

public:
	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(ElapsedEventArgs_t1664828133, ___time_1)); }
	inline DateTime_t693205669  get_time_1() const { return ___time_1; }
	inline DateTime_t693205669 * get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(DateTime_t693205669  value)
	{
		___time_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
