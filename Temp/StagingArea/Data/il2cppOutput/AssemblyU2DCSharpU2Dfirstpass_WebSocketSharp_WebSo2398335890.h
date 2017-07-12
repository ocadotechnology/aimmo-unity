#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`1<System.Boolean>
struct Func_1_t1485000104;
// WebSocketSharp.WebSocket
struct WebSocket_t3268376029;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket/<ConnectAsync>c__AnonStorey8
struct  U3CConnectAsyncU3Ec__AnonStorey8_t2398335890  : public Il2CppObject
{
public:
	// System.Func`1<System.Boolean> WebSocketSharp.WebSocket/<ConnectAsync>c__AnonStorey8::connector
	Func_1_t1485000104 * ___connector_0;
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket/<ConnectAsync>c__AnonStorey8::$this
	WebSocket_t3268376029 * ___U24this_1;

public:
	inline static int32_t get_offset_of_connector_0() { return static_cast<int32_t>(offsetof(U3CConnectAsyncU3Ec__AnonStorey8_t2398335890, ___connector_0)); }
	inline Func_1_t1485000104 * get_connector_0() const { return ___connector_0; }
	inline Func_1_t1485000104 ** get_address_of_connector_0() { return &___connector_0; }
	inline void set_connector_0(Func_1_t1485000104 * value)
	{
		___connector_0 = value;
		Il2CppCodeGenWriteBarrier(&___connector_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CConnectAsyncU3Ec__AnonStorey8_t2398335890, ___U24this_1)); }
	inline WebSocket_t3268376029 * get_U24this_1() const { return ___U24this_1; }
	inline WebSocket_t3268376029 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(WebSocket_t3268376029 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
