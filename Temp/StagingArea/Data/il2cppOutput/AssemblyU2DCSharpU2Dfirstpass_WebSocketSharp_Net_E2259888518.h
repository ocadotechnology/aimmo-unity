#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,WebSocketSharp.Net.EndPointListener>
struct Dictionary_2_t209502122;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.EndPointManager
struct  EndPointManager_t2259888518  : public Il2CppObject
{
public:

public:
};

struct EndPointManager_t2259888518_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,WebSocketSharp.Net.EndPointListener> WebSocketSharp.Net.EndPointManager::_endpoints
	Dictionary_2_t209502122 * ____endpoints_0;

public:
	inline static int32_t get_offset_of__endpoints_0() { return static_cast<int32_t>(offsetof(EndPointManager_t2259888518_StaticFields, ____endpoints_0)); }
	inline Dictionary_2_t209502122 * get__endpoints_0() const { return ____endpoints_0; }
	inline Dictionary_2_t209502122 ** get_address_of__endpoints_0() { return &____endpoints_0; }
	inline void set__endpoints_0(Dictionary_2_t209502122 * value)
	{
		____endpoints_0 = value;
		Il2CppCodeGenWriteBarrier(&____endpoints_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
