#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,WebSocketSharp.Net.HttpHeaderInfo>
struct Dictionary_2_t4011098823;

#include "System_System_Collections_Specialized_NameValueCol3047564564.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H1518115223.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.WebHeaderCollection
struct  WebHeaderCollection_t1932982249  : public NameValueCollection_t3047564564
{
public:
	// System.Boolean WebSocketSharp.Net.WebHeaderCollection::_internallyUsed
	bool ____internallyUsed_13;
	// WebSocketSharp.Net.HttpHeaderType WebSocketSharp.Net.WebHeaderCollection::_state
	int32_t ____state_14;

public:
	inline static int32_t get_offset_of__internallyUsed_13() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t1932982249, ____internallyUsed_13)); }
	inline bool get__internallyUsed_13() const { return ____internallyUsed_13; }
	inline bool* get_address_of__internallyUsed_13() { return &____internallyUsed_13; }
	inline void set__internallyUsed_13(bool value)
	{
		____internallyUsed_13 = value;
	}

	inline static int32_t get_offset_of__state_14() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t1932982249, ____state_14)); }
	inline int32_t get__state_14() const { return ____state_14; }
	inline int32_t* get_address_of__state_14() { return &____state_14; }
	inline void set__state_14(int32_t value)
	{
		____state_14 = value;
	}
};

struct WebHeaderCollection_t1932982249_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,WebSocketSharp.Net.HttpHeaderInfo> WebSocketSharp.Net.WebHeaderCollection::_headers
	Dictionary_2_t4011098823 * ____headers_12;

public:
	inline static int32_t get_offset_of__headers_12() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t1932982249_StaticFields, ____headers_12)); }
	inline Dictionary_2_t4011098823 * get__headers_12() const { return ____headers_12; }
	inline Dictionary_2_t4011098823 ** get_address_of__headers_12() { return &____headers_12; }
	inline void set__headers_12(Dictionary_2_t4011098823 * value)
	{
		____headers_12 = value;
		Il2CppCodeGenWriteBarrier(&____headers_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
