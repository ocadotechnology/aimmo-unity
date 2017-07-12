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

// UnitySocketIO.WebGL.EventJson
struct  EventJson_t903754406  : public Il2CppObject
{
public:
	// System.String UnitySocketIO.WebGL.EventJson::socketEvent
	String_t* ___socketEvent_0;
	// System.String UnitySocketIO.WebGL.EventJson::eventData
	String_t* ___eventData_1;

public:
	inline static int32_t get_offset_of_socketEvent_0() { return static_cast<int32_t>(offsetof(EventJson_t903754406, ___socketEvent_0)); }
	inline String_t* get_socketEvent_0() const { return ___socketEvent_0; }
	inline String_t** get_address_of_socketEvent_0() { return &___socketEvent_0; }
	inline void set_socketEvent_0(String_t* value)
	{
		___socketEvent_0 = value;
		Il2CppCodeGenWriteBarrier(&___socketEvent_0, value);
	}

	inline static int32_t get_offset_of_eventData_1() { return static_cast<int32_t>(offsetof(EventJson_t903754406, ___eventData_1)); }
	inline String_t* get_eventData_1() const { return ___eventData_1; }
	inline String_t** get_address_of_eventData_1() { return &___eventData_1; }
	inline void set_eventData_1(String_t* value)
	{
		___eventData_1 = value;
		Il2CppCodeGenWriteBarrier(&___eventData_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
