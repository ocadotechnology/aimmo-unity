#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.PayloadData
struct PayloadData_t3839327312;

#include "mscorlib_System_EventArgs3289624707.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.CloseEventArgs
struct  CloseEventArgs_t344507773  : public EventArgs_t3289624707
{
public:
	// System.Boolean WebSocketSharp.CloseEventArgs::_clean
	bool ____clean_1;
	// WebSocketSharp.PayloadData WebSocketSharp.CloseEventArgs::_payloadData
	PayloadData_t3839327312 * ____payloadData_2;

public:
	inline static int32_t get_offset_of__clean_1() { return static_cast<int32_t>(offsetof(CloseEventArgs_t344507773, ____clean_1)); }
	inline bool get__clean_1() const { return ____clean_1; }
	inline bool* get_address_of__clean_1() { return &____clean_1; }
	inline void set__clean_1(bool value)
	{
		____clean_1 = value;
	}

	inline static int32_t get_offset_of__payloadData_2() { return static_cast<int32_t>(offsetof(CloseEventArgs_t344507773, ____payloadData_2)); }
	inline PayloadData_t3839327312 * get__payloadData_2() const { return ____payloadData_2; }
	inline PayloadData_t3839327312 ** get_address_of__payloadData_2() { return &____payloadData_2; }
	inline void set__payloadData_2(PayloadData_t3839327312 * value)
	{
		____payloadData_2 = value;
		Il2CppCodeGenWriteBarrier(&____payloadData_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
