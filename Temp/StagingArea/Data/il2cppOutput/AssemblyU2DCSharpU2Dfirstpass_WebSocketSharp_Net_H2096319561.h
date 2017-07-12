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
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H1518115223.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.HttpHeaderInfo
struct  HttpHeaderInfo_t2096319561  : public Il2CppObject
{
public:
	// System.String WebSocketSharp.Net.HttpHeaderInfo::_name
	String_t* ____name_0;
	// WebSocketSharp.Net.HttpHeaderType WebSocketSharp.Net.HttpHeaderInfo::_type
	int32_t ____type_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(HttpHeaderInfo_t2096319561, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier(&____name_0, value);
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(HttpHeaderInfo_t2096319561, ____type_1)); }
	inline int32_t get__type_1() const { return ____type_1; }
	inline int32_t* get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(int32_t value)
	{
		____type_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
