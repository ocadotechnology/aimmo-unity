#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct List_1_t619530768;

#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode1250409636.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONArray
struct  JSONArray_t3986483147  : public JSONNode_t1250409636
{
public:
	// System.Collections.Generic.List`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::m_List
	List_1_t619530768 * ___m_List_1;
	// System.Boolean SimpleJSON.JSONArray::inline
	bool ___inline_2;

public:
	inline static int32_t get_offset_of_m_List_1() { return static_cast<int32_t>(offsetof(JSONArray_t3986483147, ___m_List_1)); }
	inline List_1_t619530768 * get_m_List_1() const { return ___m_List_1; }
	inline List_1_t619530768 ** get_address_of_m_List_1() { return &___m_List_1; }
	inline void set_m_List_1(List_1_t619530768 * value)
	{
		___m_List_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_List_1, value);
	}

	inline static int32_t get_offset_of_inline_2() { return static_cast<int32_t>(offsetof(JSONArray_t3986483147, ___inline_2)); }
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
