#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct Dictionary_2_t3165188898;

#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode1250409636.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONObject
struct  JSONObject_t3061402583  : public JSONNode_t1250409636
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONObject::m_Dict
	Dictionary_2_t3165188898 * ___m_Dict_1;
	// System.Boolean SimpleJSON.JSONObject::inline
	bool ___inline_2;

public:
	inline static int32_t get_offset_of_m_Dict_1() { return static_cast<int32_t>(offsetof(JSONObject_t3061402583, ___m_Dict_1)); }
	inline Dictionary_2_t3165188898 * get_m_Dict_1() const { return ___m_Dict_1; }
	inline Dictionary_2_t3165188898 ** get_address_of_m_Dict_1() { return &___m_Dict_1; }
	inline void set_m_Dict_1(Dictionary_2_t3165188898 * value)
	{
		___m_Dict_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Dict_1, value);
	}

	inline static int32_t get_offset_of_inline_2() { return static_cast<int32_t>(offsetof(JSONObject_t3061402583, ___inline_2)); }
	inline bool get_inline_2() const { return ___inline_2; }
	inline bool* get_address_of_inline_2() { return &___inline_2; }
	inline void set_inline_2(bool value)
	{
		___inline_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
