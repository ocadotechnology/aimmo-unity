#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Char>
struct Dictionary_2_t1074293304;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.HttpUtility
struct  HttpUtility_t3363705102  : public Il2CppObject
{
public:

public:
};

struct HttpUtility_t3363705102_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Char> WebSocketSharp.Net.HttpUtility::_entities
	Dictionary_2_t1074293304 * ____entities_0;
	// System.Char[] WebSocketSharp.Net.HttpUtility::_hexChars
	CharU5BU5D_t1328083999* ____hexChars_1;
	// System.Object WebSocketSharp.Net.HttpUtility::_sync
	Il2CppObject * ____sync_2;

public:
	inline static int32_t get_offset_of__entities_0() { return static_cast<int32_t>(offsetof(HttpUtility_t3363705102_StaticFields, ____entities_0)); }
	inline Dictionary_2_t1074293304 * get__entities_0() const { return ____entities_0; }
	inline Dictionary_2_t1074293304 ** get_address_of__entities_0() { return &____entities_0; }
	inline void set__entities_0(Dictionary_2_t1074293304 * value)
	{
		____entities_0 = value;
		Il2CppCodeGenWriteBarrier(&____entities_0, value);
	}

	inline static int32_t get_offset_of__hexChars_1() { return static_cast<int32_t>(offsetof(HttpUtility_t3363705102_StaticFields, ____hexChars_1)); }
	inline CharU5BU5D_t1328083999* get__hexChars_1() const { return ____hexChars_1; }
	inline CharU5BU5D_t1328083999** get_address_of__hexChars_1() { return &____hexChars_1; }
	inline void set__hexChars_1(CharU5BU5D_t1328083999* value)
	{
		____hexChars_1 = value;
		Il2CppCodeGenWriteBarrier(&____hexChars_1, value);
	}

	inline static int32_t get_offset_of__sync_2() { return static_cast<int32_t>(offsetof(HttpUtility_t3363705102_StaticFields, ____sync_2)); }
	inline Il2CppObject * get__sync_2() const { return ____sync_2; }
	inline Il2CppObject ** get_address_of__sync_2() { return &____sync_2; }
	inline void set__sync_2(Il2CppObject * value)
	{
		____sync_2 = value;
		Il2CppCodeGenWriteBarrier(&____sync_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
