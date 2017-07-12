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

#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode1250409636.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONString
struct  JSONString_t3432753187  : public JSONNode_t1250409636
{
public:
	// System.String SimpleJSON.JSONString::m_Data
	String_t* ___m_Data_1;

public:
	inline static int32_t get_offset_of_m_Data_1() { return static_cast<int32_t>(offsetof(JSONString_t3432753187, ___m_Data_1)); }
	inline String_t* get_m_Data_1() const { return ___m_Data_1; }
	inline String_t** get_address_of_m_Data_1() { return &___m_Data_1; }
	inline void set_m_Data_1(String_t* value)
	{
		___m_Data_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
