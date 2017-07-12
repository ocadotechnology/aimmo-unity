#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySocketIO.Events.SocketIOEvent
struct  SocketIOEvent_t1596924219  : public Il2CppObject
{
public:
	// System.String UnitySocketIO.Events.SocketIOEvent::name
	String_t* ___name_0;
	// System.String UnitySocketIO.Events.SocketIOEvent::data
	String_t* ___data_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SocketIOEvent_t1596924219, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(SocketIOEvent_t1596924219, ___data_1)); }
	inline String_t* get_data_1() const { return ___data_1; }
	inline String_t** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(String_t* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
