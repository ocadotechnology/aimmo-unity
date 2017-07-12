#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Exception
struct Exception_t1927440687;
// System.String
struct String_t;

#include "mscorlib_System_EventArgs3289624707.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.ErrorEventArgs
struct  ErrorEventArgs_t502222999  : public EventArgs_t3289624707
{
public:
	// System.Exception WebSocketSharp.ErrorEventArgs::_exception
	Exception_t1927440687 * ____exception_1;
	// System.String WebSocketSharp.ErrorEventArgs::_message
	String_t* ____message_2;

public:
	inline static int32_t get_offset_of__exception_1() { return static_cast<int32_t>(offsetof(ErrorEventArgs_t502222999, ____exception_1)); }
	inline Exception_t1927440687 * get__exception_1() const { return ____exception_1; }
	inline Exception_t1927440687 ** get_address_of__exception_1() { return &____exception_1; }
	inline void set__exception_1(Exception_t1927440687 * value)
	{
		____exception_1 = value;
		Il2CppCodeGenWriteBarrier(&____exception_1, value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(ErrorEventArgs_t502222999, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier(&____message_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
