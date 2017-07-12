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

// UnitySocketIO.WebGL.AckJson
struct  AckJson_t924016255  : public Il2CppObject
{
public:
	// System.Int32 UnitySocketIO.WebGL.AckJson::packetID
	int32_t ___packetID_0;
	// System.String UnitySocketIO.WebGL.AckJson::data
	String_t* ___data_1;

public:
	inline static int32_t get_offset_of_packetID_0() { return static_cast<int32_t>(offsetof(AckJson_t924016255, ___packetID_0)); }
	inline int32_t get_packetID_0() const { return ___packetID_0; }
	inline int32_t* get_address_of_packetID_0() { return &___packetID_0; }
	inline void set_packetID_0(int32_t value)
	{
		___packetID_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AckJson_t924016255, ___data_1)); }
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
