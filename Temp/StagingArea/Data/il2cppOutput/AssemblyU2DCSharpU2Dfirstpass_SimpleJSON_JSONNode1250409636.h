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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONNode
struct  JSONNode_t1250409636  : public Il2CppObject
{
public:

public:
};

struct JSONNode_t1250409636_StaticFields
{
public:
	// System.Text.StringBuilder SimpleJSON.JSONNode::m_EscapeBuilder
	StringBuilder_t1221177846 * ___m_EscapeBuilder_0;

public:
	inline static int32_t get_offset_of_m_EscapeBuilder_0() { return static_cast<int32_t>(offsetof(JSONNode_t1250409636_StaticFields, ___m_EscapeBuilder_0)); }
	inline StringBuilder_t1221177846 * get_m_EscapeBuilder_0() const { return ___m_EscapeBuilder_0; }
	inline StringBuilder_t1221177846 ** get_address_of_m_EscapeBuilder_0() { return &___m_EscapeBuilder_0; }
	inline void set_m_EscapeBuilder_0(StringBuilder_t1221177846 * value)
	{
		___m_EscapeBuilder_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_EscapeBuilder_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
